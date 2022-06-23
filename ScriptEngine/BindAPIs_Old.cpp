#include <OldAPI/APIHelp.h>
#include <OldAPI/BaseAPI.h>
#include <OldAPI/BlockAPI.h>
#include <OldAPI/BlockEntityAPI.h>
#include <OldAPI/CommandAPI.h>
#include <OldAPI/CommandOriginAPI.h>
#include <OldAPI/CommandOutputAPI.h>
#include <OldAPI/DeviceAPI.h>
#include <OldAPI/DataAPI.h>
#include <OldAPI/DatabaseAPI.h>
#include <OldAPI/ItemAPI.h>
#include <OldAPI/ContainerAPI.h>
#include <OldAPI/EntityAPI.h>
#include <OldAPI/NbtAPI.h>
#include <OldAPI/GuiAPI.h>
#include <OldAPI/LoggerAPI.h>
#include <OldAPI/FileSystemAPI.h>
#include <OldAPI/NetworkAPI.h>
#include <OldAPI/LlAPI.h>
#include <OldAPI/PlayerAPI.h>
#include <OldAPI/ServerAPI.h>
#include <OldAPI/ScriptAPI.h>
#include <OldAPI/ScoreboardAPI.h>
#include <OldAPI/SystemAPI.h>
#include <OldAPI/McAPI.h>
#include <OldAPI/GameUtilsAPI.h>

void BindAPIs_Old(ScriptEngine* engine)
{

    //////////////// 全局函数 ////////////////

    engine->set("log", Function::newFunction(Log));
    engine->set("colorLog", Function::newFunction(ColorLog));
    engine->set("fastLog", Function::newFunction(FastLog));

    engine->set("setTimeout", Function::newFunction(SetTimeout));
    engine->set("setInterval", Function::newFunction(SetInterval));
    engine->set("clearInterval", Function::newFunction(ClearInterval));


    //////////////// 静态类 ////////////////

    engine->registerNativeClass(McClassBuilder);
    engine->registerNativeClass(SystemClassBuilder);
    engine->registerNativeClass(LoggerClassBuilder);
    engine->registerNativeClass(DataClassBuilder);
    engine->registerNativeClass(MoneyClassBuilder);
    engine->registerNativeClass(NetworkClassBuilder);
    engine->registerNativeClass(LlClassBuilder);
    engine->registerNativeClass(NbtStaticBuilder);
    engine->registerNativeClass(TextClassBuilder);

    engine->registerNativeClass(PermissionStaticBuilder);
    engine->registerNativeClass(ParamTypeStaticBuilder);
    engine->registerNativeClass(ParamOptionStaticBuilder);
    engine->registerNativeClass(OriginTypeStaticBuilder);
    engine->registerNativeClass(DamageCauseEnumBuilder);

    //////////////// 实例类 ////////////////

    engine->registerNativeClass<IntPos>(IntPosBuilder);
    engine->registerNativeClass<FloatPos>(FloatPosBuilder);
    engine->registerNativeClass<DirectionAngle>(DirectionAngleBuilder);
    engine->registerNativeClass<BlockClass>(BlockClassBuilder);
    engine->registerNativeClass<KVDBClass>(KVDBClassBuilder);
    engine->registerNativeClass<DBSessionClass>(DBSessionClassBuilder);
    engine->registerNativeClass<DBStmtClass>(DBStmtClassBuilder);
    engine->registerNativeClass<ConfJsonClass>(ConfJsonClassBuilder);
    engine->registerNativeClass<ConfIniClass>(ConfIniClassBuilder);
    engine->registerNativeClass<DeviceClass>(DeviceClassBuilder);
    engine->registerNativeClass<ContainerClass>(ContainerClassBuilder);
    engine->registerNativeClass<EntityClass>(EntityClassBuilder);
    engine->registerNativeClass<FileClass>(FileClassBuilder);
    engine->registerNativeClass<WSClientClass>(WSClientClassBuilder);
    engine->registerNativeClass<BlockEntityClass>(BlockEntityClassBuilder);
    engine->registerNativeClass<SimpleFormClass>(SimpleFormClassBuilder);
    engine->registerNativeClass<CustomFormClass>(CustomFormClassBuilder);
    engine->registerNativeClass<ItemClass>(ItemClassBuilder);
    engine->registerNativeClass<PlayerClass>(PlayerClassBuilder);
    engine->registerNativeClass<ObjectiveClass>(ObjectiveClassBuilder);
    // engine->registerNativeClass<PacketClass>(PacketClassBuilder);
    engine->registerNativeClass<NbtEndClass>(NbtEndClassBuilder);
    engine->registerNativeClass<NbtByteClass>(NbtByteClassBuilder);
    engine->registerNativeClass<NbtShortClass>(NbtShortClassBuilder);
    engine->registerNativeClass<NbtIntClass>(NbtIntClassBuilder);
    engine->registerNativeClass<NbtLongClass>(NbtLongClassBuilder);
    engine->registerNativeClass<NbtFloatClass>(NbtFloatClassBuilder);
    engine->registerNativeClass<NbtDoubleClass>(NbtDoubleClassBuilder);
    engine->registerNativeClass<NbtStringClass>(NbtStringClassBuilder);
    engine->registerNativeClass<NbtByteArrayClass>(NbtByteArrayClassBuilder);
    engine->registerNativeClass<NbtListClass>(NbtListClassBuilder);
    engine->registerNativeClass<NbtCompoundClass>(NbtCompoundClassBuilder);
    engine->registerNativeClass<CommandClass>(CommandClassBuilder);
    engine->registerNativeClass<CommandOriginClass>(CommandOriginClassBuilder);
    engine->registerNativeClass<CommandOutputClass>(CommandOutputClassBuilder);
    engine->registerNativeClass<HttpServerClass>(HttpServerClassBuilder);
    engine->registerNativeClass<HttpRequestClass>(HttpRequestClassBuilder);
    engine->registerNativeClass<HttpResponseClass>(HttpResponseClassBuilder);
}