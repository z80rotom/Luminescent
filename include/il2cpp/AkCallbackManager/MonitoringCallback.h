#pragma once

#include "il2cpp.h"

void AkCallbackManager_MonitoringCallback___ctor (AkCallbackManager_MonitoringCallback_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method_info);
void AkCallbackManager_MonitoringCallback__Invoke (AkCallbackManager_MonitoringCallback_o* __this, int32_t in_errorCode, int32_t in_errorLevel, uint32_t in_playingID, uint64_t in_gameObjID, System_String_o* in_msg, const MethodInfo* method_info);
System_IAsyncResult_o* AkCallbackManager_MonitoringCallback__BeginInvoke (AkCallbackManager_MonitoringCallback_o* __this, int32_t in_errorCode, int32_t in_errorLevel, uint32_t in_playingID, uint64_t in_gameObjID, System_String_o* in_msg, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method_info);
void AkCallbackManager_MonitoringCallback__EndInvoke (AkCallbackManager_MonitoringCallback_o* __this, System_IAsyncResult_o* result, const MethodInfo* method_info);
