#pragma once

#include "il2cpp.h"

intptr_t UnityEngine_AndroidJNIHelper__GetConstructorID (intptr_t javaClass, System_String_o* signature, const MethodInfo* method_info);
intptr_t UnityEngine_AndroidJNIHelper__GetMethodID (intptr_t javaClass, System_String_o* methodName, System_String_o* signature, bool isStatic, const MethodInfo* method_info);
intptr_t UnityEngine_AndroidJNIHelper__CreateJavaRunnable (UnityEngine_AndroidJavaRunnable_o* jrunnable, const MethodInfo* method_info);
intptr_t UnityEngine_AndroidJNIHelper__CreateJavaProxy (UnityEngine_AndroidJavaProxy_o* proxy, const MethodInfo* method_info);
UnityEngine_jvalue_array* UnityEngine_AndroidJNIHelper__CreateJNIArgArray (System_Object_array* args, const MethodInfo* method_info);
void UnityEngine_AndroidJNIHelper__DeleteJNIArgArray (System_Object_array* args, UnityEngine_jvalue_array* jniArgs, const MethodInfo* method_info);
intptr_t UnityEngine_AndroidJNIHelper__GetConstructorID (intptr_t jclass, System_Object_array* args, const MethodInfo* method_info);
bool UnityEngine_AndroidJNIHelper__ConvertFromJNIArray_bool_ (intptr_t array, const MethodInfo* method_info);
uint16_t UnityEngine_AndroidJNIHelper__ConvertFromJNIArray_char_ (intptr_t array, const MethodInfo* method_info);
double UnityEngine_AndroidJNIHelper__ConvertFromJNIArray_double_ (intptr_t array, const MethodInfo* method_info);
int16_t UnityEngine_AndroidJNIHelper__ConvertFromJNIArray_short_ (intptr_t array, const MethodInfo* method_info);
int32_t UnityEngine_AndroidJNIHelper__ConvertFromJNIArray_int_ (intptr_t array, const MethodInfo* method_info);
int64_t UnityEngine_AndroidJNIHelper__ConvertFromJNIArray_long_ (intptr_t array, const MethodInfo* method_info);
Il2CppObject* UnityEngine_AndroidJNIHelper__ConvertFromJNIArray_object_ (intptr_t array, const MethodInfo* method_info);
int8_t UnityEngine_AndroidJNIHelper__ConvertFromJNIArray_sbyte_ (intptr_t array, const MethodInfo* method_info);
float UnityEngine_AndroidJNIHelper__ConvertFromJNIArray_float_ (intptr_t array, const MethodInfo* method_info);
intptr_t UnityEngine_AndroidJNIHelper__GetMethodID_bool_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo* method_info);
intptr_t UnityEngine_AndroidJNIHelper__GetMethodID_char_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo* method_info);
intptr_t UnityEngine_AndroidJNIHelper__GetMethodID_double_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo* method_info);
intptr_t UnityEngine_AndroidJNIHelper__GetMethodID_short_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo* method_info);
intptr_t UnityEngine_AndroidJNIHelper__GetMethodID_int_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo* method_info);
intptr_t UnityEngine_AndroidJNIHelper__GetMethodID_long_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo* method_info);
intptr_t UnityEngine_AndroidJNIHelper__GetMethodID_object_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo* method_info);
intptr_t UnityEngine_AndroidJNIHelper__GetMethodID_sbyte_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo* method_info);
intptr_t UnityEngine_AndroidJNIHelper__GetMethodID_float_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo* method_info);
