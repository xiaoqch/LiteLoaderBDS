// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_TRADEWITHPLAYERGOAL
#include "Extra/TradeWithPlayerGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_TRADEWITHPLAYERGOAL
class TradeWithPlayerGoal {
#include "Extra/TradeWithPlayerGoalAPI.hpp"
public:
    virtual ~TradeWithPlayerGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void stop();
    virtual void appendDebugInfo(std::string&) const;
    virtual void unk_vfn_8();
    virtual void stop();
};