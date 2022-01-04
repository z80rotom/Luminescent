#pragma once

#include "il2cpp.h"

System_Threading_RegisteredWaitHandle_o* System_Threading_ThreadPool__RegisterWaitForSingleObject (System_Threading_WaitHandle_o* waitObject, System_Threading_WaitOrTimerCallback_o* callBack, Il2CppObject* state, uint32_t millisecondsTimeOutInterval, bool executeOnlyOnce, int32_t* stackMark, bool compressStack, const MethodInfo* method);
System_Threading_RegisteredWaitHandle_o* System_Threading_ThreadPool__RegisterWaitForSingleObject (System_Threading_WaitHandle_o* waitObject, System_Threading_WaitOrTimerCallback_o* callBack, Il2CppObject* state, System_TimeSpan_o timeout, bool executeOnlyOnce, const MethodInfo* method);
bool System_Threading_ThreadPool__QueueUserWorkItem (System_Threading_WaitCallback_o* callBack, Il2CppObject* state, const MethodInfo* method);
bool System_Threading_ThreadPool__UnsafeQueueUserWorkItem (System_Threading_WaitCallback_o* callBack, Il2CppObject* state, const MethodInfo* method);
bool System_Threading_ThreadPool__QueueUserWorkItemHelper (System_Threading_WaitCallback_o* callBack, Il2CppObject* state, int32_t* stackMark, bool compressStack, const MethodInfo* method);
void System_Threading_ThreadPool__UnsafeQueueCustomWorkItem (System_Threading_IThreadPoolWorkItem_o* workItem, bool forceGlobal, const MethodInfo* method);
bool System_Threading_ThreadPool__TryPopCustomWorkItem (System_Threading_IThreadPoolWorkItem_o* workItem, const MethodInfo* method);
bool System_Threading_ThreadPool__RequestWorkerThread (const MethodInfo* method);
void System_Threading_ThreadPool__EnsureVMInitialized (const MethodInfo* method);
bool System_Threading_ThreadPool__NotifyWorkItemComplete (const MethodInfo* method);
void System_Threading_ThreadPool__ReportThreadStatus (bool isWorking, const MethodInfo* method);
void System_Threading_ThreadPool__NotifyWorkItemProgress (const MethodInfo* method);
void System_Threading_ThreadPool__NotifyWorkItemProgressNative (const MethodInfo* method);
bool System_Threading_ThreadPool__IsThreadPoolHosted (const MethodInfo* method);
void System_Threading_ThreadPool__InitializeVMTp (bool* enableWorkerTracking, const MethodInfo* method);
