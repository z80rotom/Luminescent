#pragma once

#include "il2cpp.h"

UnityEngine_Object_o* UnityEngine_Events_PersistentCall__get_target (UnityEngine_Events_PersistentCall_o* __this, const MethodInfo* method);
System_String_o* UnityEngine_Events_PersistentCall__get_methodName (UnityEngine_Events_PersistentCall_o* __this, const MethodInfo* method);
int32_t UnityEngine_Events_PersistentCall__get_mode (UnityEngine_Events_PersistentCall_o* __this, const MethodInfo* method);
UnityEngine_Events_ArgumentCache_o* UnityEngine_Events_PersistentCall__get_arguments (UnityEngine_Events_PersistentCall_o* __this, const MethodInfo* method);
bool UnityEngine_Events_PersistentCall__IsValid (UnityEngine_Events_PersistentCall_o* __this, const MethodInfo* method);
UnityEngine_Events_BaseInvokableCall_o* UnityEngine_Events_PersistentCall__GetRuntimeCall (UnityEngine_Events_PersistentCall_o* __this, UnityEngine_Events_UnityEventBase_o* theEvent, const MethodInfo* method);
UnityEngine_Events_BaseInvokableCall_o* UnityEngine_Events_PersistentCall__GetObjectCall (UnityEngine_Object_o* target, System_Reflection_MethodInfo_o* method, UnityEngine_Events_ArgumentCache_o* arguments, const MethodInfo* method);
void UnityEngine_Events_PersistentCall___ctor (UnityEngine_Events_PersistentCall_o* __this, const MethodInfo* method);
