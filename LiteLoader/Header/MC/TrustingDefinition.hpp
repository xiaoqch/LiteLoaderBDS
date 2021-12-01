// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_TRUSTINGDEFINITION
#include "Extra/TrustingDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_TRUSTINGDEFINITION
class TrustingDefinition {
#include "Extra/TrustingDefinitionAPI.hpp"

public:
    MCAPI void addTrustItemByName(std::string const&);
    MCAPI void initialize(class EntityContext&, class TrustingComponent&) const;

    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class TrustingDefinition>>&);
};