// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART_ENDISLANDFEATURE
#include "Extra/EndIslandFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_ENDISLANDFEATURE
class EndIslandFeature : public Feature {
#include "Extra/EndIslandFeatureAPI.hpp"
public:
    virtual ~EndIslandFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
};