#pragma once

#include "il2cpp.h"

PiaPlugin_Result_o PiaPluginTransport_StreamBroadcastReliable__Stream_RequestNative (uint16_t port, uint64_t destinationConstantId, intptr_t pBuffer, uint32_t bufferSize, uint8_t id, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginTransport_StreamBroadcastReliable__Request (uint16_t port, uint64_t destinationConstantId, System_Byte_array* pBuffer, uint8_t id, const MethodInfo* method);
bool PiaPluginTransport_StreamBroadcastReliable__Stream_IsRequestedNative (uint16_t port, uint64_t constantId, uint8_t id, const MethodInfo* method);
bool PiaPluginTransport_StreamBroadcastReliable__IsRequested (uint16_t port, uint64_t constantId, uint8_t id, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginTransport_StreamBroadcastReliable__Stream_StartSendNative (uint16_t port, intptr_t cpData, uint32_t dataSize, uint8_t id, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginTransport_StreamBroadcastReliable__StartSend (uint16_t port, System_Byte_array* data, uint32_t dataSize, uint8_t id, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginTransport_StreamBroadcastReliable__Stream_CancelNative (uint16_t port, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginTransport_StreamBroadcastReliable__Cancel (uint16_t port, const MethodInfo* method);
int32_t PiaPluginTransport_StreamBroadcastReliable__Stream_GetStateNative (uint16_t port, const MethodInfo* method);
int32_t PiaPluginTransport_StreamBroadcastReliable__GetState (uint16_t port, const MethodInfo* method);
bool PiaPluginTransport_StreamBroadcastReliable__Stream_IsRunningNative (uint16_t port, const MethodInfo* method);
bool PiaPluginTransport_StreamBroadcastReliable__IsRunning (uint16_t port, const MethodInfo* method);
uint8_t PiaPluginTransport_StreamBroadcastReliable__Stream_GetProgressNative (uint16_t port, const MethodInfo* method);
uint8_t PiaPluginTransport_StreamBroadcastReliable__GetProgress (uint16_t port, const MethodInfo* method);
void PiaPluginTransport_StreamBroadcastReliable__Stream_SetThroughputLimitNative (uint16_t port, uint32_t throughputLimit, const MethodInfo* method);
void PiaPluginTransport_StreamBroadcastReliable__SetThroughputLimit (uint16_t port, uint32_t throughputLimit, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginTransport_StreamBroadcastReliable__Stream_ReadyRequestNative (uint16_t port, uint64_t destinationConstantId, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginTransport_StreamBroadcastReliable__ReadyRequest (uint16_t port, uint64_t destinationConstantId, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginTransport_StreamBroadcastReliable__Stream_ReadyStartSendNative (uint16_t port, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginTransport_StreamBroadcastReliable__ReadyStartSend (uint16_t port, const MethodInfo* method);
void PiaPluginTransport_StreamBroadcastReliable___ctor (PiaPluginTransport_StreamBroadcastReliable_o* __this, const MethodInfo* method);
