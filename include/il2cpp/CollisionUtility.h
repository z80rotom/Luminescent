#pragma once

#include "il2cpp.h"

UnityEngine_Vector3_o CollisionUtility__CollideObstacle (UnityEngine_Vector3_o position, float radius, UnityEngine_Vector3_o direction, float distance, bool* jump, bool* isCollided, float* dotAngle, int32_t mask, float threshold, const MethodInfo* method_info);
bool CollisionUtility__IsCollideObstacle (UnityEngine_Vector3_o position, float radius, UnityEngine_Vector3_o direction, float distance, int32_t mask, const MethodInfo* method_info);
UnityEngine_Vector3_o CollisionUtility__CollideObstacle (UnityEngine_Vector3_o position, float radius, UnityEngine_Vector3_o direction, float distance, bool* jump, bool* isCollided, float* dotAngle, UnityEngine_Vector3_o* colNormal, int32_t mask, float threshold, const MethodInfo* method_info);
bool CollisionUtility__IsOverrapSphere (UnityEngine_Transform_o* target, UnityEngine_Vector3_o offset, float radius, int32_t mask, const MethodInfo* method_info);
UnityEngine_Collider_array* CollisionUtility__OverrapSphere (UnityEngine_Transform_o* target, UnityEngine_Vector3_o offset, float radius, int32_t* count, int32_t mask, const MethodInfo* method_info);
float CollisionUtility__CollideGround (UnityEngine_Vector3_o position, float rayHeightOffset, int32_t mask, const MethodInfo* method_info);
bool CollisionUtility__IsCollideGround (UnityEngine_Vector3_o position, float rayHeightOffset, int32_t mask, const MethodInfo* method_info);
float CollisionUtility__OverCollideGround (UnityEngine_Vector3_o position, float rayHeightOffset, int32_t mask, const MethodInfo* method_info);
bool CollisionUtility__IsOverCollideGround (UnityEngine_Vector3_o position, float rayHeightOffset, int32_t mask, const MethodInfo* method_info);
void CollisionUtility___ctor (CollisionUtility_o* __this, const MethodInfo* method_info);
void CollisionUtility___cctor (const MethodInfo* method_info);
