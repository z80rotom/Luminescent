#pragma once

#include "il2cpp.h"

void System_NumberFormatter_CustomInfo__GetActiveSection (System_String_o* format, bool* positive, bool zero, int32_t* offset, int32_t* length, const MethodInfo* method_info);
System_NumberFormatter_CustomInfo_o* System_NumberFormatter_CustomInfo__Parse (System_String_o* format, int32_t offset, int32_t length, System_Globalization_NumberFormatInfo_o* nfi, const MethodInfo* method_info);
System_String_o* System_NumberFormatter_CustomInfo__Format (System_NumberFormatter_CustomInfo_o* __this, System_String_o* format, int32_t offset, int32_t length, System_Globalization_NumberFormatInfo_o* nfi, bool positive, System_Text_StringBuilder_o* sb_int, System_Text_StringBuilder_o* sb_dec, System_Text_StringBuilder_o* sb_exp, const MethodInfo* method_info);
void System_NumberFormatter_CustomInfo___ctor (System_NumberFormatter_CustomInfo_o* __this, const MethodInfo* method_info);
