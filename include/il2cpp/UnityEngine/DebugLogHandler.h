#pragma once

#include "il2cpp.h"

void UnityEngine_DebugLogHandler__Internal_Log (int32_t level, int32_t options, System_String_o* msg, UnityEngine_Object_o* obj, const MethodInfo* method_info);
void UnityEngine_DebugLogHandler__Internal_LogException (System_Exception_o* exception, UnityEngine_Object_o* obj, const MethodInfo* method_info);
void UnityEngine_DebugLogHandler__LogFormat (UnityEngine_DebugLogHandler_o* __this, int32_t logType, UnityEngine_Object_o* context, System_String_o* format, System_Object_array* args, const MethodInfo* method_info);
void UnityEngine_DebugLogHandler__LogException (UnityEngine_DebugLogHandler_o* __this, System_Exception_o* exception, UnityEngine_Object_o* context, const MethodInfo* method_info);
void UnityEngine_DebugLogHandler___ctor (UnityEngine_DebugLogHandler_o* __this, const MethodInfo* method_info);
