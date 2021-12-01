// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_BLOCKBREATHABILITYDESCRIPTION
#include "Extra/BlockBreathabilityDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART_BLOCKBREATHABILITYDESCRIPTION
class BlockBreathabilityDescription {
#include "Extra/BlockBreathabilityDescriptionAPI.hpp"
public:
    virtual ~BlockBreathabilityDescription();
    virtual std::string const& getName() const;
    virtual void initializeComponent(class EntityContext&) const;
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>>&, class BlockComponentFactory const&) const;
    virtual bool isNetworkComponent() const;
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    virtual void initializeFromNetwork(class CompoundTag const&);

public:
    MCAPI static std::string const NameID;
};