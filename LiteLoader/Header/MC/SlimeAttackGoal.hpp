// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SLIMEATTACKGOAL
#include "Extra/SlimeAttackGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_SLIMEATTACKGOAL
class SlimeAttackGoal {
#include "Extra/SlimeAttackGoalAPI.hpp"
public:
    virtual ~SlimeAttackGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void unk_vfn_5();
    virtual void tick();
    virtual void appendDebugInfo(std::string&) const;
};