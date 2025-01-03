#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class ShareItemsGoal : public ::Goal {
public:
    // prevent constructor by default
    ShareItemsGoal& operator=(ShareItemsGoal const&);
    ShareItemsGoal(ShareItemsGoal const&);
    ShareItemsGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShareItemsGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI ShareItemsGoal(
        class Mob&                               mob,
        std::vector<struct MobDescriptor> const& mobFilters,
        float                                    speedModifier,
        int                                      searchRange,
        float                                    goalRadius
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI std::pair<int, class ItemStack>
          selectEntityToShareWith(std::vector<std::pair<int, class ItemStack>> const& shareableItems);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        class Mob&                               mob,
        std::vector<struct MobDescriptor> const& mobFilters,
        float                                    speedModifier,
        int                                      searchRange,
        float                                    goalRadius
    );

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void start$();

    MCAPI void stop$();

    MCAPI void tick$();

    // NOLINTEND
};
