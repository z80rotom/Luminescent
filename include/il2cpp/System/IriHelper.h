#pragma once

#include "il2cpp.h"

bool System_IriHelper__CheckIriUnicodeRange (uint16_t unicode, bool isQuery, const MethodInfo* method);
bool System_IriHelper__CheckIriUnicodeRange (uint16_t highSurr, uint16_t lowSurr, bool* surrogatePair, bool isQuery, const MethodInfo* method);
bool System_IriHelper__CheckIsReserved (uint16_t ch, int32_t component, const MethodInfo* method);
System_String_o* System_IriHelper__EscapeUnescapeIri (uint16_t* pInput, int32_t start, int32_t end, int32_t component, const MethodInfo* method);
