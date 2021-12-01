// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Core.hpp"
#define EXTRA_INCLUDE_PART_WORLDTEMPLATEMANAGER
#include "Extra/WorldTemplateManagerAPI.hpp"
#undef EXTRA_INCLUDE_PART_WORLDTEMPLATEMANAGER
class WorldTemplateManager {
#include "Extra/WorldTemplateManagerAPI.hpp"
public:
    virtual ~WorldTemplateManager();
    virtual struct WorldTemplateInfo const* findInstalledWorldTemplateByUUID(std::vector<class mce::UUID> const&) const;

public:
    MCAPI struct WorldTemplateInfo const* findInstalledWorldTemplate(struct PackIdVersion const&) const;
    MCAPI class Core::PathBuffer<std::string> getWorldTemplatesPath() const;

private:
    MCAPI void _initialize();
    MCAPI void _initializePackSources();
    MCAPI void _onDiscoverWorldTemplate(class Pack const&);
};