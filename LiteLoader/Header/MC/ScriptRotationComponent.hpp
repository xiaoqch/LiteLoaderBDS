// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ScriptApi.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTROTATIONCOMPONENT
#include "Extra/ScriptRotationComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTROTATIONCOMPONENT
class ScriptRotationComponent {
#include "Extra/ScriptRotationComponentAPI.hpp"
public:
    virtual ~ScriptRotationComponent();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual bool applyComponentTo(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Actor&, class ScriptApi::ScriptObjectHandle const&) const;
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();
    virtual void unk_vfn_7();
    virtual bool retrieveComponentFrom(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Actor&, class ScriptApi::ScriptObjectHandle&) const;
    virtual void unk_vfn_9();
    virtual void unk_vfn_10();
    virtual void unk_vfn_11();
    virtual bool hasComponent(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Actor&, bool&) const;

private:
    MCAPI static class HashedString const mHash;
};