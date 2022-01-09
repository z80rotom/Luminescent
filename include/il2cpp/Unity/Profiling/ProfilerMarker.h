#pragma once

#include "il2cpp.h"

void Unity_Profiling_ProfilerMarker___ctor (Unity_Profiling_ProfilerMarker_o __this, System_String_o* name, const MethodInfo* method_info);
Unity_Profiling_ProfilerMarker_AutoScope_o Unity_Profiling_ProfilerMarker__Auto (Unity_Profiling_ProfilerMarker_o __this, const MethodInfo* method_info);
intptr_t Unity_Profiling_ProfilerMarker__Internal_Create (System_String_o* name, uint16_t flags, const MethodInfo* method_info);
void Unity_Profiling_ProfilerMarker__Internal_Begin (intptr_t markerPtr, const MethodInfo* method_info);
void Unity_Profiling_ProfilerMarker__Internal_End (intptr_t markerPtr, const MethodInfo* method_info);
