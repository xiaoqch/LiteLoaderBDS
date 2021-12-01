// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Bedrock.hpp"
#define EXTRA_INCLUDE_PART_OCEANRUINPIECES
#include "Extra/OceanRuinPiecesAPI.hpp"
#undef EXTRA_INCLUDE_PART_OCEANRUINPIECES
class OceanRuinPieces {
#include "Extra/OceanRuinPiecesAPI.hpp"

private:
    MCAPI static class gsl::basic_string_span<char const, -1> BIG_RUIN_LOOT;
    MCAPI static class gsl::basic_string_span<char const, -1> RUIN_LOOT;
    MCAPI static class gsl::basic_string_span<char const, -1> STRUCTURE_BIG_RUIN1_BRICK;
    MCAPI static class gsl::basic_string_span<char const, -1> STRUCTURE_BIG_RUIN8_BRICK;
    MCAPI static class gsl::basic_string_span<char const, -1> STRUCTURE_RUIN_2_BRICK;
    MCAPI static class gsl::basic_string_span<char const, -1> STRUCTURE_RUIN_3_BRICK;
    MCAPI static void _addClusterRuins(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class Random&, enum Rotation const&, class BlockPos const&, struct OceanRuinConfiguration const&, std::vector<std::unique_ptr<class StructurePiece>>&);
    MCAPI static void _addPiece(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class BlockPos const&, enum Rotation const&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&, struct OceanRuinConfiguration const&, bool, float);
    MCAPI static std::vector<class BlockPos> _allPositions(class Random&, int, int, int);
    MCAPI static class LegacyStructureSettings mSettings;
};