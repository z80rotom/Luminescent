#pragma once

#include "il2cpp.h"

int32_t Dpr_RouteSearch_FieldObjectRouteMove__get_ObjectType (Dpr_RouteSearch_FieldObjectRouteMove_o* __this, const MethodInfo* method);
void Dpr_RouteSearch_FieldObjectRouteMove__set_ObjectType (Dpr_RouteSearch_FieldObjectRouteMove_o* __this, int32_t value, const MethodInfo* method);
float Dpr_RouteSearch_FieldObjectRouteMove__get_MoveSpeed (Dpr_RouteSearch_FieldObjectRouteMove_o* __this, const MethodInfo* method);
void Dpr_RouteSearch_FieldObjectRouteMove__set_MoveSpeed (Dpr_RouteSearch_FieldObjectRouteMove_o* __this, float value, const MethodInfo* method);
float Dpr_RouteSearch_FieldObjectRouteMove__get_RotateSpeed (Dpr_RouteSearch_FieldObjectRouteMove_o* __this, const MethodInfo* method);
void Dpr_RouteSearch_FieldObjectRouteMove__set_RotateSpeed (Dpr_RouteSearch_FieldObjectRouteMove_o* __this, float value, const MethodInfo* method);
bool Dpr_RouteSearch_FieldObjectRouteMove__get_IsBusy (Dpr_RouteSearch_FieldObjectRouteMove_o* __this, const MethodInfo* method);
void Dpr_RouteSearch_FieldObjectRouteMove__set_IsBusy (Dpr_RouteSearch_FieldObjectRouteMove_o* __this, bool value, const MethodInfo* method);
void Dpr_RouteSearch_FieldObjectRouteMove___ctor (Dpr_RouteSearch_FieldObjectRouteMove_o* __this, FieldObjectEntity_o* entity, const MethodInfo* method);
void Dpr_RouteSearch_FieldObjectRouteMove__StartRoute (Dpr_RouteSearch_FieldObjectRouteMove_o* __this, UnityEngine_Vector3_o goalPos, System_Action_RouteMoveResult__o* completedEvent, const MethodInfo* method);
void Dpr_RouteSearch_FieldObjectRouteMove__Stop (Dpr_RouteSearch_FieldObjectRouteMove_o* __this, const MethodInfo* method);
void Dpr_RouteSearch_FieldObjectRouteMove__Update (Dpr_RouteSearch_FieldObjectRouteMove_o* __this, float deltaTime, const MethodInfo* method);
void Dpr_RouteSearch_FieldObjectRouteMove__StopCore (Dpr_RouteSearch_FieldObjectRouteMove_o* __this, int32_t result, const MethodInfo* method);
void Dpr_RouteSearch_FieldObjectRouteMove__StartRotate (Dpr_RouteSearch_FieldObjectRouteMove_o* __this, float targetAngle, const MethodInfo* method);
void Dpr_RouteSearch_FieldObjectRouteMove__UpdateRotate (Dpr_RouteSearch_FieldObjectRouteMove_o* __this, float deltaTime, const MethodInfo* method);
void Dpr_RouteSearch_FieldObjectRouteMove__UpdateAnimation (Dpr_RouteSearch_FieldObjectRouteMove_o* __this, const MethodInfo* method);
void Dpr_RouteSearch_FieldObjectRouteMove__UpdatePokemonAnimation (Dpr_RouteSearch_FieldObjectRouteMove_o* __this, int32_t animType, const MethodInfo* method);
void Dpr_RouteSearch_FieldObjectRouteMove__UpdateCharacterAnimation (Dpr_RouteSearch_FieldObjectRouteMove_o* __this, int32_t animType, const MethodInfo* method);
void Dpr_RouteSearch_FieldObjectRouteMove__Complete (Dpr_RouteSearch_FieldObjectRouteMove_o* __this, int32_t result, const MethodInfo* method);
float Dpr_RouteSearch_FieldObjectRouteMove__CalcYawAngle (float x, float z, const MethodInfo* method);
float Dpr_RouteSearch_FieldObjectRouteMove__MoveAngle (float baseAngle, float targetAngle, float moveAngle, bool* complete, const MethodInfo* method);
void Dpr_RouteSearch_FieldObjectRouteMove___cctor (const MethodInfo* method);
