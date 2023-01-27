/**
 * @file  FireworksRocketActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "PredictableProjectile.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FireworksRocketActor.
 *
 */
class FireworksRocketActor : public PredictableProjectile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FIREWORKSROCKETACTOR
public:
    class FireworksRocketActor& operator=(class FireworksRocketActor const &) = delete;
    FireworksRocketActor(class FireworksRocketActor const &) = delete;
    FireworksRocketActor() = delete;
#endif

public:
    /**
     * @vftbl  16
     * @hash   1991775903
     */
    virtual ~FireworksRocketActor();
    /**
     * @vftbl  42
     * @hash   -147616318
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  48
     * @symbol ?lerpMotion@FireworksRocketActor@@UEAAXAEBVVec3@@@Z
     * @hash   -2012318989
     */
    virtual void lerpMotion(class Vec3 const &);
    /**
     * @vftbl  50
     * @symbol ?normalTick@FireworksRocketActor@@UEAAXXZ
     * @hash   -1452069114
     */
    virtual void normalTick();
    /**
     * @vftbl  63
     * @hash   -96891855
     */
    virtual void __unk_vfn_63();
    /**
     * @vftbl  70
     * @hash   -63575907
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  82
     * @symbol ?getShadowRadius@FireworksRocketActor@@UEBAMXZ
     * @hash   -1854963151
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl  84
     * @hash   -31252672
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl  87
     * @hash   -35939469
     */
    virtual void __unk_vfn_87();
    /**
     * @vftbl  90
     * @hash   -6317605
     */
    virtual void __unk_vfn_90();
    /**
     * @vftbl  98
     * @hash   -6386797
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl  101
     * @hash   1428946562
     */
    virtual void __unk_vfn_101();
    /**
     * @vftbl  108
     * @hash   1435411209
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  110
     * @hash   1456652192
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  111
     * @hash   1450118353
     */
    virtual void __unk_vfn_111();
    /**
     * @vftbl  113
     * @hash   1459422755
     */
    virtual void __unk_vfn_113();
    /**
     * @vftbl  144
     * @symbol ?handleEntityEvent@FireworksRocketActor@@UEAAXW4ActorEvent@@H@Z
     * @hash   -1813293775
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl  183
     * @hash   1602074556
     */
    virtual void __unk_vfn_183();
    /**
     * @vftbl  192
     * @symbol ?onSynchedDataUpdate@FireworksRocketActor@@UEAAXH@Z
     * @hash   1366400509
     */
    virtual void onSynchedDataUpdate(int);
    /**
     * @vftbl  197
     * @hash   1692150047
     */
    virtual void __unk_vfn_197();
    /**
     * @vftbl  222
     * @hash   -1937633230
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl  223
     * @hash   -1919411709
     */
    virtual void __unk_vfn_223();
    /**
     * @vftbl  245
     * @hash   -1918058621
     */
    virtual void __unk_vfn_245();
    /**
     * @vftbl  248
     * @hash   -511059482
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  266
     * @hash   -1809581902
     */
    virtual void __unk_vfn_266();
    /**
     * @vftbl  270
     * @symbol ?readAdditionalSaveData@FireworksRocketActor@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   1213226411
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  271
     * @symbol ?addAdditionalSaveData@FireworksRocketActor@@MEBAXAEAVCompoundTag@@@Z
     * @hash   -1579556142
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  274
     * @hash   -1775342433
     */
    virtual void __unk_vfn_274();
    /**
     * @symbol ??0FireworksRocketActor@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   -1729996527
     */
    MCAPI FireworksRocketActor(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?init@FireworksRocketActor@@QEAAXAEAVLevel@@AEBVVec3@@AEBVCompoundTag@@1UActorUniqueID@@_N@Z
     * @hash   -218484909
     */
    MCAPI void init(class Level &, class Vec3 const &, class CompoundTag const &, class Vec3 const &, struct ActorUniqueID, bool);
    /**
     * @symbol ?isAttachedToEntity@FireworksRocketActor@@QEBA_NXZ
     * @hash   831194700
     */
    MCAPI bool isAttachedToEntity() const;
    /**
     * @symbol ?postNormalTick@FireworksRocketActor@@QEAAXXZ
     * @hash   -2117879451
     */
    MCAPI void postNormalTick();
    /**
     * @symbol ?setDispensed@FireworksRocketActor@@QEAAX_N@Z
     * @hash   712438958
     */
    MCAPI void setDispensed(bool);

//private:
    /**
     * @symbol ?checkAchievement@FireworksRocketActor@@AEBAXXZ
     * @hash   -1916782595
     */
    MCAPI void checkAchievement() const;
    /**
     * @symbol ?dealExplosionDamage@FireworksRocketActor@@AEAAXXZ
     * @hash   1048011167
     */
    MCAPI void dealExplosionDamage();
    /**
     * @symbol ?initTagData@FireworksRocketActor@@AEAAXAEAVRandom@@@Z
     * @hash   297161230
     */
    MCAPI void initTagData(class Random &);

private:

};