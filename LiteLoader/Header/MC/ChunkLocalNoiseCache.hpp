// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_CHUNKLOCALNOISECACHE
#include "Extra/ChunkLocalNoiseCacheAPI.hpp"
#undef EXTRA_INCLUDE_PART_CHUNKLOCALNOISECACHE
class ChunkLocalNoiseCache {
#include "Extra/ChunkLocalNoiseCacheAPI.hpp"

public:
    MCAPI struct ChunkLocalNoiseCache::CacheEntry const& getCacheEntry(class DividedPos2d<4> const&) const;
    MCAPI void setCacheEntry(class DividedPos2d<4> const&, struct ChunkLocalNoiseCache::CacheEntry const&);
};