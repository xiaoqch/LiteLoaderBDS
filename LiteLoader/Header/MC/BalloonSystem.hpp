// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_BALLOONSYSTEM
#include "Extra/BalloonSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART_BALLOONSYSTEM
class BalloonSystem {
#include "Extra/BalloonSystemAPI.hpp"
public:
    virtual ~BalloonSystem();
    virtual void unk_vfn_1();
    virtual void tick(class EntityRegistry&);
};