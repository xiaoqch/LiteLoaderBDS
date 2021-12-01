// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Scripting.hpp"
#include "ScriptActorComponent.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTBREATHABLECOMPONENT
#include "Extra/ScriptBreathableComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTBREATHABLECOMPONENT
class ScriptBreathableComponent : public ScriptActorComponent {
#include "Extra/ScriptBreathableComponentAPI.hpp"
public:
    virtual ~ScriptBreathableComponent();

public:
    MCAPI class Scripting::Result<std::vector<class Scripting::StrongTypedObjectHandle<class ScriptBlockPermutation>>> getBreatheBlocks() const;
    MCAPI class Scripting::Result<bool> getBreathesAir() const;
    MCAPI class Scripting::Result<bool> getBreathesLava() const;
    MCAPI class Scripting::Result<bool> getBreathesSolids() const;
    MCAPI class Scripting::Result<bool> getBreathesWater() const;
    MCAPI class Scripting::Result<bool> getGeneratesBubbles() const;
    MCAPI class Scripting::Result<float> getInhaleTime() const;
    MCAPI class Scripting::Result<std::vector<class Scripting::StrongTypedObjectHandle<class ScriptBlockPermutation>>> getNonBreatheBlocks() const;
    MCAPI class Scripting::Result<int> getSuffocateTime() const;
    MCAPI class Scripting::Result<int> getTotalSupply() const;
    MCAPI class Scripting::Result<void> setAirSupply(short) const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptBreathableComponent> bind(struct Scripting::Version);
};