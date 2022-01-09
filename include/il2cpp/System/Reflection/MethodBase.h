#pragma once

#include "il2cpp.h"

System_Reflection_MethodBase_o* System_Reflection_MethodBase__GetMethodFromHandle (System_RuntimeMethodHandle_o handle, const MethodInfo* method_info);
void System_Reflection_MethodBase___ctor (System_Reflection_MethodBase_o* __this, const MethodInfo* method_info);
bool System_Reflection_MethodBase__op_Equality (System_Reflection_MethodBase_o* left, System_Reflection_MethodBase_o* right, const MethodInfo* method_info);
bool System_Reflection_MethodBase__op_Inequality (System_Reflection_MethodBase_o* left, System_Reflection_MethodBase_o* right, const MethodInfo* method_info);
bool System_Reflection_MethodBase__Equals (System_Reflection_MethodBase_o* __this, Il2CppObject* obj, const MethodInfo* method_info);
int32_t System_Reflection_MethodBase__GetHashCode (System_Reflection_MethodBase_o* __this, const MethodInfo* method_info);
System_Reflection_ParameterInfo_array* System_Reflection_MethodBase__GetParametersNoCopy (System_Reflection_MethodBase_o* __this, const MethodInfo* method_info);
int32_t System_Reflection_MethodBase__get_CallingConvention (System_Reflection_MethodBase_o* __this, const MethodInfo* method_info);
System_Type_array* System_Reflection_MethodBase__GetGenericArguments (System_Reflection_MethodBase_o* __this, const MethodInfo* method_info);
bool System_Reflection_MethodBase__get_IsGenericMethodDefinition (System_Reflection_MethodBase_o* __this, const MethodInfo* method_info);
bool System_Reflection_MethodBase__get_ContainsGenericParameters (System_Reflection_MethodBase_o* __this, const MethodInfo* method_info);
bool System_Reflection_MethodBase__get_IsGenericMethod (System_Reflection_MethodBase_o* __this, const MethodInfo* method_info);
bool System_Reflection_MethodBase__get_IsSecurityCritical (System_Reflection_MethodBase_o* __this, const MethodInfo* method_info);
Il2CppObject* System_Reflection_MethodBase__Invoke (System_Reflection_MethodBase_o* __this, Il2CppObject* obj, System_Object_array* parameters, const MethodInfo* method_info);
bool System_Reflection_MethodBase__get_IsPublic (System_Reflection_MethodBase_o* __this, const MethodInfo* method_info);
bool System_Reflection_MethodBase__get_IsStatic (System_Reflection_MethodBase_o* __this, const MethodInfo* method_info);
bool System_Reflection_MethodBase__get_IsVirtual (System_Reflection_MethodBase_o* __this, const MethodInfo* method_info);
bool System_Reflection_MethodBase__get_IsAbstract (System_Reflection_MethodBase_o* __this, const MethodInfo* method_info);
bool System_Reflection_MethodBase__get_IsConstructor (System_Reflection_MethodBase_o* __this, const MethodInfo* method_info);
System_String_o* System_Reflection_MethodBase__ConstructParameters (System_Type_array* parameterTypes, int32_t callingConvention, bool serialization, const MethodInfo* method_info);
System_String_o* System_Reflection_MethodBase__FormatNameAndSig (System_Reflection_MethodBase_o* __this, bool serialization, const MethodInfo* method_info);
System_Type_array* System_Reflection_MethodBase__GetParameterTypes (System_Reflection_MethodBase_o* __this, const MethodInfo* method_info);
System_Reflection_ParameterInfo_array* System_Reflection_MethodBase__GetParametersInternal (System_Reflection_MethodBase_o* __this, const MethodInfo* method_info);
int32_t System_Reflection_MethodBase__GetParametersCount (System_Reflection_MethodBase_o* __this, const MethodInfo* method_info);
System_Reflection_MethodBase_o* System_Reflection_MethodBase__GetMethodFromHandleNoGenericCheck (System_RuntimeMethodHandle_o handle, const MethodInfo* method_info);
System_Reflection_MethodBase_o* System_Reflection_MethodBase__GetMethodFromHandleNoGenericCheck (System_RuntimeMethodHandle_o handle, System_RuntimeTypeHandle_o reflectedType, const MethodInfo* method_info);
System_Reflection_MethodBase_o* System_Reflection_MethodBase__GetMethodFromHandleInternalType (intptr_t method_handle, intptr_t type_handle, const MethodInfo* method_info);
System_Reflection_MethodBase_o* System_Reflection_MethodBase__GetMethodFromHandleInternalType_native (intptr_t method_handle, intptr_t type_handle, bool genericCheck, const MethodInfo* method_info);
