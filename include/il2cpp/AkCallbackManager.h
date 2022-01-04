#pragma once

#include "il2cpp.h"

bool AkCallbackManager__get_IsLoggingEnabled (const MethodInfo* method);
void AkCallbackManager__set_IsLoggingEnabled (bool value, const MethodInfo* method);
void AkCallbackManager__RemoveEventCallback (uint32_t in_playingID, const MethodInfo* method);
void AkCallbackManager__RemoveEventCallbackCookie (Il2CppObject* in_cookie, const MethodInfo* method);
void AkCallbackManager__RemoveBankCallback (Il2CppObject* in_cookie, const MethodInfo* method);
void AkCallbackManager__SetLastAddedPlayingID (uint32_t in_playingID, const MethodInfo* method);
int32_t AkCallbackManager__Init (AkCallbackManager_InitializationSettings_o* settings, const MethodInfo* method);
void AkCallbackManager__Term (const MethodInfo* method);
void AkCallbackManager__SetMonitoringCallback (int32_t in_Level, AkCallbackManager_MonitoringCallback_o* in_CB, const MethodInfo* method);
void AkCallbackManager__SetBGMCallback (AkCallbackManager_BGMCallback_o* in_CB, Il2CppObject* in_cookie, const MethodInfo* method);
int32_t AkCallbackManager__PostCallbacks (const MethodInfo* method);
void AkCallbackManager___cctor (const MethodInfo* method);
