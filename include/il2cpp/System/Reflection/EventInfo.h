#pragma once

#include "il2cpp.h"

System_Type_o* System_Reflection_EventInfo__get_EventHandlerType (System_Reflection_EventInfo_o* __this, const MethodInfo* method);
int32_t System_Reflection_EventInfo__get_MemberType (System_Reflection_EventInfo_o* __this, const MethodInfo* method);
void System_Reflection_EventInfo___ctor (System_Reflection_EventInfo_o* __this, const MethodInfo* method);
bool System_Reflection_EventInfo__Equals (System_Reflection_EventInfo_o* __this, Il2CppObject* obj, const MethodInfo* method);
int32_t System_Reflection_EventInfo__GetHashCode (System_Reflection_EventInfo_o* __this, const MethodInfo* method);
bool System_Reflection_EventInfo__op_Equality (System_Reflection_EventInfo_o* left, System_Reflection_EventInfo_o* right, const MethodInfo* method);
bool System_Reflection_EventInfo__op_Inequality (System_Reflection_EventInfo_o* left, System_Reflection_EventInfo_o* right, const MethodInfo* method);
System_Reflection_EventInfo_o* System_Reflection_EventInfo__internal_from_handle_type (intptr_t event_handle, intptr_t type_handle, const MethodInfo* method);
System_Reflection_EventInfo_o* System_Reflection_EventInfo__GetEventFromHandle (Mono_RuntimeEventHandle_o handle, System_RuntimeTypeHandle_o reflectedType, const MethodInfo* method);
