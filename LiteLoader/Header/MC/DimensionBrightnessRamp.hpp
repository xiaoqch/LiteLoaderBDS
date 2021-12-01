// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_DIMENSIONBRIGHTNESSRAMP
#include "Extra/DimensionBrightnessRampAPI.hpp"
#undef EXTRA_INCLUDE_PART_DIMENSIONBRIGHTNESSRAMP
class DimensionBrightnessRamp {
#include "Extra/DimensionBrightnessRampAPI.hpp"
public:
    virtual ~DimensionBrightnessRamp();
    virtual void buildBrightnessRamp();
    virtual float getBaseAmbientValue() const;

public:
    MCAPI float getBrightnessRampValue(int) const;
};