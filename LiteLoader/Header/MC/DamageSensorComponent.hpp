// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_DAMAGESENSORCOMPONENT
#include "Extra/DamageSensorComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_DAMAGESENSORCOMPONENT
class DamageSensorComponent {
#include "Extra/DamageSensorComponentAPI.hpp"

public:
    MCAPI class DamageSensorComponent& operator=(class DamageSensorComponent&&);
    MCAPI enum ActorDamageCause getCause() const;
    MCAPI float getDamageModifier();
    MCAPI float getDamageMultipler();
    MCAPI void initFromDefinition(class Actor&, class DamageSensorDefinition const&);
    MCAPI bool isFatal() const;
    MCAPI bool recordDamage(class Actor&, class ActorDamageSource const&, int, bool, class VariantParameterList);
    MCAPI bool recordDamage(class Actor&, class Actor*, enum ActorDamageCause, int, bool, class VariantParameterList);

private:
    MCAPI bool _recordDamage(class Actor&, class Actor*, enum ActorDamageCause const&, class Actor*, int, bool, class VariantParameterList);
};