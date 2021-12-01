// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Item.hpp"
#define EXTRA_INCLUDE_PART_SHEARSITEM
#include "Extra/ShearsItemAPI.hpp"
#undef EXTRA_INCLUDE_PART_SHEARSITEM
class ShearsItem : public Item {
#include "Extra/ShearsItemAPI.hpp"
public:
    virtual ~ShearsItem();
    virtual void tearDown();
    virtual int getMaxUseDuration(class ItemStack const*) const;
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void executeEvent(class ItemStackBase&, std::string const&, class RenderParams&) const;
    virtual void unk_vfn_7();
    virtual bool isArmor() const;
    virtual bool isBlockPlanterItem() const;
    virtual void unk_vfn_10();
    virtual void unk_vfn_12();
    virtual bool isDyeable() const;
    virtual bool isDye() const;
    virtual int /*enum ItemColor*/ getItemColor() const;
    virtual bool isFertilizer() const;
    virtual void unk_vfn_18();
    virtual bool isThrowable() const;
    virtual bool isUseable() const;
    virtual class ItemComponent* getComponent(class HashedString const&) const;
    virtual class FuelItemComponent* getFuel() const;
    virtual void unk_vfn_36();
    virtual bool canDestroySpecial(class Block const&) const;
    virtual int getLevelDataForAuxValue(int) const;
    virtual short getMaxDamage() const;
    virtual int getAttackDamage() const;
    virtual bool isGlint(class ItemStackBase const&) const;
    virtual void unk_vfn_45();
    virtual void unk_vfn_46();
    virtual void unk_vfn_47();
    virtual bool isWearableThroughLootTable(class CompoundTag const*) const;
    virtual bool canDestroyInCreative() const;
    virtual bool isDestructive(int) const;
    virtual bool isLiquidClipItem(int) const;
    virtual bool shouldInteractionWithBlockBypassLiquid(class Block const&) const;
    virtual bool requiresInteract() const;
    virtual bool isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&) const;
    virtual int getEnchantSlot() const;
    virtual int getEnchantValue() const;
    virtual int getArmorValue() const;
    virtual void unk_vfn_59();
    virtual bool isValidAuxValue(int) const;
    virtual void unk_vfn_62();
    virtual void unk_vfn_63();
    virtual void unk_vfn_64();
    virtual void unk_vfn_65();
    virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const;
    virtual bool hasCustomColor(class CompoundTag const*) const;
    virtual void unk_vfn_68();
    virtual void clearColor(class CompoundTag*) const;
    virtual void unk_vfn_70();
    virtual void unk_vfn_71();
    virtual void unk_vfn_72();
    virtual void unk_vfn_73();
    virtual void unk_vfn_75();
    virtual void unk_vfn_76();
    virtual bool canUseOnSimTick() const;
    virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    virtual float getDestroySpeed(class ItemStackBase const&, class Block const&) const;
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;
    virtual void hitActor(class ItemStack&, class Actor&, class Mob&) const;
    virtual void hitBlock(class ItemStack&, class Block const&, class BlockPos const&, class Mob&) const;
    virtual bool mineBlock(class ItemInstance&, class Block const&, int, int, int, class Actor*) const;
    virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*) const;
    virtual void unk_vfn_89();
    virtual unsigned char getMaxStackSize(class ItemDescriptor const&) const;
    virtual bool inventoryTick(class ItemStack&, class Level&, class Actor&, int, bool) const;
    virtual void refreshedInContainer(class ItemStackBase const&, class Level&) const;
    virtual void fixupCommon(class ItemStackBase&, class Level&) const;
    virtual void unk_vfn_104();
    virtual void unk_vfn_105();
    virtual bool validFishInteraction(int) const;
    virtual std::string getInteractText(class Player const&) const;
    virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool) const;
    virtual int getIconYOffset() const;
    virtual bool canBeCharged() const;
    virtual void playSoundIncrementally(class ItemStack const&, class Mob&) const;
    virtual void unk_vfn_120();
    virtual std::string getAuxValuesDescription() const;
    virtual bool _calculatePlacePos(class ItemStackBase&, class Actor&, unsigned char&, class BlockPos&) const;
    virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos, unsigned char, float, float, float) const;
};