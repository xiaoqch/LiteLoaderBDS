// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SUMMONACTORGOAL
#include "Extra/SummonActorGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_SUMMONACTORGOAL
class SummonActorGoal {
#include "Extra/SummonActorGoalAPI.hpp"
public:
    virtual ~SummonActorGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string&) const;

private:
    MCAPI void _createSpellEntity(float, float, float, float, float, int, struct ActorDefinitionIdentifier) const;
    MCAPI int _selectBestSpell(class Actor&) const;
};