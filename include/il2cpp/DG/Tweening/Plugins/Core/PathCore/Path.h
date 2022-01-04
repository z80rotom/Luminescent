#pragma once

#include "il2cpp.h"

void DG_Tweening_Plugins_Core_PathCore_Path___ctor (DG_Tweening_Plugins_Core_PathCore_Path_o* __this, int32_t type, UnityEngine_Vector3_array* waypoints, int32_t subdivisionsXSegment, System_Nullable_Color__o gizmoColor, const MethodInfo* method);
void DG_Tweening_Plugins_Core_PathCore_Path___ctor (DG_Tweening_Plugins_Core_PathCore_Path_o* __this, const MethodInfo* method);
void DG_Tweening_Plugins_Core_PathCore_Path__FinalizePath (DG_Tweening_Plugins_Core_PathCore_Path_o* __this, bool isClosedPath, int32_t lockPositionAxes, UnityEngine_Vector3_o currTargetVal, const MethodInfo* method);
UnityEngine_Vector3_o DG_Tweening_Plugins_Core_PathCore_Path__GetPoint (DG_Tweening_Plugins_Core_PathCore_Path_o* __this, float perc, bool convertToConstantPerc, const MethodInfo* method);
float DG_Tweening_Plugins_Core_PathCore_Path__ConvertToConstantPathPerc (DG_Tweening_Plugins_Core_PathCore_Path_o* __this, float perc, const MethodInfo* method);
int32_t DG_Tweening_Plugins_Core_PathCore_Path__GetWaypointIndexFromPerc (DG_Tweening_Plugins_Core_PathCore_Path_o* __this, float perc, bool isMovingForward, const MethodInfo* method);
UnityEngine_Vector3_array* DG_Tweening_Plugins_Core_PathCore_Path__GetDrawPoints (DG_Tweening_Plugins_Core_PathCore_Path_o* p, int32_t drawSubdivisionsXSegment, const MethodInfo* method);
void DG_Tweening_Plugins_Core_PathCore_Path__RefreshNonLinearDrawWps (DG_Tweening_Plugins_Core_PathCore_Path_o* p, const MethodInfo* method);
void DG_Tweening_Plugins_Core_PathCore_Path__Destroy (DG_Tweening_Plugins_Core_PathCore_Path_o* __this, const MethodInfo* method);
DG_Tweening_Plugins_Core_PathCore_Path_o* DG_Tweening_Plugins_Core_PathCore_Path__CloneIncremental (DG_Tweening_Plugins_Core_PathCore_Path_o* __this, int32_t loopIncrement, const MethodInfo* method);
void DG_Tweening_Plugins_Core_PathCore_Path__AssignWaypoints (DG_Tweening_Plugins_Core_PathCore_Path_o* __this, UnityEngine_Vector3_array* newWps, bool cloneWps, const MethodInfo* method);
void DG_Tweening_Plugins_Core_PathCore_Path__AssignDecoder (DG_Tweening_Plugins_Core_PathCore_Path_o* __this, int32_t pathType, const MethodInfo* method);
void DG_Tweening_Plugins_Core_PathCore_Path__Draw (DG_Tweening_Plugins_Core_PathCore_Path_o* __this, const MethodInfo* method);
void DG_Tweening_Plugins_Core_PathCore_Path__Draw (DG_Tweening_Plugins_Core_PathCore_Path_o* p, const MethodInfo* method);
