// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_FLOWERHELPER
#include "Extra/FlowerHelperAPI.hpp"
#undef EXTRA_INCLUDE_PART_FLOWERHELPER
namespace FlowerHelper {
#include "Extra/FlowerHelperAPI.hpp"

MCAPI class Block const& getRandomFlowerBlock(class Biome const&, class BlockPos const&, class Random&, class BiomeRegistry&);
MCAPI class Block const& getRandomFlowerBlock(enum FlowerPlacementType, class BlockPos const&, class Random&, class WeakRefT<struct SharePtrRefTraits<class PerlinSimplexNoise>>);

} // namespace FlowerHelper