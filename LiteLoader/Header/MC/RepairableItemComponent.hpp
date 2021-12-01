// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_REPAIRABLEITEMCOMPONENT
#include "Extra/RepairableItemComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_REPAIRABLEITEMCOMPONENT
class RepairableItemComponent {
#include "Extra/RepairableItemComponentAPI.hpp"
public:
    virtual ~RepairableItemComponent();
    virtual bool isNetworkComponent() const;
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual bool isNetworkComponent() const;
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    virtual void initializeFromNetwork(class CompoundTag const&);

public:
    MCAPI int handleItemRepair(class ItemStackBase&, class ItemStackBase&);
    MCAPI bool isValidRepairItem(class ItemStackBase const&) const;

    MCAPI static void bindType();
    MCAPI static class HashedString const& getIdentifier();

private:
    MCAPI struct RepairItemEntry const* _getRepairItemEntry(class ItemStackBase const&) const;
    MCAPI int _repairItem(class ItemStackBase&, class ItemStackBase&, class ExpressionNode);
};