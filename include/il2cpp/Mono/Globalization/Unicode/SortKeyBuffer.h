#pragma once

#include "il2cpp.h"

void Mono_Globalization_Unicode_SortKeyBuffer___ctor (Mono_Globalization_Unicode_SortKeyBuffer_o* __this, int32_t lcid, const MethodInfo* method);
void Mono_Globalization_Unicode_SortKeyBuffer__Reset (Mono_Globalization_Unicode_SortKeyBuffer_o* __this, const MethodInfo* method);
void Mono_Globalization_Unicode_SortKeyBuffer__Initialize (Mono_Globalization_Unicode_SortKeyBuffer_o* __this, int32_t options, int32_t lcid, System_String_o* s, bool frenchSort, const MethodInfo* method);
void Mono_Globalization_Unicode_SortKeyBuffer__AppendCJKExtension (Mono_Globalization_Unicode_SortKeyBuffer_o* __this, uint8_t lv1msb, uint8_t lv1lsb, const MethodInfo* method);
void Mono_Globalization_Unicode_SortKeyBuffer__AppendKana (Mono_Globalization_Unicode_SortKeyBuffer_o* __this, uint8_t category, uint8_t lv1, uint8_t lv2, uint8_t lv3, bool isSmallKana, uint8_t markType, bool isKatakana, bool isHalfWidth, const MethodInfo* method);
void Mono_Globalization_Unicode_SortKeyBuffer__AppendNormal (Mono_Globalization_Unicode_SortKeyBuffer_o* __this, uint8_t category, uint8_t lv1, uint8_t lv2, uint8_t lv3, const MethodInfo* method);
void Mono_Globalization_Unicode_SortKeyBuffer__AppendLevel5 (Mono_Globalization_Unicode_SortKeyBuffer_o* __this, uint8_t category, uint8_t lv1, const MethodInfo* method);
void Mono_Globalization_Unicode_SortKeyBuffer__AppendBufferPrimitive (Mono_Globalization_Unicode_SortKeyBuffer_o* __this, uint8_t value, System_Byte_array** buf, int32_t* bidx, const MethodInfo* method);
System_Globalization_SortKey_o* Mono_Globalization_Unicode_SortKeyBuffer__GetResultAndReset (Mono_Globalization_Unicode_SortKeyBuffer_o* __this, const MethodInfo* method);
int32_t Mono_Globalization_Unicode_SortKeyBuffer__GetOptimizedLength (Mono_Globalization_Unicode_SortKeyBuffer_o* __this, System_Byte_array* data, int32_t len, uint8_t defaultValue, const MethodInfo* method);
System_Globalization_SortKey_o* Mono_Globalization_Unicode_SortKeyBuffer__GetResult (Mono_Globalization_Unicode_SortKeyBuffer_o* __this, const MethodInfo* method);
