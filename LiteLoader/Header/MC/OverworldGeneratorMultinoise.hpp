// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Util.hpp"
#define EXTRA_INCLUDE_PART_OVERWORLDGENERATORMULTINOISE
#include "Extra/OverworldGeneratorMultinoiseAPI.hpp"
#undef EXTRA_INCLUDE_PART_OVERWORLDGENERATORMULTINOISE
class OverworldGeneratorMultinoise {
#include "Extra/OverworldGeneratorMultinoiseAPI.hpp"

public:
    MCAPI static float _applySlides(class DimensionHeightRange const&, float, unsigned char);
    MCAPI static std::unique_ptr<struct OverworldNoises3d> makeNoise(class XoroshiroPositionalRandomFactory const&);

private:
    MCAPI struct std::pair<float, float> _attenuateOffsetAndFactor(class DividedPos2d<4>, float, float) const;
    MCAPI class Util::MultidimensionalArray<float, 5, 5, 41> _generateDensityCellsForChunk(class ChunkPos const&, class WorldGenCache const&, class NoodleCavifier*, class OreVeinifier*) const;
    MCAPI std::unique_ptr<class BiomeSource> _makeBiomeSource(class XoroshiroPositionalRandomFactory const&, class BiomeRegistry const&, class Biome const*);
};