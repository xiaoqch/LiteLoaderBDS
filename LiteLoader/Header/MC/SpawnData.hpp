// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SPAWNDATA
#include "Extra/SpawnDataAPI.hpp"
#undef EXTRA_INCLUDE_PART_SPAWNDATA
class SpawnData {
#include "Extra/SpawnDataAPI.hpp"
public:
    virtual ~SpawnData();

public:
    MCAPI std::unique_ptr<class CompoundTag> save();
};