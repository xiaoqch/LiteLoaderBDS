// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_BASICTIMER
#include "Extra/BasicTimerAPI.hpp"
#undef EXTRA_INCLUDE_PART_BASICTIMER
class BasicTimer {
#include "Extra/BasicTimerAPI.hpp"

public:
    MCAPI bool isFinished() const;
    MCAPI void resetTime();
};