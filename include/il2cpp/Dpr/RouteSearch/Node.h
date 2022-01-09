#pragma once

#include "il2cpp.h"

UnityEngine_Vector2Int_o Dpr_RouteSearch_Node__get_Id (Dpr_RouteSearch_Node_o* __this, const MethodInfo* method_info);
void Dpr_RouteSearch_Node__set_Id (Dpr_RouteSearch_Node_o* __this, UnityEngine_Vector2Int_o value, const MethodInfo* method_info);
float Dpr_RouteSearch_Node__get_HeuristicCost (Dpr_RouteSearch_Node_o* __this, const MethodInfo* method_info);
void Dpr_RouteSearch_Node__set_HeuristicCost (Dpr_RouteSearch_Node_o* __this, float value, const MethodInfo* method_info);
bool Dpr_RouteSearch_Node__get_IsOpen (Dpr_RouteSearch_Node_o* __this, const MethodInfo* method_info);
bool Dpr_RouteSearch_Node__get_IsClose (Dpr_RouteSearch_Node_o* __this, const MethodInfo* method_info);
bool Dpr_RouteSearch_Node__get_IsUntouch (Dpr_RouteSearch_Node_o* __this, const MethodInfo* method_info);
float Dpr_RouteSearch_Node__get_Score (Dpr_RouteSearch_Node_o* __this, const MethodInfo* method_info);
void Dpr_RouteSearch_Node___ctor (Dpr_RouteSearch_Node_o* __this, UnityEngine_Vector2Int_o* id, const MethodInfo* method_info);
void Dpr_RouteSearch_Node__Reset (Dpr_RouteSearch_Node_o* __this, const MethodInfo* method_info);
void Dpr_RouteSearch_Node__SetGoal (Dpr_RouteSearch_Node_o* __this, UnityEngine_Vector2Int_o* goalId, const MethodInfo* method_info);
void Dpr_RouteSearch_Node__Open (Dpr_RouteSearch_Node_o* __this, UnityEngine_Vector2Int_o* fromId, float moveCost, int32_t depth, const MethodInfo* method_info);
void Dpr_RouteSearch_Node__Colse (Dpr_RouteSearch_Node_o* __this, const MethodInfo* method_info);
float Dpr_RouteSearch_Node__CalcScore (float moveCost, float heuristicCost, const MethodInfo* method_info);
