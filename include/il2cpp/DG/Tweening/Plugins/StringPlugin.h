#pragma once

#include "il2cpp.h"

void DG_Tweening_Plugins_StringPlugin__SetFrom (DG_Tweening_Plugins_StringPlugin_o* __this, DG_Tweening_Core_TweenerCore_string__string__StringOptions__o* t, bool isRelative, const MethodInfo* method);
void DG_Tweening_Plugins_StringPlugin__SetFrom (DG_Tweening_Plugins_StringPlugin_o* __this, DG_Tweening_Core_TweenerCore_string__string__StringOptions__o* t, System_String_o* fromValue, bool setImmediately, const MethodInfo* method);
void DG_Tweening_Plugins_StringPlugin__Reset (DG_Tweening_Plugins_StringPlugin_o* __this, DG_Tweening_Core_TweenerCore_string__string__StringOptions__o* t, const MethodInfo* method);
System_String_o* DG_Tweening_Plugins_StringPlugin__ConvertToStartValue (DG_Tweening_Plugins_StringPlugin_o* __this, DG_Tweening_Core_TweenerCore_string__string__StringOptions__o* t, System_String_o* value, const MethodInfo* method);
void DG_Tweening_Plugins_StringPlugin__SetRelativeEndValue (DG_Tweening_Plugins_StringPlugin_o* __this, DG_Tweening_Core_TweenerCore_string__string__StringOptions__o* t, const MethodInfo* method);
void DG_Tweening_Plugins_StringPlugin__SetChangeValue (DG_Tweening_Plugins_StringPlugin_o* __this, DG_Tweening_Core_TweenerCore_string__string__StringOptions__o* t, const MethodInfo* method);
float DG_Tweening_Plugins_StringPlugin__GetSpeedBasedDuration (DG_Tweening_Plugins_StringPlugin_o* __this, DG_Tweening_Plugins_Options_StringOptions_o options, float unitsXSecond, System_String_o* changeValue, const MethodInfo* method);
void DG_Tweening_Plugins_StringPlugin__EvaluateAndApply (DG_Tweening_Plugins_StringPlugin_o* __this, DG_Tweening_Plugins_Options_StringOptions_o options, DG_Tweening_Tween_o* t, bool isRelative, DG_Tweening_Core_DOGetter_string__o* getter, DG_Tweening_Core_DOSetter_string__o* setter, float elapsed, System_String_o* startValue, System_String_o* changeValue, float duration, bool usingInversePosition, int32_t updateNotice, const MethodInfo* method);
System_Text_StringBuilder_o* DG_Tweening_Plugins_StringPlugin__Append (DG_Tweening_Plugins_StringPlugin_o* __this, System_String_o* value, int32_t startIndex, int32_t length, bool richTextEnabled, const MethodInfo* method);
System_Char_array* DG_Tweening_Plugins_StringPlugin__ScrambledCharsToUse (DG_Tweening_Plugins_StringPlugin_o* __this, DG_Tweening_Plugins_Options_StringOptions_o options, const MethodInfo* method);
void DG_Tweening_Plugins_StringPlugin___ctor (DG_Tweening_Plugins_StringPlugin_o* __this, const MethodInfo* method);
void DG_Tweening_Plugins_StringPlugin___cctor (const MethodInfo* method);
