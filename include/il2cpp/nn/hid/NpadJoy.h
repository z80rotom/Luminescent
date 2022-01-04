#pragma once

#include "il2cpp.h"

int32_t nn_hid_NpadJoy__GetAssignment (int32_t npadId, const MethodInfo* method);
void nn_hid_NpadJoy__SetAssignmentModeSingle (int32_t npadId, const MethodInfo* method);
void nn_hid_NpadJoy__SetAssignmentModeSingle (int32_t npadId, int32_t deviceType, const MethodInfo* method);
void nn_hid_NpadJoy__SetAssignmentModeSingle (int32_t* pOutValue, int32_t npadId, int32_t deviceType, const MethodInfo* method);
void nn_hid_NpadJoy__SetAssignmentModeDual (int32_t npadId, const MethodInfo* method);
nn_Result_o nn_hid_NpadJoy__MergeSingleAsDual (int32_t npadId1, int32_t npadId2, const MethodInfo* method);
void nn_hid_NpadJoy__SwapAssignment (int32_t npadId1, int32_t npadId2, const MethodInfo* method);
void nn_hid_NpadJoy__SetHoldType (int32_t holdType, const MethodInfo* method);
int32_t nn_hid_NpadJoy__GetHoldType (const MethodInfo* method);
void nn_hid_NpadJoy__StartLrAssignmentMode (const MethodInfo* method);
void nn_hid_NpadJoy__StopLrAssignmentMode (const MethodInfo* method);
void nn_hid_NpadJoy__SetHandheldActivationMode (int32_t activationMode, const MethodInfo* method);
int32_t nn_hid_NpadJoy__GetHandheldActivationMode (const MethodInfo* method);
void nn_hid_NpadJoy__SetCommunicationMode (int32_t mode, const MethodInfo* method);
int32_t nn_hid_NpadJoy__GetCommunicationMode (const MethodInfo* method);
nn_ErrorRange_o nn_hid_NpadJoy__get_ResultDualConnected (const MethodInfo* method);
nn_ErrorRange_o nn_hid_NpadJoy__get_ResultSameJoyTypeConnected (const MethodInfo* method);
