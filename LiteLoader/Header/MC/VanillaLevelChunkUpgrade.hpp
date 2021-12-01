// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_VANILLALEVELCHUNKUPGRADE
#include "Extra/VanillaLevelChunkUpgradeAPI.hpp"
#undef EXTRA_INCLUDE_PART_VANILLALEVELCHUNKUPGRADE
namespace VanillaLevelChunkUpgrade {
#include "Extra/VanillaLevelChunkUpgradeAPI.hpp"

MCAPI bool addBiomeSpecificVillageSkins(class CompoundTag&, class BlockSource&);
MCAPI bool convertOcelotTagToCat(class CompoundTag&);
MCAPI bool convertVillagerV1TagToV2(class CompoundTag&);
MCAPI bool convertVillagerV2TagToV1(class CompoundTag&);
MCAPI bool convertZombieVillagerV1TagToV2(class CompoundTag&);
MCAPI bool convertZombieVillagerV2TagToV1(class CompoundTag&);
MCAPI void fillNegativeSubChunksWithAir(class LevelChunk&, class BlockSource&);
MCAPI void fillNegativeSubChunksWithGeneration(class LevelChunk&, class LevelChunk&);
MCAPI void fillNegativeSubChunksWithGenerationOrAir(class LevelChunk&, class LevelChunk&, class BlockSource&);
MCAPI void fixBlockStatesOnChunkBorderAxis(class BlockSource&, class LevelChunk const&, unsigned char, class BlockPos, enum VanillaLevelChunkUpgrade::Axis);
MCAPI void fixStemBlockStates(class BlockSource&, class BlockPos, class Block const&);
MCAPI void fixUselessDynamicWater(class LevelChunk&, class BlockSource&);
MCAPI void fixWallBlockStates(class BlockSource&, class BlockPos);
MCAPI void fixWallChunk(class LevelChunk&, class BlockSource&);
MCAPI std::string const& getV1CareerFromDefinitionsList(class ListTag const*);
MCAPI bool isWallBlock(class Block const&);
MCAPI bool upgradeArmorStandComponents(class CompoundTag&);
MCAPI void upgradeLevelChunk(class LevelChunk&, class BlockSource&);
MCAPI void upgradeOldLimboEntity(class CompoundTag&, enum LimboEntitiesVersion, bool);
MCAPI void upgradeWorldHeight(class LevelChunk&, class LevelChunk&, class BlockSource&);

} // namespace VanillaLevelChunkUpgrade