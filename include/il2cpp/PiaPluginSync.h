#pragma once

#include "il2cpp.h"

PiaPlugin_Result_o PiaPluginSync__StepNative (const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginSync__Step (const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginSync__StartNative (PiaPluginSync_SyncStartArgument_o* syncStartArg, const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginSync__Start (PiaPluginSync_SyncStartArgument_o* syncStartArg, const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginSync__EndNative (const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginSync__End (const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginSync__EndAllNative (const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginSync__EndAll (const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginSync__SetDataNative (PiaPluginSync_SetDataArgument_o arg, const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginSync__SetData (PiaPluginSync_SetDataArgument_o arg, const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginSync__GetDataNative (PiaPluginSync_GetDataArgument_o arg, const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginSync__GetData (PiaPluginSync_GetDataArgument_o arg, const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginSync__ReadySetDataNative (const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginSync__ReadySetData (const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginSync__ReadySetDataNative2 (uint8_t dataId, const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginSync__ReadySetData (uint8_t dataId, const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginSync__ReadyGetDataNative (uint64_t constantId, const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginSync__ReadyGetData (uint64_t constantId, const MethodInfo* method_info);
int32_t PiaPluginSync__GetSyncStateNative (const MethodInfo* method_info);
int32_t PiaPluginSync__GetSyncState (const MethodInfo* method_info);
bool PiaPluginSync__CheckEntryNative (uint64_t constantId, const MethodInfo* method_info);
bool PiaPluginSync__CheckEntry (uint64_t constantId, const MethodInfo* method_info);
uint32_t PiaPluginSync__GetFrameNoNative (const MethodInfo* method_info);
uint32_t PiaPluginSync__GetFrameNo (const MethodInfo* method_info);
uint8_t PiaPluginSync__GetDelayNative (const MethodInfo* method_info);
uint8_t PiaPluginSync__GetDelay (const MethodInfo* method_info);
uint8_t PiaPluginSync__GetDelayMaxNative (const MethodInfo* method_info);
uint8_t PiaPluginSync__GetDelayMax (const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginSync__RequestToChangeDelayNative (uint8_t newDelay, const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginSync__RequestToChangeDelay (uint8_t newDelay, const MethodInfo* method_info);
void PiaPluginSync___ctor (PiaPluginSync_o* __this, const MethodInfo* method_info);
