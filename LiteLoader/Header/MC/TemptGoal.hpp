// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_TEMPTGOAL
#include "Extra/TemptGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_TEMPTGOAL
class TemptGoal {
#include "Extra/TemptGoalAPI.hpp"
public:
    virtual ~TemptGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string&) const;
};