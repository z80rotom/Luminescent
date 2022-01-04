#pragma once

#include "il2cpp.h"

void AkCallbackManager_BankCallback___ctor (AkCallbackManager_BankCallback_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
void AkCallbackManager_BankCallback__Invoke (AkCallbackManager_BankCallback_o* __this, uint32_t in_bankID, intptr_t in_InMemoryBankPtr, int32_t in_eLoadResult, Il2CppObject* in_Cookie, const MethodInfo* method);
System_IAsyncResult_o* AkCallbackManager_BankCallback__BeginInvoke (AkCallbackManager_BankCallback_o* __this, uint32_t in_bankID, intptr_t in_InMemoryBankPtr, int32_t in_eLoadResult, Il2CppObject* in_Cookie, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
void AkCallbackManager_BankCallback__EndInvoke (AkCallbackManager_BankCallback_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
