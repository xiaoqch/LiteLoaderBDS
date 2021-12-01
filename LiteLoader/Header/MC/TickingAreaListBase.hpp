// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_TICKINGAREALISTBASE
#include "Extra/TickingAreaListBaseAPI.hpp"
#undef EXTRA_INCLUDE_PART_TICKINGAREALISTBASE
class TickingAreaListBase {
#include "Extra/TickingAreaListBaseAPI.hpp"

public:
    MCAPI void add(std::unique_ptr<class ITickingArea>);
    MCAPI void destroyAreas();
    MCAPI std::vector<class std::shared_ptr<class ITickingArea>> findAreasContaining(class BlockPos const&);
    MCAPI std::vector<class std::shared_ptr<class ITickingArea>> findAreasNamed(std::string const&) const;
    MCAPI class std::shared_ptr<class ITickingArea> getAreaFor(struct ActorUniqueID const&) const;
    MCAPI std::vector<class std::shared_ptr<class ITickingArea>> const& getAreas() const;
    MCAPI std::vector<struct TickingAreaDescription> getTickingAreasDescription() const;
    MCAPI bool hasTickingAreaNamed(std::string const&) const;
    MCAPI void processRemoves();
    MCAPI void processUpdates();
    MCAPI std::vector<struct TickingAreaDescription> removeAllAreas();
    MCAPI std::vector<struct TickingAreaDescription> removeAreas(std::vector<class std::shared_ptr<class ITickingArea>> const&);
    MCAPI void tickSeasons(class Random&);
};