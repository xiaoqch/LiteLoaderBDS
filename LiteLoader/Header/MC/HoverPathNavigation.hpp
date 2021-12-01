// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "PathNavigation.hpp"
#define EXTRA_INCLUDE_PART_HOVERPATHNAVIGATION
#include "Extra/HoverPathNavigationAPI.hpp"
#undef EXTRA_INCLUDE_PART_HOVERPATHNAVIGATION
class HoverPathNavigation : public PathNavigation {
#include "Extra/HoverPathNavigationAPI.hpp"
public:
    virtual ~HoverPathNavigation();
    virtual void initializeInternal(class Mob&, struct NavigationDescription*);
    virtual void tick(class NavigationComponent&, class Mob&);
    virtual class Vec3 getTempMobPos(class Mob const&) const;
    virtual std::unique_ptr<class Path> createPath(class NavigationComponent&, class Mob&, class Vec3 const&);
    virtual std::unique_ptr<class Path> createPath(class NavigationComponent&, class Mob&, class Actor&);
    virtual void stop(class NavigationComponent&, class Mob&);
    virtual bool travel(class NavigationComponent&, class Mob&, float&, float&, float&);
    virtual bool canUpdatePath(class Mob const&) const;
    virtual void updatePath(class NavigationComponent&, class Mob&);
};