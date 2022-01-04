#pragma once

#include "il2cpp.h"

Dpr_RouteSearch_Node_array* Dpr_RouteSearch_NodeData__get_Nodes (Dpr_RouteSearch_NodeData_o* __this, const MethodInfo* method);
void Dpr_RouteSearch_NodeData__set_Nodes (Dpr_RouteSearch_NodeData_o* __this, Dpr_RouteSearch_Node_array* value, const MethodInfo* method);
int32_t Dpr_RouteSearch_NodeData__get_Width (Dpr_RouteSearch_NodeData_o* __this, const MethodInfo* method);
void Dpr_RouteSearch_NodeData__set_Width (Dpr_RouteSearch_NodeData_o* __this, int32_t value, const MethodInfo* method);
int32_t Dpr_RouteSearch_NodeData__get_Height (Dpr_RouteSearch_NodeData_o* __this, const MethodInfo* method);
void Dpr_RouteSearch_NodeData__set_Height (Dpr_RouteSearch_NodeData_o* __this, int32_t value, const MethodInfo* method);
UnityEngine_Vector2Int_o Dpr_RouteSearch_NodeData__get_GridOrigin (Dpr_RouteSearch_NodeData_o* __this, const MethodInfo* method);
void Dpr_RouteSearch_NodeData__set_GridOrigin (Dpr_RouteSearch_NodeData_o* __this, UnityEngine_Vector2Int_o value, const MethodInfo* method);
float Dpr_RouteSearch_NodeData__get_PosY (Dpr_RouteSearch_NodeData_o* __this, const MethodInfo* method);
void Dpr_RouteSearch_NodeData__set_PosY (Dpr_RouteSearch_NodeData_o* __this, float value, const MethodInfo* method);
int32_t Dpr_RouteSearch_NodeData__get_CharacterType (Dpr_RouteSearch_NodeData_o* __this, const MethodInfo* method);
void Dpr_RouteSearch_NodeData__set_CharacterType (Dpr_RouteSearch_NodeData_o* __this, int32_t value, const MethodInfo* method);
void Dpr_RouteSearch_NodeData__Initialize (Dpr_RouteSearch_NodeData_o* __this, int32_t width, int32_t height, const MethodInfo* method);
Dpr_RouteSearch_Node_o* Dpr_RouteSearch_NodeData__GetNode (Dpr_RouteSearch_NodeData_o* __this, UnityEngine_Vector2Int_o id, const MethodInfo* method);
Dpr_RouteSearch_Node_o* Dpr_RouteSearch_NodeData__GetNode (Dpr_RouteSearch_NodeData_o* __this, int32_t x, int32_t y, const MethodInfo* method);
bool Dpr_RouteSearch_NodeData__CheckValidId (Dpr_RouteSearch_NodeData_o* __this, UnityEngine_Vector2Int_o id, const MethodInfo* method);
bool Dpr_RouteSearch_NodeData__CheckValidId (Dpr_RouteSearch_NodeData_o* __this, int32_t x, int32_t y, const MethodInfo* method);
void Dpr_RouteSearch_NodeData__SetupNodesAndSetGoal (Dpr_RouteSearch_NodeData_o* __this, UnityEngine_Vector2Int_o* goal, const MethodInfo* method);
void Dpr_RouteSearch_NodeData___ctor (Dpr_RouteSearch_NodeData_o* __this, const MethodInfo* method);
