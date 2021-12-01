// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "entt.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTBINDERLEVELTEMPLATE
#include "Extra/ScriptBinderLevelTemplateAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTBINDERLEVELTEMPLATE
class ScriptBinderLevelTemplate {
#include "Extra/ScriptBinderLevelTemplateAPI.hpp"
public:
    virtual ~ScriptBinderLevelTemplate();
    virtual std::string const& getTemplateIdentifier() const;
    virtual void applyTemplate(class ScriptObjectBinder&) const;

public:
    MCAPI static std::unique_ptr<class ScriptObjectBinder> build(class entt::basic_registry<enum entt::entity>&, enum entt::entity);
};