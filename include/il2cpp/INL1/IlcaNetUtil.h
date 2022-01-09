#pragma once

#include "il2cpp.h"

bool INL1_IlcaNetUtil__InternetGo (UnityEngine_MonoBehaviour_o* callobj, nn_account_UserHandle_o uh, uint64_t nexUniqueId, uint64_t nexUniqueIdPassword, bool ngsLogin, INL1_IlcaNetUtil_IlcaNetUtilInternetGoCallBack_o* userCallback, bool freePass, const MethodInfo* method_info);
System_Collections_IEnumerator_o* INL1_IlcaNetUtil__InternetGoCore (UnityEngine_MonoBehaviour_o* callobj, nn_account_UserHandle_o uh, uint64_t nexUniqueId, uint64_t nexUniqueIdPassword, bool ngsLogin, INL1_IlcaNetUtil_IlcaNetUtilInternetGoCallBack_o* userCallback, bool freePass, const MethodInfo* method_info);
void INL1_IlcaNetUtil__InternetGoCallbackNEXUID (bool isSuccess, uint64_t nexUniqueId, uint64_t nexUniqueIdPassword, const MethodInfo* method_info);
void INL1_IlcaNetUtil__InternetGoCallbackNSAIDT (bool isSuccess, int32_t eve, int32_t result, int64_t responseCode, System_String_o* responseStr, const MethodInfo* method_info);
void INL1_IlcaNetUtil__InternetGoNexFinalizeCallback (const MethodInfo* method_info);
void INL1_IlcaNetUtil__InternetGoNexInitializeCallback (NexPlugin_AsyncResult_o* asyncResult, const MethodInfo* method_info);
void INL1_IlcaNetUtil__InternetGoCallbackNGSlogin (NexPlugin_AsyncResult_o* asyncResult, uint64_t principalId, intptr_t pNgsFacade, const MethodInfo* method_info);
void INL1_IlcaNetUtil__NextAbort (bool isSuccess, const MethodInfo* method_info);
void INL1_IlcaNetUtil__FocusHandleNotify (const MethodInfo* method_info);
int32_t INL1_IlcaNetUtil__InternetConnectStatus (const MethodInfo* method_info);
bool INL1_IlcaNetUtil__InternetBack (UnityEngine_MonoBehaviour_o* callobj, INL1_IlcaNetUtil_IlcaNetUtilInternetBackCallBack_o* userCallback, const MethodInfo* method_info);
void INL1_IlcaNetUtil__InternetBackCallback (const MethodInfo* method_info);
void INL1_IlcaNetUtil___ctor (INL1_IlcaNetUtil_o* __this, const MethodInfo* method_info);
void INL1_IlcaNetUtil___cctor (const MethodInfo* method_info);
