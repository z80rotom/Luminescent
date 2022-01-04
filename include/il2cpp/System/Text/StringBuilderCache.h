#pragma once

#include "il2cpp.h"

System_Text_StringBuilder_o* System_Text_StringBuilderCache__Acquire (int32_t capacity, const MethodInfo* method);
void System_Text_StringBuilderCache__Release (System_Text_StringBuilder_o* sb, const MethodInfo* method);
System_String_o* System_Text_StringBuilderCache__GetStringAndRelease (System_Text_StringBuilder_o* sb, const MethodInfo* method);
