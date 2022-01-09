#pragma once

#include "il2cpp.h"

uint32_t PiaPlugin_Result__get_resultValue (PiaPlugin_Result_o __this, const MethodInfo* method_info);
void PiaPlugin_Result__set_resultValue (PiaPlugin_Result_o __this, uint32_t value, const MethodInfo* method_info);
uint32_t PiaPlugin_Result__get_innerErrorCode (PiaPlugin_Result_o __this, const MethodInfo* method_info);
void PiaPlugin_Result__set_innerErrorCode (PiaPlugin_Result_o __this, uint32_t value, const MethodInfo* method_info);
int32_t PiaPlugin_Result__get_viewerType (PiaPlugin_Result_o __this, const MethodInfo* method_info);
void PiaPlugin_Result__set_viewerType (PiaPlugin_Result_o __this, int32_t value, const MethodInfo* method_info);
int32_t PiaPlugin_Result__get_handlingType (PiaPlugin_Result_o __this, const MethodInfo* method_info);
void PiaPlugin_Result__set_handlingType (PiaPlugin_Result_o __this, int32_t value, const MethodInfo* method_info);
nn_Result_o PiaPlugin_Result__get_sdkViewerResult (PiaPlugin_Result_o __this, const MethodInfo* method_info);
void PiaPlugin_Result___ctor (PiaPlugin_Result_o __this, int32_t _handlingType, const MethodInfo* method_info);
void PiaPlugin_Result___ctor (PiaPlugin_Result_o __this, uint32_t _resultValue, uint32_t _innerErrorCode, int32_t _viewerType, int32_t _handlingType, const MethodInfo* method_info);
bool PiaPlugin_Result__IsSuccess (PiaPlugin_Result_o __this, const MethodInfo* method_info);
bool PiaPlugin_Result__IsFailure (PiaPlugin_Result_o __this, const MethodInfo* method_info);
nn_err_ErrorCode_o PiaPlugin_Result__GetErrorCode (PiaPlugin_Result_o __this, const MethodInfo* method_info);
nn_Result_o PiaPlugin_Result__GetErrorResult (PiaPlugin_Result_o __this, const MethodInfo* method_info);
void PiaPlugin_Result__Trace (PiaPlugin_Result_o __this, const MethodInfo* method_info);
