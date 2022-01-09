#pragma once

#include "il2cpp.h"

nn_ErrorRange_o nn_hid_VibrationFile__get_ResultInvalid (const MethodInfo* method_info);
nn_Result_o nn_hid_VibrationFile__Parse (nn_hid_VibrationFileInfo_o* pOutInfo, nn_hid_VibrationFileParserContext_o* pOutContext, System_Byte_array* address, int64_t fileSize, const MethodInfo* method_info);
void nn_hid_VibrationFile__RetrieveValue (nn_hid_VibrationValue_o* pOutValue, int32_t position, nn_hid_VibrationFileParserContext_o* pContext, const MethodInfo* method_info);
void nn_hid_VibrationFile__Generate (int64_t* pOutSize, System_Byte_array* outBuffer, int64_t bufferSize, nn_hid_VibrationValueArrayInfo_o info, nn_hid_VibrationValue_array* pValues, const MethodInfo* method_info);
void nn_hid_VibrationFile__Generate (int64_t* pOutSize, System_Byte_array* outBuffer, nn_hid_VibrationValueArrayInfo_o info, nn_hid_VibrationValue_array* pValues, const MethodInfo* method_info);
int64_t nn_hid_VibrationFile__CalculateSize (nn_hid_VibrationValueArrayInfo_o info, const MethodInfo* method_info);
