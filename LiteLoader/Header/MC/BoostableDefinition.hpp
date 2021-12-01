// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_BOOSTABLEDEFINITION
#include "Extra/BoostableDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_BOOSTABLEDEFINITION
class BoostableDefinition {
#include "Extra/BoostableDefinitionAPI.hpp"

public:
    MCAPI void initialize(class EntityContext&, class BoostableComponent&);

    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BoostableDefinition>>&);
};