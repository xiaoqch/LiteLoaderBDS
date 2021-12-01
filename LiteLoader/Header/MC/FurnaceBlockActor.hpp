// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_FURNACEBLOCKACTOR
#include "Extra/FurnaceBlockActorAPI.hpp"
#undef EXTRA_INCLUDE_PART_FURNACEBLOCKACTOR
class FurnaceBlockActor {
#include "Extra/FurnaceBlockActorAPI.hpp"

public:
    MCAPI void checkForAlternativeFuelAchievement(class BlockSource&, class ItemStack const&);
    MCAPI void checkForSmeltEverythingAchievement(class BlockSource&);
    MCAPI int getLitDuration() const;
    MCAPI int getLitTime() const;
    MCAPI int getStoredXP() const;
    MCAPI int getTickCount() const;
    MCAPI bool isEmptiedByHopper(class BlockSource&);
    MCAPI void onFurnaceBlockRemoved(class BlockSource&);
    MCAPI void setLitDuration(int);
    MCAPI void setLitTime(int);
    MCAPI void setStoredXP(int);
    MCAPI void setTickCount(int);
    MCAPI void storeXPRewardForRemovingWithHopper(class ItemStackBase const&, int);
    MCAPI int withdrawStoredXPReward();

    MCAPI static int const BURN_INTERVAL;
    MCAPI static float const DEFAULT_SMELTING_TIME;
    MCAPI static int getAvailableFuelSetCount(int, class ItemStackBase const&);
    MCAPI static float getBurnDuration(class ItemStackBase const&, float);
    MCAPI static bool isItemAllowedInFuelSlot(int, class ItemStackBase const&, int);

private:
    MCAPI float _getXPRewardMultiplier(class ItemStackBase const&) const;
    MCAPI void _refreshFurnaceBlockLitState(class BlockSource&);
    MCAPI int _roundXPReward(float) const;
    MCAPI void burn(class Recipes const&);
    MCAPI bool canBurn(class Recipes const&);

    MCAPI static std::string const BURN_DURATION_KEY;
    MCAPI static std::string const BURN_TIME_KEY;
    MCAPI static std::string const COOK_TIME_KEY;
    MCAPI static std::string const CUSTOM_NAME_KEY;
    MCAPI static std::string const ITEMS_LIST_KEY;
    MCAPI static std::string const LAST_FUEL_KEY;
    MCAPI static std::string const SLOT_KEY;
    MCAPI static std::string const STORED_XP_DEPRECATED_KEY;
    MCAPI static std::string const STORED_XP_KEY;
};