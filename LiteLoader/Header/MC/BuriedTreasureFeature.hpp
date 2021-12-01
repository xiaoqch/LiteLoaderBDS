// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "StructureFeature.hpp"
#define EXTRA_INCLUDE_PART_BURIEDTREASUREFEATURE
#include "Extra/BuriedTreasureFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_BURIEDTREASUREFEATURE
class BuriedTreasureFeature : public StructureFeature {
#include "Extra/BuriedTreasureFeatureAPI.hpp"
public:
    virtual ~BuriedTreasureFeature();
    virtual bool getNearestGeneratedFeature(class Dimension&, class BiomeSource const&, class BlockPos const&, class BlockPos&, class IPreliminarySurfaceProvider const&, bool);
    virtual bool isFeatureChunk(class BiomeSource const&, class Random&, class ChunkPos const&, unsigned int, class IPreliminarySurfaceProvider const&);
    virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension&, class BiomeSource const&, class Random&, class ChunkPos const&, class IPreliminarySurfaceProvider const&);
};