// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Core.hpp"
#define EXTRA_INCLUDE_PART_FILEARCHIVER
#include "Extra/FileArchiverAPI.hpp"
#undef EXTRA_INCLUDE_PART_FILEARCHIVER
class FileArchiver {
#include "Extra/FileArchiverAPI.hpp"

public:
    MCAPI class std::future<struct FileArchiver::Result> archivePack(class Core::Path const&, class Core::Path const&, class std::function<void(struct FileArchiver::Result&)>);

    MCAPI static std::string const EXTENSION_ADDON;
    MCAPI static std::string const EXTENSION_RESOURCEPACK;
    MCAPI static std::string const EXTENSION_TEMPLATE;
    MCAPI static std::string const EXTENSION_VANILLA;
    MCAPI static std::string const IMPORT_LOCK_FILE;

private:
    MCAPI void _printLevelResultMessage(struct FileArchiver::Result const&);
};