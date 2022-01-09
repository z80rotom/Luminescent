#pragma once

#include "il2cpp.h"

void System_Threading_Tasks_TaskFactory___ctor (System_Threading_Tasks_TaskFactory_o* __this, const MethodInfo* method_info);
void System_Threading_Tasks_TaskFactory___ctor (System_Threading_Tasks_TaskFactory_o* __this, System_Threading_CancellationToken_o cancellationToken, int32_t creationOptions, int32_t continuationOptions, System_Threading_Tasks_TaskScheduler_o* scheduler, const MethodInfo* method_info);
void System_Threading_Tasks_TaskFactory__CheckCreationOptions (int32_t creationOptions, const MethodInfo* method_info);
System_Threading_Tasks_Task_Task__o* System_Threading_Tasks_TaskFactory__CommonCWAnyLogic (System_Collections_Generic_IList_Task__o* tasks, const MethodInfo* method_info);
void System_Threading_Tasks_TaskFactory__CheckMultiTaskContinuationOptions (int32_t continuationOptions, const MethodInfo* method_info);
