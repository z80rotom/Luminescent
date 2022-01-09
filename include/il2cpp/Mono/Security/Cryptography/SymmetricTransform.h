#pragma once

#include "il2cpp.h"

void Mono_Security_Cryptography_SymmetricTransform___ctor (Mono_Security_Cryptography_SymmetricTransform_o* __this, System_Security_Cryptography_SymmetricAlgorithm_o* symmAlgo, bool encryption, System_Byte_array* rgbIV, const MethodInfo* method_info);
void Mono_Security_Cryptography_SymmetricTransform__Finalize (Mono_Security_Cryptography_SymmetricTransform_o* __this, const MethodInfo* method_info);
void Mono_Security_Cryptography_SymmetricTransform__System_IDisposable_Dispose (Mono_Security_Cryptography_SymmetricTransform_o* __this, const MethodInfo* method_info);
void Mono_Security_Cryptography_SymmetricTransform__Dispose (Mono_Security_Cryptography_SymmetricTransform_o* __this, bool disposing, const MethodInfo* method_info);
void Mono_Security_Cryptography_SymmetricTransform__Transform (Mono_Security_Cryptography_SymmetricTransform_o* __this, System_Byte_array* input, System_Byte_array* output, const MethodInfo* method_info);
void Mono_Security_Cryptography_SymmetricTransform__CBC (Mono_Security_Cryptography_SymmetricTransform_o* __this, System_Byte_array* input, System_Byte_array* output, const MethodInfo* method_info);
void Mono_Security_Cryptography_SymmetricTransform__CFB (Mono_Security_Cryptography_SymmetricTransform_o* __this, System_Byte_array* input, System_Byte_array* output, const MethodInfo* method_info);
void Mono_Security_Cryptography_SymmetricTransform__OFB (Mono_Security_Cryptography_SymmetricTransform_o* __this, System_Byte_array* input, System_Byte_array* output, const MethodInfo* method_info);
void Mono_Security_Cryptography_SymmetricTransform__CTS (Mono_Security_Cryptography_SymmetricTransform_o* __this, System_Byte_array* input, System_Byte_array* output, const MethodInfo* method_info);
void Mono_Security_Cryptography_SymmetricTransform__CheckInput (Mono_Security_Cryptography_SymmetricTransform_o* __this, System_Byte_array* inputBuffer, int32_t inputOffset, int32_t inputCount, const MethodInfo* method_info);
bool Mono_Security_Cryptography_SymmetricTransform__get_KeepLastBlock (Mono_Security_Cryptography_SymmetricTransform_o* __this, const MethodInfo* method_info);
int32_t Mono_Security_Cryptography_SymmetricTransform__InternalTransformBlock (Mono_Security_Cryptography_SymmetricTransform_o* __this, System_Byte_array* inputBuffer, int32_t inputOffset, int32_t inputCount, System_Byte_array* outputBuffer, int32_t outputOffset, const MethodInfo* method_info);
void Mono_Security_Cryptography_SymmetricTransform__Random (Mono_Security_Cryptography_SymmetricTransform_o* __this, System_Byte_array* buffer, int32_t start, int32_t length, const MethodInfo* method_info);
void Mono_Security_Cryptography_SymmetricTransform__ThrowBadPaddingException (Mono_Security_Cryptography_SymmetricTransform_o* __this, int32_t padding, int32_t length, int32_t position, const MethodInfo* method_info);
System_Byte_array* Mono_Security_Cryptography_SymmetricTransform__FinalEncrypt (Mono_Security_Cryptography_SymmetricTransform_o* __this, System_Byte_array* inputBuffer, int32_t inputOffset, int32_t inputCount, const MethodInfo* method_info);
System_Byte_array* Mono_Security_Cryptography_SymmetricTransform__FinalDecrypt (Mono_Security_Cryptography_SymmetricTransform_o* __this, System_Byte_array* inputBuffer, int32_t inputOffset, int32_t inputCount, const MethodInfo* method_info);
System_Byte_array* Mono_Security_Cryptography_SymmetricTransform__TransformFinalBlock (Mono_Security_Cryptography_SymmetricTransform_o* __this, System_Byte_array* inputBuffer, int32_t inputOffset, int32_t inputCount, const MethodInfo* method_info);
