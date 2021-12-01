// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Core.hpp"
#define EXTRA_INCLUDE_PART_INMEMORYFILE
#include "Extra/InMemoryFileAPI.hpp"
#undef EXTRA_INCLUDE_PART_INMEMORYFILE
class InMemoryFile {
#include "Extra/InMemoryFileAPI.hpp"

public:
    MCAPI class Core::PathBuffer<std::string> getFilename() const;
    MCAPI void rename(class Core::Path const&);
};