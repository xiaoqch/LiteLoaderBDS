// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SWOOPATTACKGOAL
#include "Extra/SwoopAttackGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_SWOOPATTACKGOAL
class SwoopAttackGoal {
#include "Extra/SwoopAttackGoalAPI.hpp"
public:
    virtual ~SwoopAttackGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string&) const;
};