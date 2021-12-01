// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_BINARYHEAP
#include "Extra/BinaryHeapAPI.hpp"
#undef EXTRA_INCLUDE_PART_BINARYHEAP
class BinaryHeap {
#include "Extra/BinaryHeapAPI.hpp"

public:
    MCAPI void changeCost(class PathfinderNode*, float);
    MCAPI void clear();
    MCAPI class PathfinderNode* insert(class PathfinderNode*);
    MCAPI bool isEmpty();
    MCAPI class PathfinderNode* pop();

private:
    MCAPI void downHeap(int);
};