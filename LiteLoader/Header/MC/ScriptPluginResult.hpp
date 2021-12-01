// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SCRIPTPLUGINRESULT
#include "Extra/ScriptPluginResultAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTPLUGINRESULT
class ScriptPluginResult {
#include "Extra/ScriptPluginResultAPI.hpp"

public:
    MCAPI void addError(std::string const&);
    MCAPI void addErrors(std::vector<std::string> const&);
    MCAPI void addWarning(std::string const&);
    MCAPI void writeToContentLog() const;
};