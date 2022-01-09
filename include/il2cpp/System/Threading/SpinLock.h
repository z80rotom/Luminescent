#pragma once

#include "il2cpp.h"

void System_Threading_SpinLock___ctor (System_Threading_SpinLock_o __this, bool enableThreadOwnerTracking, const MethodInfo* method_info);
void System_Threading_SpinLock__Enter (System_Threading_SpinLock_o __this, bool* lockTaken, const MethodInfo* method_info);
void System_Threading_SpinLock__TryEnter (System_Threading_SpinLock_o __this, int32_t millisecondsTimeout, bool* lockTaken, const MethodInfo* method_info);
void System_Threading_SpinLock__ContinueTryEnter (System_Threading_SpinLock_o __this, int32_t millisecondsTimeout, bool* lockTaken, const MethodInfo* method_info);
void System_Threading_SpinLock__DecrementWaiters (System_Threading_SpinLock_o __this, const MethodInfo* method_info);
void System_Threading_SpinLock__ContinueTryEnterWithThreadTracking (System_Threading_SpinLock_o __this, int32_t millisecondsTimeout, uint32_t startTime, bool* lockTaken, const MethodInfo* method_info);
void System_Threading_SpinLock__Exit (System_Threading_SpinLock_o __this, bool useMemoryBarrier, const MethodInfo* method_info);
void System_Threading_SpinLock__ExitSlowPath (System_Threading_SpinLock_o __this, bool useMemoryBarrier, const MethodInfo* method_info);
bool System_Threading_SpinLock__get_IsHeldByCurrentThread (System_Threading_SpinLock_o __this, const MethodInfo* method_info);
bool System_Threading_SpinLock__get_IsThreadOwnerTrackingEnabled (System_Threading_SpinLock_o __this, const MethodInfo* method_info);
void System_Threading_SpinLock___cctor (const MethodInfo* method_info);
