#pragma once

#include "il2cpp.h"

System_String_o* SmartPoint_AssetAssistant_InstallHandler__get_installPath (const MethodInfo* method_info);
void SmartPoint_AssetAssistant_InstallHandler__set_installPath (System_String_o* value, const MethodInfo* method_info);
void SmartPoint_AssetAssistant_InstallHandler___ctor (SmartPoint_AssetAssistant_InstallHandler_o* __this, System_String_o* fileName, System_Byte_array* preallocatedBuffer, const MethodInfo* method_info);
void SmartPoint_AssetAssistant_InstallHandler___ctor (SmartPoint_AssetAssistant_InstallHandler_o* __this, System_String_o* fileName, int32_t cacheSize, const MethodInfo* method_info);
void SmartPoint_AssetAssistant_InstallHandler___ctor (SmartPoint_AssetAssistant_InstallHandler_o* __this, System_String_o* fileName, const MethodInfo* method_info);
bool SmartPoint_AssetAssistant_InstallHandler__ReceiveData (SmartPoint_AssetAssistant_InstallHandler_o* __this, System_Byte_array* data, int32_t bytesToRead, const MethodInfo* method_info);
void SmartPoint_AssetAssistant_InstallHandler__ReceiveContentLengthHeader (SmartPoint_AssetAssistant_InstallHandler_o* __this, uint64_t contentLength, const MethodInfo* method_info);
void SmartPoint_AssetAssistant_InstallHandler__CompleteContent (SmartPoint_AssetAssistant_InstallHandler_o* __this, const MethodInfo* method_info);
void SmartPoint_AssetAssistant_InstallHandler__CloseStream (SmartPoint_AssetAssistant_InstallHandler_o* __this, const MethodInfo* method_info);
float SmartPoint_AssetAssistant_InstallHandler__GetProgress (SmartPoint_AssetAssistant_InstallHandler_o* __this, const MethodInfo* method_info);
void SmartPoint_AssetAssistant_InstallHandler___cctor (const MethodInfo* method_info);
