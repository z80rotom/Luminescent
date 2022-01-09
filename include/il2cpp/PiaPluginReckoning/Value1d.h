#pragma once

#include "il2cpp.h"

PiaPlugin_Result_o PiaPluginReckoning_Value1d__SetValue1dNative (uint16_t port, uint64_t destConstantId, float value, bool isStop, const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginReckoning_Value1d__SetValue (uint16_t port, uint64_t destConstantId, float value, bool isStop, const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginReckoning_Value1d__SetValueToAll1dNative (uint16_t port, float value, bool isStop, const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginReckoning_Value1d__SetValueToAll (uint16_t port, float value, bool isStop, const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginReckoning_Value1d__GetValue1dNative (uint16_t port, uint64_t* destConstantId, float* pValue, const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginReckoning_Value1d__GetValue (uint16_t port, uint64_t* destConstantId, float* pValue, const MethodInfo* method_info);
void PiaPluginReckoning_Value1d__SetSamplingDistance1dNative (uint16_t port, float value, const MethodInfo* method_info);
void PiaPluginReckoning_Value1d__SetSamplingDistance (uint16_t port, float value, const MethodInfo* method_info);
float PiaPluginReckoning_Value1d__GetSamplingDistance1dNative (uint16_t port, const MethodInfo* method_info);
float PiaPluginReckoning_Value1d__GetSamplingDistance (uint16_t port, const MethodInfo* method_info);
bool PiaPluginReckoning_Value1d__IsInCommunication1dNative (uint16_t port, const MethodInfo* method_info);
bool PiaPluginReckoning_Value1d__IsInCommunication (uint16_t port, const MethodInfo* method_info);
bool PiaPluginReckoning_Value1d__Reset1dNative (uint16_t port, const MethodInfo* method_info);
void PiaPluginReckoning_Value1d__Reset (uint16_t port, const MethodInfo* method_info);
void PiaPluginReckoning_Value1d__SetClock1dNative (uint16_t port, uint64_t clock, const MethodInfo* method_info);
void PiaPluginReckoning_Value1d__SetClock (uint16_t port, uint64_t clock, const MethodInfo* method_info);
void PiaPluginReckoning_Value1d__SetReckoningTimeout1dNative (uint16_t port, uint64_t clock, const MethodInfo* method_info);
void PiaPluginReckoning_Value1d__SetReckoningTimeout (uint16_t port, uint64_t clock, const MethodInfo* method_info);
void PiaPluginReckoning_Value1d___ctor (PiaPluginReckoning_Value1d_o* __this, const MethodInfo* method_info);
