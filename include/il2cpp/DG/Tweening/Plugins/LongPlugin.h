#pragma once

#include "il2cpp.h"

void DG_Tweening_Plugins_LongPlugin__Reset (DG_Tweening_Plugins_LongPlugin_o* __this, DG_Tweening_Core_TweenerCore_long__long__NoOptions__o* t, const MethodInfo* method);
void DG_Tweening_Plugins_LongPlugin__SetFrom (DG_Tweening_Plugins_LongPlugin_o* __this, DG_Tweening_Core_TweenerCore_long__long__NoOptions__o* t, bool isRelative, const MethodInfo* method);
void DG_Tweening_Plugins_LongPlugin__SetFrom (DG_Tweening_Plugins_LongPlugin_o* __this, DG_Tweening_Core_TweenerCore_long__long__NoOptions__o* t, int64_t fromValue, bool setImmediately, const MethodInfo* method);
int64_t DG_Tweening_Plugins_LongPlugin__ConvertToStartValue (DG_Tweening_Plugins_LongPlugin_o* __this, DG_Tweening_Core_TweenerCore_long__long__NoOptions__o* t, int64_t value, const MethodInfo* method);
void DG_Tweening_Plugins_LongPlugin__SetRelativeEndValue (DG_Tweening_Plugins_LongPlugin_o* __this, DG_Tweening_Core_TweenerCore_long__long__NoOptions__o* t, const MethodInfo* method);
void DG_Tweening_Plugins_LongPlugin__SetChangeValue (DG_Tweening_Plugins_LongPlugin_o* __this, DG_Tweening_Core_TweenerCore_long__long__NoOptions__o* t, const MethodInfo* method);
float DG_Tweening_Plugins_LongPlugin__GetSpeedBasedDuration (DG_Tweening_Plugins_LongPlugin_o* __this, DG_Tweening_Plugins_Options_NoOptions_o options, float unitsXSecond, int64_t changeValue, const MethodInfo* method);
void DG_Tweening_Plugins_LongPlugin__EvaluateAndApply (DG_Tweening_Plugins_LongPlugin_o* __this, DG_Tweening_Plugins_Options_NoOptions_o options, DG_Tweening_Tween_o* t, bool isRelative, DG_Tweening_Core_DOGetter_long__o* getter, DG_Tweening_Core_DOSetter_long__o* setter, float elapsed, int64_t startValue, int64_t changeValue, float duration, bool usingInversePosition, int32_t updateNotice, const MethodInfo* method);
void DG_Tweening_Plugins_LongPlugin___ctor (DG_Tweening_Plugins_LongPlugin_o* __this, const MethodInfo* method);
