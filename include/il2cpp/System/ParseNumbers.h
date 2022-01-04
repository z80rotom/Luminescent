#pragma once

#include "il2cpp.h"

int32_t System_ParseNumbers__StringToInt (System_String_o* value, int32_t fromBase, int32_t flags, const MethodInfo* method);
int32_t System_ParseNumbers__StringToInt (System_String_o* value, int32_t fromBase, int32_t flags, int32_t* parsePos, const MethodInfo* method);
int64_t System_ParseNumbers__StringToLong (System_String_o* value, int32_t fromBase, int32_t flags, int32_t* parsePos, const MethodInfo* method);
System_String_o* System_ParseNumbers__IntToString (int32_t value, int32_t toBase, int32_t width, uint16_t paddingChar, int32_t flags, const MethodInfo* method);
void System_ParseNumbers__EndianSwap (System_Byte_array** value, const MethodInfo* method);
System_Text_StringBuilder_o* System_ParseNumbers__ConvertToBase2 (System_Byte_array* value, const MethodInfo* method);
System_Text_StringBuilder_o* System_ParseNumbers__ConvertToBase8 (System_Byte_array* value, const MethodInfo* method);
System_Text_StringBuilder_o* System_ParseNumbers__ConvertToBase16 (System_Byte_array* value, const MethodInfo* method);
