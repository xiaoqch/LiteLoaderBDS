// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_VORONOIZOOMMULTINOISE
#include "Extra/VoronoiZoomMultiNoiseAPI.hpp"
#undef EXTRA_INCLUDE_PART_VORONOIZOOMMULTINOISE
namespace VoronoiZoomMultiNoise {
#include "Extra/VoronoiZoomMultiNoiseAPI.hpp"

MCAPI class Vec3 getGridOffset(class SimplePositionalRandomFactory const&, class BlockPos);
MCAPI unsigned int getZoomedVoronoiCellIndex(class BlockPos, std::vector<class Vec3> const&, unsigned int, unsigned int, unsigned int);

} // namespace VoronoiZoomMultiNoise