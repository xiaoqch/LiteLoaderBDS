// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_GROWSCROPDEFINITION
#include "Extra/GrowsCropDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_GROWSCROPDEFINITION
class GrowsCropDefinition {
#include "Extra/GrowsCropDefinitionAPI.hpp"

public:
    MCAPI void initialize(class EntityContext&, class GrowsCropComponent&);

    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GrowsCropDefinition>>&);
};