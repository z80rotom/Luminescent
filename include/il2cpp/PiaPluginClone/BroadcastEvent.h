#pragma once

#include "il2cpp.h"

uint32_t PiaPluginClone_BroadcastEvent__GetPayloadSizeMaxNative (uint16_t port, const MethodInfo* method);
uint32_t PiaPluginClone_BroadcastEvent__GetPayloadSizeMax (uint16_t port, const MethodInfo* method);
int32_t PiaPluginClone_BroadcastEvent__GetEventStateStationNative (uint16_t port, uint64_t constantId, const MethodInfo* method);
int32_t PiaPluginClone_BroadcastEvent__GetEventState (uint16_t port, uint64_t constantId, const MethodInfo* method);
bool PiaPluginClone_BroadcastEvent__IsInCommunicationNative (uint16_t port, uint64_t constantId, const MethodInfo* method);
bool PiaPluginClone_BroadcastEvent__IsInCommunication (uint16_t port, uint64_t constantId, const MethodInfo* method);
bool PiaPluginClone_BroadcastEvent__IsSynchronizingNative (uint16_t port, const MethodInfo* method);
bool PiaPluginClone_BroadcastEvent__IsSynchronizing (uint16_t port, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginClone_BroadcastEvent__ReceiveNative (uint16_t port, uint64_t* srcConstantId, intptr_t pRecvBuf, uint32_t* recvDataSize, uint32_t recvBufSize, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginClone_BroadcastEvent__Receive (uint16_t port, uint64_t* srcConstantId, System_Byte_array* recvBuf, uint32_t* recvDataSize, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginClone_BroadcastEvent__SendNative (uint16_t port, intptr_t pData, uint32_t dataSize, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginClone_BroadcastEvent__Send (uint16_t port, System_Byte_array* data, uint32_t dataSize, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginClone_BroadcastEvent__ReadySendNative (uint16_t port, uint32_t dataSize, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginClone_BroadcastEvent__ReadySend (uint16_t port, uint32_t dataSize, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginClone_BroadcastEvent__ReadyReceiveNative (uint16_t port, uint32_t dataSize, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginClone_BroadcastEvent__ReadyReceive (uint16_t port, uint32_t dataSize, const MethodInfo* method);
void PiaPluginClone_BroadcastEvent__SetThroughputLimitNative (uint16_t port, uint32_t throughputLimit, const MethodInfo* method);
void PiaPluginClone_BroadcastEvent__SetThroughputLimit (uint16_t port, uint32_t throughputLimit, const MethodInfo* method);
void PiaPluginClone_BroadcastEvent___ctor (PiaPluginClone_BroadcastEvent_o* __this, const MethodInfo* method);
