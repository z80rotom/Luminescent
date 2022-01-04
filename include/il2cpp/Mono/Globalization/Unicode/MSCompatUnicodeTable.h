#pragma once

#include "il2cpp.h"

Mono_Globalization_Unicode_TailoringInfo_o* Mono_Globalization_Unicode_MSCompatUnicodeTable__GetTailoringInfo (int32_t lcid, const MethodInfo* method);
void Mono_Globalization_Unicode_MSCompatUnicodeTable__BuildTailoringTables (System_Globalization_CultureInfo_o* culture, Mono_Globalization_Unicode_TailoringInfo_o* t, Mono_Globalization_Unicode_Contraction_array** contractions, Mono_Globalization_Unicode_Level2Map_array** diacriticals, const MethodInfo* method);
void Mono_Globalization_Unicode_MSCompatUnicodeTable__SetCJKReferences (System_String_o* name, Mono_Globalization_Unicode_CodePointIndexer_o** cjkIndexer, uint8_t** catTable, uint8_t** lv1Table, Mono_Globalization_Unicode_CodePointIndexer_o** lv2Indexer, uint8_t** lv2Table, const MethodInfo* method);
uint8_t Mono_Globalization_Unicode_MSCompatUnicodeTable__Category (int32_t cp, const MethodInfo* method);
uint8_t Mono_Globalization_Unicode_MSCompatUnicodeTable__Level1 (int32_t cp, const MethodInfo* method);
uint8_t Mono_Globalization_Unicode_MSCompatUnicodeTable__Level2 (int32_t cp, const MethodInfo* method);
uint8_t Mono_Globalization_Unicode_MSCompatUnicodeTable__Level3 (int32_t cp, const MethodInfo* method);
bool Mono_Globalization_Unicode_MSCompatUnicodeTable__IsIgnorable (int32_t cp, uint8_t flag, const MethodInfo* method);
bool Mono_Globalization_Unicode_MSCompatUnicodeTable__IsIgnorableNonSpacing (int32_t cp, const MethodInfo* method);
int32_t Mono_Globalization_Unicode_MSCompatUnicodeTable__ToKanaTypeInsensitive (int32_t i, const MethodInfo* method);
int32_t Mono_Globalization_Unicode_MSCompatUnicodeTable__ToWidthCompat (int32_t i, const MethodInfo* method);
bool Mono_Globalization_Unicode_MSCompatUnicodeTable__HasSpecialWeight (uint16_t c, const MethodInfo* method);
bool Mono_Globalization_Unicode_MSCompatUnicodeTable__IsHalfWidthKana (uint16_t c, const MethodInfo* method);
bool Mono_Globalization_Unicode_MSCompatUnicodeTable__IsHiragana (uint16_t c, const MethodInfo* method);
bool Mono_Globalization_Unicode_MSCompatUnicodeTable__IsJapaneseSmallLetter (uint16_t c, const MethodInfo* method);
bool Mono_Globalization_Unicode_MSCompatUnicodeTable__get_IsReady (const MethodInfo* method);
intptr_t Mono_Globalization_Unicode_MSCompatUnicodeTable__GetResource (System_String_o* name, const MethodInfo* method);
uint32_t Mono_Globalization_Unicode_MSCompatUnicodeTable__UInt32FromBytePtr (uint8_t* raw, uint32_t idx, const MethodInfo* method);
void Mono_Globalization_Unicode_MSCompatUnicodeTable___cctor (const MethodInfo* method);
void Mono_Globalization_Unicode_MSCompatUnicodeTable__FillCJK (System_String_o* culture, Mono_Globalization_Unicode_CodePointIndexer_o** cjkIndexer, uint8_t** catTable, uint8_t** lv1Table, Mono_Globalization_Unicode_CodePointIndexer_o** lv2Indexer, uint8_t** lv2Table, const MethodInfo* method);
void Mono_Globalization_Unicode_MSCompatUnicodeTable__FillCJKCore (System_String_o* culture, Mono_Globalization_Unicode_CodePointIndexer_o** cjkIndexer, uint8_t** catTable, uint8_t** lv1Table, Mono_Globalization_Unicode_CodePointIndexer_o** cjkLv2Indexer, uint8_t** lv2Table, const MethodInfo* method);
