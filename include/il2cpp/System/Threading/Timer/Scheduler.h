#pragma once

#include "il2cpp.h"

void System_Threading_Timer_Scheduler___cctor (const MethodInfo* method);
System_Threading_Timer_Scheduler_o* System_Threading_Timer_Scheduler__get_Instance (const MethodInfo* method);
void System_Threading_Timer_Scheduler___ctor (System_Threading_Timer_Scheduler_o* __this, const MethodInfo* method);
void System_Threading_Timer_Scheduler__Remove (System_Threading_Timer_Scheduler_o* __this, System_Threading_Timer_o* timer, const MethodInfo* method);
void System_Threading_Timer_Scheduler__Change (System_Threading_Timer_Scheduler_o* __this, System_Threading_Timer_o* timer, int64_t new_next_run, const MethodInfo* method);
int32_t System_Threading_Timer_Scheduler__FindByDueTime (System_Threading_Timer_Scheduler_o* __this, int64_t nr, const MethodInfo* method);
void System_Threading_Timer_Scheduler__Add (System_Threading_Timer_Scheduler_o* __this, System_Threading_Timer_o* timer, const MethodInfo* method);
int32_t System_Threading_Timer_Scheduler__InternalRemove (System_Threading_Timer_Scheduler_o* __this, System_Threading_Timer_o* timer, const MethodInfo* method);
void System_Threading_Timer_Scheduler__TimerCB (Il2CppObject* o, const MethodInfo* method);
void System_Threading_Timer_Scheduler__SchedulerThread (System_Threading_Timer_Scheduler_o* __this, const MethodInfo* method);
void System_Threading_Timer_Scheduler__ShrinkIfNeeded (System_Threading_Timer_Scheduler_o* __this, System_Collections_Generic_List_Timer__o* list, int32_t initial, const MethodInfo* method);
