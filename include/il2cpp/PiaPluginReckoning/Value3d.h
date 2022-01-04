#pragma once

#include "il2cpp.h"

PiaPlugin_Result_o PiaPluginReckoning_Value3d__SetValue3dNative (uint16_t port, uint64_t destConstantId, float posX, float posY, float posZ, bool isStop, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginReckoning_Value3d__SetValue (uint16_t port, uint64_t destConstantId, float posX, float posY, float posZ, bool isStop, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginReckoning_Value3d__SetValueToAll3dNative (uint16_t port, float posX, float posY, float posZ, bool isStop, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginReckoning_Value3d__SetValueToAll (uint16_t port, float posX, float posY, float posZ, bool isStop, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginReckoning_Value3d__GetValue3dNative (uint16_t port, uint64_t* destConstantId, float* posX, float* posY, float* posZ, const MethodInfo* method);
PiaPlugin_Result_o PiaPluginReckoning_Value3d__GetValue (uint16_t port, uint64_t* destConstantId, float* pPosX, float* pPosY, float* pPosZ, const MethodInfo* method);
void PiaPluginReckoning_Value3d__SetSamplingDistance3dNative (uint16_t port, float distance, const MethodInfo* method);
void PiaPluginReckoning_Value3d__SetSamplingDistance (uint16_t port, float distance, const MethodInfo* method);
float PiaPluginReckoning_Value3d__GetSamplingDistance3dNative (uint16_t port, const MethodInfo* method);
float PiaPluginReckoning_Value3d__GetSamplingDistance (uint16_t port, const MethodInfo* method);
bool PiaPluginReckoning_Value3d__IsInCommunication3dNative (uint16_t port, const MethodInfo* method);
bool PiaPluginReckoning_Value3d__IsInCommunication (uint16_t port, const MethodInfo* method);
bool PiaPluginReckoning_Value3d__Reset3dNative (uint16_t port, const MethodInfo* method);
void PiaPluginReckoning_Value3d__Reset (uint16_t port, const MethodInfo* method);
void PiaPluginReckoning_Value3d__SetClock3dNative (uint16_t port, uint64_t clock, const MethodInfo* method);
void PiaPluginReckoning_Value3d__SetClock (uint16_t port, uint64_t clock, const MethodInfo* method);
void PiaPluginReckoning_Value3d__SetReckoningTimeout3dNative (uint16_t port, uint64_t clock, const MethodInfo* method);
void PiaPluginReckoning_Value3d__SetReckoningTimeout (uint16_t port, uint64_t clock, const MethodInfo* method);
void PiaPluginReckoning_Value3d___ctor (PiaPluginReckoning_Value3d_o* __this, const MethodInfo* method);
