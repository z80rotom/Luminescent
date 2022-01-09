#pragma once

#include "il2cpp.h"

void System_Random___ctor (System_Random_o* __this, const MethodInfo* method_info);
void System_Random___ctor (System_Random_o* __this, int32_t Seed, const MethodInfo* method_info);
double System_Random__Sample (System_Random_o* __this, const MethodInfo* method_info);
int32_t System_Random__InternalSample (System_Random_o* __this, const MethodInfo* method_info);
int32_t System_Random__Next (System_Random_o* __this, const MethodInfo* method_info);
double System_Random__GetSampleForLargeRange (System_Random_o* __this, const MethodInfo* method_info);
int32_t System_Random__Next (System_Random_o* __this, int32_t minValue, int32_t maxValue, const MethodInfo* method_info);
int32_t System_Random__Next (System_Random_o* __this, int32_t maxValue, const MethodInfo* method_info);
double System_Random__NextDouble (System_Random_o* __this, const MethodInfo* method_info);
void System_Random__NextBytes (System_Random_o* __this, System_Byte_array* buffer, const MethodInfo* method_info);
