// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_RAIDBOSSSYSTEM
#include "Extra/RaidBossSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART_RAIDBOSSSYSTEM
class RaidBossSystem {
#include "Extra/RaidBossSystemAPI.hpp"
public:
    virtual ~RaidBossSystem();
    virtual void unk_vfn_1();
    virtual void tick(class EntityRegistry&);
};