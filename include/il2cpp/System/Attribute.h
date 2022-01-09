#pragma once

#include "il2cpp.h"

System_Attribute_array* System_Attribute__InternalGetCustomAttributes (System_Reflection_PropertyInfo_o* element, System_Type_o* type, bool inherit, const MethodInfo* method_info);
System_Attribute_array* System_Attribute__InternalGetCustomAttributes (System_Reflection_EventInfo_o* element, System_Type_o* type, bool inherit, const MethodInfo* method_info);
bool System_Attribute__InternalIsDefined (System_Reflection_PropertyInfo_o* element, System_Type_o* attributeType, bool inherit, const MethodInfo* method_info);
bool System_Attribute__InternalIsDefined (System_Reflection_EventInfo_o* element, System_Type_o* attributeType, bool inherit, const MethodInfo* method_info);
System_Attribute_array* System_Attribute__GetCustomAttributes (System_Reflection_MemberInfo_o* element, System_Type_o* type, bool inherit, const MethodInfo* method_info);
bool System_Attribute__IsDefined (System_Reflection_MemberInfo_o* element, System_Type_o* attributeType, const MethodInfo* method_info);
bool System_Attribute__IsDefined (System_Reflection_MemberInfo_o* element, System_Type_o* attributeType, bool inherit, const MethodInfo* method_info);
System_Attribute_o* System_Attribute__GetCustomAttribute (System_Reflection_MemberInfo_o* element, System_Type_o* attributeType, const MethodInfo* method_info);
System_Attribute_o* System_Attribute__GetCustomAttribute (System_Reflection_MemberInfo_o* element, System_Type_o* attributeType, bool inherit, const MethodInfo* method_info);
System_Attribute_array* System_Attribute__GetCustomAttributes (System_Reflection_Assembly_o* element, System_Type_o* attributeType, bool inherit, const MethodInfo* method_info);
System_Attribute_o* System_Attribute__GetCustomAttribute (System_Reflection_Assembly_o* element, System_Type_o* attributeType, const MethodInfo* method_info);
System_Attribute_o* System_Attribute__GetCustomAttribute (System_Reflection_Assembly_o* element, System_Type_o* attributeType, bool inherit, const MethodInfo* method_info);
void System_Attribute___ctor (System_Attribute_o* __this, const MethodInfo* method_info);
bool System_Attribute__Equals (System_Attribute_o* __this, Il2CppObject* obj, const MethodInfo* method_info);
bool System_Attribute__AreFieldValuesEqual (Il2CppObject* thisValue, Il2CppObject* thatValue, const MethodInfo* method_info);
int32_t System_Attribute__GetHashCode (System_Attribute_o* __this, const MethodInfo* method_info);
