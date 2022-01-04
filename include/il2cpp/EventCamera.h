#pragma once

#include "il2cpp.h"

void EventCamera__set_defaultPosition (EventCamera_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
UnityEngine_Vector3_o EventCamera__get_defaultPosition (EventCamera_o* __this, const MethodInfo* method);
void EventCamera__set_defaultRotate (EventCamera_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
UnityEngine_Vector3_o EventCamera__get_defaultRotate (EventCamera_o* __this, const MethodInfo* method);
void EventCamera__set_beforePosition (EventCamera_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
UnityEngine_Vector3_o EventCamera__get_beforePosition (EventCamera_o* __this, const MethodInfo* method);
void EventCamera__set_beforeRotate (EventCamera_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
UnityEngine_Vector3_o EventCamera__get_beforeRotate (EventCamera_o* __this, const MethodInfo* method);
void EventCamera__set_IsEnd (EventCamera_o* __this, bool value, const MethodInfo* method);
bool EventCamera__get_IsEnd (EventCamera_o* __this, const MethodInfo* method);
void EventCamera___ctor (EventCamera_o* __this, FieldCamera_o* cam, const MethodInfo* method);
void EventCamera__SetCameraData (EventCamera_o* __this, EventCameraTable_o* tbl, int32_t index, const MethodInfo* method);
void EventCamera__SetCameraData (EventCamera_o* __this, EventCameraTable_o* tbl, EventCameraData_o* data, const MethodInfo* method);
void EventCamera__Release (EventCamera_o* __this, const MethodInfo* method);
void EventCamera__lateUpdate (EventCamera_o* __this, float deltatime, const MethodInfo* method);
bool EventCamera__PathUpdate (EventCamera_o* __this, EventCameraData_PathData_o* path, float t, const MethodInfo* method);
bool EventCamera__PathUpdate2 (EventCamera_o* __this, EventCameraData_PathData2_o* path, float t, const MethodInfo* method);
bool EventCamera__RotationUpdate (EventCamera_o* __this, EventCameraData_RotationData_o* path, float t, const MethodInfo* method);
bool EventCamera__ReturnDefault (EventCamera_o* __this, EventCameraData_ReturnDefault_o* path, float t, const MethodInfo* method);
bool EventCamera__ReturnDefaultRotate (EventCamera_o* __this, EventCameraData_ReturnDefault_o* path, float t, const MethodInfo* method);
bool EventCamera__FieldOfViewUpdate (EventCamera_o* __this, EventCameraData_FovData_o* path, float t, const MethodInfo* method);
void EventCamera__FadeUpdate (EventCamera_o* __this, EventCameraData_FadeData_o* fade, const MethodInfo* method);
