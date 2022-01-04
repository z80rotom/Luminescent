#pragma once

#include "il2cpp.h"

bool System_MonoCustomAttrs__IsUserCattrProvider (Il2CppObject* obj, const MethodInfo* method);
System_Object_array* System_MonoCustomAttrs__GetCustomAttributesInternal (System_Reflection_ICustomAttributeProvider_o* obj, System_Type_o* attributeType, bool pseudoAttrs, const MethodInfo* method);
System_Object_array* System_MonoCustomAttrs__GetPseudoCustomAttributes (System_Reflection_ICustomAttributeProvider_o* obj, System_Type_o* attributeType, const MethodInfo* method);
System_Object_array* System_MonoCustomAttrs__GetPseudoCustomAttributes (System_Type_o* type, const MethodInfo* method);
System_Object_array* System_MonoCustomAttrs__GetCustomAttributesBase (System_Reflection_ICustomAttributeProvider_o* obj, System_Type_o* attributeType, bool inheritedOnly, const MethodInfo* method);
System_Object_array* System_MonoCustomAttrs__GetCustomAttributes (System_Reflection_ICustomAttributeProvider_o* obj, System_Type_o* attributeType, bool inherit, const MethodInfo* method);
System_Object_array* System_MonoCustomAttrs__GetCustomAttributes (System_Reflection_ICustomAttributeProvider_o* obj, bool inherit, const MethodInfo* method);
System_Reflection_CustomAttributeData_array* System_MonoCustomAttrs__GetCustomAttributesDataInternal (System_Reflection_ICustomAttributeProvider_o* obj, const MethodInfo* method);
System_Collections_Generic_IList_CustomAttributeData__o* System_MonoCustomAttrs__GetCustomAttributesData (System_Reflection_ICustomAttributeProvider_o* obj, const MethodInfo* method);
bool System_MonoCustomAttrs__IsDefined (System_Reflection_ICustomAttributeProvider_o* obj, System_Type_o* attributeType, bool inherit, const MethodInfo* method);
bool System_MonoCustomAttrs__IsDefinedInternal (System_Reflection_ICustomAttributeProvider_o* obj, System_Type_o* AttributeType, const MethodInfo* method);
System_Reflection_PropertyInfo_o* System_MonoCustomAttrs__GetBasePropertyDefinition (System_Reflection_MonoProperty_o* property, const MethodInfo* method);
System_Reflection_EventInfo_o* System_MonoCustomAttrs__GetBaseEventDefinition (System_Reflection_MonoEvent_o* evt, const MethodInfo* method);
System_Reflection_ICustomAttributeProvider_o* System_MonoCustomAttrs__GetBase (System_Reflection_ICustomAttributeProvider_o* obj, const MethodInfo* method);
System_AttributeUsageAttribute_o* System_MonoCustomAttrs__RetrieveAttributeUsageNoCache (System_Type_o* attributeType, const MethodInfo* method);
System_AttributeUsageAttribute_o* System_MonoCustomAttrs__RetrieveAttributeUsage (System_Type_o* attributeType, const MethodInfo* method);
void System_MonoCustomAttrs___cctor (const MethodInfo* method);
