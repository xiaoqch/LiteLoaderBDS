// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SEASONS
#include "Extra/SeasonsAPI.hpp"
#undef EXTRA_INCLUDE_PART_SEASONS
class Seasons {
#include "Extra/SeasonsAPI.hpp"

public:
    MCAPI void postProcess(class LevelChunk&, class BlockSource&, class ChunkPos const&);
    MCAPI void tick();
};