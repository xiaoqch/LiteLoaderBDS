// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SCULKPATCHFEATURE
#include "Extra/SculkPatchFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCULKPATCHFEATURE
class SculkPatchFeature {
#include "Extra/SculkPatchFeatureAPI.hpp"
public:
    virtual ~SculkPatchFeature();
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;

private:
    MCAPI void _placeGround(class IBlockWorldGenAPI&, std::vector<class BlockPos>&, class BlockPos, int) const;
    MCAPI std::vector<class BlockPos> _placeGroundPatch(class IBlockWorldGenAPI&, class Random&, class BlockPos const&, int, int) const;
};