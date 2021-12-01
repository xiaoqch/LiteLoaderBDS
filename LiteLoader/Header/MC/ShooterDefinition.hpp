// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_SHOOTERDEFINITION
#include "Extra/ShooterDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_SHOOTERDEFINITION
class ShooterDefinition {
#include "Extra/ShooterDefinitionAPI.hpp"

public:
    MCAPI void deserializeData(class Json::Value const&, class SemVersion const&);
    MCAPI void initialize(class EntityContext&, class ShooterComponent&) const;
    MCAPI void serializeData(class Json::Value&) const;
    MCAPI void setActorDefByName(std::string const&);

    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ShooterDefinition>>&);
};