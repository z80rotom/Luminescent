#pragma once

#include "il2cpp.h"

int32_t System_Reflection_MonoCMethod__GetMethodImplementationFlags (System_Reflection_MonoCMethod_o* __this, const MethodInfo* method_info);
System_Reflection_ParameterInfo_array* System_Reflection_MonoCMethod__GetParameters (System_Reflection_MonoCMethod_o* __this, const MethodInfo* method_info);
System_Reflection_ParameterInfo_array* System_Reflection_MonoCMethod__GetParametersInternal (System_Reflection_MonoCMethod_o* __this, const MethodInfo* method_info);
int32_t System_Reflection_MonoCMethod__GetParametersCount (System_Reflection_MonoCMethod_o* __this, const MethodInfo* method_info);
Il2CppObject* System_Reflection_MonoCMethod__InternalInvoke (System_Reflection_MonoCMethod_o* __this, Il2CppObject* obj, System_Object_array* parameters, System_Exception_o** exc, const MethodInfo* method_info);
Il2CppObject* System_Reflection_MonoCMethod__Invoke (System_Reflection_MonoCMethod_o* __this, Il2CppObject* obj, int32_t invokeAttr, System_Reflection_Binder_o* binder, System_Object_array* parameters, System_Globalization_CultureInfo_o* culture, const MethodInfo* method_info);
Il2CppObject* System_Reflection_MonoCMethod__DoInvoke (System_Reflection_MonoCMethod_o* __this, Il2CppObject* obj, int32_t invokeAttr, System_Reflection_Binder_o* binder, System_Object_array* parameters, System_Globalization_CultureInfo_o* culture, const MethodInfo* method_info);
Il2CppObject* System_Reflection_MonoCMethod__InternalInvoke (System_Reflection_MonoCMethod_o* __this, Il2CppObject* obj, System_Object_array* parameters, const MethodInfo* method_info);
Il2CppObject* System_Reflection_MonoCMethod__Invoke (System_Reflection_MonoCMethod_o* __this, int32_t invokeAttr, System_Reflection_Binder_o* binder, System_Object_array* parameters, System_Globalization_CultureInfo_o* culture, const MethodInfo* method_info);
System_RuntimeMethodHandle_o System_Reflection_MonoCMethod__get_MethodHandle (System_Reflection_MonoCMethod_o* __this, const MethodInfo* method_info);
int32_t System_Reflection_MonoCMethod__get_Attributes (System_Reflection_MonoCMethod_o* __this, const MethodInfo* method_info);
int32_t System_Reflection_MonoCMethod__get_CallingConvention (System_Reflection_MonoCMethod_o* __this, const MethodInfo* method_info);
bool System_Reflection_MonoCMethod__get_ContainsGenericParameters (System_Reflection_MonoCMethod_o* __this, const MethodInfo* method_info);
System_Type_o* System_Reflection_MonoCMethod__get_ReflectedType (System_Reflection_MonoCMethod_o* __this, const MethodInfo* method_info);
System_Type_o* System_Reflection_MonoCMethod__get_DeclaringType (System_Reflection_MonoCMethod_o* __this, const MethodInfo* method_info);
System_String_o* System_Reflection_MonoCMethod__get_Name (System_Reflection_MonoCMethod_o* __this, const MethodInfo* method_info);
bool System_Reflection_MonoCMethod__IsDefined (System_Reflection_MonoCMethod_o* __this, System_Type_o* attributeType, bool inherit, const MethodInfo* method_info);
System_Object_array* System_Reflection_MonoCMethod__GetCustomAttributes (System_Reflection_MonoCMethod_o* __this, bool inherit, const MethodInfo* method_info);
System_Object_array* System_Reflection_MonoCMethod__GetCustomAttributes (System_Reflection_MonoCMethod_o* __this, System_Type_o* attributeType, bool inherit, const MethodInfo* method_info);
System_String_o* System_Reflection_MonoCMethod__ToString (System_Reflection_MonoCMethod_o* __this, const MethodInfo* method_info);
System_Collections_Generic_IList_CustomAttributeData__o* System_Reflection_MonoCMethod__GetCustomAttributesData (System_Reflection_MonoCMethod_o* __this, const MethodInfo* method_info);
int32_t System_Reflection_MonoCMethod__get_core_clr_security_level (const MethodInfo* method_info);
bool System_Reflection_MonoCMethod__get_IsSecurityCritical (System_Reflection_MonoCMethod_o* __this, const MethodInfo* method_info);
void System_Reflection_MonoCMethod___ctor (System_Reflection_MonoCMethod_o* __this, const MethodInfo* method_info);
