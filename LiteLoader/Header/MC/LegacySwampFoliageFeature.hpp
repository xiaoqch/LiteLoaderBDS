// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART_LEGACYSWAMPFOLIAGEFEATURE
#include "Extra/LegacySwampFoliageFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_LEGACYSWAMPFOLIAGEFEATURE
class LegacySwampFoliageFeature : public Feature {
#include "Extra/LegacySwampFoliageFeatureAPI.hpp"
public:
    virtual ~LegacySwampFoliageFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
};