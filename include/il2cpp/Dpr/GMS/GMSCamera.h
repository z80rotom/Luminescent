#pragma once

#include "il2cpp.h"

void Dpr_GMS_GMSCamera__Initialize (Dpr_GMS_GMSCamera_o* __this, System_Action_o* onStopMove, const MethodInfo* method);
void Dpr_GMS_GMSCamera__SetCameraConfig (Dpr_GMS_GMSCamera_o* __this, Dpr_GMS_GMSCameraConfig_o* cameraConfig, const MethodInfo* method);
void Dpr_GMS_GMSCamera__Setup (Dpr_GMS_GMSCamera_o* __this, UnityEngine_RenderTexture_o* renderTexture, const MethodInfo* method);
void Dpr_GMS_GMSCamera__OnFinalize (Dpr_GMS_GMSCamera_o* __this, const MethodInfo* method);
void Dpr_GMS_GMSCamera__KillDistanceTween (Dpr_GMS_GMSCamera_o* __this, const MethodInfo* method);
void Dpr_GMS_GMSCamera__KillRotTween (Dpr_GMS_GMSCamera_o* __this, const MethodInfo* method);
void Dpr_GMS_GMSCamera__ChangeCameraMode (Dpr_GMS_GMSCamera_o* __this, int32_t mode, const MethodInfo* method);
bool Dpr_GMS_GMSCamera__get_IsMoving (Dpr_GMS_GMSCamera_o* __this, const MethodInfo* method);
bool Dpr_GMS_GMSCamera__get_RunningDistanceTween (Dpr_GMS_GMSCamera_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o Dpr_GMS_GMSCamera__get_CameraPosition (Dpr_GMS_GMSCamera_o* __this, const MethodInfo* method);
void Dpr_GMS_GMSCamera__LockMove (Dpr_GMS_GMSCamera_o* __this, const MethodInfo* method);
void Dpr_GMS_GMSCamera__UnlockMove (Dpr_GMS_GMSCamera_o* __this, const MethodInfo* method);
void Dpr_GMS_GMSCamera__PerformNearDistance (Dpr_GMS_GMSCamera_o* __this, System_Action_o* onComplete, const MethodInfo* method);
void Dpr_GMS_GMSCamera__PerformFarDistance (Dpr_GMS_GMSCamera_o* __this, System_Action_o* onComplete, const MethodInfo* method);
void Dpr_GMS_GMSCamera__ResetDistance (Dpr_GMS_GMSCamera_o* __this, System_Action_o* onComplete, const MethodInfo* method);
float Dpr_GMS_GMSCamera__GetGoalDistanceValue (Dpr_GMS_GMSCamera_o* __this, const MethodInfo* method);
void Dpr_GMS_GMSCamera__DoDistanceTween (Dpr_GMS_GMSCamera_o* __this, float goalValue, float duration, int32_t easeType, float delay, System_Action_o* onCompleteTween, const MethodInfo* method);
void Dpr_GMS_GMSCamera__PerformRotate (Dpr_GMS_GMSCamera_o* __this, UnityEngine_Vector3_o goalPoint, bool checkForcesRange, System_Action_o* onComplete, const MethodInfo* method);
void Dpr_GMS_GMSCamera__SnapPoint (Dpr_GMS_GMSCamera_o* __this, UnityEngine_Vector3_o goalPoint, const MethodInfo* method);
float Dpr_GMS_GMSCamera__CalcRotateTweenDuration (Dpr_GMS_GMSCamera_o* __this, UnityEngine_Vector3_o srcVec, UnityEngine_Vector3_o destPoint, const MethodInfo* method);
void Dpr_GMS_GMSCamera__DoRotateTween (Dpr_GMS_GMSCamera_o* __this, UnityEngine_Vector3_o cameraPosNormal, UnityEngine_Vector3_o goalPointNormal, float tweenDuration, int32_t easeType, float delay, System_Action_o* onCompleteTween, const MethodInfo* method);
void Dpr_GMS_GMSCamera__SetNowCameraTransformParams (Dpr_GMS_GMSCamera_o* __this, const MethodInfo* method);
void Dpr_GMS_GMSCamera__MoveCameraPosition (Dpr_GMS_GMSCamera_o* __this, UnityEngine_Vector3_o moveVec, float deltaTime, const MethodInfo* method);
void Dpr_GMS_GMSCamera__StopMoveCameraPosition (Dpr_GMS_GMSCamera_o* __this, const MethodInfo* method);
void Dpr_GMS_GMSCamera__StopImmediateMoveCameraPosition (Dpr_GMS_GMSCamera_o* __this, const MethodInfo* method);
void Dpr_GMS_GMSCamera__OnUpdate (Dpr_GMS_GMSCamera_o* __this, float deltaTime, const MethodInfo* method);
void Dpr_GMS_GMSCamera__OnLateUpdate (Dpr_GMS_GMSCamera_o* __this, float deltaTime, const MethodInfo* method);
void Dpr_GMS_GMSCamera__UpdateRot (Dpr_GMS_GMSCamera_o* __this, const MethodInfo* method);
void Dpr_GMS_GMSCamera__UpdateMove (Dpr_GMS_GMSCamera_o* __this, float deltaTime, const MethodInfo* method);
float Dpr_GMS_GMSCamera__CalcMoveSpeedDemical (Dpr_GMS_GMSCamera_o* __this, const MethodInfo* method);
float Dpr_GMS_GMSCamera__CalcDistanceRatio (Dpr_GMS_GMSCamera_o* __this, const MethodInfo* method);
void Dpr_GMS_GMSCamera__UpdatePosition (Dpr_GMS_GMSCamera_o* __this, const MethodInfo* method);
UnityEngine_Quaternion_o Dpr_GMS_GMSCamera__CalcCameraRot (Dpr_GMS_GMSCamera_o* __this, const MethodInfo* method);
void Dpr_GMS_GMSCamera__CheckTweenRunning (Dpr_GMS_GMSCamera_o* __this, const MethodInfo* method);
void Dpr_GMS_GMSCamera___ctor (Dpr_GMS_GMSCamera_o* __this, const MethodInfo* method);
