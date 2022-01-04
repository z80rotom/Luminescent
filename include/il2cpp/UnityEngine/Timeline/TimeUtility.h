#pragma once

#include "il2cpp.h"

void UnityEngine_Timeline_TimeUtility__ValidateFrameRate (double frameRate, const MethodInfo* method);
int32_t UnityEngine_Timeline_TimeUtility__ToFrames (double time, double frameRate, const MethodInfo* method);
double UnityEngine_Timeline_TimeUtility__ToExactFrames (double time, double frameRate, const MethodInfo* method);
double UnityEngine_Timeline_TimeUtility__FromFrames (int32_t frames, double frameRate, const MethodInfo* method);
double UnityEngine_Timeline_TimeUtility__FromFrames (double frames, double frameRate, const MethodInfo* method);
bool UnityEngine_Timeline_TimeUtility__OnFrameBoundary (double time, double frameRate, const MethodInfo* method);
double UnityEngine_Timeline_TimeUtility__GetEpsilon (double time, double frameRate, const MethodInfo* method);
bool UnityEngine_Timeline_TimeUtility__OnFrameBoundary (double time, double frameRate, double epsilon, const MethodInfo* method);
double UnityEngine_Timeline_TimeUtility__RoundToFrame (double time, double frameRate, const MethodInfo* method);
System_String_o* UnityEngine_Timeline_TimeUtility__TimeAsFrames (double timeValue, double frameRate, System_String_o* format, const MethodInfo* method);
System_String_o* UnityEngine_Timeline_TimeUtility__TimeAsTimeCode (double timeValue, double frameRate, System_String_o* format, const MethodInfo* method);
double UnityEngine_Timeline_TimeUtility__ParseTimeCode (System_String_o* timeCode, double frameRate, double defaultValue, const MethodInfo* method);
double UnityEngine_Timeline_TimeUtility__GetAnimationClipLength (UnityEngine_AnimationClip_o* clip, const MethodInfo* method);
System_String_o* UnityEngine_Timeline_TimeUtility__RemoveChar (System_String_o* str, System_Func_char__bool__o* charToRemoveFunc, const MethodInfo* method);
void UnityEngine_Timeline_TimeUtility___cctor (const MethodInfo* method);
