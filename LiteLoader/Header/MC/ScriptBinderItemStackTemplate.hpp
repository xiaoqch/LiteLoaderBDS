// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "entt.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTBINDERITEMSTACKTEMPLATE
#include "Extra/ScriptBinderItemStackTemplateAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTBINDERITEMSTACKTEMPLATE
class ScriptBinderItemStackTemplate {
#include "Extra/ScriptBinderItemStackTemplateAPI.hpp"

public:
    MCAPI static std::unique_ptr<class ScriptObjectBinder> build(class entt::basic_registry<enum entt::entity>&, class ItemInstance const&);
};