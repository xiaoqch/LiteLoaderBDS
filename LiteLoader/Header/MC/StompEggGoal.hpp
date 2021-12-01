// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "StompBlockGoal.hpp"
#define EXTRA_INCLUDE_PART_STOMPEGGGOAL
#include "Extra/StompEggGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_STOMPEGGGOAL
class StompEggGoal : public StompBlockGoal {
#include "Extra/StompEggGoalAPI.hpp"
public:
    virtual ~StompEggGoal();
    virtual void unk_vfn_3();
    virtual void stop();
    virtual void appendDebugInfo(std::string&) const;
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual void unk_vfn_16();
    virtual void _createBreakProgressParticles(class Level&, class BlockSource&, class BlockPos);
    virtual void _createDestroyParticles(class Level&, class BlockSource&, class BlockPos);
    virtual void _playBreakProgressSound(class Level&, class BlockSource&, class BlockPos);
    virtual void _playDestroySound(class Level&, class BlockSource&, class BlockPos);
};