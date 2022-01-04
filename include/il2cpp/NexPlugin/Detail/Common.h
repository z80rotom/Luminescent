#pragma once

#include "il2cpp.h"

bool NexPlugin_Detail_Common__InitializeNexAsyncInt (uint32_t asyncId, int32_t threadMode, const MethodInfo* method);
bool NexPlugin_Detail_Common__InitializeNexAsync (uint32_t* asyncId, int32_t threadMode, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method);
bool NexPlugin_Detail_Common__FinalizeNexAsyncInt (uint32_t asyncId, const MethodInfo* method);
bool NexPlugin_Detail_Common__FinalizeNexAsync (uint32_t* asyncId, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method);
void NexPlugin_Detail_Common__SetTerminateImmediately (uint32_t terminate, const MethodInfo* method);
uint32_t NexPlugin_Detail_Common__DispatchInt (uint32_t dispatchTimeout, uint32_t dispatchFlags, const MethodInfo* method);
uint32_t NexPlugin_Detail_Common__Dispatch (uint32_t dispatchTimeout, System_Nullable_Common_DispachFlag__o dispatchFlags, const MethodInfo* method);
void NexPlugin_Detail_Common__DispatchAll (const MethodInfo* method);
uint32_t NexPlugin_Detail_Common__GetReadyJobsSize (const MethodInfo* method);
bool NexPlugin_Detail_Common__UpdateAsyncResultInt (intptr_t* pAsyncResult, const MethodInfo* method);
bool NexPlugin_Detail_Common__UpdateAsyncResult (const MethodInfo* method);
void NexPlugin_Detail_Common__InitAsyncResultByAsyncId (uint32_t asyncId, const MethodInfo* method);
void NexPlugin_Detail_Common__Wait (uint32_t dispatchTimeOut, System_Nullable_Common_DispachFlag__o dispatchFlags, const MethodInfo* method);
bool NexPlugin_Detail_Common__GetNotificationEventInt (intptr_t* pNotificationEvent, const MethodInfo* method);
bool NexPlugin_Detail_Common__GetNotificationEvent (const MethodInfo* method);
void NexPlugin_Detail_Common__Callback (NexPlugin_Detail_AsyncResultInt_o res, Il2CppObject* callback, const MethodInfo* method);
void NexPlugin_Detail_Common___cctor (const MethodInfo* method);
