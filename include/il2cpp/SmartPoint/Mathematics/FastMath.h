#pragma once

#include "il2cpp.h"

UnityEngine_Quaternion_o SmartPoint_Mathematics_FastMath__RotationAxis (UnityEngine_Vector3_o* V, float angle, const MethodInfo* method);
UnityEngine_Quaternion_o SmartPoint_Mathematics_FastMath__RotateZLocal (UnityEngine_Quaternion_o* Q, float Angle, const MethodInfo* method);
UnityEngine_Vector3_o SmartPoint_Mathematics_FastMath__GetForwardVector (UnityEngine_Quaternion_o* Q, const MethodInfo* method);
UnityEngine_Vector3_o SmartPoint_Mathematics_FastMath__GetUpVector (UnityEngine_Quaternion_o* Q, const MethodInfo* method);
UnityEngine_Vector3_o SmartPoint_Mathematics_FastMath__GetRightVector (UnityEngine_Quaternion_o* Q, const MethodInfo* method);
UnityEngine_Quaternion_o SmartPoint_Mathematics_FastMath__LookRotation (UnityEngine_Vector3_o* forward, const MethodInfo* method);
UnityEngine_Quaternion_o SmartPoint_Mathematics_FastMath__LookRotation (UnityEngine_Vector3_o* forward, UnityEngine_Vector3_o* up, const MethodInfo* method);
float SmartPoint_Mathematics_FastMath__Dot (UnityEngine_Vector2_o* V1, UnityEngine_Vector2_o* V2, const MethodInfo* method);
float SmartPoint_Mathematics_FastMath__IntersectLine (UnityEngine_Vector2_o* P1, UnityEngine_Vector2_o* V1, UnityEngine_Vector2_o* P2, UnityEngine_Vector2_o* V2, const MethodInfo* method);
float SmartPoint_Mathematics_FastMath__Dot (UnityEngine_Vector3_o* V1, UnityEngine_Vector3_o* V2, const MethodInfo* method);
UnityEngine_Vector3_o SmartPoint_Mathematics_FastMath__Cross (UnityEngine_Vector3_o* V1, UnityEngine_Vector3_o* V2, const MethodInfo* method);
UnityEngine_Vector3_o SmartPoint_Mathematics_FastMath__Normalize (UnityEngine_Vector3_o* V, const MethodInfo* method);
UnityEngine_Vector3_o SmartPoint_Mathematics_FastMath__CrossNormalize (UnityEngine_Vector3_o* V1, UnityEngine_Vector3_o* V2, const MethodInfo* method);
UnityEngine_Vector3_o SmartPoint_Mathematics_FastMath__CalculateFaceNormal (UnityEngine_Vector3_o* V1, UnityEngine_Vector3_o* V2, UnityEngine_Vector3_o* V3, const MethodInfo* method);
UnityEngine_Vector3_o SmartPoint_Mathematics_FastMath__CalculateCentroid (UnityEngine_Vector3_o* V1, UnityEngine_Vector3_o* V2, UnityEngine_Vector3_o* V3, const MethodInfo* method);
UnityEngine_Matrix4x4_o SmartPoint_Mathematics_FastMath__Reflection (float a, float b, float c, float d, const MethodInfo* method);
void SmartPoint_Mathematics_FastMath___ctor (SmartPoint_Mathematics_FastMath_o* __this, const MethodInfo* method);
