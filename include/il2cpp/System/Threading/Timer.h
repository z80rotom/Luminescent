#pragma once

#include "il2cpp.h"

void System_Threading_Timer___ctor (System_Threading_Timer_o* __this, System_Threading_TimerCallback_o* callback, Il2CppObject* state, int32_t dueTime, int32_t period, const MethodInfo* method_info);
void System_Threading_Timer___ctor (System_Threading_Timer_o* __this, System_Threading_TimerCallback_o* callback, Il2CppObject* state, System_TimeSpan_o dueTime, System_TimeSpan_o period, const MethodInfo* method_info);
void System_Threading_Timer__Init (System_Threading_Timer_o* __this, System_Threading_TimerCallback_o* callback, Il2CppObject* state, int64_t dueTime, int64_t period, const MethodInfo* method_info);
bool System_Threading_Timer__Change (System_Threading_Timer_o* __this, System_TimeSpan_o dueTime, System_TimeSpan_o period, const MethodInfo* method_info);
void System_Threading_Timer__Dispose (System_Threading_Timer_o* __this, const MethodInfo* method_info);
bool System_Threading_Timer__Change (System_Threading_Timer_o* __this, int64_t dueTime, int64_t period, bool first, const MethodInfo* method_info);
void System_Threading_Timer__KeepRootedWhileScheduled (System_Threading_Timer_o* __this, const MethodInfo* method_info);
int64_t System_Threading_Timer__GetTimeMonotonic (const MethodInfo* method_info);
void System_Threading_Timer___cctor (const MethodInfo* method_info);
