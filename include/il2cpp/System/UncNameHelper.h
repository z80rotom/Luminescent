#pragma once

#include "il2cpp.h"

System_String_o* System_UncNameHelper__ParseCanonicalName (System_String_o* str, int32_t start, int32_t end, bool* loopback, const MethodInfo* method);
bool System_UncNameHelper__IsValid (uint16_t* name, uint16_t start, int32_t* returnedEnd, bool notImplicitFile, const MethodInfo* method);
