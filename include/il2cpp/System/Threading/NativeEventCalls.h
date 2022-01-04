#pragma once

#include "il2cpp.h"

intptr_t System_Threading_NativeEventCalls__CreateEvent_internal (bool manual, bool initial, System_String_o* name, int32_t* errorCode, const MethodInfo* method);
bool System_Threading_NativeEventCalls__SetEvent (Microsoft_Win32_SafeHandles_SafeWaitHandle_o* handle, const MethodInfo* method);
bool System_Threading_NativeEventCalls__SetEvent_internal (intptr_t handle, const MethodInfo* method);
bool System_Threading_NativeEventCalls__ResetEvent (Microsoft_Win32_SafeHandles_SafeWaitHandle_o* handle, const MethodInfo* method);
bool System_Threading_NativeEventCalls__ResetEvent_internal (intptr_t handle, const MethodInfo* method);
void System_Threading_NativeEventCalls__CloseEvent_internal (intptr_t handle, const MethodInfo* method);
