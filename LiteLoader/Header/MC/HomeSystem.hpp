// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_HOMESYSTEM
#include "Extra/HomeSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART_HOMESYSTEM
class HomeSystem {
#include "Extra/HomeSystemAPI.hpp"
public:
    virtual ~HomeSystem();
    virtual void unk_vfn_1();
    virtual void tick(class EntityRegistry&);
};