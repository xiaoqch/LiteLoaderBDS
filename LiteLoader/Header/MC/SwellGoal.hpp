// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SWELLGOAL
#include "Extra/SwellGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_SWELLGOAL
class SwellGoal {
#include "Extra/SwellGoalAPI.hpp"
public:
    virtual ~SwellGoal();
    virtual bool canUse();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string&) const;
};