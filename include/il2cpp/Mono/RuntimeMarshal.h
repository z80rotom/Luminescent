#pragma once

#include "il2cpp.h"

System_String_o* Mono_RuntimeMarshal__PtrToUtf8String (intptr_t ptr, const MethodInfo* method_info);
Mono_SafeStringMarshal_o Mono_RuntimeMarshal__MarshalString (System_String_o* str, const MethodInfo* method_info);
int32_t Mono_RuntimeMarshal__DecodeBlobSize (intptr_t in_ptr, intptr_t* out_ptr, const MethodInfo* method_info);
System_Byte_array* Mono_RuntimeMarshal__DecodeBlobArray (intptr_t ptr, const MethodInfo* method_info);
int32_t Mono_RuntimeMarshal__AsciHexDigitValue (int32_t c, const MethodInfo* method_info);
void Mono_RuntimeMarshal__FreeAssemblyName (Mono_MonoAssemblyName_o* name, bool freeStruct, const MethodInfo* method_info);
