// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SCAREDGOAL
#include "Extra/ScaredGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCAREDGOAL
class ScaredGoal {
#include "Extra/ScaredGoalAPI.hpp"
public:
    virtual ~ScaredGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string&) const;
};