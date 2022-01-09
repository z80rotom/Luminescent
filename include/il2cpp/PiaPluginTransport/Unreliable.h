#pragma once

#include "il2cpp.h"

uint32_t PiaPluginTransport_Unreliable__GetSendUnreliableDataSizeMaxNative (const MethodInfo* method_info);
uint32_t PiaPluginTransport_Unreliable__GetSendUnreliableDataSizeMax (const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginTransport_Unreliable__SendToAllUnreliableNative (uint16_t port, intptr_t pData, uint32_t dataSize, const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginTransport_Unreliable__SendToAll (uint16_t port, System_Byte_array* data, uint32_t dataSize, const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginTransport_Unreliable__SendUnreliableNative (uint16_t port, uint64_t destConstantId, intptr_t pData, uint32_t dataSize, const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginTransport_Unreliable__Send (uint16_t port, uint64_t destConstantId, System_Byte_array* data, uint32_t dataSize, const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginTransport_Unreliable__ReceiveUnreliableNative (uint16_t port, uint64_t* srcConstantId, intptr_t pRecvBuf, uint32_t* recvDataSize, uint32_t recvBufSize, const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginTransport_Unreliable__Receive (uint16_t port, uint64_t* srcConstantId, System_Byte_array* recvBuf, uint32_t* recvDataSize, const MethodInfo* method_info);
void PiaPluginTransport_Unreliable___ctor (PiaPluginTransport_Unreliable_o* __this, const MethodInfo* method_info);
