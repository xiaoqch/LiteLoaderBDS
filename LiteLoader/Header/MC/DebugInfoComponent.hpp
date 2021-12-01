// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_DEBUGINFOCOMPONENT
#include "Extra/DebugInfoComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_DEBUGINFOCOMPONENT
class DebugInfoComponent {
#include "Extra/DebugInfoComponentAPI.hpp"
public:
    virtual ~DebugInfoComponent();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();
    virtual void unk_vfn_7();
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual int /*enum EventResult*/ onActorDefinitionEventTriggered(struct ActorDefinitionEvent const&);

public:
    MCAPI void addListener(class HashedString const&, class NetworkIdentifier, unsigned char);
    MCAPI bool listenersEmpty() const;
    MCAPI class DebugInfoComponent& operator=(class DebugInfoComponent&&);
    MCAPI void removeListener(class HashedString const&, class NetworkIdentifier, unsigned char);
};