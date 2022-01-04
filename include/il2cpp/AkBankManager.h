#pragma once

#include "il2cpp.h"

void AkBankManager__DoUnloadBanks (const MethodInfo* method);
void AkBankManager__Reset (const MethodInfo* method);
void AkBankManager__LoadInitBank (bool doReset, const MethodInfo* method);
void AkBankManager__UnloadInitBank (const MethodInfo* method);
void AkBankManager__LoadBank (System_String_o* name, bool decodeBank, bool saveDecodedBank, const MethodInfo* method);
void AkBankManager__LoadBankAsync (System_String_o* name, AkCallbackManager_BankCallback_o* callback, const MethodInfo* method);
void AkBankManager__UnloadBank (System_String_o* name, const MethodInfo* method);
void AkBankManager___cctor (const MethodInfo* method);
