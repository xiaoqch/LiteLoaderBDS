// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_RAMATTACKGOAL
#include "Extra/RamAttackGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_RAMATTACKGOAL
class RamAttackGoal {
#include "Extra/RamAttackGoalAPI.hpp"
public:
    virtual ~RamAttackGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string&) const;

private:
    MCAPI bool _hasChargePath();
    MCAPI bool _pathablePos(class BlockSource const&, class BlockPos);
    MCAPI void _resetCooldown();
    MCAPI void _tryKnockbackTarget();

protected:
    MCAPI bool _initiateRamAttack();
};