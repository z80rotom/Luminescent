#pragma once

#include "il2cpp.h"

PiaPlugin_Result_o PiaPluginTransport_BroadcastReliable__SendBroadcastReliableNative (uint16_t port, uint64_t destConstantId, intptr_t pData, uint32_t dataSize, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginTransport_BroadcastReliable__Send (uint16_t port, uint64_t destConstantId, System_Byte_array* data, uint32_t dataSize, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginTransport_BroadcastReliable__SendToAllBroadcastReliableNative (uint16_t port, intptr_t pData, uint32_t dataSize, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginTransport_BroadcastReliable__SendToAll (uint16_t port, System_Byte_array* data, uint32_t dataSize, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginTransport_BroadcastReliable__ReceiveBroadcastReliableNative (uint16_t port, uint64_t* srcConstantId, intptr_t pRecvBuf, uint32_t* recvDataSize, uint32_t recvBufSize, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginTransport_BroadcastReliable__Receive (uint16_t port, uint64_t* srcConstantId, System_Byte_array* recvBuf, uint32_t* recvDataSize, const MethodInfo* method);
void PiaPluginTransport_BroadcastReliable__SetBroadcastReliableThroughputLimitNative (uint16_t port, uint32_t throughputLimit, const MethodInfo* method);
void PiaPluginTransport_BroadcastReliable__SetThroughputLimit (uint16_t port, uint32_t throughputLimit, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginTransport_BroadcastReliable__ReadySendBroadcastReliableNative (uint16_t port, uint64_t destConstantId, uint32_t dataSize, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginTransport_BroadcastReliable__ReadySend (uint16_t port, uint64_t destConstantId, uint32_t dataSize, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginTransport_BroadcastReliable__ReadySendToAllBroadcastReliableNative (uint16_t port, uint32_t dataSize, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginTransport_BroadcastReliable__ReadySendToAll (uint16_t port, uint32_t dataSize, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginTransport_BroadcastReliable__ReadyReceiveBroadcastReliableNative (uint16_t port, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginTransport_BroadcastReliable__ReadyReceive (uint16_t port, const MethodInfo* method);
void PiaPluginTransport_BroadcastReliable___ctor (PiaPluginTransport_BroadcastReliable_o* __this, const MethodInfo* method);
