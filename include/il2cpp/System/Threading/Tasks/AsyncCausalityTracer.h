#pragma once

#include "il2cpp.h"

bool System_Threading_Tasks_AsyncCausalityTracer__get_LoggingOn (const MethodInfo* method_info);
void System_Threading_Tasks_AsyncCausalityTracer__TraceOperationCreation (int32_t traceLevel, int32_t taskId, System_String_o* operationName, uint64_t relatedContext, const MethodInfo* method_info);
void System_Threading_Tasks_AsyncCausalityTracer__TraceOperationCompletion (int32_t traceLevel, int32_t taskId, int32_t status, const MethodInfo* method_info);
void System_Threading_Tasks_AsyncCausalityTracer__TraceOperationRelation (int32_t traceLevel, int32_t taskId, int32_t relation, const MethodInfo* method_info);
void System_Threading_Tasks_AsyncCausalityTracer__TraceSynchronousWorkStart (int32_t traceLevel, int32_t taskId, int32_t work, const MethodInfo* method_info);
void System_Threading_Tasks_AsyncCausalityTracer__TraceSynchronousWorkCompletion (int32_t traceLevel, int32_t work, const MethodInfo* method_info);
