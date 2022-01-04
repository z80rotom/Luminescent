#pragma once

#include "il2cpp.h"

void nn_irsensor_MomentProcessor__GetDefaultConfig (nn_irsensor_MomentProcessorConfig_o* pOutValue, const MethodInfo* method);
void nn_irsensor_MomentProcessor__Run (nn_irsensor_IrCameraHandle_o handle, nn_irsensor_MomentProcessorConfig_o config, const MethodInfo* method);
nn_Result_o nn_irsensor_MomentProcessor__GetState (nn_irsensor_MomentProcessorState_o* pOutValue, nn_irsensor_IrCameraHandle_o handle, const MethodInfo* method);
nn_Result_o nn_irsensor_MomentProcessor__GetStatus (nn_irsensor_MomentProcessorState_array* pOutStates, int32_t* pOutCount, nn_irsensor_IrCameraHandle_o handle, const MethodInfo* method);
nn_Result_o nn_irsensor_MomentProcessor__GetStates (nn_irsensor_MomentProcessorState_array* pOutStates, int32_t* pOutCount, int32_t countMax, nn_irsensor_IrCameraHandle_o handle, const MethodInfo* method);
nn_irsensor_MomentStatistic_o nn_irsensor_MomentProcessor__CalculateMomentRegionStatistic (nn_irsensor_MomentProcessorState_o* pState, nn_irsensor_Rect_o windowOfInterest, int32_t startRow, int32_t startColumn, int32_t rowCount, int32_t columnCount, const MethodInfo* method);
