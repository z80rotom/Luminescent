#pragma once

#include "il2cpp.h"

void System_Globalization_Bootstring___ctor (System_Globalization_Bootstring_o* __this, uint16_t delimiter, int32_t baseNum, int32_t tmin, int32_t tmax, int32_t skew, int32_t damp, int32_t initialBias, int32_t initialN, const MethodInfo* method_info);
System_String_o* System_Globalization_Bootstring__Encode (System_Globalization_Bootstring_o* __this, System_String_o* s, int32_t offset, const MethodInfo* method_info);
uint16_t System_Globalization_Bootstring__EncodeDigit (System_Globalization_Bootstring_o* __this, int32_t d, const MethodInfo* method_info);
int32_t System_Globalization_Bootstring__DecodeDigit (System_Globalization_Bootstring_o* __this, uint16_t c, const MethodInfo* method_info);
int32_t System_Globalization_Bootstring__Adapt (System_Globalization_Bootstring_o* __this, int32_t delta, int32_t numPoints, bool firstTime, const MethodInfo* method_info);
System_String_o* System_Globalization_Bootstring__Decode (System_Globalization_Bootstring_o* __this, System_String_o* s, int32_t offset, const MethodInfo* method_info);
