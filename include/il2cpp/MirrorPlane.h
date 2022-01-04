#pragma once

#include "il2cpp.h"

UnityEngine_LayerMask_o MirrorPlane__get_targetLayers (MirrorPlane_o* __this, const MethodInfo* method);
void MirrorPlane__set_targetLayers (MirrorPlane_o* __this, UnityEngine_LayerMask_o value, const MethodInfo* method);
void MirrorPlane__OnEnable (MirrorPlane_o* __this, const MethodInfo* method);
void MirrorPlane__OnDisable (MirrorPlane_o* __this, const MethodInfo* method);
void MirrorPlane__OnWillRenderObject (MirrorPlane_o* __this, const MethodInfo* method);
void MirrorPlane__UpdateCameraModes (MirrorPlane_o* __this, UnityEngine_Camera_o* src, UnityEngine_Camera_o* dest, const MethodInfo* method);
void MirrorPlane__CreateMirrorObjects (MirrorPlane_o* __this, UnityEngine_Camera_o* currentCamera, UnityEngine_Camera_o** reflectionCamera, const MethodInfo* method);
UnityEngine_Vector4_o MirrorPlane__CalculateClipPlane (MirrorPlane_o* __this, UnityEngine_Camera_o* reflectionCamera, UnityEngine_Vector3_o planePoint, UnityEngine_Vector3_o planeNormal, const MethodInfo* method);
void MirrorPlane___ctor (MirrorPlane_o* __this, const MethodInfo* method);
void MirrorPlane___cctor (const MethodInfo* method);
