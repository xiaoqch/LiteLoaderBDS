// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SCRIPTBINDERLEVELTICKINGAREATEMPLATE
#include "Extra/ScriptBinderLevelTickingAreaTemplateAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTBINDERLEVELTICKINGAREATEMPLATE
class ScriptBinderLevelTickingAreaTemplate {
#include "Extra/ScriptBinderLevelTickingAreaTemplateAPI.hpp"
public:
    virtual ~ScriptBinderLevelTickingAreaTemplate();
    virtual std::string const& getTemplateIdentifier() const;
    virtual void applyTemplate(class ScriptObjectBinder&) const;

public:
    MCAPI static std::unique_ptr<class ScriptObjectBinder> build(class ITickingArea const&);
};