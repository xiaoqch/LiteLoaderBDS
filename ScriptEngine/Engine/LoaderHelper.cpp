#include "LoaderHelper.h"
#include <OldAPI/APIHelp.h>
#include <Engine/GlobalShareData.h>
#include <Engine/EngineOwnData.h>
#include <OldAPI/EventAPI.h>
#include <list>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <filesystem>
#include <exception>
#include <filesystem>
#include <memory>
#include <Configs.h>
#include <Loader.h>
#include <Engine/LoaderHelper.h>
#include <Engine/RemoteCall.h>
#include <Engine/MessageSystem.h>
#include <OldAPI/CommandAPI.h>
#include <Utils/StringHelper.h>
#include <Utils/FileHelper.h>
#include <ScheduleAPI.h>
#include <PluginManager.h>
using namespace std;

//远程装载回调
void RemoteLoadRequest(ModuleMessage& msg)
{
    istringstream sin(msg.getData());

    bool isHotLoad;
    int backId;
    string filePath;

    sin >> isHotLoad >> filePath;
    bool res = PluginManager::loadPlugin(filePath, isHotLoad, true);

    msg.sendResult(ModuleMessage::MessageType::RemoteLoadReturn, string(res ? "1" : "0"));
}

void RemoteLoadReturn(ModuleMessage& msg)
{
    if (msg.getData() == "0")
    {
        logger.error("Romote Load Failed!");
    }
}