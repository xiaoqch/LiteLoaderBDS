#pragma once
#include <OldAPI/APIHelp.h>
#include <string>
#include <vector>

class ModuleMessage;
void RemoteLoadRequest(ModuleMessage& msg);
void RemoteLoadReturn(ModuleMessage& msg);