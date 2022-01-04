#pragma once

#include "il2cpp.h"

void System___DTString___ctor (System___DTString_o __this, System_String_o* str, System_Globalization_DateTimeFormatInfo_o* dtfi, const MethodInfo* method);
bool System___DTString__GetNext (System___DTString_o __this, const MethodInfo* method);
bool System___DTString__AtEnd (System___DTString_o __this, const MethodInfo* method);
bool System___DTString__Advance (System___DTString_o __this, int32_t count, const MethodInfo* method);
void System___DTString__GetRegularToken (System___DTString_o __this, int32_t* tokenType, int32_t* tokenValue, System_Globalization_DateTimeFormatInfo_o* dtfi, const MethodInfo* method);
int32_t System___DTString__GetSeparatorToken (System___DTString_o __this, System_Globalization_DateTimeFormatInfo_o* dtfi, int32_t* indexBeforeSeparator, uint16_t* charBeforeSeparator, const MethodInfo* method);
bool System___DTString__MatchSpecifiedWords (System___DTString_o __this, System_String_o* target, bool checkWordBoundary, int32_t* matchLength, const MethodInfo* method);
bool System___DTString__Match (System___DTString_o __this, uint16_t ch, const MethodInfo* method);
bool System___DTString__GetNextDigit (System___DTString_o __this, const MethodInfo* method);
uint16_t System___DTString__GetChar (System___DTString_o __this, const MethodInfo* method);
int32_t System___DTString__GetDigit (System___DTString_o __this, const MethodInfo* method);
void System___DTString__SkipWhiteSpaces (System___DTString_o __this, const MethodInfo* method);
bool System___DTString__SkipWhiteSpaceCurrent (System___DTString_o __this, const MethodInfo* method);
System_DTSubString_o System___DTString__GetSubString (System___DTString_o __this, const MethodInfo* method);
void System___DTString__ConsumeSubString (System___DTString_o __this, System_DTSubString_o sub, const MethodInfo* method);
void System___DTString___cctor (const MethodInfo* method);
