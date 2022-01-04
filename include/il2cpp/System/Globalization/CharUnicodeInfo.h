#pragma once

#include "il2cpp.h"

int32_t System_Globalization_CharUnicodeInfo__InternalConvertToUtf32 (System_String_o* s, int32_t index, const MethodInfo* method);
int32_t System_Globalization_CharUnicodeInfo__InternalConvertToUtf32 (System_String_o* s, int32_t index, int32_t* charLength, const MethodInfo* method);
bool System_Globalization_CharUnicodeInfo__IsWhiteSpace (uint16_t c, const MethodInfo* method);
int32_t System_Globalization_CharUnicodeInfo__GetUnicodeCategory (uint16_t ch, const MethodInfo* method);
int32_t System_Globalization_CharUnicodeInfo__InternalGetUnicodeCategory (int32_t ch, const MethodInfo* method);
uint8_t System_Globalization_CharUnicodeInfo__InternalGetCategoryValue (int32_t ch, int32_t offset, const MethodInfo* method);
int32_t System_Globalization_CharUnicodeInfo__InternalGetUnicodeCategory (System_String_o* value, int32_t index, const MethodInfo* method);
int32_t System_Globalization_CharUnicodeInfo__InternalGetUnicodeCategory (System_String_o* str, int32_t index, int32_t* charLength, const MethodInfo* method);
void System_Globalization_CharUnicodeInfo___cctor (const MethodInfo* method);
