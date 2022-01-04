#pragma once

#include "il2cpp.h"

intptr_t UnityEngine__AndroidJNIHelper__CreateJavaProxy (intptr_t delegateHandle, UnityEngine_AndroidJavaProxy_o* proxy, const MethodInfo* method);
intptr_t UnityEngine__AndroidJNIHelper__CreateJavaRunnable (UnityEngine_AndroidJavaRunnable_o* jrunnable, const MethodInfo* method);
intptr_t UnityEngine__AndroidJNIHelper__InvokeJavaProxyMethod (UnityEngine_AndroidJavaProxy_o* proxy, intptr_t jmethodName, intptr_t jargs, const MethodInfo* method);
UnityEngine_jvalue_array* UnityEngine__AndroidJNIHelper__CreateJNIArgArray (System_Object_array* args, const MethodInfo* method);
Il2CppObject* UnityEngine__AndroidJNIHelper__UnboxArray (UnityEngine_AndroidJavaObject_o* obj, const MethodInfo* method);
Il2CppObject* UnityEngine__AndroidJNIHelper__Unbox (UnityEngine_AndroidJavaObject_o* obj, const MethodInfo* method);
UnityEngine_AndroidJavaObject_o* UnityEngine__AndroidJNIHelper__Box (Il2CppObject* obj, const MethodInfo* method);
void UnityEngine__AndroidJNIHelper__DeleteJNIArgArray (System_Object_array* args, UnityEngine_jvalue_array* jniArgs, const MethodInfo* method);
intptr_t UnityEngine__AndroidJNIHelper__ConvertToJNIArray (System_Array_o* array, const MethodInfo* method);
bool UnityEngine__AndroidJNIHelper__ConvertFromJNIArray_bool_ (intptr_t array, const MethodInfo_1A1DC90* method);
uint16_t UnityEngine__AndroidJNIHelper__ConvertFromJNIArray_char_ (intptr_t array, const MethodInfo_1A1E320* method);
double UnityEngine__AndroidJNIHelper__ConvertFromJNIArray_double_ (intptr_t array, const MethodInfo_1A1E9B0* method);
int16_t UnityEngine__AndroidJNIHelper__ConvertFromJNIArray_short_ (intptr_t array, const MethodInfo_1A1F040* method);
int32_t UnityEngine__AndroidJNIHelper__ConvertFromJNIArray_int_ (intptr_t array, const MethodInfo_1A1F6D0* method);
int64_t UnityEngine__AndroidJNIHelper__ConvertFromJNIArray_long_ (intptr_t array, const MethodInfo_1A1FD60* method);
Il2CppObject* UnityEngine__AndroidJNIHelper__ConvertFromJNIArray_object_ (intptr_t array, const MethodInfo_1A203F0* method);
int8_t UnityEngine__AndroidJNIHelper__ConvertFromJNIArray_sbyte_ (intptr_t array, const MethodInfo_1A20A70* method);
float UnityEngine__AndroidJNIHelper__ConvertFromJNIArray_float_ (intptr_t array, const MethodInfo_1A21100* method);
intptr_t UnityEngine__AndroidJNIHelper__GetConstructorID (intptr_t jclass, System_Object_array* args, const MethodInfo* method);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodID_bool_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_232CA10* method);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodID_char_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_232CA70* method);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodID_double_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_232CAD0* method);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodID_short_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_232CB30* method);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodID_int_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_232CB90* method);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodID_long_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_232CBF0* method);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodID_object_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_232CC50* method);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodID_sbyte_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_232CCB0* method);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodID_float_ (intptr_t jclass, System_String_o* methodName, System_Object_array* args, bool isStatic, const MethodInfo_232CD10* method);
intptr_t UnityEngine__AndroidJNIHelper__GetConstructorID (intptr_t jclass, System_String_o* signature, const MethodInfo* method);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodID (intptr_t jclass, System_String_o* methodName, System_String_o* signature, bool isStatic, const MethodInfo* method);
intptr_t UnityEngine__AndroidJNIHelper__GetMethodIDFallback (intptr_t jclass, System_String_o* methodName, System_String_o* signature, bool isStatic, const MethodInfo* method);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature (Il2CppObject* obj, const MethodInfo* method);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature (System_Object_array* args, const MethodInfo* method);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature_bool_ (System_Object_array* args, const MethodInfo_2331380* method);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature_char_ (System_Object_array* args, const MethodInfo_23314C0* method);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature_double_ (System_Object_array* args, const MethodInfo_2331600* method);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature_short_ (System_Object_array* args, const MethodInfo_2331740* method);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature_int_ (System_Object_array* args, const MethodInfo_2331880* method);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature_long_ (System_Object_array* args, const MethodInfo_23319C0* method);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature_object_ (System_Object_array* args, const MethodInfo_2331B00* method);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature_sbyte_ (System_Object_array* args, const MethodInfo_2331C40* method);
System_String_o* UnityEngine__AndroidJNIHelper__GetSignature_float_ (System_Object_array* args, const MethodInfo_2331D80* method);
