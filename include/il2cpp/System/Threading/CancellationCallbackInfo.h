#pragma once

#include "il2cpp.h"

void System_Threading_CancellationCallbackInfo___ctor (System_Threading_CancellationCallbackInfo_o* __this, System_Action_object__o* callback, Il2CppObject* stateForCallback, System_Threading_SynchronizationContext_o* targetSyncContext, System_Threading_ExecutionContext_o* targetExecutionContext, System_Threading_CancellationTokenSource_o* cancellationTokenSource, const MethodInfo* method);
void System_Threading_CancellationCallbackInfo__ExecuteCallback (System_Threading_CancellationCallbackInfo_o* __this, const MethodInfo* method);
void System_Threading_CancellationCallbackInfo__ExecutionContextCallback (Il2CppObject* obj, const MethodInfo* method);
