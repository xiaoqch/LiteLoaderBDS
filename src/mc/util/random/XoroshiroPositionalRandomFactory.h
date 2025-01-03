#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/IPositionalRandomFactory.h"
#include "mc/platform/threading/ThreadLocalObject.h"

// auto generated forward declare list
// clang-format off
namespace Crypto::Hash { class md5; }
// clang-format on

class XoroshiroPositionalRandomFactory : public ::IPositionalRandomFactory {
public:
    uint64 mSeedLo; // this+0x8
    uint64 mSeedHi; // this+0x10

public:
    XoroshiroPositionalRandomFactory(uint64 seedLo, uint64 seedHi) : mSeedLo(seedLo), mSeedHi(seedHi) {}

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~XoroshiroPositionalRandomFactory();

    // vIndex: 1
    virtual std::unique_ptr<class IRandom> forBlockPos(class BlockPos const& blockPos) const;

    // vIndex: 2
    virtual std::unique_ptr<class IRandom> forString(std::string const& s) const;

    MCAPI class XoroshiroRandom forStringImpl(std::string const& s) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI std::unique_ptr<class IRandom> forBlockPos$(class BlockPos const& blockPos) const;

    MCAPI std::unique_ptr<class IRandom> forString$(std::string const& s) const;

    MCAPI static class Bedrock::Threading::ThreadLocalObject<class Crypto::Hash::md5>& mThreadLocalDigest();

    // NOLINTEND
};
