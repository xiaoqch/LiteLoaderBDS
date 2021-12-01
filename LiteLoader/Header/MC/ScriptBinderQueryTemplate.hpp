// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SCRIPTBINDERQUERYTEMPLATE
#include "Extra/ScriptBinderQueryTemplateAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTBINDERQUERYTEMPLATE
class ScriptBinderQueryTemplate {
#include "Extra/ScriptBinderQueryTemplateAPI.hpp"
public:
    virtual ~ScriptBinderQueryTemplate();
    virtual std::string const& getTemplateIdentifier() const;
    virtual void applyTemplate(class ScriptObjectBinder&) const;

public:
    MCAPI static std::unique_ptr<class ScriptObjectBinder> build(enum entt::entity);
};