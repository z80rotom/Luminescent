#pragma once

#include "il2cpp.h"

void nn_irsensor_ImageTransferProcessor__GetDefaultConfig (nn_irsensor_ImageTransferProcessorConfig_o* pOutValue, const MethodInfo* method);
void nn_irsensor_ImageTransferProcessor__GetDefaultConfig (nn_irsensor_ImageTransferProcessorExConfig_o* pOutValue, const MethodInfo* method);
void nn_irsensor_ImageTransferProcessor__Run (nn_irsensor_IrCameraHandle_o handle, nn_irsensor_ImageTransferProcessorConfig_o config, intptr_t workBuffer, int64_t workBufferSize, const MethodInfo* method);
void nn_irsensor_ImageTransferProcessor__Run (nn_irsensor_IrCameraHandle_o handle, nn_irsensor_ImageTransferProcessorExConfig_o config, intptr_t workBuffer, int64_t workBufferSize, const MethodInfo* method);
nn_Result_o nn_irsensor_ImageTransferProcessor__GetState (nn_irsensor_ImageTransferProcessorState_o* pOutState, intptr_t pOutImage, int64_t size, nn_irsensor_IrCameraHandle_o handle, const MethodInfo* method);
void nn_irsensor_ImageTransferProcessor__InitializeWorkBuffer (intptr_t* pOutWorkBuffer, int64_t* pOutWorkBufferSize, nn_irsensor_ImageTransferProcessorConfig_o config, const MethodInfo* method);
void nn_irsensor_ImageTransferProcessor__InitializeWorkBuffer (intptr_t* pOutWorkBuffer, int64_t* pOutWorkBufferSize, nn_irsensor_ImageTransferProcessorExConfig_o config, const MethodInfo* method);
void nn_irsensor_ImageTransferProcessor__DestroyWorkBuffer (intptr_t workBuffer, const MethodInfo* method);
int32_t nn_irsensor_ImageTransferProcessor__GetWorkBufferSize (int32_t format, const MethodInfo* method);
int32_t nn_irsensor_ImageTransferProcessor__GetImageSize (int32_t format, const MethodInfo* method);
int32_t nn_irsensor_ImageTransferProcessor__GetImageWidth (int32_t format, const MethodInfo* method);
int32_t nn_irsensor_ImageTransferProcessor__GetImageHeight (int32_t format, const MethodInfo* method);
