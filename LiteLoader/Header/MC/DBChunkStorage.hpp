// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ChunkSource.hpp"
#include "Bedrock.hpp"
#define EXTRA_INCLUDE_PART_DBCHUNKSTORAGE
#include "Extra/DBChunkStorageAPI.hpp"
#undef EXTRA_INCLUDE_PART_DBCHUNKSTORAGE
class DBChunkStorage : public ChunkSource {
#include "Extra/DBChunkStorageAPI.hpp"
public:
    virtual ~DBChunkStorage();
    virtual void shutdown();
    virtual bool isShutdownDone();
    virtual class std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const&);
    virtual class std::shared_ptr<class LevelChunk> getRandomChunk(class Random&);
    virtual bool isChunkKnown(class ChunkPos const&);
    virtual bool postProcess(class ChunkViewSource&);
    virtual void checkAndReplaceChunk(class ChunkViewSource&, class LevelChunk&);
    virtual void loadChunk(class LevelChunk&, bool);
    virtual bool saveLiveChunk(class LevelChunk&);
    virtual void hintDiscardBatchBegin();
    virtual void hintDiscardBatchEnd();
    virtual void acquireDiscarded(class std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter>);
    virtual void flushPendingWrites();
    virtual bool isWithinWorldLimit(class ChunkPos const&) const;
    virtual void unk_vfn_19();
    virtual void clearDeletedEntities();
    virtual void unk_vfn_22();
    virtual class LevelChunkBlendingAttenuator getHeightAttenuatorForLevelChunk(class ChunkPos const&, class BiomeRegistry const&);

public:
    MCAPI static enum ConsoleChunkBlender::BlenderMode _getBlenderMode(class LevelChunk const&, class Experiments const&);

private:
    MCAPI bool _checkSubChunksUseAbsoluteIndices(class DBChunkStorageKey, class LevelChunk const&, bool&) const;
    MCAPI bool _hasChunk(class DBChunkStorageKey const&);
    MCAPI bool _hasChunkUncached(class DBChunkStorageKey const&);
    MCAPI void _loadAndBlendFromDB(class LevelChunk&, class LevelChunk&, class ChunkViewSource&);
    MCAPI bool _loadChunkFromDB(class LevelChunk&, class LevelChunk&, class ChunkViewSource&);
    MCAPI void _serializeChunk(class LevelChunk&, class LevelStorageWriteBatch&, bool);
    MCAPI void _writeBatch();

    MCAPI static class Bedrock::Threading::ThreadLocalObject<class LevelStorageWriteBatch, class std::allocator<class LevelStorageWriteBatch>> threadBatch;
    MCAPI static class Bedrock::Threading::ThreadLocalObject<std::string, class std::allocator<std::string>> threadBuffer;
};