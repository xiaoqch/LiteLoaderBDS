#include "pch.h"

Logger<stdio_commit> LOG1(stdio_commit{"[LL] "});

void checkUpdate();
bool versionCommand(CommandOrigin const &, CommandOutput &outp) {
    outp.success("The server is running Bedrock Dedicated Server " + loaderapi::getServerVersion() + " with LiteLoaderBDS " +
                 LITELOADER_VERSION + "\nGithub: https://github.com/LiteLDev/LiteLoaderBDS");
    return true;
}


enum class PluginsCMD {
    view = 1,
    load = 2,
    unload = 3
};

extern Logger<stdio_commit> LOG;
bool loadPlugin(std::filesystem::path dllPath);
void loadPlugins();

bool pluginsCommand(CommandOrigin const& ori, CommandOutput& outp, 
    optional<MyEnum<PluginsCMD>> op, optional<std::string> pl) {
    if (op.set) {
        switch ((PluginsCMD)op.val()) {
            case PluginsCMD::view: {
                if (!pl.set)
                    goto LISTALL;
                auto name   = pl.val();
                auto plugin = loaderapi::tryGetPluginByName(name);
                if (plugin) {
                    std::ostringstream oss;
                    auto               fn = std::filesystem::path(plugin->filePath).filename().u8string();

                    oss << "Plugin [" << name << ']' << std::endl;
                    oss << "- Name: " << plugin->name << '(' << fn << ')' << std::endl;
                    oss << "- Version: " << plugin->version << std::endl;
                    oss << "- Introduction: " << plugin->introduction << std::endl;
                    if (!plugin->git.empty())
                        oss << "Git: " << plugin->git << std::endl;
                    if (!plugin->license.empty())
                        oss << "License: " << plugin->license << std::endl;
                    if (!plugin->website.empty())
                        oss << "Website: " << plugin->website << std::endl;
                    auto text = oss.str();
                    text.pop_back();
                    outp.success(text);
                } else {
                    outp.error("Plugin [" + name + "] is not found!");
                }
                break;
            }
            case PluginsCMD::load: {
                if (ori.getOriginType() == OriginType::DedicatedServer) {
                    if (pl.set) {
                        std::string file = "./plugins/" + pl.val();
                        if (file.substr(file.size() - 4) != ".dll") {
                            file += ".dll";
                        }
                        if (std::filesystem::exists(file)) {
                            std::filesystem::path fp(file);
                            loadPlugin(fp); 
                        } else {
                            outp.error(pl.val() + " doesn't exist");
                        }
                        
                    } else {
                        loadPlugins();
                    }
                } else {
                    outp.error("Permission denied!");
                }
                break;
            }
            case PluginsCMD::unload: {
                if (ori.getOriginType() == OriginType::DedicatedServer) {
                    if (pl.set) {
                        auto plugin = loaderapi::tryGetPluginByName(pl.val());
                        if (plugin) {
                            auto fn = std::filesystem::path(plugin->filePath).filename().u8string();
                            FreeLibrary(plugin->handler);
                            LOG("Plugin ", fn, " unloaded");
                            getAllPlugins().erase(plugin->name);
                        } else {
                            outp.error("Plugin [" + pl.val() + "] is not found!");
                        }
                    } else {
                        for (auto& [name, plugin] : getAllPlugins()) {
                            auto fn = std::filesystem::path(plugin.filePath).filename().u8string();
                            FreeLibrary(plugin.handler);
                            LOG("Plugin ", fn, " unloaded");
                        }
                        getAllPlugins().clear();
                    }
                } else {
                    outp.error("Permission denied!");
                }
                break;
            }
        }
        return true;
    } else {
        LISTALL:
        std::ostringstream oss;
        auto               plugins = loaderapi::getAllPlugins();
        oss << "Plugin Lists[" << plugins.size() << "]\n";
        if (plugins.empty()) {
            outp.success("No plugins have been loaded!");
            return true;
        }
        for (auto& [name, plugin] : plugins) {
            // Plugin List
            // - LiteLoader(LiteLoader.dll)[v1.0.0-Beta]: plugin introduction
            auto fn = std::filesystem::path(plugin.filePath).filename().u8string();
            oss << "- " << name << "(" << fn << ")[" << plugin.version << "]: "
                << plugin.introduction << std::endl;
        }
        oss << "\n* Send command \"plugins view <plugin name>\" to get more information";
        outp.success(oss.str());
    }
    return true;
}

void registerCommands() {
    Event::addEventListener([](RegCmdEV ev) {  // Register commands
        CMDREG::SetCommandRegistry(ev.CMDRg);

        std::string server_version = loaderapi::getServerVersion();
        if (server_version.find("1.17.1") != std::string::npos) {
            LOG1("Are you sure you want to run LiteLoader" + loaderapi::getLoaderVersion() + " with BDS " + server_version + "?");
            system("pause");
            return;
        }
        MakeCommand("version", "Get the version of this server", 0);
        CmdOverload(version, versionCommand);

        CEnum<PluginsCMD> _c1("view|load|unload", {"view", "load", "unload"});
        MakeCommand("plugins", "Manage plugins", 0);
        CmdOverload(plugins, pluginsCommand, "operation", "plugin name");
    });
}