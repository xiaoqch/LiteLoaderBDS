// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_BLOCKDESCRIPTOR
#include "Extra/BlockDescriptorAPI.hpp"
#undef EXTRA_INCLUDE_PART_BLOCKDESCRIPTOR
class BlockDescriptor {
#include "Extra/BlockDescriptorAPI.hpp"

public:
    MCAPI bool deserialize(class BasicLoader&, struct SerializerTraits const&, class BedrockLoadContext const&);
    MCAPI class Block const* getBlock() const;
    MCAPI std::string const& getTagExpression() const;
    MCAPI bool isValid() const;
    MCAPI bool matches(class Block const&) const;
    MCAPI void operator=(class BlockDescriptor const&);
    MCAPI void operator=(class BlockDescriptor&&);
    MCAPI bool serialize(class BasicSaver&, struct SerializerTraits const&) const;
    MCAPI std::unique_ptr<class CompoundTag> toCompoundTag() const;

    MCAPI static char const* const const JSON_NAME_FIELD;
    MCAPI static char const* const const JSON_STATES_FIELD;
    MCAPI static char const* const const JSON_TAGS_FIELD;
    MCAPI static bool anyMatch(std::vector<class BlockDescriptor> const&, class BlockDescriptor const&);
    MCAPI static bool anyMatch(std::vector<class BlockDescriptor> const&, class Block const&);
    MCAPI static void bindType();
    MCAPI static class BlockDescriptor fromCompoundTag(class CompoundTag const&);
    MCAPI static class BlockDescriptor fromTagExpression(std::string const&, enum MolangVersion);

private:
    MCAPI void _resolveImpl() const;
};