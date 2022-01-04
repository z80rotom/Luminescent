#pragma once

#include "il2cpp.h"

void DG_Tweening_Plugins_UintPlugin__Reset (DG_Tweening_Plugins_UintPlugin_o* __this, DG_Tweening_Core_TweenerCore_uint__uint__UintOptions__o* t, const MethodInfo* method);
void DG_Tweening_Plugins_UintPlugin__SetFrom (DG_Tweening_Plugins_UintPlugin_o* __this, DG_Tweening_Core_TweenerCore_uint__uint__UintOptions__o* t, bool isRelative, const MethodInfo* method);
void DG_Tweening_Plugins_UintPlugin__SetFrom (DG_Tweening_Plugins_UintPlugin_o* __this, DG_Tweening_Core_TweenerCore_uint__uint__UintOptions__o* t, uint32_t fromValue, bool setImmediately, const MethodInfo* method);
uint32_t DG_Tweening_Plugins_UintPlugin__ConvertToStartValue (DG_Tweening_Plugins_UintPlugin_o* __this, DG_Tweening_Core_TweenerCore_uint__uint__UintOptions__o* t, uint32_t value, const MethodInfo* method);
void DG_Tweening_Plugins_UintPlugin__SetRelativeEndValue (DG_Tweening_Plugins_UintPlugin_o* __this, DG_Tweening_Core_TweenerCore_uint__uint__UintOptions__o* t, const MethodInfo* method);
void DG_Tweening_Plugins_UintPlugin__SetChangeValue (DG_Tweening_Plugins_UintPlugin_o* __this, DG_Tweening_Core_TweenerCore_uint__uint__UintOptions__o* t, const MethodInfo* method);
float DG_Tweening_Plugins_UintPlugin__GetSpeedBasedDuration (DG_Tweening_Plugins_UintPlugin_o* __this, DG_Tweening_Plugins_Options_UintOptions_o options, float unitsXSecond, uint32_t changeValue, const MethodInfo* method);
void DG_Tweening_Plugins_UintPlugin__EvaluateAndApply (DG_Tweening_Plugins_UintPlugin_o* __this, DG_Tweening_Plugins_Options_UintOptions_o options, DG_Tweening_Tween_o* t, bool isRelative, DG_Tweening_Core_DOGetter_uint__o* getter, DG_Tweening_Core_DOSetter_uint__o* setter, float elapsed, uint32_t startValue, uint32_t changeValue, float duration, bool usingInversePosition, int32_t updateNotice, const MethodInfo* method);
void DG_Tweening_Plugins_UintPlugin___ctor (DG_Tweening_Plugins_UintPlugin_o* __this, const MethodInfo* method);
