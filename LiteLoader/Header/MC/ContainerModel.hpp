// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_CONTAINERMODEL
#include "Extra/ContainerModelAPI.hpp"
#undef EXTRA_INCLUDE_PART_CONTAINERMODEL
class ContainerModel {
#include "Extra/ContainerModelAPI.hpp"
public:
    virtual void containerContentChanged(int);
    virtual ~ContainerModel();
    virtual void postInit();
    virtual void releaseResources();
    virtual int getContainerSize() const;
    virtual int getFilteredContainerSize() const;
    virtual void unk_vfn_6();
    virtual class ContainerWeakRef getContainerWeakRef() const;
    virtual class ItemStack const& getItemStack(int) const;
    virtual std::vector<class ItemStack> const& getItems() const;
    virtual class ItemInstance const& getItemInstance(int) const;
    virtual class ItemStackBase const& getItemStackBase(int) const;
    virtual void unk_vfn_12();
    virtual void setItem(int, class ItemStack const&);
    virtual bool isValid();
    virtual void unk_vfn_15();
    virtual void unk_vfn_16();
    virtual void unk_vfn_17();
    virtual std::string const& getItemGroupName(int) const;
    virtual void unk_vfn_19();
    virtual class Container* _getContainer() const;
    virtual int _getContainerOffset() const;
    virtual void _onItemChanged(int, class ItemStack const&, class ItemStack const&);

public:
    MCAPI bool isContainerSlotInRange(int) const;
    MCAPI void networkUpdateItem(int, class ItemStack const&, class ItemStack const&);
    MCAPI void registerOnContainerChangedCallback(class std::function<void(int, class ItemStack const&, class ItemStack const&)>);
    MCAPI void registerPlayerNotificationCallback(class std::function<void(int, class ItemStack const&, class ItemStack const&)>);

private:
    MCAPI void _onClientUIItemNetworkChanged(int, class ItemStack const&, class ItemStack const&);

protected:
    MCAPI void _init();
};