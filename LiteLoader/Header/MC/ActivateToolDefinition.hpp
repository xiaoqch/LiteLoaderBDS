// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#include "BehaviorDefinition.hpp"
#define EXTRA_INCLUDE_PART_ACTIVATETOOLDEFINITION
#include "Extra/ActivateToolDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_ACTIVATETOOLDEFINITION
class ActivateToolDefinition : public BehaviorDefinition {
#include "Extra/ActivateToolDefinitionAPI.hpp"
public:
    virtual ~ActivateToolDefinition();
    virtual void load(class Json::Value, class BehaviorFactory const&);
};