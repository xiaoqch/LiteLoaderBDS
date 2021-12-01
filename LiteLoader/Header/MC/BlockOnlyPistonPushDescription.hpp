// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_BLOCKONLYPISTONPUSHDESCRIPTION
#include "Extra/BlockOnlyPistonPushDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART_BLOCKONLYPISTONPUSHDESCRIPTION
class BlockOnlyPistonPushDescription {
#include "Extra/BlockOnlyPistonPushDescriptionAPI.hpp"
public:
    virtual ~BlockOnlyPistonPushDescription();
    virtual std::string const& getName() const;
    virtual void initializeComponent(class EntityContext&) const;
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>>&, class BlockComponentFactory const&) const;
    virtual bool isNetworkComponent() const;
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    virtual void initializeFromNetwork(class CompoundTag const&);

public:
    MCAPI static std::string const NameID;
};