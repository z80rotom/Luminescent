#pragma once

#include "il2cpp.h"

void AkBankManager_AsyncBankHandle___ctor (AkBankManager_AsyncBankHandle_o* __this, System_String_o* name, AkCallbackManager_BankCallback_o* callback, const MethodInfo* method_info);
void AkBankManager_AsyncBankHandle__GlobalBankCallback (uint32_t in_bankID, intptr_t in_pInMemoryBankPtr, int32_t in_eLoadResult, Il2CppObject* in_Cookie, const MethodInfo* method_info);
int32_t AkBankManager_AsyncBankHandle__DoLoadBank (AkBankManager_AsyncBankHandle_o* __this, const MethodInfo* method_info);
