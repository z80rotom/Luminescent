#pragma once

#include "il2cpp.h"

UnityEngine_Vector3_array* Dpr_RouteSearch_FieldObjectRoute__Search (int32_t characterType, UnityEngine_Vector3_o* start, UnityEngine_Vector3_o* goal, XLSXContent_AttributeMatrix_o* matrix, const MethodInfo* method_info);
UnityEngine_Vector3_array* Dpr_RouteSearch_FieldObjectRoute__Search (int32_t characterType, UnityEngine_Vector3_o* start, UnityEngine_Vector3_o* goal, XLSXContent_AttributeMatrix_o* matrix, Dpr_RouteSearch_NodeData_o* nodeData, const MethodInfo* method_info);
Dpr_RouteSearch_NodeData_o* Dpr_RouteSearch_FieldObjectRoute__CreateNodeData (int32_t width, int32_t height, const MethodInfo* method_info);
UnityEngine_Vector3_array* Dpr_RouteSearch_FieldObjectRoute__SearchCore (int32_t characterType, UnityEngine_Vector3_o* startPos, UnityEngine_Vector3_o* goalPos, XLSXContent_AttributeMatrix_o* matrix, Dpr_RouteSearch_NodeData_o* nodeData, const MethodInfo* method_info);
void Dpr_RouteSearch_FieldObjectRoute__OpenNodes (Dpr_RouteSearch_Node_o* currentNode, XLSXContent_AttributeMatrix_o* matrix, Dpr_RouteSearch_NodeData_o* nodeData, const MethodInfo* method_info);
void Dpr_RouteSearch_FieldObjectRoute__SetupAttribute (Dpr_RouteSearch_Node_o* node, XLSXContent_AttributeMatrix_o* matrix, Dpr_RouteSearch_NodeData_o* nodeData, const MethodInfo* method_info);
Dpr_RouteSearch_Node_o* Dpr_RouteSearch_FieldObjectRoute__GetBestScoreOpenNode (Dpr_RouteSearch_NodeData_o* nodeData, const MethodInfo* method_info);
UnityEngine_Vector3_array* Dpr_RouteSearch_FieldObjectRoute__BuildRoute (Dpr_RouteSearch_Node_o* startNode, Dpr_RouteSearch_Node_o* goalNode, Dpr_RouteSearch_NodeData_o* nodeData, const MethodInfo* method_info);
void Dpr_RouteSearch_FieldObjectRoute___cctor (const MethodInfo* method_info);
