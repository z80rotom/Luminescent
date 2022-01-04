#pragma once

#include "il2cpp.h"

void UnityEngine_Events_UnityEvent___ctor (UnityEngine_Events_UnityEvent_o* __this, const MethodInfo* method);
void UnityEngine_Events_UnityEvent__AddListener (UnityEngine_Events_UnityEvent_o* __this, UnityEngine_Events_UnityAction_o* call, const MethodInfo* method);
void UnityEngine_Events_UnityEvent__RemoveListener (UnityEngine_Events_UnityEvent_o* __this, UnityEngine_Events_UnityAction_o* call, const MethodInfo* method);
System_Reflection_MethodInfo_o* UnityEngine_Events_UnityEvent__FindMethod_Impl (UnityEngine_Events_UnityEvent_o* __this, System_String_o* name, Il2CppObject* targetObj, const MethodInfo* method);
UnityEngine_Events_BaseInvokableCall_o* UnityEngine_Events_UnityEvent__GetDelegate (UnityEngine_Events_UnityEvent_o* __this, Il2CppObject* target, System_Reflection_MethodInfo_o* theFunction, const MethodInfo* method);
UnityEngine_Events_BaseInvokableCall_o* UnityEngine_Events_UnityEvent__GetDelegate (UnityEngine_Events_UnityAction_o* action, const MethodInfo* method);
void UnityEngine_Events_UnityEvent__Invoke (UnityEngine_Events_UnityEvent_o* __this, const MethodInfo* method);
