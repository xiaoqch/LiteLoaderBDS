// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_ACTOREQUIPMENTSLOTS
#include "Extra/ActorEquipmentSlotsAPI.hpp"
#undef EXTRA_INCLUDE_PART_ACTOREQUIPMENTSLOTS
namespace ActorEquipmentSlots {
#include "Extra/ActorEquipmentSlotsAPI.hpp"

MCAPI class ItemStack const* getItem(class Actor const&, enum EquipmentSlot, int);

} // namespace ActorEquipmentSlots