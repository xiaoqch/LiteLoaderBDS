// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_PARTIALLYEXPOSEDBLOBFEATURE
#include "Extra/PartiallyExposedBlobFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_PARTIALLYEXPOSEDBLOBFEATURE
class PartiallyExposedBlobFeature {
#include "Extra/PartiallyExposedBlobFeatureAPI.hpp"
public:
    virtual ~PartiallyExposedBlobFeature();
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;

private:
    MCAPI static bool isWaterOrAir(class IBlockWorldGenAPI const&, class BlockPos const&);
};