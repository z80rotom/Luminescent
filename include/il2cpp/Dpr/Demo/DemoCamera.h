#pragma once

#include "il2cpp.h"

void Dpr_Demo_DemoCamera__Awake (Dpr_Demo_DemoCamera_o* __this, const MethodInfo* method);
UnityEngine_RenderTexture_o* Dpr_Demo_DemoCamera__CreateRenderTex (Dpr_Demo_DemoCamera_o* __this, bool isUseAlpha, bool isSetCamera, const MethodInfo* method);
void Dpr_Demo_DemoCamera__OnValidate (Dpr_Demo_DemoCamera_o* __this, const MethodInfo* method);
void Dpr_Demo_DemoCamera__OnDestroy (Dpr_Demo_DemoCamera_o* __this, const MethodInfo* method);
void Dpr_Demo_DemoCamera__LeapMove (Dpr_Demo_DemoCamera_o* __this, UnityEngine_Transform_o* tra1, UnityEngine_Transform_o* tra2, const MethodInfo* method);
void Dpr_Demo_DemoCamera__TweenMove (Dpr_Demo_DemoCamera_o* __this, int32_t PosIndex1, int32_t PosIndex2, float duration, const MethodInfo* method);
void Dpr_Demo_DemoCamera__DebugMove (Dpr_Demo_DemoCamera_o* __this, const MethodInfo* method);
void Dpr_Demo_DemoCamera__SetAnimatorController (Dpr_Demo_DemoCamera_o* __this, UnityEngine_RuntimeAnimatorController_o* controller, const MethodInfo* method);
UnityEngine_AnimationClip_o* Dpr_Demo_DemoCamera__get_nowClip (Dpr_Demo_DemoCamera_o* __this, const MethodInfo* method);
void Dpr_Demo_DemoCamera__PlayAnim (Dpr_Demo_DemoCamera_o* __this, System_String_o* animName, float time, const MethodInfo* method);
void Dpr_Demo_DemoCamera__PauseAnim (Dpr_Demo_DemoCamera_o* __this, const MethodInfo* method);
void Dpr_Demo_DemoCamera__ResumeAnim (Dpr_Demo_DemoCamera_o* __this, const MethodInfo* method);
void Dpr_Demo_DemoCamera__SetPauseTargetFrame (Dpr_Demo_DemoCamera_o* __this, int32_t i_frame, const MethodInfo* method);
void Dpr_Demo_DemoCamera__UnSetPause (Dpr_Demo_DemoCamera_o* __this, const MethodInfo* method);
void Dpr_Demo_DemoCamera__TargetFramePause (Dpr_Demo_DemoCamera_o* __this, float deltaTime, const MethodInfo* method);
void Dpr_Demo_DemoCamera__PlayTargetFrame (Dpr_Demo_DemoCamera_o* __this, int32_t i_frame, System_String_o* animName, const MethodInfo* method);
void Dpr_Demo_DemoCamera___DebugPlay (Dpr_Demo_DemoCamera_o* __this, const MethodInfo* method);
void Dpr_Demo_DemoCamera__ResetPostProcess (Dpr_Demo_DemoCamera_o* __this, const MethodInfo* method);
void Dpr_Demo_DemoCamera___ctor (Dpr_Demo_DemoCamera_o* __this, const MethodInfo* method);
