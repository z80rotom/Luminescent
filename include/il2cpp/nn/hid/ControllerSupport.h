#pragma once

#include "il2cpp.h"

nn_Result_o nn_hid_ControllerSupport__Show (nn_hid_ControllerSupportArg_o showControllerSupportArg, const MethodInfo* method_info);
nn_Result_o nn_hid_ControllerSupport__Show (nn_hid_ControllerSupportResultInfo_o* pOutValue, nn_hid_ControllerSupportArg_o showControllerSupportArg, const MethodInfo* method_info);
void nn_hid_ControllerSupport__SetExplainText (nn_hid_ControllerSupportArg_o* pOutControllerSupportArg, System_String_o* pStr, int32_t npadId, const MethodInfo* method_info);
nn_Result_o nn_hid_ControllerSupport__Show (nn_hid_ControllerSupportArg_o showControllerSupportArg, bool suspendUnityThreads, const MethodInfo* method_info);
nn_Result_o nn_hid_ControllerSupport__Show (nn_hid_ControllerSupportResultInfo_o* pOutValue, nn_hid_ControllerSupportArg_o showControllerSupportArg, bool suspendUnityThreads, const MethodInfo* method_info);
nn_ErrorRange_o nn_hid_ControllerSupport__get_ResultCanceled (const MethodInfo* method_info);
nn_ErrorRange_o nn_hid_ControllerSupport__get_ResultNotSupportedNpadStyle (const MethodInfo* method_info);
