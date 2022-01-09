#pragma once

#include "il2cpp.h"

uint32_t NexAssets_DataStore_Core__GetHttpThreadPrioritySetting (NexAssets_DataStore_Core_o* __this, const MethodInfo* method_info);
uint32_t NexAssets_DataStore_Core__GetHttpBufferSizeSetting (NexAssets_DataStore_Core_o* __this, const MethodInfo* method_info);
uint32_t NexAssets_DataStore_Core__GetTimeoutBytesPerSecondSetting (NexAssets_DataStore_Core_o* __this, const MethodInfo* method_info);
int32_t NexAssets_DataStore_Core__GetMinimumTimeoutMilliSecondSetting (NexAssets_DataStore_Core_o* __this, const MethodInfo* method_info);
uint32_t NexAssets_DataStore_Core__GetHttpSendSocketBufferSizeSetting (NexAssets_DataStore_Core_o* __this, const MethodInfo* method_info);
uint32_t NexAssets_DataStore_Core__GetHttpRecvSocketBufferSizeSetting (NexAssets_DataStore_Core_o* __this, const MethodInfo* method_info);
bool NexAssets_DataStore_Core__SetHttpThreadPriority (NexAssets_DataStore_Core_o* __this, const MethodInfo* method_info);
bool NexAssets_DataStore_Core__SetHttpThreadPriority (NexAssets_DataStore_Core_o* __this, uint32_t priority, const MethodInfo* method_info);
bool NexAssets_DataStore_Core__GetHttpThreadPriority (NexAssets_DataStore_Core_o* __this, uint32_t* priority, const MethodInfo* method_info);
bool NexAssets_DataStore_Core__SetHttpBufferSize (NexAssets_DataStore_Core_o* __this, const MethodInfo* method_info);
bool NexAssets_DataStore_Core__SetHttpBufferSize (NexAssets_DataStore_Core_o* __this, uint32_t bufferSize, const MethodInfo* method_info);
bool NexAssets_DataStore_Core__GetHttpBufferSize (NexAssets_DataStore_Core_o* __this, uint32_t* bufferSize, const MethodInfo* method_info);
bool NexAssets_DataStore_Core__SetDataTransferTimeout (NexAssets_DataStore_Core_o* __this, const MethodInfo* method_info);
bool NexAssets_DataStore_Core__SetDataTransferTimeout (NexAssets_DataStore_Core_o* __this, uint32_t timeoutBytesPerSecond, int32_t minimumTimeoutMilliSecond, const MethodInfo* method_info);
bool NexAssets_DataStore_Core__SetHttpSendSocketBufferSize (NexAssets_DataStore_Core_o* __this, const MethodInfo* method_info);
bool NexAssets_DataStore_Core__SetHttpSendSocketBufferSize (NexAssets_DataStore_Core_o* __this, uint32_t size, const MethodInfo* method_info);
bool NexAssets_DataStore_Core__GetHttpSendSocketBufferSize (NexAssets_DataStore_Core_o* __this, uint32_t* size, const MethodInfo* method_info);
bool NexAssets_DataStore_Core__SetHttpRecvSocketBufferSize (NexAssets_DataStore_Core_o* __this, const MethodInfo* method_info);
bool NexAssets_DataStore_Core__SetHttpRecvSocketBufferSize (NexAssets_DataStore_Core_o* __this, uint32_t size, const MethodInfo* method_info);
bool NexAssets_DataStore_Core__GetHttpRecvSocketBufferSize (NexAssets_DataStore_Core_o* __this, uint32_t* size, const MethodInfo* method_info);
bool NexAssets_DataStore_Core__ApiCallsFrequencyCheck (NexAssets_DataStore_Core_o* __this, int32_t type, const MethodInfo* method_info);
void NexAssets_DataStore_Core___ctor (NexAssets_DataStore_Core_o* __this, const MethodInfo* method_info);
void NexAssets_DataStore_Core___cctor (const MethodInfo* method_info);
