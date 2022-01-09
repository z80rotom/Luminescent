#pragma once

#include "il2cpp.h"

bool System_Number__NumberBufferToDecimal (uint8_t* number, System_Decimal_o* value, const MethodInfo* method_info);
bool System_Number__NumberBufferToDouble (uint8_t* number, double* value, const MethodInfo* method_info);
System_String_o* System_Number__FormatDecimal (System_Decimal_o value, System_String_o* format, System_Globalization_NumberFormatInfo_o* info, const MethodInfo* method_info);
System_String_o* System_Number__FormatDouble (double value, System_String_o* format, System_Globalization_NumberFormatInfo_o* info, const MethodInfo* method_info);
System_String_o* System_Number__FormatInt32 (int32_t value, System_String_o* format, System_Globalization_NumberFormatInfo_o* info, const MethodInfo* method_info);
System_String_o* System_Number__FormatUInt32 (uint32_t value, System_String_o* format, System_Globalization_NumberFormatInfo_o* info, const MethodInfo* method_info);
System_String_o* System_Number__FormatInt64 (int64_t value, System_String_o* format, System_Globalization_NumberFormatInfo_o* info, const MethodInfo* method_info);
System_String_o* System_Number__FormatUInt64 (uint64_t value, System_String_o* format, System_Globalization_NumberFormatInfo_o* info, const MethodInfo* method_info);
System_String_o* System_Number__FormatSingle (float value, System_String_o* format, System_Globalization_NumberFormatInfo_o* info, const MethodInfo* method_info);
bool System_Number__HexNumberToInt32 (System_Number_NumberBuffer_o* number, int32_t* value, const MethodInfo* method_info);
bool System_Number__HexNumberToInt64 (System_Number_NumberBuffer_o* number, int64_t* value, const MethodInfo* method_info);
bool System_Number__HexNumberToUInt32 (System_Number_NumberBuffer_o* number, uint32_t* value, const MethodInfo* method_info);
bool System_Number__HexNumberToUInt64 (System_Number_NumberBuffer_o* number, uint64_t* value, const MethodInfo* method_info);
bool System_Number__IsWhite (uint16_t ch, const MethodInfo* method_info);
bool System_Number__NumberToInt32 (System_Number_NumberBuffer_o* number, int32_t* value, const MethodInfo* method_info);
bool System_Number__NumberToInt64 (System_Number_NumberBuffer_o* number, int64_t* value, const MethodInfo* method_info);
bool System_Number__NumberToUInt32 (System_Number_NumberBuffer_o* number, uint32_t* value, const MethodInfo* method_info);
bool System_Number__NumberToUInt64 (System_Number_NumberBuffer_o* number, uint64_t* value, const MethodInfo* method_info);
uint16_t* System_Number__MatchChars (uint16_t* p, System_String_o* str, const MethodInfo* method_info);
uint16_t* System_Number__MatchChars (uint16_t* p, uint16_t* str, const MethodInfo* method_info);
System_Decimal_o System_Number__ParseDecimal (System_String_o* value, int32_t options, System_Globalization_NumberFormatInfo_o* numfmt, const MethodInfo* method_info);
double System_Number__ParseDouble (System_String_o* value, int32_t options, System_Globalization_NumberFormatInfo_o* numfmt, const MethodInfo* method_info);
int32_t System_Number__ParseInt32 (System_String_o* s, int32_t style, System_Globalization_NumberFormatInfo_o* info, const MethodInfo* method_info);
int64_t System_Number__ParseInt64 (System_String_o* value, int32_t options, System_Globalization_NumberFormatInfo_o* numfmt, const MethodInfo* method_info);
bool System_Number__ParseNumber (uint16_t** str, int32_t options, System_Number_NumberBuffer_o* number, System_Text_StringBuilder_o* sb, System_Globalization_NumberFormatInfo_o* numfmt, bool parseDecimal, const MethodInfo* method_info);
float System_Number__ParseSingle (System_String_o* value, int32_t options, System_Globalization_NumberFormatInfo_o* numfmt, const MethodInfo* method_info);
uint32_t System_Number__ParseUInt32 (System_String_o* value, int32_t options, System_Globalization_NumberFormatInfo_o* numfmt, const MethodInfo* method_info);
uint64_t System_Number__ParseUInt64 (System_String_o* value, int32_t options, System_Globalization_NumberFormatInfo_o* numfmt, const MethodInfo* method_info);
void System_Number__StringToNumber (System_String_o* str, int32_t options, System_Number_NumberBuffer_o* number, System_Globalization_NumberFormatInfo_o* info, bool parseDecimal, const MethodInfo* method_info);
bool System_Number__TrailingZeros (System_String_o* s, int32_t index, const MethodInfo* method_info);
bool System_Number__TryParseDecimal (System_String_o* value, int32_t options, System_Globalization_NumberFormatInfo_o* numfmt, System_Decimal_o* result, const MethodInfo* method_info);
bool System_Number__TryParseInt32 (System_String_o* s, int32_t style, System_Globalization_NumberFormatInfo_o* info, int32_t* result, const MethodInfo* method_info);
bool System_Number__TryParseInt64 (System_String_o* s, int32_t style, System_Globalization_NumberFormatInfo_o* info, int64_t* result, const MethodInfo* method_info);
bool System_Number__TryParseSingle (System_String_o* value, int32_t options, System_Globalization_NumberFormatInfo_o* numfmt, float* result, const MethodInfo* method_info);
bool System_Number__TryParseUInt32 (System_String_o* s, int32_t style, System_Globalization_NumberFormatInfo_o* info, uint32_t* result, const MethodInfo* method_info);
bool System_Number__TryParseUInt64 (System_String_o* s, int32_t style, System_Globalization_NumberFormatInfo_o* info, uint64_t* result, const MethodInfo* method_info);
bool System_Number__TryStringToNumber (System_String_o* str, int32_t options, System_Number_NumberBuffer_o* number, System_Globalization_NumberFormatInfo_o* numfmt, bool parseDecimal, const MethodInfo* method_info);
bool System_Number__TryStringToNumber (System_String_o* str, int32_t options, System_Number_NumberBuffer_o* number, System_Text_StringBuilder_o* sb, System_Globalization_NumberFormatInfo_o* numfmt, bool parseDecimal, const MethodInfo* method_info);
