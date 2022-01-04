#pragma once

#include "il2cpp.h"

void System_Threading_SemaphoreSlim___ctor (System_Threading_SemaphoreSlim_o* __this, int32_t initialCount, int32_t maxCount, const MethodInfo* method);
void System_Threading_SemaphoreSlim__Wait (System_Threading_SemaphoreSlim_o* __this, const MethodInfo* method);
bool System_Threading_SemaphoreSlim__Wait (System_Threading_SemaphoreSlim_o* __this, int32_t millisecondsTimeout, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
bool System_Threading_SemaphoreSlim__WaitUntilCountOrTimeout (System_Threading_SemaphoreSlim_o* __this, int32_t millisecondsTimeout, uint32_t startTime, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
System_Threading_Tasks_Task_o* System_Threading_SemaphoreSlim__WaitAsync (System_Threading_SemaphoreSlim_o* __this, const MethodInfo* method);
System_Threading_Tasks_Task_bool__o* System_Threading_SemaphoreSlim__WaitAsync (System_Threading_SemaphoreSlim_o* __this, int32_t millisecondsTimeout, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
System_Threading_SemaphoreSlim_TaskNode_o* System_Threading_SemaphoreSlim__CreateAndAddAsyncWaiter (System_Threading_SemaphoreSlim_o* __this, const MethodInfo* method);
bool System_Threading_SemaphoreSlim__RemoveAsyncWaiter (System_Threading_SemaphoreSlim_o* __this, System_Threading_SemaphoreSlim_TaskNode_o* task, const MethodInfo* method);
System_Threading_Tasks_Task_bool__o* System_Threading_SemaphoreSlim__WaitUntilCountOrTimeoutAsync (System_Threading_SemaphoreSlim_o* __this, System_Threading_SemaphoreSlim_TaskNode_o* asyncWaiter, int32_t millisecondsTimeout, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
int32_t System_Threading_SemaphoreSlim__Release (System_Threading_SemaphoreSlim_o* __this, const MethodInfo* method);
int32_t System_Threading_SemaphoreSlim__Release (System_Threading_SemaphoreSlim_o* __this, int32_t releaseCount, const MethodInfo* method);
void System_Threading_SemaphoreSlim__QueueWaiterTask (System_Threading_SemaphoreSlim_TaskNode_o* waiterTask, const MethodInfo* method);
void System_Threading_SemaphoreSlim__Dispose (System_Threading_SemaphoreSlim_o* __this, const MethodInfo* method);
void System_Threading_SemaphoreSlim__Dispose (System_Threading_SemaphoreSlim_o* __this, bool disposing, const MethodInfo* method);
void System_Threading_SemaphoreSlim__CancellationTokenCanceledEventHandler (Il2CppObject* obj, const MethodInfo* method);
void System_Threading_SemaphoreSlim__CheckDispose (System_Threading_SemaphoreSlim_o* __this, const MethodInfo* method);
System_String_o* System_Threading_SemaphoreSlim__GetResourceString (System_String_o* str, const MethodInfo* method);
void System_Threading_SemaphoreSlim___cctor (const MethodInfo* method);
