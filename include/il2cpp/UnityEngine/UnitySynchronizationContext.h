#pragma once

#include "il2cpp.h"

void UnityEngine_UnitySynchronizationContext___ctor (UnityEngine_UnitySynchronizationContext_o* __this, int32_t mainThreadID, const MethodInfo* method);
void UnityEngine_UnitySynchronizationContext___ctor (UnityEngine_UnitySynchronizationContext_o* __this, System_Collections_Generic_List_UnitySynchronizationContext_WorkRequest__o* queue, int32_t mainThreadID, const MethodInfo* method);
void UnityEngine_UnitySynchronizationContext__Send (UnityEngine_UnitySynchronizationContext_o* __this, System_Threading_SendOrPostCallback_o* callback, Il2CppObject* state, const MethodInfo* method);
void UnityEngine_UnitySynchronizationContext__Post (UnityEngine_UnitySynchronizationContext_o* __this, System_Threading_SendOrPostCallback_o* callback, Il2CppObject* state, const MethodInfo* method);
System_Threading_SynchronizationContext_o* UnityEngine_UnitySynchronizationContext__CreateCopy (UnityEngine_UnitySynchronizationContext_o* __this, const MethodInfo* method);
void UnityEngine_UnitySynchronizationContext__Exec (UnityEngine_UnitySynchronizationContext_o* __this, const MethodInfo* method);
bool UnityEngine_UnitySynchronizationContext__HasPendingTasks (UnityEngine_UnitySynchronizationContext_o* __this, const MethodInfo* method);
void UnityEngine_UnitySynchronizationContext__InitializeSynchronizationContext (const MethodInfo* method);
void UnityEngine_UnitySynchronizationContext__ExecuteTasks (const MethodInfo* method);
bool UnityEngine_UnitySynchronizationContext__ExecutePendingTasks (int64_t millisecondsTimeout, const MethodInfo* method);
