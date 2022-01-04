#pragma once

#include "il2cpp.h"

System_String_o* System_ParameterizedStrings__Evaluate (System_String_o* format, System_ParameterizedStrings_FormatParam_array* args, const MethodInfo* method);
System_String_o* System_ParameterizedStrings__EvaluateInternal (System_String_o* format, int32_t* pos, System_ParameterizedStrings_FormatParam_array* args, System_ParameterizedStrings_LowLevelStack_o* stack, System_ParameterizedStrings_FormatParam_array** dynamicVars, System_ParameterizedStrings_FormatParam_array** staticVars, const MethodInfo* method);
bool System_ParameterizedStrings__AsBool (int32_t i, const MethodInfo* method);
int32_t System_ParameterizedStrings__AsInt (bool b, const MethodInfo* method);
System_String_o* System_ParameterizedStrings__StringFromAsciiBytes (System_Byte_array* buffer, int32_t offset, int32_t length, const MethodInfo* method);
int32_t System_ParameterizedStrings__snprintf (uint8_t* str, intptr_t size, System_String_o* format, System_String_o* arg1, const MethodInfo* method);
int32_t System_ParameterizedStrings__snprintf (uint8_t* str, intptr_t size, System_String_o* format, int32_t arg1, const MethodInfo* method);
System_String_o* System_ParameterizedStrings__FormatPrintF (System_String_o* format, Il2CppObject* arg, const MethodInfo* method);
System_ParameterizedStrings_FormatParam_array* System_ParameterizedStrings__GetDynamicOrStaticVariables (uint16_t c, System_ParameterizedStrings_FormatParam_array** dynamicVars, System_ParameterizedStrings_FormatParam_array** staticVars, int32_t* index, const MethodInfo* method);
