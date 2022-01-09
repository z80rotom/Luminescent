#pragma once

#include "il2cpp.h"

void DG_Tweening_DOTweenModuleUtils_Physics__SetOrientationOnPath (DG_Tweening_Plugins_Options_PathOptions_o options, DG_Tweening_Tween_o* t, UnityEngine_Quaternion_o newRot, UnityEngine_Transform_o* trans, const MethodInfo* method_info);
bool DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody2D (UnityEngine_Component_o* target, const MethodInfo* method_info);
bool DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody (UnityEngine_Component_o* target, const MethodInfo* method_info);
DG_Tweening_Core_TweenerCore_Vector3__Path__PathOptions__o* DG_Tweening_DOTweenModuleUtils_Physics__CreateDOTweenPathTween (UnityEngine_MonoBehaviour_o* target, bool tweenRigidbody, bool isLocal, DG_Tweening_Plugins_Core_PathCore_Path_o* path, float duration, int32_t pathMode, const MethodInfo* method_info);
