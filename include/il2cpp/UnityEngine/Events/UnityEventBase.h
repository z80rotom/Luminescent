#pragma once

#include "il2cpp.h"

void UnityEngine_Events_UnityEventBase___ctor (UnityEngine_Events_UnityEventBase_o* __this, const MethodInfo* method);
void UnityEngine_Events_UnityEventBase__UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize (UnityEngine_Events_UnityEventBase_o* __this, const MethodInfo* method);
void UnityEngine_Events_UnityEventBase__UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize (UnityEngine_Events_UnityEventBase_o* __this, const MethodInfo* method);
System_Reflection_MethodInfo_o* UnityEngine_Events_UnityEventBase__FindMethod (UnityEngine_Events_UnityEventBase_o* __this, UnityEngine_Events_PersistentCall_o* call, const MethodInfo* method);
System_Reflection_MethodInfo_o* UnityEngine_Events_UnityEventBase__FindMethod (UnityEngine_Events_UnityEventBase_o* __this, System_String_o* name, Il2CppObject* listener, int32_t mode, System_Type_o* argumentType, const MethodInfo* method);
void UnityEngine_Events_UnityEventBase__DirtyPersistentCalls (UnityEngine_Events_UnityEventBase_o* __this, const MethodInfo* method);
void UnityEngine_Events_UnityEventBase__RebuildPersistentCallsIfNeeded (UnityEngine_Events_UnityEventBase_o* __this, const MethodInfo* method);
void UnityEngine_Events_UnityEventBase__AddCall (UnityEngine_Events_UnityEventBase_o* __this, UnityEngine_Events_BaseInvokableCall_o* call, const MethodInfo* method);
void UnityEngine_Events_UnityEventBase__RemoveListener (UnityEngine_Events_UnityEventBase_o* __this, Il2CppObject* targetObj, System_Reflection_MethodInfo_o* method, const MethodInfo* method);
void UnityEngine_Events_UnityEventBase__RemoveAllListeners (UnityEngine_Events_UnityEventBase_o* __this, const MethodInfo* method);
System_Collections_Generic_List_BaseInvokableCall__o* UnityEngine_Events_UnityEventBase__PrepareInvoke (UnityEngine_Events_UnityEventBase_o* __this, const MethodInfo* method);
System_String_o* UnityEngine_Events_UnityEventBase__ToString (UnityEngine_Events_UnityEventBase_o* __this, const MethodInfo* method);
System_Reflection_MethodInfo_o* UnityEngine_Events_UnityEventBase__GetValidMethodInfo (Il2CppObject* obj, System_String_o* functionName, System_Type_array* argumentTypes, const MethodInfo* method);
