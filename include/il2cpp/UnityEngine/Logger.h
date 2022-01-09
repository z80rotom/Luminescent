#pragma once

#include "il2cpp.h"

void UnityEngine_Logger___ctor (UnityEngine_Logger_o* __this, UnityEngine_ILogHandler_o* logHandler, const MethodInfo* method_info);
UnityEngine_ILogHandler_o* UnityEngine_Logger__get_logHandler (UnityEngine_Logger_o* __this, const MethodInfo* method_info);
void UnityEngine_Logger__set_logHandler (UnityEngine_Logger_o* __this, UnityEngine_ILogHandler_o* value, const MethodInfo* method_info);
bool UnityEngine_Logger__get_logEnabled (UnityEngine_Logger_o* __this, const MethodInfo* method_info);
void UnityEngine_Logger__set_logEnabled (UnityEngine_Logger_o* __this, bool value, const MethodInfo* method_info);
int32_t UnityEngine_Logger__get_filterLogType (UnityEngine_Logger_o* __this, const MethodInfo* method_info);
void UnityEngine_Logger__set_filterLogType (UnityEngine_Logger_o* __this, int32_t value, const MethodInfo* method_info);
bool UnityEngine_Logger__IsLogTypeAllowed (UnityEngine_Logger_o* __this, int32_t logType, const MethodInfo* method_info);
System_String_o* UnityEngine_Logger__GetString (Il2CppObject* message, const MethodInfo* method_info);
void UnityEngine_Logger__Log (UnityEngine_Logger_o* __this, int32_t logType, Il2CppObject* message, const MethodInfo* method_info);
void UnityEngine_Logger__Log (UnityEngine_Logger_o* __this, int32_t logType, Il2CppObject* message, UnityEngine_Object_o* context, const MethodInfo* method_info);
void UnityEngine_Logger__LogError (UnityEngine_Logger_o* __this, System_String_o* tag, Il2CppObject* message, const MethodInfo* method_info);
void UnityEngine_Logger__LogException (UnityEngine_Logger_o* __this, System_Exception_o* exception, UnityEngine_Object_o* context, const MethodInfo* method_info);
void UnityEngine_Logger__LogFormat (UnityEngine_Logger_o* __this, int32_t logType, System_String_o* format, System_Object_array* args, const MethodInfo* method_info);
void UnityEngine_Logger__LogFormat (UnityEngine_Logger_o* __this, int32_t logType, UnityEngine_Object_o* context, System_String_o* format, System_Object_array* args, const MethodInfo* method_info);
