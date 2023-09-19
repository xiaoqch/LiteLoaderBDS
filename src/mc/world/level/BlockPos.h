#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Mirror.h"
#include "mc/enums/Rotation.h"

class BlockPos {
public:
    // prevent constructor by default
    BlockPos& operator=(BlockPos const&);
    BlockPos(BlockPos const&);
    BlockPos();

public:
    // NOLINTBEGIN
    // symbol: ??0BlockPos@@QEAA@AEBVVec3@@@Z
    MCAPI explicit BlockPos(class Vec3 const&);

    // symbol: ??0BlockPos@@QEAA@MMM@Z
    MCAPI BlockPos(float, float, float);

    // symbol: ??0BlockPos@@QEAA@AEBVSubChunkPos@@@Z
    MCAPI explicit BlockPos(class SubChunkPos const&);

    // symbol: ??0BlockPos@@QEAA@AEBVChunkPos@@H@Z
    MCAPI BlockPos(class ChunkPos const&, int);

    // symbol: ??0BlockPos@@QEAA@AEBVChunkPos@@AEBVChunkBlockPos@@F@Z
    MCAPI BlockPos(class ChunkPos const&, class ChunkBlockPos const&, short);

    // symbol: ?above@BlockPos@@QEBA?AV1@XZ
    MCAPI class BlockPos above() const;

    // symbol: ?neighbor@BlockPos@@QEBA?AV1@E@Z
    MCAPI class BlockPos neighbor(uchar) const;

    // symbol: ??BBlockPos@@QEBA?AVVec3@@XZ
    MCAPI explicit operator class Vec3() const;

    // symbol: ??9BlockPos@@QEBA_NAEBV0@@Z
    MCAPI bool operator!=(class BlockPos const&) const;

    // symbol: ??HBlockPos@@QEBA?AV0@AEBV0@@Z
    MCAPI class BlockPos operator+(class BlockPos const&) const;

    // symbol: ??8BlockPos@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class BlockPos const&) const;

    // symbol: ?randomSeed@BlockPos@@QEBAHXZ
    MCAPI int randomSeed() const;

    // symbol: ?relative@BlockPos@@QEBA?AV1@EH@Z
    MCAPI class BlockPos relative(uchar, int) const;

    // symbol: ?toString@BlockPos@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string toString() const;

    // symbol: ?transform@BlockPos@@QEBA?AV1@W4Rotation@@W4Mirror@@AEBVVec3@@@Z
    MCAPI class BlockPos transform(::Rotation, ::Mirror, class Vec3 const&) const;

    // symbol: ?bindType@BlockPos@@SAXXZ
    MCAPI static void bindType();

    // symbol: ?MAX@BlockPos@@2V1@B
    MCAPI static class BlockPos const MAX;

    // symbol: ?MIN@BlockPos@@2V1@B
    MCAPI static class BlockPos const MIN;

    // symbol: ?ONE@BlockPos@@2V1@B
    MCAPI static class BlockPos const ONE;

    // symbol: ?ZERO@BlockPos@@2V1@B
    MCAPI static class BlockPos const ZERO;

    // NOLINTEND
};
