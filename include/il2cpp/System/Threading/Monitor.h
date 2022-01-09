#pragma once

#include "il2cpp.h"

void System_Threading_Monitor__Enter (Il2CppObject* obj, const MethodInfo* method_info);
void System_Threading_Monitor__Enter (Il2CppObject* obj, bool* lockTaken, const MethodInfo* method_info);
void System_Threading_Monitor__ThrowLockTakenException (const MethodInfo* method_info);
void System_Threading_Monitor__Exit (Il2CppObject* obj, const MethodInfo* method_info);
bool System_Threading_Monitor__Wait (Il2CppObject* obj, int32_t millisecondsTimeout, bool exitContext, const MethodInfo* method_info);
bool System_Threading_Monitor__Wait (Il2CppObject* obj, int32_t millisecondsTimeout, const MethodInfo* method_info);
void System_Threading_Monitor__Pulse (Il2CppObject* obj, const MethodInfo* method_info);
void System_Threading_Monitor__PulseAll (Il2CppObject* obj, const MethodInfo* method_info);
bool System_Threading_Monitor__Monitor_test_synchronised (Il2CppObject* obj, const MethodInfo* method_info);
void System_Threading_Monitor__Monitor_pulse (Il2CppObject* obj, const MethodInfo* method_info);
void System_Threading_Monitor__ObjPulse (Il2CppObject* obj, const MethodInfo* method_info);
void System_Threading_Monitor__Monitor_pulse_all (Il2CppObject* obj, const MethodInfo* method_info);
void System_Threading_Monitor__ObjPulseAll (Il2CppObject* obj, const MethodInfo* method_info);
bool System_Threading_Monitor__Monitor_wait (Il2CppObject* obj, int32_t ms, const MethodInfo* method_info);
bool System_Threading_Monitor__ObjWait (bool exitContext, int32_t millisecondsTimeout, Il2CppObject* obj, const MethodInfo* method_info);
void System_Threading_Monitor__try_enter_with_atomic_var (Il2CppObject* obj, int32_t millisecondsTimeout, bool* lockTaken, const MethodInfo* method_info);
void System_Threading_Monitor__ReliableEnterTimeout (Il2CppObject* obj, int32_t timeout, bool* lockTaken, const MethodInfo* method_info);
void System_Threading_Monitor__ReliableEnter (Il2CppObject* obj, bool* lockTaken, const MethodInfo* method_info);
