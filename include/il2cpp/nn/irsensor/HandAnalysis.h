#pragma once

#include "il2cpp.h"

nn_Result_o nn_irsensor_HandAnalysis__Run (nn_irsensor_IrCameraHandle_o handle, nn_irsensor_HandAnalysisConfig_o config, const MethodInfo* method);
nn_Result_o nn_irsensor_HandAnalysis__GetSilhouetteState (nn_irsensor_HandAnalysisSilhouetteState_o* pOutValue, nn_irsensor_IrCameraHandle_o handle, const MethodInfo* method);
nn_Result_o nn_irsensor_HandAnalysis__GetSilhouetteState (nn_irsensor_HandAnalysisSilhouetteState_array* pOutValueArray, int32_t* pReturnCount, int64_t infSamplingNumber, nn_irsensor_IrCameraHandle_o handle, const MethodInfo* method);
nn_Result_o nn_irsensor_HandAnalysis__GetSilhouetteState (nn_irsensor_HandAnalysisSilhouetteState_array* pOutValueArray, int32_t* pReturnCount, int32_t maxCount, int64_t infSamplingNumber, nn_irsensor_IrCameraHandle_o handle, const MethodInfo* method);
nn_Result_o nn_irsensor_HandAnalysis__GetSilhouetteState (nn_irsensor_HandAnalysisSilhouetteState_o* pOutState, nn_util_Float2_array* pOutPointBuffer, nn_irsensor_IrCameraHandle_o handle, const MethodInfo* method);
nn_Result_o nn_irsensor_HandAnalysis__GetSilhouetteState (nn_irsensor_HandAnalysisSilhouetteState_array* pOutStateArray, nn_util_Float2_array_array* pOutPointArray, int32_t* pReturnCount, int64_t infSamplingNumber, nn_irsensor_IrCameraHandle_o handle, const MethodInfo* method);
nn_Result_o nn_irsensor_HandAnalysis__GetSilhouetteState (nn_irsensor_HandAnalysisSilhouetteState_array* pOutStateArray, nn_util_Float2_array_array* pOutPointArray, int32_t* pReturnCount, int32_t maxCount, int64_t infSamplingNumber, nn_irsensor_IrCameraHandle_o handle, const MethodInfo* method);
nn_Result_o nn_irsensor_HandAnalysis__GetImageState (nn_irsensor_HandAnalysisImageState_o* pOutState, System_UInt16_array* pOutImageBuffer, nn_irsensor_IrCameraHandle_o handle, const MethodInfo* method);
nn_Result_o nn_irsensor_HandAnalysis__GetImageState (nn_irsensor_HandAnalysisImageState_array* pOutStateArray, System_UInt16_array* pOutImageArray, int32_t* pReturnCount, int64_t infSamplingNumber, nn_irsensor_IrCameraHandle_o handle, const MethodInfo* method);
nn_Result_o nn_irsensor_HandAnalysis__GetImageState (nn_irsensor_HandAnalysisImageState_array* pOutStateArray, System_UInt16_array* pOutImageArray, int32_t* pReturnCount, int32_t maxCount, int64_t infSamplingNumber, nn_irsensor_IrCameraHandle_o handle, const MethodInfo* method);
