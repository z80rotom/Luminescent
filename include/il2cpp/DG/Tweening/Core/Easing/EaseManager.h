#pragma once

#include "il2cpp.h"

float DG_Tweening_Core_Easing_EaseManager__Evaluate (DG_Tweening_Tween_o* t, float time, float duration, float overshootOrAmplitude, float period, const MethodInfo* method_info);
float DG_Tweening_Core_Easing_EaseManager__Evaluate (int32_t easeType, DG_Tweening_EaseFunction_o* customEase, float time, float duration, float overshootOrAmplitude, float period, const MethodInfo* method_info);
DG_Tweening_EaseFunction_o* DG_Tweening_Core_Easing_EaseManager__ToEaseFunction (int32_t ease, const MethodInfo* method_info);
bool DG_Tweening_Core_Easing_EaseManager__IsFlashEase (int32_t ease, const MethodInfo* method_info);
