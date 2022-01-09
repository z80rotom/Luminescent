#pragma once

#include "il2cpp.h"

UnityEngine_Vector3_o FieldCamera__get_offset (FieldCamera_o* __this, const MethodInfo* method_info);
void FieldCamera__set_offset (FieldCamera_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method_info);
UnityEngine_Vector3_o FieldCamera__get_offsetAngle (FieldCamera_o* __this, const MethodInfo* method_info);
void FieldCamera__set_offsetAngle (FieldCamera_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method_info);
void FieldCamera__set_Target (FieldCamera_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method_info);
UnityEngine_Transform_o* FieldCamera__get_Target (FieldCamera_o* __this, const MethodInfo* method_info);
void FieldCamera__set_EventCamera (FieldCamera_o* __this, EventCamera_o* value, const MethodInfo* method_info);
EventCamera_o* FieldCamera__get_EventCamera (FieldCamera_o* __this, const MethodInfo* method_info);
void FieldCamera__set_FieldCameraShake (FieldCamera_o* __this, FieldCameraShake_o* value, const MethodInfo* method_info);
FieldCameraShake_o* FieldCamera__get_FieldCameraShake (FieldCamera_o* __this, const MethodInfo* method_info);
void FieldCamera__set_TargetRangeOffset (FieldCamera_o* __this, Dpr_FieldFloatMove_o* value, const MethodInfo* method_info);
Dpr_FieldFloatMove_o* FieldCamera__get_TargetRangeOffset (FieldCamera_o* __this, const MethodInfo* method_info);
float FieldCamera__get_Fov (FieldCamera_o* __this, const MethodInfo* method_info);
void FieldCamera__set_Fov (FieldCamera_o* __this, float value, const MethodInfo* method_info);
void FieldCamera__set_AfterImage (FieldCamera_o* __this, AfterImage_o* value, const MethodInfo* method_info);
AfterImage_o* FieldCamera__get_AfterImage (FieldCamera_o* __this, const MethodInfo* method_info);
void FieldCamera__SetPanCameraFlag (FieldCamera_o* __this, bool flag, const MethodInfo* method_info);
bool FieldCamera__GetPanCameraFlag (FieldCamera_o* __this, const MethodInfo* method_info);
void FieldCamera__Awake (FieldCamera_o* __this, const MethodInfo* method_info);
float FieldCamera__get_TargetRange (FieldCamera_o* __this, const MethodInfo* method_info);
void FieldCamera__OnEnable (FieldCamera_o* __this, const MethodInfo* method_info);
void FieldCamera__Update (FieldCamera_o* __this, const MethodInfo* method_info);
void FieldCamera__LateUpdate (FieldCamera_o* __this, const MethodInfo* method_info);
void FieldCamera__ForceUpdateCamera (FieldCamera_o* __this, const MethodInfo* method_info);
void FieldCamera__CameraUpdate (FieldCamera_o* __this, float deltaTime, const MethodInfo* method_info);
void FieldCamera__FixedPosition (FieldCamera_o* __this, const MethodInfo* method_info);
void FieldCamera__SetTempNormalCamera (FieldCamera_o* __this, float pitch, float fov, float _far_, const MethodInfo* method_info);
void FieldCamera__SetTempNormalCamera (FieldCamera_o* __this, float pitch, float fov, float targetRange, float defocusStart, float defocusEnd, bool isForse, float wait, const MethodInfo* method_info);
void FieldCamera__SetTempNormalCamera (FieldCamera_o* __this, XLSXContent_MapInfo_SheetCamera_o* data, bool isForse, float wait, const MethodInfo* method_info);
void FieldCamera__UpdateMapInfoParam (FieldCamera_o* __this, float time, const MethodInfo* method_info);
bool FieldCamera__IsMoveStop (FieldCamera_o* __this, const MethodInfo* method_info);
void FieldCamera__CameraComponentEnable (FieldCamera_o* __this, bool flag, const MethodInfo* method_info);
void FieldCamera__InstantiateDarkWindow (FieldCamera_o* __this, UnityEngine_GameObject_o* darkWindow, const MethodInfo* method_info);
void FieldCamera__DestroyDarkWindow (FieldCamera_o* __this, const MethodInfo* method_info);
UnityEngine_GameObject_o* FieldCamera__GetDarkWindow (FieldCamera_o* __this, const MethodInfo* method_info);
void FieldCamera__ScriptFarDepth (FieldCamera_o* __this, float depth, float frame, const MethodInfo* method_info);
void FieldCamera__ChangeDofTarget (FieldCamera_o* __this, UnityEngine_Vector3_o* postion, const MethodInfo* method_info);
void FieldCamera__ResetChangeDofTarget (FieldCamera_o* __this, const MethodInfo* method_info);
void FieldCamera__SetCameraDirect (FieldCamera_o* __this, UnityEngine_Vector3_o position, UnityEngine_Vector3_o rotate, const MethodInfo* method_info);
UnityEngine_Camera_o* FieldCamera__GetCamera (FieldCamera_o* __this, const MethodInfo* method_info);
void FieldCamera__SetFovOffset (FieldCamera_o* __this, float offset, float time, const MethodInfo* method_info);
float FieldCamera__GetFov (FieldCamera_o* __this, const MethodInfo* method_info);
void FieldCamera___ctor (FieldCamera_o* __this, const MethodInfo* method_info);
