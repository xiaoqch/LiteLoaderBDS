// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_PERSONA
#include "Extra/personaAPI.hpp"
#undef EXTRA_INCLUDE_PART_PERSONA
namespace persona {
#include "Extra/personaAPI.hpp"

MCAPI extern std::string const ANIMATED_128X128_NAME;
MCAPI extern std::string const ANIMATED_128X128_TEXTURE_CONTROLLER_FIRST_PERSON;
MCAPI extern std::string const ANIMATED_128X128_TEXTURE_CONTROLLER_THIRD_PERSON;
MCAPI extern class HashedString const ANIMATED_128X128_TEXTURE_FRAMES_VARIABLE;
MCAPI extern std::string const ANIMATED_32X32_NAME;
MCAPI extern std::string const ANIMATED_32X32_TEXTURE_CONTROLLER_FIRST_PERSON;
MCAPI extern std::string const ANIMATED_32X32_TEXTURE_CONTROLLER_THIRD_PERSON;
MCAPI extern class HashedString const ANIMATED_32X32_TEXTURE_FRAMES_VARIABLE;
MCAPI extern std::string const ANIMATED_FACE_CONTROLLER_FIRST_PERSON;
MCAPI extern std::string const ANIMATED_FACE_CONTROLLER_THIRD_PERSON;
MCAPI extern std::string const ANIMATED_FACE_NAME;
MCAPI extern class HashedString const ANIMATED_FACE_TEXTURE_FRAMES_VARIABLE;
MCAPI extern int const INVALID_INDEX;
MCAPI extern class mce::UUID const NONE_PIECE_ID;
MCAPI extern std::string const NONE_PIECE_PATH;
MCAPI extern class mce::UUID const NO_PIECE_SELECTED;
MCAPI extern class HashedString const USE_BLINKING_ANIMATION_VARIABLE;
MCAPI enum persona::PieceType pieceTypeFromString(std::string const&);
MCAPI std::string const& stringFromPieceType(enum persona::PieceType, bool);

} // namespace persona