#pragma once

#include "il2cpp.h"

System_Byte_array* Mono_Security_BitConverterLE__GetUIntBytes (uint8_t* bytes, const MethodInfo* method);
System_Byte_array* Mono_Security_BitConverterLE__GetULongBytes (uint8_t* bytes, const MethodInfo* method);
System_Byte_array* Mono_Security_BitConverterLE__GetBytes (float value, const MethodInfo* method);
System_Byte_array* Mono_Security_BitConverterLE__GetBytes (double value, const MethodInfo* method);
void Mono_Security_BitConverterLE__UIntFromBytes (uint8_t* dst, System_Byte_array* src, int32_t startIndex, const MethodInfo* method);
void Mono_Security_BitConverterLE__ULongFromBytes (uint8_t* dst, System_Byte_array* src, int32_t startIndex, const MethodInfo* method);
float Mono_Security_BitConverterLE__ToSingle (System_Byte_array* value, int32_t startIndex, const MethodInfo* method);
double Mono_Security_BitConverterLE__ToDouble (System_Byte_array* value, int32_t startIndex, const MethodInfo* method);
System_Byte_array* Mono_Security_BitConverterLE__GetUIntBytes (uint8_t* bytes, const MethodInfo* method);
System_Byte_array* Mono_Security_BitConverterLE__GetBytes (int32_t value, const MethodInfo* method);
