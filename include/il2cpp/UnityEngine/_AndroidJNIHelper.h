#pragma once

#include "il2cpp.h"

intptr_t UnityEngine__AndroidJNIHelper__CreateJavaProxy (intptr_t delegateHandle, UnityEngine_AndroidJavaProxy_o* proxy, const MethodInfo* method_info);
intptr_t UnityEngine__AndroidJNIHelper__CreateJavaRunnable (UnityEngine_AndroidJavaRunnable_o* jrunnable, const MethodInfo* method_info);
intptr_t UnityEngine__AndroidJNIHelper__InvokeJavaProxyMethod (UnityEngine_AndroidJavaProxy_o* proxy, intptr_t jmethodName, intptr_t jargs, const MethodInfo* method_info);
UnityEngine_jvalue_array* UnityEngine__AndroidJNIHelper__CreateJNIArgArray (System_Object_array* args, const MethodInfo* method_info);
Il2CppObject* UnityEngine__AndroidJNIHelper__UnboxArray (UnityEngine_AndroidJavaObject_o* obj, const MethodInfo* method_info);
Il2CppObject* UnityEngine__AndroidJNIHelper__Unbox (UnityEngine_AndroidJavaObject_o* obj, const MethodInfo* method_info);
UnityEngine_AndroidJavaObject_o* UnityEngine__AndroidJNIHelper__Box (Il2CppObject* obj, const MethodInfo* method_info);
void UnityEngine__AndroidJNIHelper__DeleteJNIArgArray (System_Object_array* args, UnityEngine_jvalue_array* jniArgs, const MethodInfo* method_info);
intptr_t UnityEngine__AndroidJNIHelper__ConvertToJNIArray (System_Array_o* array, const MethodInfo* method_info);
bool UnityEngine__AndroidJNIHelper__ConvertFromJNIArray_bool_ (intptr_t array, const MethodInfo* method_info);
uint16_t UnityEngine__AndroidJNIHelper__ConvertFromJNIArray_char_ (intptr_t array, const MethodInfo* method_info);
double UnityEngine__AndroidJNIHelper__ConvertFromJNIArray_double_ (intptr_t array, const MethodInfo* method_info);
int16_t UnityEngine__AndroidJNIHelper__ConvertFromJNIArray_short_ (intptr_t array, const MethodInfo* method_info);
int32_t UnityEngine__AndroidJNIHelper__ConvertFromJNIArray_int_ (intptr_t array, const MethodInfo* method_info);
int64_t UnityEngine__AndroidJNIHelper__ConvertFromJNIArray_long_ (intptr_t array, const MethodInfo* method_info);
Il2CppObject* UnityEngine__AndroidJNIHelper__ConvertFromJNIArray_object_ (intptr_t array, const MethodInfo* method_info);
int8_t UnityEngine__AndroidJNIHelper__ConvertFromJNIArray_sbyte_ (intptr_t array, const MethodInfo* method_info);
float UnityEngine__AndroidJNIHelper__ConvertFromJNIArray_float_ (intptr_t array, const MethodInfo* method_info);
intptr_t UnityEngine__AndroidJNIHelper__GetConstructorID (intptr_t jclass, System_Object_array* args, const MethodInfo* method_info);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodID_bool_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo* method_info);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodID_char_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo* method_info);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodID_double_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo* method_info);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodID_short_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo* method_info);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodID_int_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo* method_info);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodID_long_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo* method_info);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodID_object_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo* method_info);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodID_sbyte_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo* method_info);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodID_float_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo* method_info);
intptr_t UnityEngine__AndroidJNIHelper__GetConstructorID (intptr_t jclass, System_String_o* signature, const MethodInfo* method_info);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodID (intptr_t jclass, System_String_o* methodName, System_String_o* signature, bool isStatic, const MethodInfo* method_info);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodIDFallback (intptr_t jclass, System_String_o* methodName, System_String_o* signature, bool isStatic, const MethodInfo* method_info);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature (Il2CppObject* obj, const MethodInfo* method_info);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature (System_Object_array* args, const MethodInfo* method_info);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature_bool_ (System_Object_array* args, const MethodInfo* method_info);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature_char_ (System_Object_array* args, const MethodInfo* method_info);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature_double_ (System_Object_array* args, const MethodInfo* method_info);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature_short_ (System_Object_array* args, const MethodInfo* method_info);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature_int_ (System_Object_array* args, const MethodInfo* method_info);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature_long_ (System_Object_array* args, const MethodInfo* method_info);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature_object_ (System_Object_array* args, const MethodInfo* method_info);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature_sbyte_ (System_Object_array* args, const MethodInfo* method_info);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature_float_ (System_Object_array* args, const MethodInfo* method_info);
