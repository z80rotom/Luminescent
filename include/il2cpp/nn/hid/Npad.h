#pragma once

#include "il2cpp.h"

void nn_hid_Npad__Initialize (const MethodInfo* method);
void nn_hid_Npad__SetSupportedStyleSet (int32_t npadStyle, const MethodInfo* method);
int32_t nn_hid_Npad__GetSupportedStyleSet (const MethodInfo* method);
void nn_hid_Npad__SetSupportedIdType (nn_hid_NpadId_array* npadIds, int64_t count, const MethodInfo* method);
void nn_hid_Npad__SetSupportedIdType (nn_hid_NpadId_array* npadIds, const MethodInfo* method);
void nn_hid_Npad__BindStyleSetUpdateEvent (int32_t npadId, const MethodInfo* method);
bool nn_hid_Npad__IsStyleSetUpdated (int32_t npadId, const MethodInfo* method);
void nn_hid_Npad__DestroyStyleSetUpdateEvent (int32_t npadId, const MethodInfo* method);
int32_t nn_hid_Npad__GetStyleSet (int32_t npadId, const MethodInfo* method);
void nn_hid_Npad__Disconnect (int32_t npadId, const MethodInfo* method);
uint8_t nn_hid_Npad__GetPlayerLedPattern (int32_t npadId, const MethodInfo* method);
nn_Result_o nn_hid_Npad__GetControllerColor (nn_hid_NpadControllerColor_o* pOutValue, int32_t npadId, const MethodInfo* method);
nn_Result_o nn_hid_Npad__GetControllerColor (nn_hid_NpadControllerColor_o* pOutLeftColor, nn_hid_NpadControllerColor_o* pOutRightColor, int32_t npadId, const MethodInfo* method);
void nn_hid_Npad__GetState (nn_hid_NpadState_o* pOutValue, int32_t npadId, int32_t npadStyle, const MethodInfo* method);
int32_t nn_hid_Npad__GetStates (nn_hid_NpadStateArrayItem_array* pOutValues, int32_t count, int32_t npadId, int32_t npadStyle, const MethodInfo* method);
nn_ErrorRange_o nn_hid_Npad__get_ResultColorNotAvailable (const MethodInfo* method);
nn_ErrorRange_o nn_hid_Npad__get_ResultControllerNotConnected (const MethodInfo* method);
