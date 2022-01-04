#pragma once

#include "il2cpp.h"

Dpr_EvScript_EvDataManager_EntityParam_o* Dpr_FieldGridCollision__CheckGridEventMoveEntity (UnityEngine_Vector3_o* outWorldPos, FieldObjectEntity_o* entity, const MethodInfo* method);
int32_t Dpr_FieldGridCollision__CheckGriCollisionMoveEntity (UnityEngine_Vector3_o* outVelocity, UnityEngine_Vector3_o worldPosition, UnityEngine_Vector3_o worldVelocity, float entityRadius, Dpr_FieldGridCollision_ICheckGridFunc_o* checkGridFunc, int32_t ignoreDir, const MethodInfo* method);
int32_t Dpr_FieldGridCollision__CheckGriCollisionMoveEntity (UnityEngine_Vector3_o* outVelocity, UnityEngine_Vector3_o* outHitNormal, float* outHitAngle, UnityEngine_Vector3_o worldPosition, UnityEngine_Vector3_o worldVelocity, float entityRadius, Dpr_FieldGridCollision_ICheckGridFunc_o* checkGridFunc, int32_t ignoreDir, const MethodInfo* method);
float Dpr_FieldGridCollision__Vector2Cross (UnityEngine_Vector2_o* lhs, UnityEngine_Vector2_o* rhs, const MethodInfo* method);
UnityEngine_Vector2_o Dpr_FieldGridCollision__Vector2Project (UnityEngine_Vector2_o* vector, UnityEngine_Vector2_o* normal, const MethodInfo* method);
void Dpr_FieldGridCollision__PointPerpendicularLineOnLineSegment (UnityEngine_Vector2_o* outPoint, float* outTime, UnityEngine_Vector2_o point, UnityEngine_Vector2_o start, UnityEngine_Vector2_o end, const MethodInfo* method);
bool Dpr_FieldGridCollision__CheckCirclePoint (float* outTime, UnityEngine_Vector2_o centerA, float radiusA, UnityEngine_Vector2_o velocityA, UnityEngine_Vector2_o pointB, const MethodInfo* method);
bool Dpr_FieldGridCollision__CheckCircleLineSegment (float* outTime, UnityEngine_Vector2_o centerA, float radiusA, UnityEngine_Vector2_o velocityA, UnityEngine_Vector2_o startB, UnityEngine_Vector2_o endB, const MethodInfo* method);
void Dpr_FieldGridCollision___CheckGridEventMoveEntity_g__CalcStopPos_0_0 (UnityEngine_Vector3_o* inner_outWorldPos, UnityEngine_Vector2Int_o* inner_grid, Dpr_FieldGridCollision___c__DisplayClass0_0_o* , const MethodInfo* method);
bool Dpr_FieldGridCollision___CheckGriCollisionMoveEntity_g__CheckHitGrid_5_0 (UnityEngine_Vector2_o basePos, UnityEngine_Vector2_o velocity, int32_t* outAttr, float* outTime, UnityEngine_Vector2_o* outNormal, UnityEngine_Vector2Int_o* outGrid, Dpr_FieldGridCollision___c__DisplayClass5_0_o* , const MethodInfo* method);
