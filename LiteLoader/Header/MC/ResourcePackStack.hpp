// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Core.hpp"
#define EXTRA_INCLUDE_PART_RESOURCEPACKSTACK
#include "Extra/ResourcePackStackAPI.hpp"
#undef EXTRA_INCLUDE_PART_RESOURCEPACKSTACK
class ResourcePackStack {
#include "Extra/ResourcePackStackAPI.hpp"
public:
    virtual ~ResourcePackStack();
    virtual std::vector<class LoadedResourceData> loadAllVersionsOf(class ResourceLocation const&) const;
    virtual bool loadAllVersionsOf(class ResourceLocation const&, class ResourcePackMergeStrategy&) const;

public:
    MCAPI void add(class PackInstance, class IResourcePackRepository const&, bool);
    MCAPI void getSplitStacks(class ResourcePackStack&, class ResourcePackStack&) const;
    MCAPI bool hasPlatformLockedContent() const;
    MCAPI void removeDuplicates();
    MCAPI void removeIf(class std::function<bool(class PackInstance const&)> const&);
    MCAPI void removeInvalidPacks();

    MCAPI static std::unique_ptr<class ResourcePackStack> deserialize(class std::basic_istream<char, struct std::char_traits<char>>&, class IResourcePackRepository const&);

private:
    MCAPI static void _populateDependencies(std::vector<class PackInstance>&, class PackInstance&, class IResourcePackRepository const&, bool);
    MCAPI static class std::map<class Core::PathBuffer<std::string>, class Core::PathBuffer<std::string>, struct std::less<class Core::PathBuffer<std::string>>, class std::allocator<struct std::pair<class Core::PathBuffer<std::string> const, class Core::PathBuffer<std::string>>>> mUpgradePathMap;
};