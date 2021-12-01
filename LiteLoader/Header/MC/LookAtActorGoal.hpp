// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_LOOKATACTORGOAL
#include "Extra/LookAtActorGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_LOOKATACTORGOAL
class LookAtActorGoal {
#include "Extra/LookAtActorGoalAPI.hpp"
public:
    virtual ~LookAtActorGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string&) const;

private:
    MCAPI bool _withinFieldOfView(class Actor&);
};