// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Enchant.hpp"
#define EXTRA_INCLUDE_PART_DIGGINGENCHANT
#include "Extra/DiggingEnchantAPI.hpp"
#undef EXTRA_INCLUDE_PART_DIGGINGENCHANT
class DiggingEnchant : public Enchant {
#include "Extra/DiggingEnchantAPI.hpp"
public:
    virtual ~DiggingEnchant();
    virtual int getMinCost(int) const;
    virtual int getMaxCost(int) const;
    virtual void unk_vfn_4();
    virtual int getMaxLevel() const;
    virtual int getDamageProtection(int, class ActorDamageSource const&) const;
    virtual float getDamageBonus(int, class Actor const&) const;
    virtual void doPostAttack(class Actor&, class Actor&, int) const;
    virtual void doPostHurt(class ItemInstance&, class Actor&, class Actor&, int) const;
    virtual void unk_vfn_10();
    virtual void unk_vfn_11();
    virtual void unk_vfn_12();
    virtual void unk_vfn_13();
    virtual bool _isValidEnchantmentTypeForCategory(int /*enum Enchant::Type*/) const;

private:
    MCAPI static std::vector<enum Enchant::Type> const VALID_ENCHANTMENTS;
};