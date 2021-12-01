// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_DOORINTERACTGOAL
#include "Extra/DoorInteractGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_DOORINTERACTGOAL
class DoorInteractGoal {
#include "Extra/DoorInteractGoalAPI.hpp"
public:
    virtual ~DoorInteractGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void unk_vfn_5();
    virtual void tick();
    virtual void appendDebugInfo(std::string&) const;

private:
    MCAPI static class DoorBlock const* _findBlockingDoorAtPos(class BlockPos const&, class Mob const&, class Path*, enum Direction::Type&, enum Direction::Type&);
};