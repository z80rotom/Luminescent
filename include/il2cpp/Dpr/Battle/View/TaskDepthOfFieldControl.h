#pragma once

#include "il2cpp.h"

bool Dpr_Battle_View_TaskDepthOfFieldControl__get_IsFinishCondition (Dpr_Battle_View_TaskDepthOfFieldControl_o* __this, const MethodInfo* method_info);
void Dpr_Battle_View_TaskDepthOfFieldControl___ctor (Dpr_Battle_View_TaskDepthOfFieldControl_o* __this, Dpr_SequenceEditor_SequenceCameraObject_o* cameraObject, bool isAutoFocus, float fNumber, float focusDistance, int32_t lifeTime, int32_t easingType, const MethodInfo* method_info);
void Dpr_Battle_View_TaskDepthOfFieldControl___ctor (Dpr_Battle_View_TaskDepthOfFieldControl_o* __this, Dpr_SequenceEditor_SequenceCameraObject_o* cameraObject, float farDepth, float focalLength, float distance, float blurry, int32_t lifeTime, int32_t easingType, const MethodInfo* method_info);
void Dpr_Battle_View_TaskDepthOfFieldControl__OnDispose (Dpr_Battle_View_TaskDepthOfFieldControl_o* __this, const MethodInfo* method_info);
Dpr_Battle_View_PfxParam_o Dpr_Battle_View_TaskDepthOfFieldControl__OnUpdate (Dpr_Battle_View_TaskDepthOfFieldControl_o* __this, int32_t frame, float raito, Dpr_Battle_View_PfxParam_o* pfxParam, const MethodInfo* method_info);
