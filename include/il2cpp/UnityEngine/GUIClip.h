#pragma once

#include "il2cpp.h"

void UnityEngine_GUIClip__Internal_Pop (const MethodInfo* method);
int32_t UnityEngine_GUIClip__Internal_GetCount (const MethodInfo* method);
UnityEngine_Matrix4x4_o UnityEngine_GUIClip__GetMatrix (const MethodInfo* method);
void UnityEngine_GUIClip__SetMatrix (UnityEngine_Matrix4x4_o m, const MethodInfo* method);
void UnityEngine_GUIClip__Internal_PushParentClip (UnityEngine_Matrix4x4_o objectTransform, UnityEngine_Rect_o clipRect, const MethodInfo* method);
void UnityEngine_GUIClip__Internal_PopParentClip (const MethodInfo* method);
void UnityEngine_GUIClip__GetMatrix_Injected (UnityEngine_Matrix4x4_o* ret, const MethodInfo* method);
void UnityEngine_GUIClip__SetMatrix_Injected (UnityEngine_Matrix4x4_o* m, const MethodInfo* method);
void UnityEngine_GUIClip__Internal_PushParentClip_Injected (UnityEngine_Matrix4x4_o* objectTransform, UnityEngine_Rect_o* clipRect, const MethodInfo* method);
