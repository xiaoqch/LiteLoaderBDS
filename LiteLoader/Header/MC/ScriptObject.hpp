// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Scripting.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTOBJECT
#include "Extra/ScriptObjectAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTOBJECT
class ScriptObject {
#include "Extra/ScriptObjectAPI.hpp"
public:
    virtual ~ScriptObject();
    virtual struct Scripting::Error _functionError(std::string const&) const;
    virtual struct Scripting::Error _getPropertyError(std::string const&) const;
    virtual struct Scripting::Error _setPropertyError(std::string const&) const;
};