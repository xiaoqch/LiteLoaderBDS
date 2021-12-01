// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_EXPLOSION
#include "Extra/ExplosionAPI.hpp"
#undef EXTRA_INCLUDE_PART_EXPLOSION
class Explosion {
#include "Extra/ExplosionAPI.hpp"

public:
    MCAPI void explode();
    MCAPI void overrideInWater(bool);
    MCAPI void setAllowUnderwater(bool);
    MCAPI void setBreaking(bool);
    MCAPI void setFire(bool);
    MCAPI void setMaxResistance(float);
};