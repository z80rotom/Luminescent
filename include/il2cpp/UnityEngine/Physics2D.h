#pragma once

#include "il2cpp.h"

UnityEngine_PhysicsScene2D_o UnityEngine_Physics2D__get_defaultPhysicsScene (const MethodInfo* method);
bool UnityEngine_Physics2D__get_queriesHitTriggers (const MethodInfo* method);
UnityEngine_RaycastHit2D_o UnityEngine_Physics2D__Raycast (UnityEngine_Vector2_o origin, UnityEngine_Vector2_o direction, const MethodInfo* method);
UnityEngine_RaycastHit2D_o UnityEngine_Physics2D__Raycast (UnityEngine_Vector2_o origin, UnityEngine_Vector2_o direction, float distance, const MethodInfo* method);
UnityEngine_RaycastHit2D_o UnityEngine_Physics2D__Raycast (UnityEngine_Vector2_o origin, UnityEngine_Vector2_o direction, float distance, int32_t layerMask, const MethodInfo* method);
UnityEngine_RaycastHit2D_o UnityEngine_Physics2D__Raycast (UnityEngine_Vector2_o origin, UnityEngine_Vector2_o direction, float distance, int32_t layerMask, float minDepth, const MethodInfo* method);
UnityEngine_RaycastHit2D_o UnityEngine_Physics2D__Raycast (UnityEngine_Vector2_o origin, UnityEngine_Vector2_o direction, float distance, int32_t layerMask, float minDepth, float maxDepth, const MethodInfo* method);
int32_t UnityEngine_Physics2D__Raycast (UnityEngine_Vector2_o origin, UnityEngine_Vector2_o direction, UnityEngine_ContactFilter2D_o contactFilter, UnityEngine_RaycastHit2D_array* results, const MethodInfo* method);
int32_t UnityEngine_Physics2D__Raycast (UnityEngine_Vector2_o origin, UnityEngine_Vector2_o direction, UnityEngine_ContactFilter2D_o contactFilter, UnityEngine_RaycastHit2D_array* results, float distance, const MethodInfo* method);
int32_t UnityEngine_Physics2D__Raycast (UnityEngine_Vector2_o origin, UnityEngine_Vector2_o direction, UnityEngine_ContactFilter2D_o contactFilter, System_Collections_Generic_List_RaycastHit2D__o* results, float distance, const MethodInfo* method);
int32_t UnityEngine_Physics2D__RaycastNonAlloc (UnityEngine_Vector2_o origin, UnityEngine_Vector2_o direction, UnityEngine_RaycastHit2D_array* results, const MethodInfo* method);
UnityEngine_RaycastHit2D_array* UnityEngine_Physics2D__GetRayIntersectionAll (UnityEngine_Ray_o ray, const MethodInfo* method);
UnityEngine_RaycastHit2D_array* UnityEngine_Physics2D__GetRayIntersectionAll (UnityEngine_Ray_o ray, float distance, const MethodInfo* method);
UnityEngine_RaycastHit2D_array* UnityEngine_Physics2D__GetRayIntersectionAll (UnityEngine_Ray_o ray, float distance, int32_t layerMask, const MethodInfo* method);
UnityEngine_RaycastHit2D_array* UnityEngine_Physics2D__GetRayIntersectionAll_Internal (UnityEngine_PhysicsScene2D_o physicsScene, UnityEngine_Vector3_o origin, UnityEngine_Vector3_o direction, float distance, int32_t layerMask, const MethodInfo* method);
int32_t UnityEngine_Physics2D__GetRayIntersectionNonAlloc (UnityEngine_Ray_o ray, UnityEngine_RaycastHit2D_array* results, const MethodInfo* method);
int32_t UnityEngine_Physics2D__GetRayIntersectionNonAlloc (UnityEngine_Ray_o ray, UnityEngine_RaycastHit2D_array* results, float distance, const MethodInfo* method);
int32_t UnityEngine_Physics2D__GetRayIntersectionNonAlloc (UnityEngine_Ray_o ray, UnityEngine_RaycastHit2D_array* results, float distance, int32_t layerMask, const MethodInfo* method);
void UnityEngine_Physics2D___cctor (const MethodInfo* method);
UnityEngine_RaycastHit2D_array* UnityEngine_Physics2D__GetRayIntersectionAll_Internal_Injected (UnityEngine_PhysicsScene2D_o* physicsScene, UnityEngine_Vector3_o* origin, UnityEngine_Vector3_o* direction, float distance, int32_t layerMask, const MethodInfo* method);
