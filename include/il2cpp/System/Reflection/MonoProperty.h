#pragma once

#include "il2cpp.h"

void System_Reflection_MonoProperty__CachePropertyInfo (System_Reflection_MonoProperty_o* __this, int32_t flags, const MethodInfo* method_info);
int32_t System_Reflection_MonoProperty__get_Attributes (System_Reflection_MonoProperty_o* __this, const MethodInfo* method_info);
bool System_Reflection_MonoProperty__get_CanRead (System_Reflection_MonoProperty_o* __this, const MethodInfo* method_info);
bool System_Reflection_MonoProperty__get_CanWrite (System_Reflection_MonoProperty_o* __this, const MethodInfo* method_info);
System_Type_o* System_Reflection_MonoProperty__get_PropertyType (System_Reflection_MonoProperty_o* __this, const MethodInfo* method_info);
System_Type_o* System_Reflection_MonoProperty__get_ReflectedType (System_Reflection_MonoProperty_o* __this, const MethodInfo* method_info);
System_Type_o* System_Reflection_MonoProperty__get_DeclaringType (System_Reflection_MonoProperty_o* __this, const MethodInfo* method_info);
System_String_o* System_Reflection_MonoProperty__get_Name (System_Reflection_MonoProperty_o* __this, const MethodInfo* method_info);
System_Reflection_MethodInfo_array* System_Reflection_MonoProperty__GetAccessors (System_Reflection_MonoProperty_o* __this, bool nonPublic, const MethodInfo* method_info);
System_Reflection_MethodInfo_o* System_Reflection_MonoProperty__GetGetMethod (System_Reflection_MonoProperty_o* __this, bool nonPublic, const MethodInfo* method_info);
System_Reflection_ParameterInfo_array* System_Reflection_MonoProperty__GetIndexParameters (System_Reflection_MonoProperty_o* __this, const MethodInfo* method_info);
System_Reflection_MethodInfo_o* System_Reflection_MonoProperty__GetSetMethod (System_Reflection_MonoProperty_o* __this, bool nonPublic, const MethodInfo* method_info);
Il2CppObject* System_Reflection_MonoProperty__GetConstantValue (System_Reflection_MonoProperty_o* __this, const MethodInfo* method_info);
Il2CppObject* System_Reflection_MonoProperty__GetRawConstantValue (System_Reflection_MonoProperty_o* __this, const MethodInfo* method_info);
bool System_Reflection_MonoProperty__IsDefined (System_Reflection_MonoProperty_o* __this, System_Type_o* attributeType, bool inherit, const MethodInfo* method_info);
System_Object_array* System_Reflection_MonoProperty__GetCustomAttributes (System_Reflection_MonoProperty_o* __this, bool inherit, const MethodInfo* method_info);
System_Object_array* System_Reflection_MonoProperty__GetCustomAttributes (System_Reflection_MonoProperty_o* __this, System_Type_o* attributeType, bool inherit, const MethodInfo* method_info);
Il2CppObject* System_Reflection_MonoProperty__GetterAdapterFrame_object__object_ (System_Reflection_MonoProperty_Getter_T__R__o* getter, Il2CppObject* obj, const MethodInfo* method_info);
Il2CppObject* System_Reflection_MonoProperty__StaticGetterAdapterFrame_object_ (System_Reflection_MonoProperty_StaticGetter_R__o* getter, Il2CppObject* obj, const MethodInfo* method_info);
System_Reflection_MonoProperty_GetterAdapter_o* System_Reflection_MonoProperty__CreateGetterDelegate (System_Reflection_MethodInfo_o* method, const MethodInfo* method_info);
Il2CppObject* System_Reflection_MonoProperty__GetValue (System_Reflection_MonoProperty_o* __this, Il2CppObject* obj, System_Object_array* index, const MethodInfo* method_info);
Il2CppObject* System_Reflection_MonoProperty__GetValue (System_Reflection_MonoProperty_o* __this, Il2CppObject* obj, int32_t invokeAttr, System_Reflection_Binder_o* binder, System_Object_array* index, System_Globalization_CultureInfo_o* culture, const MethodInfo* method_info);
void System_Reflection_MonoProperty__SetValue (System_Reflection_MonoProperty_o* __this, Il2CppObject* obj, Il2CppObject* value, int32_t invokeAttr, System_Reflection_Binder_o* binder, System_Object_array* index, System_Globalization_CultureInfo_o* culture, const MethodInfo* method_info);
System_Type_array* System_Reflection_MonoProperty__GetOptionalCustomModifiers (System_Reflection_MonoProperty_o* __this, const MethodInfo* method_info);
System_Type_array* System_Reflection_MonoProperty__GetRequiredCustomModifiers (System_Reflection_MonoProperty_o* __this, const MethodInfo* method_info);
System_Collections_Generic_IList_CustomAttributeData__o* System_Reflection_MonoProperty__GetCustomAttributesData (System_Reflection_MonoProperty_o* __this, const MethodInfo* method_info);
void System_Reflection_MonoProperty___ctor (System_Reflection_MonoProperty_o* __this, const MethodInfo* method_info);
