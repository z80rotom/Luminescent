#pragma once

#include "il2cpp.h"

bool NexPlugin_Detail_NgsFacade__Ngs_LoginAsync (uint32_t asyncId, uint32_t gameServerId, NexPlugin_Detail_CppArray_o* accessKey, uint64_t nsaId, NexPlugin_Detail_CppArray_o* nsaIdToken, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_NgsFacade__LoginAsync (uint32_t* asyncId, uint32_t gameServerId, System_String_o* accessKey, nn_account_NetworkServiceAccountId_o nsaId, System_Byte_array* nsaIdToken, int32_t timeOut, NexPlugin_NgsFacade_LoginCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_NgsFacade__Ngs_LogoutAsync (uint32_t asyncId, intptr_t pNgsFacade, const MethodInfo* method_info);
bool NexPlugin_Detail_NgsFacade__LogoutAsync (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_NgsFacade__Ngs_TestConnectivityAsync (uint32_t asyncId, intptr_t pNgsFacade, const MethodInfo* method_info);
bool NexPlugin_Detail_NgsFacade__TestConnectivityAsync (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_NgsFacade_TestConnectivityCB_o* callback, const MethodInfo* method_info);
void NexPlugin_Detail_NgsFacade__NGSLoginResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method_info);
void NexPlugin_Detail_NgsFacade__TestConnectivityResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method_info);
void NexPlugin_Detail_NgsFacade__Callback (NexPlugin_Detail_AsyncResultInt_o res, Il2CppObject* callback, const MethodInfo* method_info);
