#pragma once

#include "il2cpp.h"

bool NexPlugin_Detail_Utility__Utility_AcquireNexUniqueIdAsync (uint32_t asyncId, intptr_t pNgsFacade, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_Utility__AcquireNexUniqueIdAsync (uint32_t* asyncId, intptr_t pNgsFacade, int32_t timeOut, NexPlugin_Utility_AcquireNexUniqueIdCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_Utility__Utility_AcquireNexUniqueIdWithPasswordAsync (uint32_t asyncId, intptr_t pNgsFacade, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_Utility__AcquireNexUniqueIdWithPasswordAsync (uint32_t* asyncId, intptr_t pNgsFacade, int32_t timeOut, NexPlugin_Utility_AcquireNexUniqueIdWithPasswordCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_Utility__Utility_AssociateNexUniqueIdWithMyPrincipalIdAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_Utility_UniqueIdInfoInt_o* pParam, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_Utility__AssociateNexUniqueIdWithMyPrincipalIdAsync (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_UniqueIdInfo_o* param, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_Utility__Utility_AssociateNexUniqueIdWithMyPrincipalIdListAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_CppArray_o* pParam, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_Utility__AssociateNexUniqueIdWithMyPrincipalIdAsync (uint32_t* asyncId, intptr_t pNgsFacade, System_Collections_Generic_List_UniqueIdInfo__o* param, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_Utility__Utility_GetAssociatedNexUniqueIdWithMyPrincipalIdAsync (uint32_t asyncId, intptr_t pNgsFacade, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_Utility__GetAssociatedNexUniqueIdWithMyPrincipalIdAsync (uint32_t* asyncId, intptr_t pNgsFacade, int32_t timeOut, NexPlugin_Utility_GetAssociatedNexUniqueIdWithMyPrincipalIdCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_Utility__Utility_GetAssociatedNexUniqueIdWithMyPrincipalIdListAsync (uint32_t asyncId, intptr_t pNgsFacade, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_Utility__GetAssociatedNexUniqueIdWithMyPrincipalIdAsync (uint32_t* asyncId, intptr_t pNgsFacade, int32_t timeOut, NexPlugin_Utility_GetAssociatedNexUniqueIdWithMyPrincipalIdListCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_Utility__Utility_GetIntegerSettingsAsync (uint32_t asyncId, intptr_t pNgsFacade, uint32_t integerSettingIndex, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_Utility__GetIntegerSettingsAsync (uint32_t* asyncId, intptr_t pNgsFacade, uint32_t integerSettingIndex, int32_t timeOut, NexPlugin_Utility_GetIntegerSettingsCB_o* callback, const MethodInfo* method_info);
void NexPlugin_Detail_Utility__AcquireNexUniqueIdResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method_info);
void NexPlugin_Detail_Utility__AcquireNexUniqueIdWithPasswordResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method_info);
void NexPlugin_Detail_Utility__GetAssociatedNexUniqueIdWithMyPrincipalIdResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method_info);
void NexPlugin_Detail_Utility__GetAssociatedNexUniqueIdWithMyPrincipalIdListResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method_info);
void NexPlugin_Detail_Utility__GetIntegerSettingsResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method_info);
void NexPlugin_Detail_Utility__Callback (NexPlugin_Detail_AsyncResultInt_o res, Il2CppObject* callback, const MethodInfo* method_info);
