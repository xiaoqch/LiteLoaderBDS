// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ContainerManagerModel.hpp"
#define EXTRA_INCLUDE_PART_ENCHANTINGCONTAINERMANAGERMODEL
#include "Extra/EnchantingContainerManagerModelAPI.hpp"
#undef EXTRA_INCLUDE_PART_ENCHANTINGCONTAINERMANAGERMODEL
class EnchantingContainerManagerModel : public ContainerManagerModel {
#include "Extra/EnchantingContainerManagerModelAPI.hpp"
public:
    virtual ~EnchantingContainerManagerModel();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual std::vector<class ItemStack> getItemCopies() const;
    virtual void setSlot(int, class ItemStack const&, bool);
    virtual class ItemStack const& getSlot(int) const;
    virtual void setData(int, int);
    virtual void broadcastChanges();
    virtual bool isValid(float);
    virtual class ContainerScreenContext _postInit();

public:
    MCAPI std::vector<class ItemEnchantOption> const& getEnchantOptions() const;
    MCAPI void recalculateOptions();

    MCAPI static int const NUM_OPTIONS;
};