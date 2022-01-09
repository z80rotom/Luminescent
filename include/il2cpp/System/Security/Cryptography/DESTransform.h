#pragma once

#include "il2cpp.h"

void System_Security_Cryptography_DESTransform___ctor (System_Security_Cryptography_DESTransform_o* __this, System_Security_Cryptography_SymmetricAlgorithm_o* symmAlgo, bool encryption, System_Byte_array* key, System_Byte_array* iv, const MethodInfo* method_info);
uint32_t System_Security_Cryptography_DESTransform__CipherFunct (System_Security_Cryptography_DESTransform_o* __this, uint32_t r, int32_t n, const MethodInfo* method_info);
void System_Security_Cryptography_DESTransform__Permutation (System_Byte_array* input, System_Byte_array* output, System_UInt32_array* permTab, bool preSwap, const MethodInfo* method_info);
void System_Security_Cryptography_DESTransform__BSwap (System_Byte_array* byteBuff, const MethodInfo* method_info);
void System_Security_Cryptography_DESTransform__SetKey (System_Security_Cryptography_DESTransform_o* __this, System_Byte_array* key, const MethodInfo* method_info);
void System_Security_Cryptography_DESTransform__ProcessBlock (System_Security_Cryptography_DESTransform_o* __this, System_Byte_array* input, System_Byte_array* output, const MethodInfo* method_info);
void System_Security_Cryptography_DESTransform__ECB (System_Security_Cryptography_DESTransform_o* __this, System_Byte_array* input, System_Byte_array* output, const MethodInfo* method_info);
System_Byte_array* System_Security_Cryptography_DESTransform__GetStrongKey (const MethodInfo* method_info);
void System_Security_Cryptography_DESTransform___cctor (const MethodInfo* method_info);
