// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SHAREITEMSGOAL
#include "Extra/ShareItemsGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_SHAREITEMSGOAL
class ShareItemsGoal {
#include "Extra/ShareItemsGoalAPI.hpp"
public:
    virtual ~ShareItemsGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string&) const;

protected:
    MCAPI struct std::pair<int, class ItemStack> selectEntityToShareWith(std::vector<struct std::pair<int, class ItemStack>> const&);
};