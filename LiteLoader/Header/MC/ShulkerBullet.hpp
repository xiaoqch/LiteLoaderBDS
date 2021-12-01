// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "PredictableProjectile.hpp"
#define EXTRA_INCLUDE_PART_SHULKERBULLET
#include "Extra/ShulkerBulletAPI.hpp"
#undef EXTRA_INCLUDE_PART_SHULKERBULLET
class ShulkerBullet : public PredictableProjectile {
#include "Extra/ShulkerBulletAPI.hpp"
public:
    virtual void reloadHardcoded(int /*enum Actor::InitializationMethod*/, class VariantParameterList const&);
    virtual ~ShulkerBullet();
    virtual bool isRuntimePredictedMovementEnabled() const;
    virtual void unk_vfn_22();
    virtual float getInterpolatedHeadRot(float) const;
    virtual float getInterpolatedBodyYaw(float) const;
    virtual class Vec3 getInterpolatedRidingOffset(float) const;
    virtual void unk_vfn_41();
    virtual void normalTick();
    virtual float getRidingHeight();
    virtual void unk_vfn_61();
    virtual void unk_vfn_68();
    virtual float getCameraOffset() const;
    virtual void unk_vfn_82();
    virtual void unk_vfn_87();
    virtual void playerTouch(class Player&);
    virtual bool isPickable();
    virtual void unk_vfn_94();
    virtual bool isSleeping() const;
    virtual void setSleeping(bool);
    virtual void unk_vfn_97();
    virtual bool isBlocking() const;
    virtual bool isDamageBlocked(class ActorDamageSource const&) const;
    virtual bool isOnFire() const;
    virtual void unk_vfn_104();
    virtual bool isSurfaceMob() const;
    virtual void unk_vfn_106();
    virtual void unk_vfn_107();
    virtual void unk_vfn_108();
    virtual class Actor* findAttackTarget();
    virtual bool isValidTarget(class Actor*) const;
    virtual void adjustDamageAmount(int&) const;
    virtual void onTame();
    virtual void onFailedTame();
    virtual bool isJumping() const;
    virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    virtual void animateHurt();
    virtual void onBounceStarted(class BlockPos const&, class Block const&);
    virtual void unk_vfn_143();
    virtual void awardKillScore(class Actor&, int);
    virtual int /*enum ArmorMaterialType*/ getArmorMaterialTypeInSlot(int /*enum ArmorSlot*/) const;
    virtual int /*enum ArmorTextureType*/ getArmorMaterialTextureTypeInSlot(int /*enum ArmorSlot*/) const;
    virtual float getArmorColorInSlot(int /*enum ArmorSlot*/, int) const;
    virtual void setEquippedSlot(int /*enum EquipmentSlot*/, class ItemStack const&);
    virtual class HashedString const& queryEntityRenderer() const;
    virtual struct ActorUniqueID getSourceUniqueID() const;
    virtual bool canFreeze() const;
    virtual int getPortalWaitTime() const;
    virtual bool canChangeDimensions() const;
    virtual void unk_vfn_182();
    virtual struct ActorUniqueID getControllingPlayer() const;
    virtual bool canPickupItem(class ItemStack const&) const;
    virtual bool canBePulledIntoVehicle() const;
    virtual bool inCaravan() const;
    virtual void unk_vfn_196();
    virtual bool canSynchronizeNewEntity() const;
    virtual void buildDebugInfo(std::string&) const;
    virtual int getDeathTime() const;
    virtual void swing();
    virtual void unk_vfn_221();
    virtual void unk_vfn_222();
    virtual float getYHeadRot() const;
    virtual bool isWorldBuilder() const;
    virtual void unk_vfn_228();
    virtual bool isAdventure() const;
    virtual bool canDestroyBlock(class Block const&) const;
    virtual void setAuxValue(int);
    virtual void stopSpinAttack();
    virtual void unk_vfn_242();
    virtual void unk_vfn_245();
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);
    virtual void unk_vfn_257();
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    virtual void addAdditionalSaveData(class CompoundTag&);
    virtual void unk_vfn_265();
    virtual void _onSizeUpdated();
};