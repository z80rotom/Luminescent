#pragma once

#include "il2cpp.h"

bool NexPlugin_NgsFacade__RegisterNotificationEventHandler (NexPlugin_NotificationEventCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_NgsFacade__UnregisterNotificationEventHandler (NexPlugin_NotificationEventCB_o* callback, const MethodInfo* method_info);
nn_Result_o NexPlugin_NgsFacade__IsConnected (intptr_t pNgsFacade, const MethodInfo* method_info);
uint64_t NexPlugin_NgsFacade__GetPrincipalID (intptr_t pNgsFacade, const MethodInfo* method_info);
bool NexPlugin_NgsFacade__LoginAsync (uint32_t* asyncId, uint32_t gameServerId, System_String_o* accessKey, nn_account_NetworkServiceAccountId_o nsaId, System_Byte_array* nsaIdToken, int32_t timeOut, NexPlugin_NgsFacade_LoginCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_NgsFacade__LogoutAsync (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_NgsFacade__TestConnectivityAsync (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_NgsFacade_TestConnectivityCB_o* callback, const MethodInfo* method_info);
