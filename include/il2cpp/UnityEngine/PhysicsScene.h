#pragma once

#include "il2cpp.h"

System_String_o* UnityEngine_PhysicsScene__ToString (UnityEngine_PhysicsScene_o __this, const MethodInfo* method);
int32_t UnityEngine_PhysicsScene__GetHashCode (UnityEngine_PhysicsScene_o __this, const MethodInfo* method);
bool UnityEngine_PhysicsScene__Equals (UnityEngine_PhysicsScene_o __this, Il2CppObject* other, const MethodInfo* method);
bool UnityEngine_PhysicsScene__Equals (UnityEngine_PhysicsScene_o __this, UnityEngine_PhysicsScene_o other, const MethodInfo* method);
bool UnityEngine_PhysicsScene__Raycast (UnityEngine_PhysicsScene_o __this, UnityEngine_Vector3_o origin, UnityEngine_Vector3_o direction, float maxDistance, int32_t layerMask, int32_t queryTriggerInteraction, const MethodInfo* method);
bool UnityEngine_PhysicsScene__Internal_RaycastTest (UnityEngine_PhysicsScene_o physicsScene, UnityEngine_Ray_o ray, float maxDistance, int32_t layerMask, int32_t queryTriggerInteraction, const MethodInfo* method);
bool UnityEngine_PhysicsScene__Raycast (UnityEngine_PhysicsScene_o __this, UnityEngine_Vector3_o origin, UnityEngine_Vector3_o direction, UnityEngine_RaycastHit_o* hitInfo, float maxDistance, int32_t layerMask, int32_t queryTriggerInteraction, const MethodInfo* method);
bool UnityEngine_PhysicsScene__Internal_Raycast (UnityEngine_PhysicsScene_o physicsScene, UnityEngine_Ray_o ray, float maxDistance, UnityEngine_RaycastHit_o* hit, int32_t layerMask, int32_t queryTriggerInteraction, const MethodInfo* method);
int32_t UnityEngine_PhysicsScene__Raycast (UnityEngine_PhysicsScene_o __this, UnityEngine_Vector3_o origin, UnityEngine_Vector3_o direction, UnityEngine_RaycastHit_array* raycastHits, float maxDistance, int32_t layerMask, int32_t queryTriggerInteraction, const MethodInfo* method);
int32_t UnityEngine_PhysicsScene__Internal_RaycastNonAlloc (UnityEngine_PhysicsScene_o physicsScene, UnityEngine_Ray_o ray, UnityEngine_RaycastHit_array* raycastHits, float maxDistance, int32_t mask, int32_t queryTriggerInteraction, const MethodInfo* method);
bool UnityEngine_PhysicsScene__Query_SphereCast (UnityEngine_PhysicsScene_o physicsScene, UnityEngine_Vector3_o origin, float radius, UnityEngine_Vector3_o direction, float maxDistance, UnityEngine_RaycastHit_o* hitInfo, int32_t layerMask, int32_t queryTriggerInteraction, const MethodInfo* method);
bool UnityEngine_PhysicsScene__Internal_SphereCast (UnityEngine_PhysicsScene_o physicsScene, UnityEngine_Vector3_o origin, float radius, UnityEngine_Vector3_o direction, UnityEngine_RaycastHit_o* hitInfo, float maxDistance, int32_t layerMask, int32_t queryTriggerInteraction, const MethodInfo* method);
bool UnityEngine_PhysicsScene__SphereCast (UnityEngine_PhysicsScene_o __this, UnityEngine_Vector3_o origin, float radius, UnityEngine_Vector3_o direction, UnityEngine_RaycastHit_o* hitInfo, float maxDistance, int32_t layerMask, int32_t queryTriggerInteraction, const MethodInfo* method);
int32_t UnityEngine_PhysicsScene__OverlapSphereNonAlloc_Internal (UnityEngine_PhysicsScene_o physicsScene, UnityEngine_Vector3_o position, float radius, UnityEngine_Collider_array* results, int32_t layerMask, int32_t queryTriggerInteraction, const MethodInfo* method);
int32_t UnityEngine_PhysicsScene__OverlapSphere (UnityEngine_PhysicsScene_o __this, UnityEngine_Vector3_o position, float radius, UnityEngine_Collider_array* results, int32_t layerMask, int32_t queryTriggerInteraction, const MethodInfo* method);
bool UnityEngine_PhysicsScene__Internal_RaycastTest_Injected (UnityEngine_PhysicsScene_o* physicsScene, UnityEngine_Ray_o* ray, float maxDistance, int32_t layerMask, int32_t queryTriggerInteraction, const MethodInfo* method);
bool UnityEngine_PhysicsScene__Internal_Raycast_Injected (UnityEngine_PhysicsScene_o* physicsScene, UnityEngine_Ray_o* ray, float maxDistance, UnityEngine_RaycastHit_o* hit, int32_t layerMask, int32_t queryTriggerInteraction, const MethodInfo* method);
int32_t UnityEngine_PhysicsScene__Internal_RaycastNonAlloc_Injected (UnityEngine_PhysicsScene_o* physicsScene, UnityEngine_Ray_o* ray, UnityEngine_RaycastHit_array* raycastHits, float maxDistance, int32_t mask, int32_t queryTriggerInteraction, const MethodInfo* method);
bool UnityEngine_PhysicsScene__Query_SphereCast_Injected (UnityEngine_PhysicsScene_o* physicsScene, UnityEngine_Vector3_o* origin, float radius, UnityEngine_Vector3_o* direction, float maxDistance, UnityEngine_RaycastHit_o* hitInfo, int32_t layerMask, int32_t queryTriggerInteraction, const MethodInfo* method);
int32_t UnityEngine_PhysicsScene__OverlapSphereNonAlloc_Internal_Injected (UnityEngine_PhysicsScene_o* physicsScene, UnityEngine_Vector3_o* position, float radius, UnityEngine_Collider_array* results, int32_t layerMask, int32_t queryTriggerInteraction, const MethodInfo* method);
