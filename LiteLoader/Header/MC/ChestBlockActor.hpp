// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_CHESTBLOCKACTOR
#include "Extra/ChestBlockActorAPI.hpp"
#undef EXTRA_INCLUDE_PART_CHESTBLOCKACTOR
class ChestBlockActor {
#include "Extra/ChestBlockActorAPI.hpp"

public:
    MCAPI bool canOpen(class BlockSource&) const;
    MCAPI bool canPairWith(class BlockActor*, class BlockSource&);
    MCAPI void forceCloseChest(class BlockSource&);
    MCAPI int getOpenCount() const;
    MCAPI float getOpenness() const;
    MCAPI class BlockPos const& getPairedChestPosition();
    MCAPI bool isFindable() const;
    MCAPI bool isLargeChest() const;
    MCAPI void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&);
    MCAPI void openBy(class Player&);
    MCAPI void pairWith(class ChestBlockActor*, bool);
    MCAPI void setFindable(bool);
    MCAPI void unpair(class BlockSource&);

private:
    MCAPI void _closeChest(class BlockSource&, class Player*);
    MCAPI bool _saveClientSideState(class CompoundTag&) const;
    MCAPI void _tryToPairWith(class BlockSource&, class BlockPos const&);
    MCAPI void _unpair();

protected:
    MCAPI void _getCenter(float&, float&, float&);
};