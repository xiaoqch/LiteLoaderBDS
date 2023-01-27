/**
 * @file  LabTableInputValidation.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LabTableInputValidation.
 *
 */
class LabTableInputValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LABTABLEINPUTVALIDATION
public:
    class LabTableInputValidation& operator=(class LabTableInputValidation const &) = delete;
    LabTableInputValidation(class LabTableInputValidation const &) = delete;
    LabTableInputValidation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1545631920
     */
    virtual ~LabTableInputValidation();
    /**
     * @vftbl  1
     * @symbol ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
     * @hash   -1536676474
     */
    virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
    /**
     * @vftbl  2
     * @symbol ?isItemAllowedInSlot@LabTableInputValidation@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z
     * @hash   -201119104
     */
    virtual bool isItemAllowedInSlot(class ContainerScreenContext const &, int, class ItemStackBase const &, int) const;
    /**
     * @vftbl  3
     * @symbol ?getAvailableSetCount@ContainerValidationBase@@UEBAHHAEBVItemStackBase@@@Z
     * @hash   1613315341
     */
    virtual int getAvailableSetCount(int, class ItemStackBase const &) const;
    /**
     * @vftbl  4
     * @hash   -1263526156
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @hash   -1262602635
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol ?canItemMoveToContainer@ContainerValidationBase@@UEBA_NAEBVItemStackBase@@@Z
     * @hash   954266953
     */
    virtual bool canItemMoveToContainer(class ItemStackBase const &) const;
    /**
     * @vftbl  7
     * @hash   -1270596233
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @hash   -1259832072
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol ?getContainerSize@LabTableInputValidation@@UEBAHAEBVContainerScreenContext@@AEBVContainer@@@Z
     * @hash   1409787326
     */
    virtual int getContainerSize(class ContainerScreenContext const &, class Container const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LABTABLEINPUTVALIDATION
    /**
     * @symbol ?canDestroy@LabTableInputValidation@@UEBA_NAEBVContainerScreenContext@@@Z
     * @hash   2040355981
     */
    MCVAPI bool canDestroy(class ContainerScreenContext const &) const;
#endif

};