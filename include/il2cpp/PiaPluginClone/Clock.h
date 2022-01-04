#pragma once

#include "il2cpp.h"

PiaPlugin_Result_o PiaPluginClone_Clock__GetClockNative (uint64_t* pClock, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginClone_Clock__GetClock (uint64_t* pClock, const MethodInfo* method);
bool PiaPluginClone_Clock__IsSynchronizingClockNative (const MethodInfo* method);
bool PiaPluginClone_Clock__IsSynchronizingClock (const MethodInfo* method);
PiaPlugin_Result_o PiaPluginClone_Clock__SynchronizeClockNative (const MethodInfo* method);
PiaPlugin_Result_o PiaPluginClone_Clock__SynchronizeClock (const MethodInfo* method);
void PiaPluginClone_Clock__UpdateClockNative (uint64_t elapsedTime, uint64_t increaseTimeMin, uint64_t increaseTimeMax, const MethodInfo* method);
void PiaPluginClone_Clock__UpdateClock (uint64_t elapsedTime, uint64_t increaseTimeMin, uint64_t increaseTimeMax, const MethodInfo* method);
void PiaPluginClone_Clock___ctor (PiaPluginClone_Clock_o* __this, const MethodInfo* method);
