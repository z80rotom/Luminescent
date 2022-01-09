#pragma once

#include "il2cpp.h"

void System_Reflection_MemberFilter___ctor (System_Reflection_MemberFilter_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method_info);
bool System_Reflection_MemberFilter__Invoke (System_Reflection_MemberFilter_o* __this, System_Reflection_MemberInfo_o* m, Il2CppObject* filterCriteria, const MethodInfo* method_info);
System_IAsyncResult_o* System_Reflection_MemberFilter__BeginInvoke (System_Reflection_MemberFilter_o* __this, System_Reflection_MemberInfo_o* m, Il2CppObject* filterCriteria, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method_info);
bool System_Reflection_MemberFilter__EndInvoke (System_Reflection_MemberFilter_o* __this, System_IAsyncResult_o* result, const MethodInfo* method_info);
