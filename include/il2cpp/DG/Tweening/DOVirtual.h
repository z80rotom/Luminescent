#pragma once

#include "il2cpp.h"

DG_Tweening_Tweener_o* DG_Tweening_DOVirtual__Float (float from, float to, float duration, DG_Tweening_TweenCallback_float__o* onVirtualUpdate, const MethodInfo* method);
float DG_Tweening_DOVirtual__EasedValue (float from, float to, float lifetimePercentage, int32_t easeType, const MethodInfo* method);
float DG_Tweening_DOVirtual__EasedValue (float from, float to, float lifetimePercentage, int32_t easeType, float overshoot, const MethodInfo* method);
float DG_Tweening_DOVirtual__EasedValue (float from, float to, float lifetimePercentage, int32_t easeType, float amplitude, float period, const MethodInfo* method);
float DG_Tweening_DOVirtual__EasedValue (float from, float to, float lifetimePercentage, UnityEngine_AnimationCurve_o* easeCurve, const MethodInfo* method);
DG_Tweening_Tween_o* DG_Tweening_DOVirtual__DelayedCall (float delay, DG_Tweening_TweenCallback_o* callback, bool ignoreTimeScale, const MethodInfo* method);
