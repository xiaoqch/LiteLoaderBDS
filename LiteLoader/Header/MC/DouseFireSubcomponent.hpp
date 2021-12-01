// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_DOUSEFIRESUBCOMPONENT
#include "Extra/DouseFireSubcomponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_DOUSEFIRESUBCOMPONENT
class DouseFireSubcomponent {
#include "Extra/DouseFireSubcomponentAPI.hpp"
public:
    virtual ~DouseFireSubcomponent();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void doOnHitEffect(class Actor&, class ProjectileComponent&);
    virtual char const* getName();

public:
    MCAPI void douseFire(class BlockSource&, class BlockPos const&);
};