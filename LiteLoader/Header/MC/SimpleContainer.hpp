// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Container.hpp"
#define EXTRA_INCLUDE_PART_SIMPLECONTAINER
#include "Extra/SimpleContainerAPI.hpp"
#undef EXTRA_INCLUDE_PART_SIMPLECONTAINER
class SimpleContainer : public Container {
#include "Extra/SimpleContainerAPI.hpp"
public:
    virtual ~SimpleContainer();
    virtual void init();
    virtual void serverInitItemStackIds(int, int, class std::function<void(int, class ItemStack const&)>);
    virtual class ItemStack const& getItem(int) const;
    virtual void setItem(int, class ItemStack const&);
    virtual int getContainerSize() const;
    virtual int getMaxStackSize() const;
    virtual void startOpen(class Player&);
    virtual void stopOpen(class Player&);
    virtual void unk_vfn_22();
    virtual void unk_vfn_23();
    virtual void unk_vfn_31();
};