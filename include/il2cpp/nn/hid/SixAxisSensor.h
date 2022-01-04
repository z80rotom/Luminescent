#pragma once

#include "il2cpp.h"

int32_t nn_hid_SixAxisSensor__GetHandles (nn_hid_SixAxisSensorHandle_array* pOutValues, int32_t count, int32_t npadId, int32_t npadStyle, const MethodInfo* method);
void nn_hid_SixAxisSensor__Start (nn_hid_SixAxisSensorHandle_o handle, const MethodInfo* method);
void nn_hid_SixAxisSensor__Stop (nn_hid_SixAxisSensorHandle_o handle, const MethodInfo* method);
bool nn_hid_SixAxisSensor__IsRest (nn_hid_SixAxisSensorHandle_o handle, const MethodInfo* method);
void nn_hid_SixAxisSensor__GetState (nn_hid_SixAxisSensorState_o* pOutValue, nn_hid_SixAxisSensorHandle_o handle, const MethodInfo* method);
int32_t nn_hid_SixAxisSensor__GetStates (nn_hid_SixAxisSensorState_array* pOutValues, int32_t count, nn_hid_SixAxisSensorHandle_o handle, const MethodInfo* method);
bool nn_hid_SixAxisSensor__IsFusionEnabled (nn_hid_SixAxisSensorHandle_o handle, const MethodInfo* method);
void nn_hid_SixAxisSensor__EnableFusion (nn_hid_SixAxisSensorHandle_o handle, bool enable, const MethodInfo* method);
void nn_hid_SixAxisSensor__SetFusionParameters (nn_hid_SixAxisSensorHandle_o handle, float revisePower, float reviseRange, const MethodInfo* method);
void nn_hid_SixAxisSensor__GetFusionParameters (float* pOutRevisePower, float* pOutReviseRange, nn_hid_SixAxisSensorHandle_o handle, const MethodInfo* method);
void nn_hid_SixAxisSensor__ResetFusionParameters (nn_hid_SixAxisSensorHandle_o handle, const MethodInfo* method);
void nn_hid_SixAxisSensor__SetGyroscopeZeroDriftMode (nn_hid_SixAxisSensorHandle_o handle, int32_t mode, const MethodInfo* method);
int32_t nn_hid_SixAxisSensor__GetGyroscopeZeroDriftMode (nn_hid_SixAxisSensorHandle_o handle, const MethodInfo* method);
bool nn_hid_SixAxisSensor__IsFirmwareUpdateAvailableForSixAxisSensor (nn_hid_SixAxisSensorHandle_o handle, const MethodInfo* method);
