// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_LOOKCONTROLCOMPONENT
#include "Extra/LookControlComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_LOOKCONTROLCOMPONENT
class LookControlComponent {
#include "Extra/LookControlComponentAPI.hpp"

public:
    MCAPI bool getHasWantedRotation() const;
    MCAPI class Vec3 getWantedPosition() const;
    MCAPI class LookControlComponent& operator=(class LookControlComponent&&);
    MCAPI bool getHasWantedPosition() const;
    MCAPI class Vec3 getWantedRotation() const;
    MCAPI float getXMax() const;
    MCAPI float getYMax() const;
    MCAPI void initialize(class Mob&);
    MCAPI void setHasWantedPosition(bool);
    MCAPI void setHasWantedRotation(bool);
    MCAPI void setInternalType(std::unique_ptr<class LookControl>);
    MCAPI void setLookAtPosition(class Vec3 const&, float, float);
    MCAPI void setLookAtPosition(class Actor const*, float, float);
    MCAPI void setLookAtRotation(class Vec3 const&, float, float);
    MCAPI void setYMax(float);
    MCAPI void update(class Mob&);
};