// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_BLOCKEXPLODEABLEDESCRIPTION
#include "Extra/BlockExplodeableDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART_BLOCKEXPLODEABLEDESCRIPTION
class BlockExplodeableDescription {
#include "Extra/BlockExplodeableDescriptionAPI.hpp"
public:
    virtual ~BlockExplodeableDescription();
    virtual std::string const& getName() const;
    virtual void initializeComponent(class EntityContext&) const;
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>>&, class BlockComponentFactory const&) const;

public:
    MCAPI static std::string const NameID;
};