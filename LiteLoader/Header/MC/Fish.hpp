// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "WaterAnimal.hpp"
#define EXTRA_INCLUDE_PART_FISH
#include "Extra/FishAPI.hpp"
#undef EXTRA_INCLUDE_PART_FISH
class Fish : public WaterAnimal {
#include "Extra/FishAPI.hpp"
public:
    virtual void initializeComponents(int /*enum Actor::InitializationMethod*/, class VariantParameterList const&);
    virtual ~Fish();
    virtual bool isRuntimePredictedMovementEnabled() const;
    virtual void unk_vfn_22();
    virtual class Vec3 getInterpolatedRidingOffset(float) const;
    virtual void unk_vfn_41();
    virtual void normalTick();
    virtual float getRidingHeight();
    virtual bool startRiding(class Actor&);
    virtual void unk_vfn_61();
    virtual void unk_vfn_68();
    virtual float getCameraOffset() const;
    virtual void unk_vfn_82();
    virtual void unk_vfn_87();
    virtual void playerTouch(class Player&);
    virtual void unk_vfn_94();
    virtual void unk_vfn_97();
    virtual bool isDamageBlocked(class ActorDamageSource const&) const;
    virtual void unk_vfn_104();
    virtual void unk_vfn_106();
    virtual void unk_vfn_107();
    virtual void unk_vfn_108();
    virtual class Actor* findAttackTarget();
    virtual bool isValidTarget(class Actor*) const;
    virtual void adjustDamageAmount(int&) const;
    virtual void onTame();
    virtual void onFailedTame();
    virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    virtual void onBounceStarted(class BlockPos const&, class Block const&);
    virtual void unk_vfn_143();
    virtual void awardKillScore(class Actor&, int);
    virtual class HashedString const& queryEntityRenderer() const;
    virtual struct ActorUniqueID getSourceUniqueID() const;
    virtual int getPortalWaitTime() const;
    virtual bool canChangeDimensions() const;
    virtual void unk_vfn_182();
    virtual struct ActorUniqueID getControllingPlayer() const;
    virtual bool canPickupItem(class ItemStack const&) const;
    virtual bool canBePulledIntoVehicle() const;
    virtual void unk_vfn_196();
    virtual bool canSynchronizeNewEntity() const;
    virtual void unk_vfn_221();
    virtual void unk_vfn_222();
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
    virtual void unk_vfn_265();
    virtual void unk_vfn_274();
    virtual void spawnAnim();
    virtual int getItemUseDuration() const;
    virtual float getItemUseStartupProgress() const;
    virtual float getItemUseIntervalProgress() const;
    virtual void unk_vfn_304();
    virtual bool isAlliedTo(class Mob*);
    virtual void unk_vfn_308();
    virtual void sendArmorDamage(class std::bitset<4> const&);
    virtual bool createAIGoals();
    virtual void onBorn(class Actor&, class Actor&);
    virtual void unk_vfn_336();
    virtual float _getWalkTargetValue(class BlockPos const&);
    virtual void unk_vfn_339();
    virtual void _serverAiMobStep();
    virtual void unk_vfn_355();
};