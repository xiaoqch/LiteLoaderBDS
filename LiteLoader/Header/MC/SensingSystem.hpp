// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SENSINGSYSTEM
#include "Extra/SensingSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART_SENSINGSYSTEM
class SensingSystem {
#include "Extra/SensingSystemAPI.hpp"
public:
    virtual ~SensingSystem();
    virtual void unk_vfn_1();
    virtual void tick(class EntityRegistry&);
};