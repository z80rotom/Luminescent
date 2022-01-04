#pragma once

#include "il2cpp.h"

DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o* DG_Tweening_DOTweenModulePhysics__DOMove (UnityEngine_Rigidbody_o* target, UnityEngine_Vector3_o endValue, float duration, bool snapping, const MethodInfo* method);
DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o* DG_Tweening_DOTweenModulePhysics__DOMoveX (UnityEngine_Rigidbody_o* target, float endValue, float duration, bool snapping, const MethodInfo* method);
DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o* DG_Tweening_DOTweenModulePhysics__DOMoveY (UnityEngine_Rigidbody_o* target, float endValue, float duration, bool snapping, const MethodInfo* method);
DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o* DG_Tweening_DOTweenModulePhysics__DOMoveZ (UnityEngine_Rigidbody_o* target, float endValue, float duration, bool snapping, const MethodInfo* method);
DG_Tweening_Core_TweenerCore_Quaternion__Vector3__QuaternionOptions__o* DG_Tweening_DOTweenModulePhysics__DORotate (UnityEngine_Rigidbody_o* target, UnityEngine_Vector3_o endValue, float duration, int32_t mode, const MethodInfo* method);
DG_Tweening_Core_TweenerCore_Quaternion__Vector3__QuaternionOptions__o* DG_Tweening_DOTweenModulePhysics__DOLookAt (UnityEngine_Rigidbody_o* target, UnityEngine_Vector3_o towards, float duration, int32_t axisConstraint, System_Nullable_Vector3__o up, const MethodInfo* method);
DG_Tweening_Sequence_o* DG_Tweening_DOTweenModulePhysics__DOJump (UnityEngine_Rigidbody_o* target, UnityEngine_Vector3_o endValue, float jumpPower, int32_t numJumps, float duration, bool snapping, const MethodInfo* method);
DG_Tweening_Core_TweenerCore_Vector3__Path__PathOptions__o* DG_Tweening_DOTweenModulePhysics__DOPath (UnityEngine_Rigidbody_o* target, UnityEngine_Vector3_array* path, float duration, int32_t pathType, int32_t pathMode, int32_t resolution, System_Nullable_Color__o gizmoColor, const MethodInfo* method);
DG_Tweening_Core_TweenerCore_Vector3__Path__PathOptions__o* DG_Tweening_DOTweenModulePhysics__DOLocalPath (UnityEngine_Rigidbody_o* target, UnityEngine_Vector3_array* path, float duration, int32_t pathType, int32_t pathMode, int32_t resolution, System_Nullable_Color__o gizmoColor, const MethodInfo* method);
DG_Tweening_Core_TweenerCore_Vector3__Path__PathOptions__o* DG_Tweening_DOTweenModulePhysics__DOPath (UnityEngine_Rigidbody_o* target, DG_Tweening_Plugins_Core_PathCore_Path_o* path, float duration, int32_t pathMode, const MethodInfo* method);
DG_Tweening_Core_TweenerCore_Vector3__Path__PathOptions__o* DG_Tweening_DOTweenModulePhysics__DOLocalPath (UnityEngine_Rigidbody_o* target, DG_Tweening_Plugins_Core_PathCore_Path_o* path, float duration, int32_t pathMode, const MethodInfo* method);
