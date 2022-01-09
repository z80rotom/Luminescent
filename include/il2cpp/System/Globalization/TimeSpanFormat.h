#pragma once

#include "il2cpp.h"

System_String_o* System_Globalization_TimeSpanFormat__IntToString (int32_t n, int32_t digits, const MethodInfo* method_info);
System_String_o* System_Globalization_TimeSpanFormat__Format (System_TimeSpan_o value, System_String_o* format, System_IFormatProvider_o* formatProvider, const MethodInfo* method_info);
System_String_o* System_Globalization_TimeSpanFormat__FormatStandard (System_TimeSpan_o value, bool isInvariant, System_String_o* format, int32_t pattern, const MethodInfo* method_info);
System_String_o* System_Globalization_TimeSpanFormat__FormatCustomized (System_TimeSpan_o value, System_String_o* format, System_Globalization_DateTimeFormatInfo_o* dtfi, const MethodInfo* method_info);
void System_Globalization_TimeSpanFormat___cctor (const MethodInfo* method_info);
