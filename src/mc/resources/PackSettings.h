#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class PackSettings {
public:
    // prevent constructor by default
    PackSettings& operator=(PackSettings const&);
    PackSettings(PackSettings const&);

public:
    // NOLINTBEGIN
    // symbol: ??0PackSettings@@QEAA@XZ
    MCAPI PackSettings();

    // symbol: ?getAllSettings@PackSettings@@QEBAAEBVValue@Json@@XZ
    MCAPI class Json::Value const& getAllSettings() const;

    // symbol: ?loadPackSettings@PackSettings@@QEAAXAEBUPackIdVersion@@AEBVValue@Json@@@Z
    MCAPI void loadPackSettings(struct PackIdVersion const& packId, class Json::Value const& packSettings);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_initPackSetting@PackSettings@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@@Z
    MCAPI void _initPackSetting(std::string const& name, class Json::Value const& value);

    // NOLINTEND
};
