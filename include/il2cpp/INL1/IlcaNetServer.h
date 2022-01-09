#pragma once

#include "il2cpp.h"

bool INL1_IlcaNetServer__Init (UnityEngine_MonoBehaviour_o* callobj, nn_account_UserHandle_o uh, uint64_t nexUniqueId, uint64_t nexUniqueIdPassword, const MethodInfo* method_info);
void INL1_IlcaNetServer__Init (UnityEngine_MonoBehaviour_o* callobj, nn_account_UserHandle_o uh, INL1_IlcaNetServer_UserNexUniqueIdAcquireCallback_o* func, const MethodInfo* method_info);
void INL1_IlcaNetServer__InitSub (UnityEngine_MonoBehaviour_o* callobj, nn_account_UserHandle_o uh, const MethodInfo* method_info);
void INL1_IlcaNetServer__NexAssetsAutoLoginLogoutControl (const MethodInfo* method_info);
void INL1_IlcaNetServer__NexAssetsAutoLoginControl (bool on, const MethodInfo* method_info);
void INL1_IlcaNetServer__NexAssetsAutoLogoutControl (bool on, const MethodInfo* method_info);
void INL1_IlcaNetServer__MainThreadDispatchControl (bool on, const MethodInfo* method_info);
bool INL1_IlcaNetServer__MainThreadDispatchControlState (const MethodInfo* method_info);
void INL1_IlcaNetServer__StartX (const MethodInfo* method_info);
void INL1_IlcaNetServer__LostCallback (const MethodInfo* method_info);
void INL1_IlcaNetServer__LostCallbackNGS (uint64_t principalId, const MethodInfo* method_info);
bool INL1_IlcaNetServer__IsRunning (const MethodInfo* method_info);
void INL1_IlcaNetServer__baseCallback (NexPlugin_AsyncResult_o* asyncResult, const MethodInfo* method_info);
int32_t INL1_IlcaNetServer__IsFinalAsyncNeed (const MethodInfo* method_info);
bool INL1_IlcaNetServer__FinalAsyncCoRoutine (UnityEngine_MonoBehaviour_o* callobj, INL1_IlcaNetServer_IlcaNetServerFinalAsyncCallback_o* callback, const MethodInfo* method_info);
bool INL1_IlcaNetServer__FinalAsyncCoRoutineCoreUpdateDispatchWorkerSet (const MethodInfo* method_info);
void INL1_IlcaNetServer__FinalAsyncCoRoutineCoreUpdateDispatchWorkerTh (const MethodInfo* method_info);
void INL1_IlcaNetServer__FinalAsyncCoRoutineCoreCallback (NexPlugin_AsyncResult_o* asyncResult, const MethodInfo* method_info);
bool INL1_IlcaNetServer__FinalAsyncFinishWorkerSet (const MethodInfo* method_info);
void INL1_IlcaNetServer__FinalAsyncFinishWorkerTh (const MethodInfo* method_info);
System_Collections_IEnumerator_o* INL1_IlcaNetServer__FinalAsyncCoRoutineCore (INL1_IlcaNetServer_IlcaNetServerFinalAsyncCallback_o* callback, const MethodInfo* method_info);
void INL1_IlcaNetServer__Final (const MethodInfo* method_info);
void INL1_IlcaNetServer__NexErrorHandling (NexPlugin_AsyncResult_o* asyncResult, const MethodInfo* method_info);
bool INL1_IlcaNetServer__IlcaNetNexUniqueIdAcquireAsync (INL1_IlcaNetServer_UserNexUniqueIdAcquireCallback_o* func, const MethodInfo* method_info);
void INL1_IlcaNetServer__IlcaNetNexUniqueIdAcquireAsyncCallback_noPassword (NexPlugin_AsyncResult_o* asyncResult, uint64_t nexUniqueId, const MethodInfo* method_info);
void INL1_IlcaNetServer__IlcaNetNexUniqueIdAcquireAsyncCallback (NexPlugin_AsyncResult_o* asyncResult, NexPlugin_UniqueIdInfo_o* uniqueIdInfo, const MethodInfo* method_info);
void INL1_IlcaNetServer__IlcaNetNexUniqueIdAcquireAsyncAfterCallback (NexPlugin_AsyncResult_o* asyncResult, const MethodInfo* method_info);
void INL1_IlcaNetServer__IlcaNetNexUniqueIdAcquireAsyncAfterAfterSuccessCallback (const MethodInfo* method_info);
void INL1_IlcaNetServer__IlcaNetNexUniqueIdAcquireAsyncAfterAfterFailureCallback (const MethodInfo* method_info);
bool INL1_IlcaNetServer__NSAIDtokenGetAsync (UnityEngine_MonoBehaviour_o* callobj, nn_account_UserHandle_o uh, INL1_IlcaNetServer_IlcaNetServerAsyncCallback_o* callback, const MethodInfo* method_info);
bool INL1_IlcaNetServer__NSAIDtokenGetAsync (UnityEngine_MonoBehaviour_o* callobj, INL1_IlcaNetServer_IlcaNetServerAsyncCallback_o* callback, const MethodInfo* method_info);
System_Collections_IEnumerator_o* INL1_IlcaNetServer__NSAIDtokenGetAsyncCore (nn_account_UserHandle_o uh, INL1_IlcaNetServer_IlcaNetServerAsyncCallback_o* callback, const MethodInfo* method_info);
void INL1_IlcaNetServer___ctor (INL1_IlcaNetServer_o* __this, const MethodInfo* method_info);
void INL1_IlcaNetServer___cctor (const MethodInfo* method_info);
