// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_PAGECONTENT
#include "Extra/PageContentAPI.hpp"
#undef EXTRA_INCLUDE_PART_PAGECONTENT
struct PageContent {
#include "Extra/PageContentAPI.hpp"

public:
    MCAPI struct PageContent& operator=(struct PageContent const&);
    MCAPI std::unique_ptr<class CompoundTag> createTag() const;

    MCAPI static struct PageContent const BLANK_PAGE;
    MCAPI static struct PageContent read(class CompoundTag const&);
    MCAPI static void write(struct PageContent const&, class CompoundTag&);
};