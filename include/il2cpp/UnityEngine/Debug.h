#pragma once

#include "il2cpp.h"

UnityEngine_ILogger_o* UnityEngine_Debug__get_unityLogger (const MethodInfo* method_info);
int32_t UnityEngine_Debug__ExtractStackTraceNoAlloc (uint8_t* buffer, int32_t bufferMax, System_String_o* projectFolder, const MethodInfo* method_info);
void UnityEngine_Debug__Log (Il2CppObject* message, const MethodInfo* method_info);
void UnityEngine_Debug__Log (Il2CppObject* message, UnityEngine_Object_o* context, const MethodInfo* method_info);
void UnityEngine_Debug__LogFormat (System_String_o* format, System_Object_array* args, const MethodInfo* method_info);
void UnityEngine_Debug__LogError (Il2CppObject* message, const MethodInfo* method_info);
void UnityEngine_Debug__LogError (Il2CppObject* message, UnityEngine_Object_o* context, const MethodInfo* method_info);
void UnityEngine_Debug__LogErrorFormat (System_String_o* format, System_Object_array* args, const MethodInfo* method_info);
void UnityEngine_Debug__LogErrorFormat (UnityEngine_Object_o* context, System_String_o* format, System_Object_array* args, const MethodInfo* method_info);
void UnityEngine_Debug__LogException (System_Exception_o* exception, const MethodInfo* method_info);
void UnityEngine_Debug__LogException (System_Exception_o* exception, UnityEngine_Object_o* context, const MethodInfo* method_info);
void UnityEngine_Debug__LogWarning (Il2CppObject* message, const MethodInfo* method_info);
void UnityEngine_Debug__LogWarning (Il2CppObject* message, UnityEngine_Object_o* context, const MethodInfo* method_info);
void UnityEngine_Debug__LogWarningFormat (System_String_o* format, System_Object_array* args, const MethodInfo* method_info);
void UnityEngine_Debug__LogWarningFormat (UnityEngine_Object_o* context, System_String_o* format, System_Object_array* args, const MethodInfo* method_info);
void UnityEngine_Debug__Assert (bool condition, const MethodInfo* method_info);
void UnityEngine_Debug__Assert (bool condition, System_String_o* message, const MethodInfo* method_info);
void UnityEngine_Debug__LogAssertion (Il2CppObject* message, const MethodInfo* method_info);
bool UnityEngine_Debug__CallOverridenDebugHandler (System_Exception_o* exception, UnityEngine_Object_o* obj, const MethodInfo* method_info);
bool UnityEngine_Debug__IsLoggingEnabled (const MethodInfo* method_info);
void UnityEngine_Debug___cctor (const MethodInfo* method_info);
