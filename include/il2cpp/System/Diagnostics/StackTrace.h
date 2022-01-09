#pragma once

#include "il2cpp.h"

void System_Diagnostics_StackTrace___ctor (System_Diagnostics_StackTrace_o* __this, const MethodInfo* method_info);
void System_Diagnostics_StackTrace___ctor (System_Diagnostics_StackTrace_o* __this, bool fNeedFileInfo, const MethodInfo* method_info);
void System_Diagnostics_StackTrace___ctor (System_Diagnostics_StackTrace_o* __this, int32_t skipFrames, bool fNeedFileInfo, const MethodInfo* method_info);
void System_Diagnostics_StackTrace__init_frames (System_Diagnostics_StackTrace_o* __this, int32_t skipFrames, bool fNeedFileInfo, const MethodInfo* method_info);
System_Diagnostics_StackFrame_array* System_Diagnostics_StackTrace__get_trace (System_Exception_o* e, int32_t skipFrames, bool fNeedFileInfo, const MethodInfo* method_info);
void System_Diagnostics_StackTrace___ctor (System_Diagnostics_StackTrace_o* __this, System_Exception_o* e, bool fNeedFileInfo, const MethodInfo* method_info);
void System_Diagnostics_StackTrace___ctor (System_Diagnostics_StackTrace_o* __this, System_Exception_o* e, int32_t skipFrames, bool fNeedFileInfo, const MethodInfo* method_info);
int32_t System_Diagnostics_StackTrace__get_FrameCount (System_Diagnostics_StackTrace_o* __this, const MethodInfo* method_info);
System_Diagnostics_StackFrame_o* System_Diagnostics_StackTrace__GetFrame (System_Diagnostics_StackTrace_o* __this, int32_t index, const MethodInfo* method_info);
System_String_o* System_Diagnostics_StackTrace__GetAotId (const MethodInfo* method_info);
bool System_Diagnostics_StackTrace__AddFrames (System_Diagnostics_StackTrace_o* __this, System_Text_StringBuilder_o* sb, const MethodInfo* method_info);
void System_Diagnostics_StackTrace__GetFullNameForStackTrace (System_Diagnostics_StackTrace_o* __this, System_Text_StringBuilder_o* sb, System_Reflection_MethodBase_o* mi, const MethodInfo* method_info);
System_String_o* System_Diagnostics_StackTrace__ToString (System_Diagnostics_StackTrace_o* __this, const MethodInfo* method_info);
System_String_o* System_Diagnostics_StackTrace__ToString (System_Diagnostics_StackTrace_o* __this, int32_t traceFormat, const MethodInfo* method_info);
