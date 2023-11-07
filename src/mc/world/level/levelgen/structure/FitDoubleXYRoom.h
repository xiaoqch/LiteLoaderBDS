#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/MonumentRoomFitter.h"

class FitDoubleXYRoom : public ::MonumentRoomFitter {
public:
    // prevent constructor by default
    FitDoubleXYRoom& operator=(FitDoubleXYRoom const&);
    FitDoubleXYRoom(FitDoubleXYRoom const&);
    FitDoubleXYRoom();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FitDoubleXYRoom@@UEAA@XZ
    virtual ~FitDoubleXYRoom() = default;

    // vIndex: 1, symbol: ?fits@FitDoubleXYRoom@@UEBA_NAEBVRoomDefinition@@@Z
    virtual bool fits(class RoomDefinition const&) const;

    // vIndex: 2, symbol:
    // ?create@FitDoubleXYRoom@@UEAA?AV?$unique_ptr@VOceanMonumentPiece@@U?$default_delete@VOceanMonumentPiece@@@std@@@std@@AEAHV?$shared_ptr@VRoomDefinition@@@3@AEAVRandom@@@Z
    virtual std::unique_ptr<class OceanMonumentPiece>
    create(int&, std::shared_ptr<class RoomDefinition>, class Random&);

    // NOLINTEND
};
