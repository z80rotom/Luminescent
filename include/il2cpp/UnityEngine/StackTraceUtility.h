#pragma once

#include "il2cpp.h"

void UnityEngine_StackTraceUtility__SetProjectFolder (System_String_o* folder, const MethodInfo* method_info);
System_String_o* UnityEngine_StackTraceUtility__ExtractStackTrace (const MethodInfo* method_info);
void UnityEngine_StackTraceUtility__ExtractStringFromExceptionInternal (Il2CppObject* exceptiono, System_String_o** message, System_String_o** stackTrace, const MethodInfo* method_info);
System_String_o* UnityEngine_StackTraceUtility__ExtractFormattedStackTrace (System_Diagnostics_StackTrace_o* stackTrace, const MethodInfo* method_info);
void UnityEngine_StackTraceUtility___cctor (const MethodInfo* method_info);
