#pragma once

#include "il2cpp.h"

bool NexPlugin_Utility__AcquireNexUniqueIdAsync (uint32_t* asyncId, intptr_t pNgsFacade, int32_t timeOut, NexPlugin_Utility_AcquireNexUniqueIdCB_o* callback, const MethodInfo* method);
bool NexPlugin_Utility__AcquireNexUniqueIdWithPasswordAsync (uint32_t* asyncId, intptr_t pNgsFacade, int32_t timeOut, NexPlugin_Utility_AcquireNexUniqueIdWithPasswordCB_o* callback, const MethodInfo* method);
bool NexPlugin_Utility__AssociateNexUniqueIdWithMyPrincipalIdAsync (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_UniqueIdInfo_o* uniqueIdInfo, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method);
bool NexPlugin_Utility__AssociateNexUniqueIdWithMyPrincipalIdAsync (uint32_t* asyncId, intptr_t pNgsFacade, System_Collections_Generic_List_UniqueIdInfo__o* uniqueIdInfo, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method);
bool NexPlugin_Utility__GetAssociatedNexUniqueIdWithMyPrincipalIdAsync (uint32_t* asyncId, intptr_t pNgsFacade, int32_t timeOut, NexPlugin_Utility_GetAssociatedNexUniqueIdWithMyPrincipalIdCB_o* callback, const MethodInfo* method);
bool NexPlugin_Utility__GetAssociatedNexUniqueIdWithMyPrincipalIdAsync (uint32_t* asyncId, intptr_t pNgsFacade, int32_t timeOut, NexPlugin_Utility_GetAssociatedNexUniqueIdWithMyPrincipalIdListCB_o* callback, const MethodInfo* method);
bool NexPlugin_Utility__GetIntegerSettingsAsync (uint32_t* asyncId, intptr_t pNgsFacade, uint32_t integerSettingIndex, int32_t timeOut, NexPlugin_Utility_GetIntegerSettingsCB_o* callback, const MethodInfo* method);
bool NexPlugin_Utility__IsValidNexUniqueId (uint64_t nexUniqueId, const MethodInfo* method);
