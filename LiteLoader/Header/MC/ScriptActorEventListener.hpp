// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SCRIPTACTOREVENTLISTENER
#include "Extra/ScriptActorEventListenerAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTACTOREVENTLISTENER
class ScriptActorEventListener {
#include "Extra/ScriptActorEventListenerAPI.hpp"
public:
    virtual ~ScriptActorEventListener();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();
    virtual void unk_vfn_7();
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual void unk_vfn_10();
    virtual void unk_vfn_11();
    virtual void unk_vfn_12();
    virtual int /*enum EventResult*/ onActorCreated(class Actor&);
    virtual void unk_vfn_14();
    virtual void unk_vfn_15();
    virtual void unk_vfn_16();
    virtual void unk_vfn_17();
    virtual void unk_vfn_18();
    virtual void unk_vfn_19();
    virtual void unk_vfn_20();
    virtual void unk_vfn_21();
    virtual int /*enum EventResult*/ onActorRemoved(struct ActorRemovedEvent const&);
    virtual void unk_vfn_23();
    virtual void unk_vfn_24();
    virtual void unk_vfn_25();
    virtual void unk_vfn_26();
    virtual int /*enum EventResult*/ onActorAddEffect(struct ActorAddEffectEvent const&);
    virtual int /*enum EventResult*/ onActorRemoveEffect(struct ActorRemoveEffectEvent const&);
};