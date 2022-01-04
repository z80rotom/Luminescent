#pragma once

#include "il2cpp.h"

System_Threading_WaitHandle_o* System_Threading_ManualResetEventSlim__get_WaitHandle (System_Threading_ManualResetEventSlim_o* __this, const MethodInfo* method);
bool System_Threading_ManualResetEventSlim__get_IsSet (System_Threading_ManualResetEventSlim_o* __this, const MethodInfo* method);
void System_Threading_ManualResetEventSlim__set_IsSet (System_Threading_ManualResetEventSlim_o* __this, bool value, const MethodInfo* method);
int32_t System_Threading_ManualResetEventSlim__get_SpinCount (System_Threading_ManualResetEventSlim_o* __this, const MethodInfo* method);
void System_Threading_ManualResetEventSlim__set_SpinCount (System_Threading_ManualResetEventSlim_o* __this, int32_t value, const MethodInfo* method);
int32_t System_Threading_ManualResetEventSlim__get_Waiters (System_Threading_ManualResetEventSlim_o* __this, const MethodInfo* method);
void System_Threading_ManualResetEventSlim__set_Waiters (System_Threading_ManualResetEventSlim_o* __this, int32_t value, const MethodInfo* method);
void System_Threading_ManualResetEventSlim___ctor (System_Threading_ManualResetEventSlim_o* __this, bool initialState, const MethodInfo* method);
void System_Threading_ManualResetEventSlim___ctor (System_Threading_ManualResetEventSlim_o* __this, bool initialState, int32_t spinCount, const MethodInfo* method);
void System_Threading_ManualResetEventSlim__Initialize (System_Threading_ManualResetEventSlim_o* __this, bool initialState, int32_t spinCount, const MethodInfo* method);
void System_Threading_ManualResetEventSlim__EnsureLockObjectCreated (System_Threading_ManualResetEventSlim_o* __this, const MethodInfo* method);
bool System_Threading_ManualResetEventSlim__LazyInitializeEvent (System_Threading_ManualResetEventSlim_o* __this, const MethodInfo* method);
void System_Threading_ManualResetEventSlim__Set (System_Threading_ManualResetEventSlim_o* __this, const MethodInfo* method);
void System_Threading_ManualResetEventSlim__Set (System_Threading_ManualResetEventSlim_o* __this, bool duringCancellation, const MethodInfo* method);
bool System_Threading_ManualResetEventSlim__Wait (System_Threading_ManualResetEventSlim_o* __this, int32_t millisecondsTimeout, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
void System_Threading_ManualResetEventSlim__Dispose (System_Threading_ManualResetEventSlim_o* __this, const MethodInfo* method);
void System_Threading_ManualResetEventSlim__Dispose (System_Threading_ManualResetEventSlim_o* __this, bool disposing, const MethodInfo* method);
void System_Threading_ManualResetEventSlim__ThrowIfDisposed (System_Threading_ManualResetEventSlim_o* __this, const MethodInfo* method);
void System_Threading_ManualResetEventSlim__CancellationTokenCallback (Il2CppObject* obj, const MethodInfo* method);
void System_Threading_ManualResetEventSlim__UpdateStateAtomically (System_Threading_ManualResetEventSlim_o* __this, int32_t newBits, int32_t updateBitsMask, const MethodInfo* method);
int32_t System_Threading_ManualResetEventSlim__ExtractStatePortionAndShiftRight (int32_t state, int32_t mask, int32_t rightBitShiftCount, const MethodInfo* method);
int32_t System_Threading_ManualResetEventSlim__ExtractStatePortion (int32_t state, int32_t mask, const MethodInfo* method);
void System_Threading_ManualResetEventSlim___cctor (const MethodInfo* method);
