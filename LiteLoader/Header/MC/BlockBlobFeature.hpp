// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART_BLOCKBLOBFEATURE
#include "Extra/BlockBlobFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_BLOCKBLOBFEATURE
class BlockBlobFeature : public Feature {
#include "Extra/BlockBlobFeatureAPI.hpp"
public:
    virtual ~BlockBlobFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
};