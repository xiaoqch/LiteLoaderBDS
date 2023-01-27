/**
 * @file  ItemComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemComponent.
 *
 */
class ItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMCOMPONENT
public:
    class ItemComponent& operator=(class ItemComponent const &) = delete;
    ItemComponent(class ItemComponent const &) = delete;
    ItemComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -992288008
     */
    virtual ~ItemComponent();
    /**
     * @vftbl  1
     * @hash   -1266296719
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?writeSettings@ItemComponent@@UEAAXXZ
     * @hash   -300204097
     */
    virtual void writeSettings();
    /**
     * @vftbl  3
     * @hash   -1256992317
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   -1256068796
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol ?buildNetworkTag@ItemComponent@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     * @hash   -1423847431
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMCOMPONENT
    /**
     * @symbol ?checkComponentDataForContentErrors@ItemComponent@@UEBA_NXZ
     * @hash   1735846616
     */
    MCVAPI bool checkComponentDataForContentErrors() const;
    /**
     * @symbol ?initializeFromNetwork@ItemComponent@@UEAA_NAEBVCompoundTag@@@Z
     * @hash   2077004135
     */
    MCVAPI bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @symbol ?isNetworkComponent@ItemComponent@@UEBA_NXZ
     * @hash   1480074759
     */
    MCVAPI bool isNetworkComponent() const;
    /**
     * @symbol ?useOn@ItemComponent@@UEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@@Z
     * @hash   -638958951
     */
    MCVAPI bool useOn(class ItemStack &, class Actor &, class BlockPos const &, unsigned char, class Vec3 const &) const;
#endif
    /**
     * @symbol ??0ItemComponent@@QEAA@PEAVComponentItem@@@Z
     * @hash   -165319568
     */
    MCAPI ItemComponent(class ComponentItem *);
    /**
     * @symbol ?bindItemComponentType@ItemComponent@@SAXXZ
     * @hash   131733217
     */
    MCAPI static void bindItemComponentType();
    /**
     * @symbol ?registerVersionUpgrades@ItemComponent@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     * @hash   -511035844
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};