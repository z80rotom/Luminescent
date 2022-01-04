#pragma once

#include "il2cpp.h"

UnityEngine_Transform_o* Dpr_Field_Walking_WalkData__get_transform (Dpr_Field_Walking_WalkData_o* __this, const MethodInfo* method);
float Dpr_Field_Walking_WalkData__get_targetDistance (Dpr_Field_Walking_WalkData_o* __this, const MethodInfo* method);
float Dpr_Field_Walking_WalkData__get_awayDistance (Dpr_Field_Walking_WalkData_o* __this, const MethodInfo* method);
float Dpr_Field_Walking_WalkData__get_farDistance (Dpr_Field_Walking_WalkData_o* __this, const MethodInfo* method);
float Dpr_Field_Walking_WalkData__get_minDistance (Dpr_Field_Walking_WalkData_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o Dpr_Field_Walking_WalkData__get_TargetPosition (Dpr_Field_Walking_WalkData_o* __this, const MethodInfo* method);
void Dpr_Field_Walking_WalkData__set_TargetPosition (Dpr_Field_Walking_WalkData_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
float Dpr_Field_Walking_WalkData__get_SpeedHosei (Dpr_Field_Walking_WalkData_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o Dpr_Field_Walking_WalkData__get_moveVec (Dpr_Field_Walking_WalkData_o* __this, const MethodInfo* method);
void Dpr_Field_Walking_WalkData__set_moveVec (Dpr_Field_Walking_WalkData_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
Dpr_FureaiHiroba_PokeWalkingActionModel_o* Dpr_Field_Walking_WalkData__get_actionModel (Dpr_Field_Walking_WalkData_o* __this, const MethodInfo* method);
void Dpr_Field_Walking_WalkData__set_actionModel (Dpr_Field_Walking_WalkData_o* __this, Dpr_FureaiHiroba_PokeWalkingActionModel_o* value, const MethodInfo* method);
void Dpr_Field_Walking_WalkData___ctor (Dpr_Field_Walking_WalkData_o* __this, FieldObjectEntity_o* entity, const MethodInfo* method);
void Dpr_Field_Walking_WalkData__CreateActionModel (Dpr_Field_Walking_WalkData_o* __this, XLSXContent_PokeWalkingActionNakayoshi_SheetSheet1_o* nakayoshi, XLSXContent_PokeWalkingActionSeikaku_SheetSheet1_o* seikaku, const MethodInfo* method);
void Dpr_Field_Walking_WalkData__Move (Dpr_Field_Walking_WalkData_o* __this, float deltaTime, float Accelarate, float BaseSpeed, float otherDistance, const MethodInfo* method);
void Dpr_Field_Walking_WalkData__NPCMove (Dpr_Field_Walking_WalkData_o* __this, float deltaTime, float Accelarate, float BaseSpeed, const MethodInfo* method);
UnityEngine_Vector3_o Dpr_Field_Walking_WalkData__MoveSimple (Dpr_Field_Walking_WalkData_o* __this, float deltaTime, float speed, const MethodInfo* method);
void Dpr_Field_Walking_WalkData__MoveSimple2 (Dpr_Field_Walking_WalkData_o* __this, float deltaTime, float speed, const MethodInfo* method);
void Dpr_Field_Walking_WalkData__MoveSimple3 (Dpr_Field_Walking_WalkData_o* __this, float deltaTime, float speed, const MethodInfo* method);
void Dpr_Field_Walking_WalkData__LookAtTarget (Dpr_Field_Walking_WalkData_o* __this, UnityEngine_Vector3_o target, float deltaTime, float speed, const MethodInfo* method);
float Dpr_Field_Walking_WalkData__GetAngle (Dpr_Field_Walking_WalkData_o* __this, UnityEngine_Vector3_o target, const MethodInfo* method);
UnityEngine_Vector3_o Dpr_Field_Walking_WalkData__AngleToVector3 (Dpr_Field_Walking_WalkData_o* __this, float Angle, const MethodInfo* method);
void Dpr_Field_Walking_WalkData__Update (Dpr_Field_Walking_WalkData_o* __this, float deltaTime, const MethodInfo* method);
void Dpr_Field_Walking_WalkData__UpdateDistance (Dpr_Field_Walking_WalkData_o* __this, const MethodInfo* method);
void Dpr_Field_Walking_WalkData__UpdateFormation (Dpr_Field_Walking_WalkData_o* __this, float deltaTime, const MethodInfo* method);
UnityEngine_Vector3_o Dpr_Field_Walking_WalkData__GetRotateOffset (Dpr_Field_Walking_WalkData_o* __this, float angle, float deltaTime, const MethodInfo* method);
bool Dpr_Field_Walking_WalkData__IsNear (Dpr_Field_Walking_WalkData_o* __this, const MethodInfo* method);
bool Dpr_Field_Walking_WalkData__IsAwayTargetPos (Dpr_Field_Walking_WalkData_o* __this, const MethodInfo* method);
bool Dpr_Field_Walking_WalkData__IsAwayTrackTarget (Dpr_Field_Walking_WalkData_o* __this, const MethodInfo* method);
bool Dpr_Field_Walking_WalkData__IsFar (Dpr_Field_Walking_WalkData_o* __this, const MethodInfo* method);
bool Dpr_Field_Walking_WalkData__IsFarTrackTarget (Dpr_Field_Walking_WalkData_o* __this, const MethodInfo* method);
void Dpr_Field_Walking_WalkData__NeedWalkCheck (Dpr_Field_Walking_WalkData_o* __this, const MethodInfo* method);
void Dpr_Field_Walking_WalkData__NeedRunCheck (Dpr_Field_Walking_WalkData_o* __this, float deltaTime, const MethodInfo* method);
void Dpr_Field_Walking_WalkData__SetTargetPos (Dpr_Field_Walking_WalkData_o* __this, UnityEngine_Vector3_o pos, const MethodInfo* method);
float Dpr_Field_Walking_WalkData__GetAwayDistance (Dpr_Field_Walking_WalkData_o* __this, const MethodInfo* method);
float Dpr_Field_Walking_WalkData__GetFarDistance (Dpr_Field_Walking_WalkData_o* __this, const MethodInfo* method);
void Dpr_Field_Walking_WalkData___cctor (const MethodInfo* method);
