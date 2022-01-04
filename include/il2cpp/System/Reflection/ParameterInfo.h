#pragma once

#include "il2cpp.h"

void System_Reflection_ParameterInfo___ctor (System_Reflection_ParameterInfo_o* __this, const MethodInfo* method);
System_String_o* System_Reflection_ParameterInfo__ToString (System_Reflection_ParameterInfo_o* __this, const MethodInfo* method);
void System_Reflection_ParameterInfo__FormatParameters (System_Text_StringBuilder_o* sb, System_Reflection_ParameterInfo_array* p, int32_t callingConvention, bool serialization, const MethodInfo* method);
System_Type_o* System_Reflection_ParameterInfo__get_ParameterType (System_Reflection_ParameterInfo_o* __this, const MethodInfo* method);
int32_t System_Reflection_ParameterInfo__get_Attributes (System_Reflection_ParameterInfo_o* __this, const MethodInfo* method);
bool System_Reflection_ParameterInfo__get_IsIn (System_Reflection_ParameterInfo_o* __this, const MethodInfo* method);
bool System_Reflection_ParameterInfo__get_IsOptional (System_Reflection_ParameterInfo_o* __this, const MethodInfo* method);
bool System_Reflection_ParameterInfo__get_IsOut (System_Reflection_ParameterInfo_o* __this, const MethodInfo* method);
bool System_Reflection_ParameterInfo__get_IsRetval (System_Reflection_ParameterInfo_o* __this, const MethodInfo* method);
System_String_o* System_Reflection_ParameterInfo__get_Name (System_Reflection_ParameterInfo_o* __this, const MethodInfo* method);
int32_t System_Reflection_ParameterInfo__get_Position (System_Reflection_ParameterInfo_o* __this, const MethodInfo* method);
System_Object_array* System_Reflection_ParameterInfo__GetPseudoCustomAttributes (System_Reflection_ParameterInfo_o* __this, const MethodInfo* method);
Il2CppObject* System_Reflection_ParameterInfo__GetDefaultValueImpl (System_Reflection_ParameterInfo_o* __this, const MethodInfo* method);
Il2CppObject* System_Reflection_ParameterInfo__get_DefaultValue (System_Reflection_ParameterInfo_o* __this, const MethodInfo* method);
System_Object_array* System_Reflection_ParameterInfo__GetCustomAttributes (System_Reflection_ParameterInfo_o* __this, System_Type_o* attributeType, bool inherit, const MethodInfo* method);
Il2CppObject* System_Reflection_ParameterInfo__GetRealObject (System_Reflection_ParameterInfo_o* __this, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method);
bool System_Reflection_ParameterInfo__IsDefined (System_Reflection_ParameterInfo_o* __this, System_Type_o* attributeType, bool inherit, const MethodInfo* method);
System_Reflection_ParameterInfo_o* System_Reflection_ParameterInfo__New (System_Reflection_ParameterInfo_o* pinfo, System_Reflection_MemberInfo_o* member, const MethodInfo* method);
