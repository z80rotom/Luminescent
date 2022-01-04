#pragma once

#include "il2cpp.h"

bool System_Diagnostics_StackFrame__get_frame_info (int32_t skip, bool needFileInfo, System_Reflection_MethodBase_o** method, int32_t* iloffset, int32_t* native_offset, System_String_o** file, int32_t* line, int32_t* column, const MethodInfo* method);
void System_Diagnostics_StackFrame___ctor (System_Diagnostics_StackFrame_o* __this, const MethodInfo* method);
void System_Diagnostics_StackFrame___ctor (System_Diagnostics_StackFrame_o* __this, int32_t skipFrames, bool fNeedFileInfo, const MethodInfo* method);
int32_t System_Diagnostics_StackFrame__GetFileLineNumber (System_Diagnostics_StackFrame_o* __this, const MethodInfo* method);
System_String_o* System_Diagnostics_StackFrame__GetFileName (System_Diagnostics_StackFrame_o* __this, const MethodInfo* method);
System_String_o* System_Diagnostics_StackFrame__GetSecureFileName (System_Diagnostics_StackFrame_o* __this, const MethodInfo* method);
int32_t System_Diagnostics_StackFrame__GetILOffset (System_Diagnostics_StackFrame_o* __this, const MethodInfo* method);
System_Reflection_MethodBase_o* System_Diagnostics_StackFrame__GetMethod (System_Diagnostics_StackFrame_o* __this, const MethodInfo* method);
int32_t System_Diagnostics_StackFrame__GetNativeOffset (System_Diagnostics_StackFrame_o* __this, const MethodInfo* method);
int64_t System_Diagnostics_StackFrame__GetMethodAddress (System_Diagnostics_StackFrame_o* __this, const MethodInfo* method);
uint32_t System_Diagnostics_StackFrame__GetMethodIndex (System_Diagnostics_StackFrame_o* __this, const MethodInfo* method);
System_String_o* System_Diagnostics_StackFrame__GetInternalMethodName (System_Diagnostics_StackFrame_o* __this, const MethodInfo* method);
System_String_o* System_Diagnostics_StackFrame__ToString (System_Diagnostics_StackFrame_o* __this, const MethodInfo* method);
