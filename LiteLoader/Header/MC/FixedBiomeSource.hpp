// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_FIXEDBIOMESOURCE
#include "Extra/FixedBiomeSourceAPI.hpp"
#undef EXTRA_INCLUDE_PART_FIXEDBIOMESOURCE
class FixedBiomeSource {
#include "Extra/FixedBiomeSourceAPI.hpp"
public:
    virtual ~FixedBiomeSource();
    virtual void fillBiomes(class LevelChunk&, class ChunkLocalNoiseCache const&) const;
    virtual class BiomeArea getBiomeArea(class BoundingBox const&, unsigned int) const;
    virtual bool containsOnly(int, int, int, int, class gsl::span<int const, -1>) const;
    virtual class Biome const* getBiome(int, int, int) const;
};