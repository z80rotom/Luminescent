#pragma once

#include "il2cpp.h"

int32_t Dpr_NX_ClockSnapshot__GetSnapshotSize (const MethodInfo* method);
void Dpr_NX_ClockSnapshot__GetClockSnapshot (intptr_t buf, const MethodInfo* method);
bool Dpr_NX_ClockSnapshot__CompareClockSnapshot (intptr_t oldSnapshot, intptr_t newSnapshot, const MethodInfo* method);
void Dpr_NX_ClockSnapshot__GetSnapshot (System_Byte_array** buf, const MethodInfo* method);
bool Dpr_NX_ClockSnapshot__Compare (System_Byte_array* oldSnapshot, System_Byte_array* newSnapshot, const MethodInfo* method);
void Dpr_NX_ClockSnapshot___ctor (Dpr_NX_ClockSnapshot_o* __this, const MethodInfo* method);
