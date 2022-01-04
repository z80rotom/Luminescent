#pragma once

#include "il2cpp.h"

void System_Security_Cryptography_SHA1Internal___ctor (System_Security_Cryptography_SHA1Internal_o* __this, const MethodInfo* method);
void System_Security_Cryptography_SHA1Internal__HashCore (System_Security_Cryptography_SHA1Internal_o* __this, System_Byte_array* rgb, int32_t ibStart, int32_t cbSize, const MethodInfo* method);
System_Byte_array* System_Security_Cryptography_SHA1Internal__HashFinal (System_Security_Cryptography_SHA1Internal_o* __this, const MethodInfo* method);
void System_Security_Cryptography_SHA1Internal__Initialize (System_Security_Cryptography_SHA1Internal_o* __this, const MethodInfo* method);
void System_Security_Cryptography_SHA1Internal__ProcessBlock (System_Security_Cryptography_SHA1Internal_o* __this, System_Byte_array* inputBuffer, uint32_t inputOffset, const MethodInfo* method);
void System_Security_Cryptography_SHA1Internal__InitialiseBuff (System_UInt32_array* buff, System_Byte_array* input, uint32_t inputOffset, const MethodInfo* method);
void System_Security_Cryptography_SHA1Internal__FillBuff (System_UInt32_array* buff, const MethodInfo* method);
void System_Security_Cryptography_SHA1Internal__ProcessFinalBlock (System_Security_Cryptography_SHA1Internal_o* __this, System_Byte_array* inputBuffer, int32_t inputOffset, int32_t inputCount, const MethodInfo* method);
void System_Security_Cryptography_SHA1Internal__AddLength (System_Security_Cryptography_SHA1Internal_o* __this, uint64_t length, System_Byte_array* buffer, int32_t position, const MethodInfo* method);
