// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_PUSHTHROUGHDEFINITION
#include "Extra/PushThroughDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_PUSHTHROUGHDEFINITION
struct PushThroughDefinition {
#include "Extra/PushThroughDefinitionAPI.hpp"

public:
    MCAPI void initialize(class EntityContext&);

    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct PushThroughDefinition>>&);
};