#pragma once

#include "il2cpp.h"

bool UnityEngine_AndroidReflection__IsPrimitive (System_Type_o* t, const MethodInfo* method_info);
bool UnityEngine_AndroidReflection__IsAssignableFrom (System_Type_o* t, System_Type_o* from, const MethodInfo* method_info);
intptr_t UnityEngine_AndroidReflection__GetStaticMethodID (System_String_o* clazz, System_String_o* methodName, System_String_o* signature, const MethodInfo* method_info);
intptr_t UnityEngine_AndroidReflection__GetMethodID (System_String_o* clazz, System_String_o* methodName, System_String_o* signature, const MethodInfo* method_info);
intptr_t UnityEngine_AndroidReflection__GetConstructorMember (intptr_t jclass, System_String_o* signature, const MethodInfo* method_info);
intptr_t UnityEngine_AndroidReflection__GetMethodMember (intptr_t jclass, System_String_o* methodName, System_String_o* signature, bool isStatic, const MethodInfo* method_info);
intptr_t UnityEngine_AndroidReflection__NewProxyInstance (intptr_t delegateHandle, intptr_t interfaze, const MethodInfo* method_info);
void UnityEngine_AndroidReflection__SetNativeExceptionOnProxy (intptr_t proxy, System_Exception_o* e, bool methodNotFound, const MethodInfo* method_info);
void UnityEngine_AndroidReflection___cctor (const MethodInfo* method_info);
