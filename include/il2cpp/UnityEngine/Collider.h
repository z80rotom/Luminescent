#pragma once

#include "il2cpp.h"

void UnityEngine_Collider__set_enabled (UnityEngine_Collider_o* __this, bool value, const MethodInfo* method_info);
UnityEngine_Rigidbody_o* UnityEngine_Collider__get_attachedRigidbody (UnityEngine_Collider_o* __this, const MethodInfo* method_info);
void UnityEngine_Collider__set_isTrigger (UnityEngine_Collider_o* __this, bool value, const MethodInfo* method_info);
UnityEngine_Vector3_o UnityEngine_Collider__ClosestPoint (UnityEngine_Collider_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method_info);
UnityEngine_Bounds_o UnityEngine_Collider__get_bounds (UnityEngine_Collider_o* __this, const MethodInfo* method_info);
UnityEngine_RaycastHit_o UnityEngine_Collider__Raycast (UnityEngine_Collider_o* __this, UnityEngine_Ray_o ray, float maxDistance, bool* hasHit, const MethodInfo* method_info);
bool UnityEngine_Collider__Raycast (UnityEngine_Collider_o* __this, UnityEngine_Ray_o ray, UnityEngine_RaycastHit_o* hitInfo, float maxDistance, const MethodInfo* method_info);
void UnityEngine_Collider___ctor (UnityEngine_Collider_o* __this, const MethodInfo* method_info);
void UnityEngine_Collider__ClosestPoint_Injected (UnityEngine_Collider_o* __this, UnityEngine_Vector3_o* position, UnityEngine_Vector3_o* ret, const MethodInfo* method_info);
void UnityEngine_Collider__get_bounds_Injected (UnityEngine_Collider_o* __this, UnityEngine_Bounds_o* ret, const MethodInfo* method_info);
void UnityEngine_Collider__Raycast_Injected (UnityEngine_Collider_o* __this, UnityEngine_Ray_o* ray, float maxDistance, bool* hasHit, UnityEngine_RaycastHit_o* ret, const MethodInfo* method_info);
