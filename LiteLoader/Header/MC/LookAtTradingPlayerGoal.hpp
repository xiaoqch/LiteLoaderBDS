// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "LookAtActorGoal.hpp"
#define EXTRA_INCLUDE_PART_LOOKATTRADINGPLAYERGOAL
#include "Extra/LookAtTradingPlayerGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_LOOKATTRADINGPLAYERGOAL
class LookAtTradingPlayerGoal : public LookAtActorGoal {
#include "Extra/LookAtTradingPlayerGoalAPI.hpp"
public:
    virtual ~LookAtTradingPlayerGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void unk_vfn_3();
    virtual void unk_vfn_5();
    virtual void appendDebugInfo(std::string&) const;
};