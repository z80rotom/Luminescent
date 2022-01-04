#pragma once

#include "il2cpp.h"

void System_Threading_ThreadPoolWorkQueue___ctor (System_Threading_ThreadPoolWorkQueue_o* __this, const MethodInfo* method);
System_Threading_ThreadPoolWorkQueueThreadLocals_o* System_Threading_ThreadPoolWorkQueue__EnsureCurrentThreadHasQueue (System_Threading_ThreadPoolWorkQueue_o* __this, const MethodInfo* method);
void System_Threading_ThreadPoolWorkQueue__EnsureThreadRequested (System_Threading_ThreadPoolWorkQueue_o* __this, const MethodInfo* method);
void System_Threading_ThreadPoolWorkQueue__MarkThreadRequestSatisfied (System_Threading_ThreadPoolWorkQueue_o* __this, const MethodInfo* method);
void System_Threading_ThreadPoolWorkQueue__Enqueue (System_Threading_ThreadPoolWorkQueue_o* __this, System_Threading_IThreadPoolWorkItem_o* callback, bool forceGlobal, const MethodInfo* method);
bool System_Threading_ThreadPoolWorkQueue__LocalFindAndPop (System_Threading_ThreadPoolWorkQueue_o* __this, System_Threading_IThreadPoolWorkItem_o* callback, const MethodInfo* method);
void System_Threading_ThreadPoolWorkQueue__Dequeue (System_Threading_ThreadPoolWorkQueue_o* __this, System_Threading_ThreadPoolWorkQueueThreadLocals_o* tl, System_Threading_IThreadPoolWorkItem_o** callback, bool* missedSteal, const MethodInfo* method);
bool System_Threading_ThreadPoolWorkQueue__Dispatch (const MethodInfo* method);
void System_Threading_ThreadPoolWorkQueue___cctor (const MethodInfo* method);
