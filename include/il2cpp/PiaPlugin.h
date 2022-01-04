#pragma once

#include "il2cpp.h"

void PiaPlugin__RegisterPiaLogNative (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__InitializeFrameworkNative (PiaPlugin_InitializeFrameworkSettingNative_o* setting, PiaPlugin_TraceFlagSettingNative_o* traceFlags, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__InitializeFramework (PiaPlugin_InitializeFrameworkSetting_o* setting, const MethodInfo* method);
void PiaPlugin__UnregisterPiaLogNative (const MethodInfo* method);
void PiaPlugin__FinalizeAllNative (const MethodInfo* method);
void PiaPlugin__FinalizeAll (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__RegisterInitializeInternetSettingNative (PiaPlugin_InitializeInternetSettingNative_o* setting, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__RegisterInitializeInternetSetting (PiaPlugin_InitializeInternetSetting_o* setting, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__RegisterInitializeLanSettingNative (PiaPlugin_InitializeLanSetting_o* setting, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__RegisterInitializeLanSetting (PiaPlugin_InitializeLanSetting_o* setting, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__RegisterInitializeLocalSettingNative (PiaPlugin_InitializeLocalSetting_o* setting, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__RegisterInitializeLocalSetting (PiaPlugin_InitializeLocalSetting_o* setting, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__RegisterInitializeTransportSettingNative (PiaPlugin_InitializeTransportSetting_o* setting, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__RegisterInitializeTransportSetting (PiaPlugin_InitializeTransportSetting_o* setting, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__RegisterInitializeCloneSettingNative (PiaPlugin_InitializeCloneSetting_o* setting, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__RegisterInitializeCloneSetting (PiaPlugin_InitializeCloneSetting_o* setting, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__RegisterInitializeSyncSettingNative (PiaPlugin_InitializeSyncSetting_o* setting, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__RegisterInitializeSyncSetting (PiaPlugin_InitializeSyncSetting_o* setting, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__RegisterInitializeReckoningSettingNative (PiaPlugin_InitializeReckoningSetting_o* setting, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__RegisterInitializeReckoningSetting (PiaPlugin_InitializeReckoningSetting_o* setting, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__RegisterInitializeSessionSettingNative (PiaPlugin_InitializeSessionSetting_o* setting, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__RegisterInitializeSessionSetting (PiaPlugin_InitializeSessionSetting_o* setting, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__RegisterStartupNetworkSettingNative (PiaPlugin_StartupNetworkSetting_o* setting, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__RegisterStartupNetworkSetting (PiaPlugin_StartupNetworkSetting_o* setting, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__RegisterStartupSessionSettingNative (PiaPlugin_StartupSessionSettingNative_o* settingNative, PiaPlugin_PlayerInfoNative_array* playerInfo, int32_t infoNum, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__RegisterStartupSessionSetting (PiaPlugin_StartupSessionSetting_o* setting, PiaPlugin_PlayerInfo_array* playerInfo, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__RegisterJoinRandomSessionSettingNative (PiaPluginSession_CreateSessionSettingNative_o* createSessionSetting, PiaPluginSession_SessionSearchCriteriaNative_array* sessionSearchCriteriaList, int32_t sessionSerachCriteriaListSize, bool isMyBlockListUsed, bool isOthersBlockListUsed, bool isUniqueKeywordEnabled, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__RegisterJoinRandomSessionSetting (PiaPlugin_JoinRandomSessionSetting_o* setting, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__RegisterJoinRandomJointSessionSettingNative (PiaPluginSession_CreateSessionSettingNative_o* createSessionSetting, PiaPluginSession_SessionSearchCriteriaNative_array* sessionSearchCriteriaList, int32_t sessionSerachCriteriaListSize, bool isMyBlockListUsed, bool isOthersBlockListUsed, bool isUniqueKeywordEnabled, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__RegisterJoinRandomJointSessionSetting (PiaPlugin_JoinRandomSessionSetting_o* setting, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__RegisterNatDebugSettingNative (PiaPlugin_NatDebugSetting_o* setting, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__RegisterNatDebugSetting (PiaPlugin_NatDebugSetting_o* setting, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__UnregisterInitializeInternetSettingNative (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__UnregisterInitializeInternetSetting (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__UnregisterInitializeLanSettingNative (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__UnregisterInitializeLanSetting (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__UnregisterInitializeLocalSettingNative (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__UnregisterInitializeLocalSetting (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__UnregisterInitializeTransportSettingNative (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__UnregisterInitializeTransportSetting (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__UnregisterInitializeCloneSettingNative (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__UnregisterInitializeCloneSetting (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__UnregisterInitializeSyncSettingNative (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__UnregisterInitializeSyncSetting (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__UnregisterInitializeReckoningSettingNative (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__UnregisterInitializeReckoningSetting (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__UnregisterInitializeSessionSettingNative (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__UnregisterInitializeSessionSetting (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__UnregisterStartupNetworkSettingNative (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__UnregisterStartupNetworkSetting (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__UnregisterStartupSessionSettingNative (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__UnregisterStartupSessionSetting (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__UnregisterJoinRandomSessionSettingNative (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__UnregisterJoinRandomSessionSetting (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__UnregisterJoinRandomJointSessionSettingNative (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__UnregisterJoinRandomJointSessionSetting (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__UnregisterNatDebugSettingNative (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__UnregisterNatDebugSetting (const MethodInfo* method);
void PiaPlugin__DispatchNative (const MethodInfo* method);
void PiaPlugin__Dispatch (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__CheckDispatchErrorNative (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__CheckDispatchError (const MethodInfo* method);
PiaPlugin_SessionEventListNative_o PiaPlugin__GetSessionEventListNative (const MethodInfo* method);
System_Collections_Generic_List_PiaPluginSession_SessionEvent__o* PiaPlugin__GetSessionEventList (const MethodInfo* method);
void PiaPlugin__FinalizeNetworkNative (const MethodInfo* method);
void PiaPlugin__FinalizeNetwork (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__ChangeStateAsyncNative (int32_t state, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__ChangeStateAsync (int32_t state, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__GetCurrentHandlingResultNative (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__GetCurrentHandlingResult (const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__HandleErrorAsyncNative (PiaPlugin_Result_o result, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__HandleErrorAsync (PiaPlugin_Result_o result, const MethodInfo* method);
int32_t PiaPlugin__ConvertHandlingTypeToStateNative (int32_t handlingType, const MethodInfo* method);
int32_t PiaPlugin__ConvertHandlingTypeToState (int32_t handlingType, const MethodInfo* method);
int32_t PiaPlugin__GetJoinProcessStateNative (const MethodInfo* method);
int32_t PiaPlugin__GetJoinProcessState (const MethodInfo* method);
PiaPlugin_AsyncState_o PiaPlugin__GetAsyncProcessStateNative (int32_t id, const MethodInfo* method);
PiaPlugin_AsyncState_o PiaPlugin__GetAsyncProcessState (int32_t id, const MethodInfo* method);
int32_t PiaPlugin__GetAsyncProcessIdNative (const MethodInfo* method);
int32_t PiaPlugin__GetAsyncProcessId (const MethodInfo* method);
bool PiaPlugin__IsSessionMigratingNative (const MethodInfo* method);
bool PiaPlugin__IsSessionMigrating (const MethodInfo* method);
uint32_t PiaPlugin__GetMemoryUsageNative (const MethodInfo* method);
uint32_t PiaPlugin__GetMemoryUsage (const MethodInfo* method);
void PiaPlugin__StartWatermarkNative (const MethodInfo* method);
void PiaPlugin__StartWatermark (const MethodInfo* method);
void PiaPlugin__StopWatermarkNative (const MethodInfo* method);
void PiaPlugin__StopWatermark (const MethodInfo* method);
void PiaPlugin__GetWatermarkArrayNative (intptr_t* pWatermarkNativeArray, int32_t* watermarkNativeArrayLength, const MethodInfo* method);
System_Collections_Generic_List_PiaPlugin_Watermark__o* PiaPlugin__GetWatermarkList (const MethodInfo* method);
int32_t PiaPlugin__GetRttNative (uint64_t constantId, const MethodInfo* method);
int32_t PiaPlugin__GetRtt (uint64_t constantId, const MethodInfo* method);
intptr_t PiaPlugin__GetNexNgsFacadeNative (const MethodInfo* method);
intptr_t PiaPlugin__GetNexNgsFacade (const MethodInfo* method);
intptr_t PiaPlugin__GetNexCredentialsNative (const MethodInfo* method);
intptr_t PiaPlugin__GetNexCredentials (const MethodInfo* method);
int32_t PiaPlugin__GetCryptoKeySizeNative (const MethodInfo* method);
int32_t PiaPlugin__GetCryptoKeySize (const MethodInfo* method);
void PiaPlugin__AssertNative (bool flag, const MethodInfo* method);
void PiaPlugin__Assert (bool flag, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__GetServerTimeNative (PiaPlugin_DateTime_o* dateTime, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__GetServerTime (PiaPlugin_DateTime_o* dateTime, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__GetLocalAddressNative (PiaPlugin_LocalAdressInfoNative_o* localAddressInfo, const MethodInfo* method);
PiaPlugin_Result_o PiaPlugin__GetLocalAddress (PiaPlugin_LocalAdressInfo_o** localAddressInfo, const MethodInfo* method);
void PiaPlugin__TraceNative (intptr_t mes, const MethodInfo* method);
void PiaPlugin__Trace (System_String_o* msg, System_String_o* memberName, System_String_o* sourceFilePath, int32_t sourceLineNumber, const MethodInfo* method);
void PiaPlugin___ctor (PiaPlugin_o* __this, const MethodInfo* method);
void PiaPlugin___cctor (const MethodInfo* method);
