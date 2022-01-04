#pragma once

#include "il2cpp.h"

void nn_irsensor_ClusteringProcessor__GetDefaultConfig (nn_irsensor_ClusteringProcessorConfig_o* pOutValue, const MethodInfo* method);
void nn_irsensor_ClusteringProcessor__Run (nn_irsensor_IrCameraHandle_o handle, nn_irsensor_ClusteringProcessorConfig_o config, const MethodInfo* method);
nn_Result_o nn_irsensor_ClusteringProcessor__GetState (nn_irsensor_ClusteringProcessorState_o* pOutValue, nn_irsensor_IrCameraHandle_o handle, const MethodInfo* method);
nn_Result_o nn_irsensor_ClusteringProcessor__GetStates (nn_irsensor_ClusteringProcessorState_array* pOutStates, int32_t* pOutCount, int32_t countMax, nn_irsensor_IrCameraHandle_o handle, const MethodInfo* method);
