#include "pch.h"

std::unordered_map<std::string, Plugin> plugins;

std::string loadingPluginName;

std::vector<std::function<void(Plugin)>> unloadCallbacks;

bool registerPlugin(
    std::string name, 
    std::string introduction, 
    std::string version, 
    std::string git,
    std::string license,
    std::string website
) {
    if (plugins.count(name)) {
        throw std::exception("PluginRegistry: Duplicate plugin name!!!");
        return false;
    }
    Plugin plugin{name, introduction, version, git, license, website};
    plugins.emplace(name, plugin);
    return true;
}

void completePluginInfo(std::string pluginName, std::wstring filePath ,HMODULE handler) {
    auto& plugin = plugins.at(pluginName);
    plugin.filePath = filePath;
    plugin.handler = handler;
}

Plugin* getPluginByName(std::string name) {
    for (auto& it : plugins) {
        if (it.second.name == name) {
            return &it.second;
        }
    }
    return nullptr;
}

bool hasPlugin(std::string name) {
    return plugins.count(name);
}

Plugin* loaderapi::registerPlugin(std::string name, std::string introduction, std::string version,
                               std::string git, std::string license, std::string website) {
    loadingPluginName = name;
    bool res = ::registerPlugin(name, introduction, version, git, license, website);
    if (res) {
        return &plugins[name];
    } else {
        return nullptr;
    }
}

Plugin* loaderapi::tryGetPluginByName(std::string name) {
    return getPluginByName(name);
}

bool loaderapi::hasPlugin(std::string name) {
    return ::hasPlugin(name);
}

std::unordered_map<std::string, Plugin>& getAllPlugins() {
    return plugins;
}
std::unordered_map<std::string, Plugin> loaderapi::getAllPlugins() {
    return plugins;
}