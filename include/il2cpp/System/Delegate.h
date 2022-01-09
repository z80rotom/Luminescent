#pragma once

#include "il2cpp.h"

System_Reflection_MethodInfo_o* System_Delegate__get_Method (System_Delegate_o* __this, const MethodInfo* method_info);
System_Reflection_MethodInfo_o* System_Delegate__GetVirtualMethod_internal (System_Delegate_o* __this, const MethodInfo* method_info);
Il2CppObject* System_Delegate__get_Target (System_Delegate_o* __this, const MethodInfo* method_info);
System_Delegate_o* System_Delegate__CreateDelegate_internal (System_Type_o* type, Il2CppObject* target, System_Reflection_MethodInfo_o* info, bool throwOnBindFailure, const MethodInfo* method_info);
bool System_Delegate__arg_type_match (System_Type_o* delArgType, System_Type_o* argType, const MethodInfo* method_info);
bool System_Delegate__arg_type_match_this (System_Type_o* delArgType, System_Type_o* argType, bool boxedThis, const MethodInfo* method_info);
bool System_Delegate__return_type_match (System_Type_o* delReturnType, System_Type_o* returnType, const MethodInfo* method_info);
System_Delegate_o* System_Delegate__CreateDelegate (System_Type_o* type, Il2CppObject* firstArgument, System_Reflection_MethodInfo_o* method, bool throwOnBindFailure, const MethodInfo* method_info);
System_Delegate_o* System_Delegate__CreateDelegate (System_Type_o* type, Il2CppObject* firstArgument, System_Reflection_MethodInfo_o* method, bool throwOnBindFailure, bool allowClosed, const MethodInfo* method_info);
System_Delegate_o* System_Delegate__CreateDelegate (System_Type_o* type, Il2CppObject* firstArgument, System_Reflection_MethodInfo_o* method, const MethodInfo* method_info);
System_Delegate_o* System_Delegate__CreateDelegate (System_Type_o* type, System_Reflection_MethodInfo_o* method, bool throwOnBindFailure, const MethodInfo* method_info);
System_Delegate_o* System_Delegate__CreateDelegate (System_Type_o* type, System_Reflection_MethodInfo_o* method, const MethodInfo* method_info);
System_Delegate_o* System_Delegate__CreateDelegate (System_Type_o* type, Il2CppObject* target, System_String_o* method, const MethodInfo* method_info);
System_Reflection_MethodInfo_o* System_Delegate__GetCandidateMethod (System_Type_o* type, System_Type_o* target, System_String_o* method, int32_t bflags, bool ignoreCase, bool throwOnBindFailure, const MethodInfo* method_info);
System_Delegate_o* System_Delegate__CreateDelegate (System_Type_o* type, System_Type_o* target, System_String_o* method, bool ignoreCase, bool throwOnBindFailure, const MethodInfo* method_info);
System_Delegate_o* System_Delegate__CreateDelegate (System_Type_o* type, System_Type_o* target, System_String_o* method, const MethodInfo* method_info);
System_Delegate_o* System_Delegate__CreateDelegate (System_Type_o* type, Il2CppObject* target, System_String_o* method, bool ignoreCase, bool throwOnBindFailure, const MethodInfo* method_info);
System_Delegate_o* System_Delegate__CreateDelegate (System_Type_o* type, Il2CppObject* target, System_String_o* method, bool ignoreCase, const MethodInfo* method_info);
Il2CppObject* System_Delegate__Clone (System_Delegate_o* __this, const MethodInfo* method_info);
bool System_Delegate__Equals (System_Delegate_o* __this, Il2CppObject* obj, const MethodInfo* method_info);
int32_t System_Delegate__GetHashCode (System_Delegate_o* __this, const MethodInfo* method_info);
System_Reflection_MethodInfo_o* System_Delegate__GetMethodImpl (System_Delegate_o* __this, const MethodInfo* method_info);
void System_Delegate__GetObjectData (System_Delegate_o* __this, System_Runtime_Serialization_SerializationInfo_o* info, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method_info);
System_Delegate_array* System_Delegate__GetInvocationList (System_Delegate_o* __this, const MethodInfo* method_info);
System_Delegate_o* System_Delegate__Combine (System_Delegate_o* a, System_Delegate_o* b, const MethodInfo* method_info);
System_Delegate_o* System_Delegate__Combine (System_Delegate_array* delegates, const MethodInfo* method_info);
System_Delegate_o* System_Delegate__CombineImpl (System_Delegate_o* __this, System_Delegate_o* d, const MethodInfo* method_info);
System_Delegate_o* System_Delegate__Remove (System_Delegate_o* source, System_Delegate_o* value, const MethodInfo* method_info);
System_Delegate_o* System_Delegate__RemoveImpl (System_Delegate_o* __this, System_Delegate_o* d, const MethodInfo* method_info);
bool System_Delegate__op_Equality (System_Delegate_o* d1, System_Delegate_o* d2, const MethodInfo* method_info);
System_Delegate_o* System_Delegate__CreateDelegateNoSecurityCheck (System_RuntimeType_o* type, Il2CppObject* firstArgument, System_Reflection_MethodInfo_o* method, const MethodInfo* method_info);
System_MulticastDelegate_o* System_Delegate__AllocDelegateLike_internal (System_Delegate_o* d, const MethodInfo* method_info);
