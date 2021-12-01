// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_PERLINNOISE
#include "Extra/PerlinNoiseAPI.hpp"
#undef EXTRA_INCLUDE_PART_PERLINNOISE
class PerlinNoise {
#include "Extra/PerlinNoiseAPI.hpp"

public:
    MCAPI void getRegion(float*, class Vec2 const&, int, int, class Vec2 const&, float) const;
    MCAPI void getRegion(float*, class Vec3 const&, int, int, int, class Vec3 const&) const;
    MCAPI float getValue(class Vec3 const&) const;
    MCAPI float getValueNormalized(class Vec3 const&) const;

private:
    MCAPI void _init(class IRandom&, struct YBlendingBugSettings);
};