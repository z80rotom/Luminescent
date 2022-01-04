#pragma once

#include "il2cpp.h"

void System_Threading_RegisteredWaitHandle___ctor (System_Threading_RegisteredWaitHandle_o* __this, System_Threading_WaitHandle_o* waitObject, System_Threading_WaitOrTimerCallback_o* callback, Il2CppObject* state, System_TimeSpan_o timeout, bool executeOnlyOnce, const MethodInfo* method);
void System_Threading_RegisteredWaitHandle__Wait (System_Threading_RegisteredWaitHandle_o* __this, Il2CppObject* state, const MethodInfo* method);
void System_Threading_RegisteredWaitHandle__DoCallBack (System_Threading_RegisteredWaitHandle_o* __this, Il2CppObject* timedOut, const MethodInfo* method);
