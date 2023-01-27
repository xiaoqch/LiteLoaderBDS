/**
 * @file  LevelContainerModel.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelContainerModel.
 *
 */
class LevelContainerModel : public ContainerModel {

#define AFTER_EXTRA
// Add Member There
public:
    inline Actor* getEntity()
    {
        return _getEntity();
    }
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCONTAINERMODEL
public:
    class LevelContainerModel& operator=(class LevelContainerModel const &) = delete;
    LevelContainerModel(class LevelContainerModel const &) = delete;
    LevelContainerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?containerContentChanged@LevelContainerModel@@UEAAXH@Z
     * @hash   -1456720984
     */
    virtual void containerContentChanged(int);
    /**
     * @vftbl  1
     * @hash   -12570342
     */
    virtual ~LevelContainerModel();
    /**
     * @vftbl  2
     * @symbol ?postInit@LevelContainerModel@@UEAAXXZ
     * @hash   -610364181
     */
    virtual void postInit();
    /**
     * @vftbl  3
     * @symbol ?releaseResources@LevelContainerModel@@UEAAXXZ
     * @hash   1003692217
     */
    virtual void releaseResources();
    /**
     * @vftbl  6
     * @hash   -1311974010
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol ?getContainerWeakRef@LevelContainerModel@@UEBA?AVContainerWeakRef@@XZ
     * @hash   -1742397367
     */
    virtual class ContainerWeakRef getContainerWeakRef() const;
    /**
     * @vftbl  12
     * @hash   -233503771
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  14
     * @symbol ?isValid@LevelContainerModel@@UEAA_NXZ
     * @hash   -1361364897
     */
    virtual bool isValid();
    /**
     * @vftbl  15
     * @hash   -230733208
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl  16
     * @hash   -229809687
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  19
     * @hash   -284791380
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  20
     * @symbol ?_getContainer@LevelContainerModel@@EEBAPEAVContainer@@XZ
     * @hash   -1929677117
     */
    virtual class Container * _getContainer() const;
    /**
     * @vftbl  21
     * @symbol ?_getContainerOffset@LevelContainerModel@@MEBAHXZ
     * @hash   1959149845
     */
    virtual int _getContainerOffset() const;
    /**
     * @vftbl  22
     * @symbol ?_onItemChanged@LevelContainerModel@@MEAAXHAEBVItemStack@@0@Z
     * @hash   -1289525656
     */
    virtual void _onItemChanged(int, class ItemStack const &, class ItemStack const &);
    /**
     * @symbol ??0LevelContainerModel@@QEAA@W4ContainerEnumName@@HAEAVPlayer@@W4BlockActorType@@AEBVBlockPos@@W4ContainerCategory@@@Z
     * @hash   1326635240
     */
    MCAPI LevelContainerModel(enum class ContainerEnumName, int, class Player &, enum class BlockActorType, class BlockPos const &, enum class ContainerCategory);
    /**
     * @symbol ??0LevelContainerModel@@QEAA@W4ContainerEnumName@@HAEAVPlayer@@UActorUniqueID@@W4ContainerCategory@@@Z
     * @hash   -578836121
     */
    MCAPI LevelContainerModel(enum class ContainerEnumName, int, class Player &, struct ActorUniqueID, enum class ContainerCategory);
    /**
     * @symbol ?getContainerHelper@LevelContainerModel@@SAPEAVContainer@@AEAVPlayer@@AEBUActorUniqueID@@@Z
     * @hash   -829459581
     */
    MCAPI static class Container * getContainerHelper(class Player &, struct ActorUniqueID const &);
    /**
     * @symbol ?getContainerHelper@LevelContainerModel@@SAPEAVContainer@@AEAVPlayer@@W4BlockActorType@@AEBVBlockPos@@@Z
     * @hash   1373615768
     */
    MCAPI static class Container * getContainerHelper(class Player &, enum class BlockActorType, class BlockPos const &);

//private:
    /**
     * @symbol ?_getEntity@LevelContainerModel@@AEBAPEAVActor@@XZ
     * @hash   276667026
     */
    MCAPI class Actor * _getEntity() const;
    /**
     * @symbol ?_refreshSlot@LevelContainerModel@@AEAAXH@Z
     * @hash   921481029
     */
    MCAPI void _refreshSlot(int);

private:

};