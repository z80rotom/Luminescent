#pragma once

#include "il2cpp.h"

PiaPlugin_Result_o PiaPluginTransport_Reliable__SendReliableNative (uint16_t port, uint64_t destConstantId, intptr_t pData, uint32_t dataSize, const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginTransport_Reliable__Send (uint16_t port, uint64_t destConstantId, System_Byte_array* data, uint32_t dataSize, const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginTransport_Reliable__ReceiveReliableNative (uint16_t port, uint64_t* srcConstantId, intptr_t pRecvBuf, uint32_t* recvDataSize, uint32_t recvBufSize, const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginTransport_Reliable__Receive (uint16_t port, uint64_t* srcConstantId, System_Byte_array* recvBuf, uint32_t* recvDataSize, const MethodInfo* method_info);
void PiaPluginTransport_Reliable__SetReliableThroughputLimitNative (uint16_t port, uint32_t throughputLimit, const MethodInfo* method_info);
void PiaPluginTransport_Reliable__SetThroughputLimit (uint16_t port, uint32_t throughputLimit, const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginTransport_Reliable__ReadySendReliableNative (uint16_t port, uint64_t destConstantId, uint32_t dataSize, const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginTransport_Reliable__ReadySend (uint16_t port, uint64_t destConstantId, uint32_t dataSize, const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginTransport_Reliable__ReadyReceiveReliableNative (uint16_t port, const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginTransport_Reliable__ReadyReceive (uint16_t port, const MethodInfo* method_info);
void PiaPluginTransport_Reliable___ctor (PiaPluginTransport_Reliable_o* __this, const MethodInfo* method_info);
