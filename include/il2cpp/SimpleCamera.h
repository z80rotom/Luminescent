#pragma once

#include "il2cpp.h"

void SimpleCamera__set_dragTarget (SimpleCamera_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method_info);
UnityEngine_Transform_o* SimpleCamera__get_cameraTarget (SimpleCamera_o* __this, const MethodInfo* method_info);
void SimpleCamera__set_cameraTarget (SimpleCamera_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method_info);
UnityEngine_BoundingSphere_o SimpleCamera__get_boundingSphere (SimpleCamera_o* __this, const MethodInfo* method_info);
void SimpleCamera__set_boundingSphere (SimpleCamera_o* __this, UnityEngine_BoundingSphere_o value, const MethodInfo* method_info);
UnityEngine_Bounds_o SimpleCamera__get_bounds (SimpleCamera_o* __this, const MethodInfo* method_info);
void SimpleCamera__set_bounds (SimpleCamera_o* __this, UnityEngine_Bounds_o value, const MethodInfo* method_info);
void SimpleCamera__set_controllable (SimpleCamera_o* __this, bool value, const MethodInfo* method_info);
void SimpleCamera__OnEnable (SimpleCamera_o* __this, const MethodInfo* method_info);
void SimpleCamera__OnDisable (SimpleCamera_o* __this, const MethodInfo* method_info);
void SimpleCamera__OnUpdate (SimpleCamera_o* __this, float deltaTime, const MethodInfo* method_info);
void SimpleCamera__Track (SimpleCamera_o* __this, float x, float y, const MethodInfo* method_info);
void SimpleCamera__Tumble (SimpleCamera_o* __this, float yaw, float pitch, const MethodInfo* method_info);
void SimpleCamera__Pan (SimpleCamera_o* __this, float yaw, float pitch, const MethodInfo* method_info);
void SimpleCamera__SetTarget (SimpleCamera_o* __this, UnityEngine_GameObject_o* instance, bool fit, const MethodInfo* method_info);
UnityEngine_Vector3_array* SimpleCamera__GetPositions (SimpleCamera_o* __this, UnityEngine_GameObject_o* instance, const MethodInfo* method_info);
UnityEngine_Bounds_o SimpleCamera__ComputeBounds (SimpleCamera_o* __this, UnityEngine_Vector3_array* positions, const MethodInfo* method_info);
UnityEngine_BoundingSphere_o SimpleCamera__ComputeBoundingSphereFast (SimpleCamera_o* __this, UnityEngine_Vector3_array* positions, const MethodInfo* method_info);
void SimpleCamera__FitSphere (SimpleCamera_o* __this, UnityEngine_BoundingSphere_o sphere, const MethodInfo* method_info);
void SimpleCamera__FitSphere (SimpleCamera_o* __this, const MethodInfo* method_info);
void SimpleCamera__FitBox (SimpleCamera_o* __this, const MethodInfo* method_info);
void SimpleCamera___ctor (SimpleCamera_o* __this, const MethodInfo* method_info);
