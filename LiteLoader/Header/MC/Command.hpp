// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_COMMAND
#include "Extra/CommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_COMMAND
class Command {
#include "Extra/CommandAPI.hpp"
public:
    virtual ~Command();
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const = 0;

public:
    MCAPI std::string getCommandName() const;
    MCAPI bool hasFlag(struct CommandFlag) const;
    MCAPI void run(class CommandOrigin const&, class CommandOutput&) const;

    MCAPI static std::string const WILDCARD_TOKEN;
    MCAPI static bool validRange(int, int, int, class CommandOutput&);
    MCAPI static bool validRange(float, float, float, class CommandOutput&);

protected:
    MCAPI class CommandRegistry const& getRegistry() const;
    MCAPI void sendTelemetry(class CommandOrigin const&, class CommandOutput&) const;
    MCAPI bool shouldSendTelemetry(class CommandOrigin const&) const;

    MCAPI static class Player* getPlayerFromOrigin(class CommandOrigin const&);
    MCAPI static bool isTemplateLockedAction(class CommandOrigin const&);
    MCAPI static bool isWildcard(class CommandSelectorBase const&);
    MCAPI static bool validData(int, unsigned short&, class CommandOutput&);
};