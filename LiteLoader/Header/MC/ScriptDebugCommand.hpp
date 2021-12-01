// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SCRIPTDEBUGCOMMAND
#include "Extra/ScriptDebugCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTDEBUGCOMMAND
class ScriptDebugCommand {
#include "Extra/ScriptDebugCommandAPI.hpp"
public:
    virtual ~ScriptDebugCommand();
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

public:
    MCAPI static void setup(class CommandRegistry&, class IScriptDebugger*, class std::optional<struct ScriptSettings> const&);

private:
    MCAPI void _handleDebugger(class CommandOutput&) const;

    MCAPI static class std::optional<unsigned short> sForcedPort;
};