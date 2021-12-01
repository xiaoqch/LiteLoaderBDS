// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Scripting.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTITEMCOMPONENTS
#include "Extra/ScriptItemComponentsAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTITEMCOMPONENTS
class ScriptItemComponents {
#include "Extra/ScriptItemComponentsAPI.hpp"

public:
    MCAPI static void bind(class Scripting::ModuleBindingBuilder&, struct Scripting::Version);
    MCAPI static class std::unordered_map<std::string, std::unique_ptr<class IScriptItemComponentFactory>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::unique_ptr<class IScriptItemComponentFactory>>>> const& getSupportedItemComponents();
};