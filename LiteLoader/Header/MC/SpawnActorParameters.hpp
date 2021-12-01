// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SPAWNACTORPARAMETERS
#include "Extra/SpawnActorParametersAPI.hpp"
#undef EXTRA_INCLUDE_PART_SPAWNACTORPARAMETERS
struct SpawnActorParameters {
#include "Extra/SpawnActorParametersAPI.hpp"

public:
    MCAPI void setItem(class ItemDescriptor const&);
    MCAPI void setSpawnEntity(std::string const&);
    MCAPI void setSpawnEvent(std::string const&);
    MCAPI void setSpawnSound(std::string const&);
    MCAPI void setSpawnTimeMax(int const&);
    MCAPI void setSpawnTimeMin(int const&);
    MCAPI bool spawnsItemStack() const;
};