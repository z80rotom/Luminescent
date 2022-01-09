#pragma once

#include "il2cpp.h"

void System_Threading_WaitHandle___ctor (System_Threading_WaitHandle_o* __this, const MethodInfo* method_info);
void System_Threading_WaitHandle__Init (System_Threading_WaitHandle_o* __this, const MethodInfo* method_info);
void System_Threading_WaitHandle__set_Handle (System_Threading_WaitHandle_o* __this, intptr_t value, const MethodInfo* method_info);
Microsoft_Win32_SafeHandles_SafeWaitHandle_o* System_Threading_WaitHandle__get_SafeWaitHandle (System_Threading_WaitHandle_o* __this, const MethodInfo* method_info);
void System_Threading_WaitHandle__SetHandleInternal (System_Threading_WaitHandle_o* __this, Microsoft_Win32_SafeHandles_SafeWaitHandle_o* handle, const MethodInfo* method_info);
bool System_Threading_WaitHandle__WaitOne (System_Threading_WaitHandle_o* __this, int32_t millisecondsTimeout, bool exitContext, const MethodInfo* method_info);
bool System_Threading_WaitHandle__WaitOne (System_Threading_WaitHandle_o* __this, System_TimeSpan_o timeout, bool exitContext, const MethodInfo* method_info);
bool System_Threading_WaitHandle__WaitOne (System_Threading_WaitHandle_o* __this, const MethodInfo* method_info);
bool System_Threading_WaitHandle__WaitOne (System_Threading_WaitHandle_o* __this, int32_t millisecondsTimeout, const MethodInfo* method_info);
bool System_Threading_WaitHandle__WaitOne (System_Threading_WaitHandle_o* __this, System_TimeSpan_o timeout, const MethodInfo* method_info);
bool System_Threading_WaitHandle__WaitOne (System_Threading_WaitHandle_o* __this, int64_t timeout, bool exitContext, const MethodInfo* method_info);
bool System_Threading_WaitHandle__InternalWaitOne (System_Runtime_InteropServices_SafeHandle_o* waitableSafeHandle, int64_t millisecondsTimeout, bool hasThreadAffinity, bool exitContext, const MethodInfo* method_info);
int32_t System_Threading_WaitHandle__WaitAny (System_Threading_WaitHandle_array* waitHandles, int32_t millisecondsTimeout, bool exitContext, const MethodInfo* method_info);
int32_t System_Threading_WaitHandle__WaitAny (System_Threading_WaitHandle_array* waitHandles, System_TimeSpan_o timeout, bool exitContext, const MethodInfo* method_info);
void System_Threading_WaitHandle__ThrowAbandonedMutexException (const MethodInfo* method_info);
void System_Threading_WaitHandle__ThrowAbandonedMutexException (int32_t location, System_Threading_WaitHandle_o* handle, const MethodInfo* method_info);
void System_Threading_WaitHandle__Close (System_Threading_WaitHandle_o* __this, const MethodInfo* method_info);
void System_Threading_WaitHandle__Dispose (System_Threading_WaitHandle_o* __this, bool explicitDisposing, const MethodInfo* method_info);
void System_Threading_WaitHandle__Dispose (System_Threading_WaitHandle_o* __this, const MethodInfo* method_info);
int32_t System_Threading_WaitHandle__WaitMultiple (System_Threading_WaitHandle_array* waitHandles, int32_t millisecondsTimeout, bool exitContext, bool WaitAll, const MethodInfo* method_info);
int32_t System_Threading_WaitHandle__WaitOneNative (System_Runtime_InteropServices_SafeHandle_o* waitableSafeHandle, uint32_t millisecondsTimeout, bool hasThreadAffinity, bool exitContext, const MethodInfo* method_info);
int32_t System_Threading_WaitHandle__Wait_internal (intptr_t* handles, int32_t numHandles, bool waitAll, int32_t ms, const MethodInfo* method_info);
void System_Threading_WaitHandle___cctor (const MethodInfo* method_info);
