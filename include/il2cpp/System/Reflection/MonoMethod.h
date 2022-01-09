#pragma once

#include "il2cpp.h"

void System_Reflection_MonoMethod___ctor (System_Reflection_MonoMethod_o* __this, const MethodInfo* method_info);
System_String_o* System_Reflection_MonoMethod__get_name (System_Reflection_MethodBase_o* method, const MethodInfo* method_info);
System_Reflection_MonoMethod_o* System_Reflection_MonoMethod__get_base_method (System_Reflection_MonoMethod_o* method, bool definition, const MethodInfo* method_info);
System_Reflection_MethodInfo_o* System_Reflection_MonoMethod__GetBaseMethod (System_Reflection_MonoMethod_o* __this, const MethodInfo* method_info);
System_Type_o* System_Reflection_MonoMethod__get_ReturnType (System_Reflection_MonoMethod_o* __this, const MethodInfo* method_info);
int32_t System_Reflection_MonoMethod__GetMethodImplementationFlags (System_Reflection_MonoMethod_o* __this, const MethodInfo* method_info);
System_Reflection_ParameterInfo_array* System_Reflection_MonoMethod__GetParameters (System_Reflection_MonoMethod_o* __this, const MethodInfo* method_info);
System_Reflection_ParameterInfo_array* System_Reflection_MonoMethod__GetParametersInternal (System_Reflection_MonoMethod_o* __this, const MethodInfo* method_info);
int32_t System_Reflection_MonoMethod__GetParametersCount (System_Reflection_MonoMethod_o* __this, const MethodInfo* method_info);
Il2CppObject* System_Reflection_MonoMethod__InternalInvoke (System_Reflection_MonoMethod_o* __this, Il2CppObject* obj, System_Object_array* parameters, System_Exception_o** exc, const MethodInfo* method_info);
Il2CppObject* System_Reflection_MonoMethod__Invoke (System_Reflection_MonoMethod_o* __this, Il2CppObject* obj, int32_t invokeAttr, System_Reflection_Binder_o* binder, System_Object_array* parameters, System_Globalization_CultureInfo_o* culture, const MethodInfo* method_info);
void System_Reflection_MonoMethod__ConvertValues (System_Reflection_Binder_o* binder, System_Object_array* args, System_Reflection_ParameterInfo_array* pinfo, System_Globalization_CultureInfo_o* culture, int32_t invokeAttr, const MethodInfo* method_info);
System_RuntimeMethodHandle_o System_Reflection_MonoMethod__get_MethodHandle (System_Reflection_MonoMethod_o* __this, const MethodInfo* method_info);
int32_t System_Reflection_MonoMethod__get_Attributes (System_Reflection_MonoMethod_o* __this, const MethodInfo* method_info);
int32_t System_Reflection_MonoMethod__get_CallingConvention (System_Reflection_MonoMethod_o* __this, const MethodInfo* method_info);
System_Type_o* System_Reflection_MonoMethod__get_ReflectedType (System_Reflection_MonoMethod_o* __this, const MethodInfo* method_info);
System_Type_o* System_Reflection_MonoMethod__get_DeclaringType (System_Reflection_MonoMethod_o* __this, const MethodInfo* method_info);
System_String_o* System_Reflection_MonoMethod__get_Name (System_Reflection_MonoMethod_o* __this, const MethodInfo* method_info);
bool System_Reflection_MonoMethod__IsDefined (System_Reflection_MonoMethod_o* __this, System_Type_o* attributeType, bool inherit, const MethodInfo* method_info);
System_Object_array* System_Reflection_MonoMethod__GetCustomAttributes (System_Reflection_MonoMethod_o* __this, bool inherit, const MethodInfo* method_info);
System_Object_array* System_Reflection_MonoMethod__GetCustomAttributes (System_Reflection_MonoMethod_o* __this, System_Type_o* attributeType, bool inherit, const MethodInfo* method_info);
void System_Reflection_MonoMethod__GetPInvoke (System_Reflection_MonoMethod_o* __this, int32_t* flags, System_String_o** entryPoint, System_String_o** dllName, const MethodInfo* method_info);
System_Object_array* System_Reflection_MonoMethod__GetPseudoCustomAttributes (System_Reflection_MonoMethod_o* __this, const MethodInfo* method_info);
System_Reflection_MethodInfo_o* System_Reflection_MonoMethod__MakeGenericMethod (System_Reflection_MonoMethod_o* __this, System_Type_array* methodInstantiation, const MethodInfo* method_info);
System_Reflection_MethodInfo_o* System_Reflection_MonoMethod__MakeGenericMethod_impl (System_Reflection_MonoMethod_o* __this, System_Type_array* types, const MethodInfo* method_info);
System_Type_array* System_Reflection_MonoMethod__GetGenericArguments (System_Reflection_MonoMethod_o* __this, const MethodInfo* method_info);
System_Reflection_MethodInfo_o* System_Reflection_MonoMethod__GetGenericMethodDefinition_impl (System_Reflection_MonoMethod_o* __this, const MethodInfo* method_info);
System_Reflection_MethodInfo_o* System_Reflection_MonoMethod__GetGenericMethodDefinition (System_Reflection_MonoMethod_o* __this, const MethodInfo* method_info);
bool System_Reflection_MonoMethod__get_IsGenericMethodDefinition (System_Reflection_MonoMethod_o* __this, const MethodInfo* method_info);
bool System_Reflection_MonoMethod__get_IsGenericMethod (System_Reflection_MonoMethod_o* __this, const MethodInfo* method_info);
bool System_Reflection_MonoMethod__get_ContainsGenericParameters (System_Reflection_MonoMethod_o* __this, const MethodInfo* method_info);
System_Collections_Generic_IList_CustomAttributeData__o* System_Reflection_MonoMethod__GetCustomAttributesData (System_Reflection_MonoMethod_o* __this, const MethodInfo* method_info);
int32_t System_Reflection_MonoMethod__get_core_clr_security_level (const MethodInfo* method_info);
bool System_Reflection_MonoMethod__get_IsSecurityCritical (System_Reflection_MonoMethod_o* __this, const MethodInfo* method_info);
