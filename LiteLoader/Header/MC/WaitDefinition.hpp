// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#include "BehaviorDefinition.hpp"
#define EXTRA_INCLUDE_PART_WAITDEFINITION
#include "Extra/WaitDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_WAITDEFINITION
class WaitDefinition : public BehaviorDefinition {
#include "Extra/WaitDefinitionAPI.hpp"
public:
    virtual ~WaitDefinition();
    virtual void load(class Json::Value, class BehaviorFactory const&);
};