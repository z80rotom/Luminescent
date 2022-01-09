#pragma once

#include "il2cpp.h"

void PiaPluginClone_Atomic__TryLockNative (uint32_t id, uint32_t priority, const MethodInfo* method_info);
void PiaPluginClone_Atomic__TryLock (uint32_t id, uint32_t priority, const MethodInfo* method_info);
void PiaPluginClone_Atomic__UnlockNative (uint32_t id, const MethodInfo* method_info);
void PiaPluginClone_Atomic__Unlock (uint32_t id, const MethodInfo* method_info);
int32_t PiaPluginClone_Atomic__GetLockStatusNative (uint32_t id, const MethodInfo* method_info);
int32_t PiaPluginClone_Atomic__GetLockStatus (uint32_t id, const MethodInfo* method_info);
void PiaPluginClone_Atomic___ctor (PiaPluginClone_Atomic_o* __this, const MethodInfo* method_info);
