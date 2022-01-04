#pragma once

#include "il2cpp.h"

intptr_t UnityEngine_AndroidJNIHelper__GetConstructorID (intptr_t javaClass, System_String_o* signature, const MethodInfo* method);
intptr_t UnityEngine_AndroidJNIHelper__GetMethodID (intptr_t javaClass, System_String_o* methodName, System_String_o* signature, bool isStatic, const MethodInfo* method);
intptr_t UnityEngine_AndroidJNIHelper__CreateJavaRunnable (UnityEngine_AndroidJavaRunnable_o* jrunnable, const MethodInfo* method);
intptr_t UnityEngine_AndroidJNIHelper__CreateJavaProxy (UnityEngine_AndroidJavaProxy_o* proxy, const MethodInfo* method);
UnityEngine_jvalue_array* UnityEngine_AndroidJNIHelper__CreateJNIArgArray (System_Object_array* args, const MethodInfo* method);
void UnityEngine_AndroidJNIHelper__DeleteJNIArgArray (System_Object_array* args, UnityEngine_jvalue_array* jniArgs, const MethodInfo* method);
intptr_t UnityEngine_AndroidJNIHelper__GetConstructorID (intptr_t jclass, System_Object_array* args, const MethodInfo* method);
bool UnityEngine_AndroidJNIHelper__ConvertFromJNIArray_bool_ (intptr_t array, const MethodInfo_1A1DC00* method);
uint16_t UnityEngine_AndroidJNIHelper__ConvertFromJNIArray_char_ (intptr_t array, const MethodInfo_1A1DC10* method);
double UnityEngine_AndroidJNIHelper__ConvertFromJNIArray_double_ (intptr_t array, const MethodInfo_1A1DC20* method);
int16_t UnityEngine_AndroidJNIHelper__ConvertFromJNIArray_short_ (intptr_t array, const MethodInfo_1A1DC30* method);
int32_t UnityEngine_AndroidJNIHelper__ConvertFromJNIArray_int_ (intptr_t array, const MethodInfo_1A1DC40* method);
int64_t UnityEngine_AndroidJNIHelper__ConvertFromJNIArray_long_ (intptr_t array, const MethodInfo_1A1DC50* method);
Il2CppObject* UnityEngine_AndroidJNIHelper__ConvertFromJNIArray_object_ (intptr_t array, const MethodInfo_1A1DC60* method);
int8_t UnityEngine_AndroidJNIHelper__ConvertFromJNIArray_sbyte_ (intptr_t array, const MethodInfo_1A1DC70* method);
float UnityEngine_AndroidJNIHelper__ConvertFromJNIArray_float_ (intptr_t array, const MethodInfo_1A1DC80* method);
intptr_t UnityEngine_AndroidJNIHelper__GetMethodID_bool_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_232C8F0* method);
intptr_t UnityEngine_AndroidJNIHelper__GetMethodID_char_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_232C910* method);
intptr_t UnityEngine_AndroidJNIHelper__GetMethodID_double_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_232C930* method);
intptr_t UnityEngine_AndroidJNIHelper__GetMethodID_short_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_232C950* method);
intptr_t UnityEngine_AndroidJNIHelper__GetMethodID_int_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_232C970* method);
intptr_t UnityEngine_AndroidJNIHelper__GetMethodID_long_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_232C990* method);
intptr_t UnityEngine_AndroidJNIHelper__GetMethodID_object_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_232C9B0* method);
intptr_t UnityEngine_AndroidJNIHelper__GetMethodID_sbyte_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_232C9D0* method);
intptr_t UnityEngine_AndroidJNIHelper__GetMethodID_float_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_232C9F0* method);
