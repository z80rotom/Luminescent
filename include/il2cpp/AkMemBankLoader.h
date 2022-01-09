#pragma once

#include "il2cpp.h"

void AkMemBankLoader__Start (AkMemBankLoader_o* __this, const MethodInfo* method_info);
void AkMemBankLoader__LoadNonLocalizedBank (AkMemBankLoader_o* __this, System_String_o* in_bankFilename, const MethodInfo* method_info);
void AkMemBankLoader__LoadLocalizedBank (AkMemBankLoader_o* __this, System_String_o* in_bankFilename, const MethodInfo* method_info);
uint32_t AkMemBankLoader__AllocateAlignedBuffer (AkMemBankLoader_o* __this, System_Byte_array* data, const MethodInfo* method_info);
System_Collections_IEnumerator_o* AkMemBankLoader__LoadFile (AkMemBankLoader_o* __this, const MethodInfo* method_info);
void AkMemBankLoader__DoLoadBank (AkMemBankLoader_o* __this, System_String_o* in_bankPath, const MethodInfo* method_info);
void AkMemBankLoader__OnDestroy (AkMemBankLoader_o* __this, const MethodInfo* method_info);
void AkMemBankLoader___ctor (AkMemBankLoader_o* __this, const MethodInfo* method_info);
