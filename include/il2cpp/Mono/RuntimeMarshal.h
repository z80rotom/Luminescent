#pragma once

#include "il2cpp.h"

System_String_o* Mono_RuntimeMarshal__PtrToUtf8String (intptr_t ptr, const MethodInfo* method);
Mono_SafeStringMarshal_o Mono_RuntimeMarshal__MarshalString (System_String_o* str, const MethodInfo* method);
int32_t Mono_RuntimeMarshal__DecodeBlobSize (intptr_t in_ptr, intptr_t* out_ptr, const MethodInfo* method);
System_Byte_array* Mono_RuntimeMarshal__DecodeBlobArray (intptr_t ptr, const MethodInfo* method);
int32_t Mono_RuntimeMarshal__AsciHexDigitValue (int32_t c, const MethodInfo* method);
void Mono_RuntimeMarshal__FreeAssemblyName (Mono_MonoAssemblyName_o* name, bool freeStruct, const MethodInfo* method);
