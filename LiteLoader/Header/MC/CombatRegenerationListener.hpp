// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_COMBATREGENERATIONLISTENER
#include "Extra/CombatRegenerationListenerAPI.hpp"
#undef EXTRA_INCLUDE_PART_COMBATREGENERATIONLISTENER
class CombatRegenerationListener {
#include "Extra/CombatRegenerationListenerAPI.hpp"
public:
    virtual ~CombatRegenerationListener();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();
    virtual void unk_vfn_7();
    virtual void unk_vfn_8();
    virtual int /*enum EventResult*/ onActorDeath(class Actor&, class ActorDamageSource const&, int /*enum ActorType*/);
};