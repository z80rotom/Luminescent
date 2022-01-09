#pragma once

#include "il2cpp.h"

void UnityEngine_UIElements_PointerDeviceState__SavePointerPosition (int32_t pointerId, UnityEngine_Vector2_o position, UnityEngine_UIElements_IPanel_o* panel, const MethodInfo* method_info);
void UnityEngine_UIElements_PointerDeviceState__PressButton (int32_t pointerId, int32_t buttonId, const MethodInfo* method_info);
void UnityEngine_UIElements_PointerDeviceState__ReleaseButton (int32_t pointerId, int32_t buttonId, const MethodInfo* method_info);
void UnityEngine_UIElements_PointerDeviceState__ReleaseAllButtons (int32_t pointerId, const MethodInfo* method_info);
UnityEngine_Vector2_o UnityEngine_UIElements_PointerDeviceState__GetPointerPosition (int32_t pointerId, const MethodInfo* method_info);
int32_t UnityEngine_UIElements_PointerDeviceState__GetPressedButtons (int32_t pointerId, const MethodInfo* method_info);
bool UnityEngine_UIElements_PointerDeviceState__HasAdditionalPressedButtons (int32_t pointerId, int32_t exceptButtonId, const MethodInfo* method_info);
void UnityEngine_UIElements_PointerDeviceState___cctor (const MethodInfo* method_info);
