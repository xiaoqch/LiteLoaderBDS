/**
 * @file  Direction.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Direction.
 *
 */
class Direction {

#define AFTER_EXTRA
// Add Member There
public:
enum class Type;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIRECTION
public:
    class Direction& operator=(class Direction const &) = delete;
    Direction(class Direction const &) = delete;
    Direction() = delete;
#endif

public:
    /**
     * @symbol ?DIRECTION_CLOCKWISE@Direction@@2QBW4Type@1@B
     * @hash   1302472791
     */
    MCAPI static enum class Direction::Type const DIRECTION_CLOCKWISE[];
    /**
     * @symbol ?DIRECTION_COUNTER_CLOCKWISE@Direction@@2QBW4Type@1@B
     * @hash   620451093
     */
    MCAPI static enum class Direction::Type const DIRECTION_COUNTER_CLOCKWISE[];
    /**
     * @symbol ?DIRECTION_FACING@Direction@@2QBEB
     * @hash   -1191565437
     */
    MCAPI static unsigned char const DIRECTION_FACING[];
    /**
     * @symbol ?DIRECTION_OPPOSITE@Direction@@2QBW4Type@1@B
     * @hash   -47047421
     */
    MCAPI static enum class Direction::Type const DIRECTION_OPPOSITE[];
    /**
     * @symbol ?FACING_DIRECTION@Direction@@2QBW4Type@1@B
     * @hash   -1525028447
     */
    MCAPI static enum class Direction::Type const FACING_DIRECTION[];
    /**
     * @symbol ?STEP_X@Direction@@2QBHB
     * @hash   269695742
     */
    MCAPI static int const STEP_X[];
    /**
     * @symbol ?STEP_Z@Direction@@2QBHB
     * @hash   355774738
     */
    MCAPI static int const STEP_Z[];
    /**
     * @symbol ?convertFacingDirectionToDirection@Direction@@SA?AW4Type@1@E@Z
     * @hash   -1161106336
     */
    MCAPI static enum class Direction::Type convertFacingDirectionToDirection(unsigned char);
    /**
     * @symbol ?getDirection@Direction@@SA?AW4Type@1@MM@Z
     * @hash   1421656820
     */
    MCAPI static enum class Direction::Type getDirection(float, float);

};