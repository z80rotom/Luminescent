#pragma once

#include "il2cpp.h"

System_String_o* FieldObjectEntity__get_entityType (FieldObjectEntity_o* __this, const MethodInfo* method_info);
void FieldObjectEntity__set_oldMoveVector (FieldObjectEntity_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method_info);
UnityEngine_Vector3_o FieldObjectEntity__get_oldMoveVector (FieldObjectEntity_o* __this, const MethodInfo* method_info);
void FieldObjectEntity__set_locatorDirect (FieldObjectEntity_o* __this, UnityEngine_Vector4_o value, const MethodInfo* method_info);
Dpr_RouteSearch_FieldObjectRouteMove_o* FieldObjectEntity__get_RouteMove (FieldObjectEntity_o* __this, const MethodInfo* method_info);
bool FieldObjectEntity__get_IsBusyRouteMove (FieldObjectEntity_o* __this, const MethodInfo* method_info);
UnityEngine_Vector2Int_o FieldObjectEntity__get_gridPosition (FieldObjectEntity_o* __this, const MethodInfo* method_info);
void FieldObjectEntity__set_gridPosition (FieldObjectEntity_o* __this, UnityEngine_Vector2Int_o value, const MethodInfo* method_info);
UnityEngine_Vector2Int_o FieldObjectEntity__get_gridPositionDirect (FieldObjectEntity_o* __this, const MethodInfo* method_info);
void FieldObjectEntity__set_gridPositionDirect (FieldObjectEntity_o* __this, UnityEngine_Vector2Int_o value, const MethodInfo* method_info);
EvEntityCommand_o* FieldObjectEntity__get_EvEntityCmd (FieldObjectEntity_o* __this, const MethodInfo* method_info);
void FieldObjectEntity__set_oldGridPosition (FieldObjectEntity_o* __this, UnityEngine_Vector2Int_o value, const MethodInfo* method_info);
UnityEngine_Vector2Int_o FieldObjectEntity__get_oldGridPosition (FieldObjectEntity_o* __this, const MethodInfo* method_info);
float FieldObjectEntity__get_Height (FieldObjectEntity_o* __this, const MethodInfo* method_info);
void FieldObjectEntity__set_Height (FieldObjectEntity_o* __this, float value, const MethodInfo* method_info);
UnityEngine_Vector2_o FieldObjectEntity__GridToPosition (UnityEngine_Vector2Int_o grid, const MethodInfo* method_info);
UnityEngine_Vector2Int_o FieldObjectEntity__PositionToGrid (UnityEngine_Vector3_o position, const MethodInfo* method_info);
UnityEngine_Vector3_o FieldObjectEntity__Vec2ToVec3Position (UnityEngine_Vector2_o* position, float height, const MethodInfo* method_info);
UnityEngine_Vector2_o FieldObjectEntity__Vec3ToVec2Position (UnityEngine_Vector3_o* position, const MethodInfo* method_info);
void FieldObjectEntity__OnUpdate (FieldObjectEntity_o* __this, float deltaTime, const MethodInfo* method_info);
void FieldObjectEntity__OnLateUpdate (FieldObjectEntity_o* __this, float deltaTime, const MethodInfo* method_info);
bool FieldObjectEntity__SwitchToNext (FieldObjectEntity_o* __this, const MethodInfo* method_info);
void FieldObjectEntity__ProcessSequence (FieldObjectEntity_o* __this, float deltaTime, const MethodInfo* method_info);
int32_t FieldObjectEntity__GetDir (FieldObjectEntity_o* __this, const MethodInfo* method_info);
int32_t FieldObjectEntity__GetDir (float dir, const MethodInfo* method_info);
void FieldObjectEntity__SetDir (FieldObjectEntity_o* __this, int32_t dir, const MethodInfo* method_info);
int32_t FieldObjectEntity__GetIdleAnimation (FieldObjectEntity_o* entity, const MethodInfo* method_info);
int32_t FieldObjectEntity__GetWalkAnimation (FieldObjectEntity_o* entity, const MethodInfo* method_info);
void FieldObjectEntity__SetScaleData (FieldObjectEntity_o* __this, float start, float end, float time, const MethodInfo* method_info);
void FieldObjectEntity__ChangeScale (FieldObjectEntity_o* __this, float deltaTime, const MethodInfo* method_info);
void FieldObjectEntity___ctor (FieldObjectEntity_o* __this, const MethodInfo* method_info);
