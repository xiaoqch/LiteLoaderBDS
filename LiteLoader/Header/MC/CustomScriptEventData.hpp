// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ScriptApi.hpp"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_CUSTOMSCRIPTEVENTDATA
#include "Extra/CustomScriptEventDataAPI.hpp"
#undef EXTRA_INCLUDE_PART_CUSTOMSCRIPTEVENTDATA
class CustomScriptEventData {
#include "Extra/CustomScriptEventDataAPI.hpp"
public:
    virtual ~CustomScriptEventData();
    virtual bool _serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle&) const;

public:
    MCAPI bool setData(class Json::Value const&);
};