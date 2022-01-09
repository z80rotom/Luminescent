#pragma once

#include "il2cpp.h"

int32_t nn_hid_Vibration__GetDeviceHandles (nn_hid_VibrationDeviceHandle_array* pOutValues, int32_t count, int32_t npadId, int32_t npadStyle, const MethodInfo* method_info);
void nn_hid_Vibration__GetDeviceInfo (nn_hid_VibrationDeviceInfo_o* pOutValue, nn_hid_VibrationDeviceHandle_o handle, const MethodInfo* method_info);
void nn_hid_Vibration__InitializeDevice (nn_hid_VibrationDeviceHandle_o handle, const MethodInfo* method_info);
void nn_hid_Vibration__SendValue (nn_hid_VibrationDeviceHandle_o handle, nn_hid_VibrationValue_o value, const MethodInfo* method_info);
void nn_hid_Vibration__GetActualValue (nn_hid_VibrationValue_o* pOutValue, nn_hid_VibrationDeviceHandle_o handle, const MethodInfo* method_info);
bool nn_hid_Vibration__IsPermitted (const MethodInfo* method_info);
