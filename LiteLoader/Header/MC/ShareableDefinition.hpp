// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_SHAREABLEDEFINITION
#include "Extra/ShareableDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_SHAREABLEDEFINITION
class ShareableDefinition {
#include "Extra/ShareableDefinitionAPI.hpp"

public:
    MCAPI void addShareable(struct Shareable const&);
    MCAPI void addShareableByName(std::string const&);

    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ShareableDefinition>>&);
};