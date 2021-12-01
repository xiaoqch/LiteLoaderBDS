// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_ITEMSTACKREQUESTACTIONCRAFTGRINDSTONE
#include "Extra/ItemStackRequestActionCraftGrindstoneAPI.hpp"
#undef EXTRA_INCLUDE_PART_ITEMSTACKREQUESTACTIONCRAFTGRINDSTONE
class ItemStackRequestActionCraftGrindstone {
#include "Extra/ItemStackRequestActionCraftGrindstoneAPI.hpp"
public:
    virtual ~ItemStackRequestActionCraftGrindstone();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void _write(class BinaryStream&) const;
    virtual bool _read(class ReadOnlyBinaryStream&);

public:
    MCAPI struct ItemStackNetIdVariant const& getRecipeNetId() const;
    MCAPI int getRepairCost() const;
};