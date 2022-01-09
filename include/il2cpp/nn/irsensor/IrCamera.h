#pragma once

#include "il2cpp.h"

nn_irsensor_IrCameraHandle_o nn_irsensor_IrCamera__GetHandle (int32_t npadId, const MethodInfo* method_info);
void nn_irsensor_IrCamera__Initialize (nn_irsensor_IrCameraHandle_o handle, const MethodInfo* method_info);
void nn_irsensor_IrCamera__Finalize (nn_irsensor_IrCameraHandle_o handle, const MethodInfo* method_info);
int32_t nn_irsensor_IrCamera__GetStatus (nn_irsensor_IrCameraHandle_o handle, const MethodInfo* method_info);
nn_Result_o nn_irsensor_IrCamera__CheckFirmwareUpdateNecessity (bool* pOutIsUpdateNeeded, nn_irsensor_IrCameraHandle_o handle, const MethodInfo* method_info);
