#pragma once

#include "il2cpp.h"

void System_Globalization_IdnMapping___ctor (System_Globalization_IdnMapping_o* __this, const MethodInfo* method);
bool System_Globalization_IdnMapping__Equals (System_Globalization_IdnMapping_o* __this, Il2CppObject* obj, const MethodInfo* method);
int32_t System_Globalization_IdnMapping__GetHashCode (System_Globalization_IdnMapping_o* __this, const MethodInfo* method);
System_String_o* System_Globalization_IdnMapping__GetAscii (System_Globalization_IdnMapping_o* __this, System_String_o* unicode, const MethodInfo* method);
System_String_o* System_Globalization_IdnMapping__GetAscii (System_Globalization_IdnMapping_o* __this, System_String_o* unicode, int32_t index, int32_t count, const MethodInfo* method);
System_String_o* System_Globalization_IdnMapping__Convert (System_Globalization_IdnMapping_o* __this, System_String_o* input, int32_t index, int32_t count, bool toAscii, const MethodInfo* method);
System_String_o* System_Globalization_IdnMapping__ToAscii (System_Globalization_IdnMapping_o* __this, System_String_o* s, int32_t offset, const MethodInfo* method);
void System_Globalization_IdnMapping__VerifyLength (System_Globalization_IdnMapping_o* __this, System_String_o* s, int32_t offset, const MethodInfo* method);
System_String_o* System_Globalization_IdnMapping__NamePrep (System_Globalization_IdnMapping_o* __this, System_String_o* s, int32_t offset, const MethodInfo* method);
void System_Globalization_IdnMapping__VerifyProhibitedCharacters (System_Globalization_IdnMapping_o* __this, System_String_o* s, int32_t offset, const MethodInfo* method);
void System_Globalization_IdnMapping__VerifyStd3AsciiRules (System_Globalization_IdnMapping_o* __this, System_String_o* s, int32_t offset, const MethodInfo* method);
System_String_o* System_Globalization_IdnMapping__GetUnicode (System_Globalization_IdnMapping_o* __this, System_String_o* ascii, const MethodInfo* method);
System_String_o* System_Globalization_IdnMapping__GetUnicode (System_Globalization_IdnMapping_o* __this, System_String_o* ascii, int32_t index, int32_t count, const MethodInfo* method);
System_String_o* System_Globalization_IdnMapping__ToUnicode (System_Globalization_IdnMapping_o* __this, System_String_o* s, int32_t offset, const MethodInfo* method);
