#pragma once

#include "il2cpp.h"

void System_DateTimeFormat__FormatDigits (System_Text_StringBuilder_o* outputBuffer, int32_t value, int32_t len, const MethodInfo* method_info);
void System_DateTimeFormat__FormatDigits (System_Text_StringBuilder_o* outputBuffer, int32_t value, int32_t len, bool overrideLengthLimit, const MethodInfo* method_info);
void System_DateTimeFormat__HebrewFormatDigits (System_Text_StringBuilder_o* outputBuffer, int32_t digits, const MethodInfo* method_info);
int32_t System_DateTimeFormat__ParseRepeatPattern (System_String_o* format, int32_t pos, uint16_t patternChar, const MethodInfo* method_info);
System_String_o* System_DateTimeFormat__FormatDayOfWeek (int32_t dayOfWeek, int32_t repeat, System_Globalization_DateTimeFormatInfo_o* dtfi, const MethodInfo* method_info);
System_String_o* System_DateTimeFormat__FormatMonth (int32_t month, int32_t repeatCount, System_Globalization_DateTimeFormatInfo_o* dtfi, const MethodInfo* method_info);
System_String_o* System_DateTimeFormat__FormatHebrewMonthName (System_DateTime_o time, int32_t month, int32_t repeatCount, System_Globalization_DateTimeFormatInfo_o* dtfi, const MethodInfo* method_info);
int32_t System_DateTimeFormat__ParseQuoteString (System_String_o* format, int32_t pos, System_Text_StringBuilder_o* result, const MethodInfo* method_info);
int32_t System_DateTimeFormat__ParseNextChar (System_String_o* format, int32_t pos, const MethodInfo* method_info);
bool System_DateTimeFormat__IsUseGenitiveForm (System_String_o* format, int32_t index, int32_t tokenLen, uint16_t patternToMatch, const MethodInfo* method_info);
System_String_o* System_DateTimeFormat__FormatCustomized (System_DateTime_o dateTime, System_String_o* format, System_Globalization_DateTimeFormatInfo_o* dtfi, System_TimeSpan_o offset, const MethodInfo* method_info);
void System_DateTimeFormat__FormatCustomizedTimeZone (System_DateTime_o dateTime, System_TimeSpan_o offset, System_String_o* format, int32_t tokenLen, bool timeOnly, System_Text_StringBuilder_o* result, const MethodInfo* method_info);
void System_DateTimeFormat__FormatCustomizedRoundripTimeZone (System_DateTime_o dateTime, System_TimeSpan_o offset, System_Text_StringBuilder_o* result, const MethodInfo* method_info);
System_String_o* System_DateTimeFormat__GetRealFormat (System_String_o* format, System_Globalization_DateTimeFormatInfo_o* dtfi, const MethodInfo* method_info);
System_String_o* System_DateTimeFormat__ExpandPredefinedFormat (System_String_o* format, System_DateTime_o* dateTime, System_Globalization_DateTimeFormatInfo_o** dtfi, System_TimeSpan_o* offset, const MethodInfo* method_info);
System_String_o* System_DateTimeFormat__Format (System_DateTime_o dateTime, System_String_o* format, System_Globalization_DateTimeFormatInfo_o* dtfi, const MethodInfo* method_info);
System_String_o* System_DateTimeFormat__Format (System_DateTime_o dateTime, System_String_o* format, System_Globalization_DateTimeFormatInfo_o* dtfi, System_TimeSpan_o offset, const MethodInfo* method_info);
void System_DateTimeFormat__InvalidFormatForLocal (System_String_o* format, System_DateTime_o dateTime, const MethodInfo* method_info);
void System_DateTimeFormat__InvalidFormatForUtc (System_String_o* format, System_DateTime_o dateTime, const MethodInfo* method_info);
void System_DateTimeFormat___cctor (const MethodInfo* method_info);
