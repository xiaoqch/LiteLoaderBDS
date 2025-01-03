#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestFunction; }
// clang-format on

namespace gametest {

class GameTestBatch {
public:
    // prevent constructor by default
    GameTestBatch& operator=(GameTestBatch const&);
    GameTestBatch();

public:
    // NOLINTBEGIN
    MCAPI
    GameTestBatch(class gametest::GameTestBatch const&);

    MCAPI GameTestBatch(
        std::string                                                        name,
        std::vector<std::shared_ptr<class gametest::BaseGameTestFunction>> testFunctions,
        std::function<void()>                                              beforeBatchFunction
    );

    MCAPI ~GameTestBatch();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class gametest::GameTestBatch const&);

    MCAPI void* ctor$(
        std::string                                                        name,
        std::vector<std::shared_ptr<class gametest::BaseGameTestFunction>> testFunctions,
        std::function<void()>                                              beforeBatchFunction
    );

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace gametest
