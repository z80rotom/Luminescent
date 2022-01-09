#pragma once

#include "il2cpp.h"

void System_Reflection_MonoMethodInfo__get_method_info (intptr_t handle, System_Reflection_MonoMethodInfo_o* info, const MethodInfo* method_info);
int32_t System_Reflection_MonoMethodInfo__get_method_attributes (intptr_t handle, const MethodInfo* method_info);
System_Reflection_MonoMethodInfo_o System_Reflection_MonoMethodInfo__GetMethodInfo (intptr_t handle, const MethodInfo* method_info);
System_Type_o* System_Reflection_MonoMethodInfo__GetDeclaringType (intptr_t handle, const MethodInfo* method_info);
System_Type_o* System_Reflection_MonoMethodInfo__GetReturnType (intptr_t handle, const MethodInfo* method_info);
int32_t System_Reflection_MonoMethodInfo__GetAttributes (intptr_t handle, const MethodInfo* method_info);
int32_t System_Reflection_MonoMethodInfo__GetCallingConvention (intptr_t handle, const MethodInfo* method_info);
int32_t System_Reflection_MonoMethodInfo__GetMethodImplementationFlags (intptr_t handle, const MethodInfo* method_info);
System_Reflection_ParameterInfo_array* System_Reflection_MonoMethodInfo__get_parameter_info (intptr_t handle, System_Reflection_MemberInfo_o* member, const MethodInfo* method_info);
System_Reflection_ParameterInfo_array* System_Reflection_MonoMethodInfo__GetParametersInfo (intptr_t handle, System_Reflection_MemberInfo_o* member, const MethodInfo* method_info);
