// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Scripting.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTMOVEMENTGENERICCOMPONENTFACTORY
#include "Extra/ScriptMovementGenericComponentFactoryAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTMOVEMENTGENERICCOMPONENTFACTORY
class ScriptMovementGenericComponentFactory {
#include "Extra/ScriptMovementGenericComponentFactoryAPI.hpp"
public:
    virtual ~ScriptMovementGenericComponentFactory();
    virtual class Scripting::StrongTypedObjectHandle<class ScriptActorComponent> createComponent(class WeakEntityRef, class Scripting::WeakLifetimeScope const&, std::string const&);
    virtual bool hasComponent(class WeakEntityRef) const;
};