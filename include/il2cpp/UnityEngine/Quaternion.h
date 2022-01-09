#pragma once

#include "il2cpp.h"

UnityEngine_Quaternion_o UnityEngine_Quaternion__FromToRotation (UnityEngine_Vector3_o fromDirection, UnityEngine_Vector3_o toDirection, const MethodInfo* method_info);
UnityEngine_Quaternion_o UnityEngine_Quaternion__Inverse (UnityEngine_Quaternion_o rotation, const MethodInfo* method_info);
UnityEngine_Quaternion_o UnityEngine_Quaternion__Slerp (UnityEngine_Quaternion_o a, UnityEngine_Quaternion_o b, float t, const MethodInfo* method_info);
UnityEngine_Quaternion_o UnityEngine_Quaternion__SlerpUnclamped (UnityEngine_Quaternion_o a, UnityEngine_Quaternion_o b, float t, const MethodInfo* method_info);
UnityEngine_Quaternion_o UnityEngine_Quaternion__Lerp (UnityEngine_Quaternion_o a, UnityEngine_Quaternion_o b, float t, const MethodInfo* method_info);
UnityEngine_Quaternion_o UnityEngine_Quaternion__Internal_FromEulerRad (UnityEngine_Vector3_o euler, const MethodInfo* method_info);
UnityEngine_Vector3_o UnityEngine_Quaternion__Internal_ToEulerRad (UnityEngine_Quaternion_o rotation, const MethodInfo* method_info);
UnityEngine_Quaternion_o UnityEngine_Quaternion__AngleAxis (float angle, UnityEngine_Vector3_o axis, const MethodInfo* method_info);
UnityEngine_Quaternion_o UnityEngine_Quaternion__LookRotation (UnityEngine_Vector3_o forward, UnityEngine_Vector3_o upwards, const MethodInfo* method_info);
UnityEngine_Quaternion_o UnityEngine_Quaternion__LookRotation (UnityEngine_Vector3_o forward, const MethodInfo* method_info);
void UnityEngine_Quaternion___ctor (UnityEngine_Quaternion_o __this, float x, float y, float z, float w, const MethodInfo* method_info);
void UnityEngine_Quaternion__Set (UnityEngine_Quaternion_o __this, float newX, float newY, float newZ, float newW, const MethodInfo* method_info);
UnityEngine_Quaternion_o UnityEngine_Quaternion__get_identity (const MethodInfo* method_info);
UnityEngine_Quaternion_o UnityEngine_Quaternion__op_Multiply (UnityEngine_Quaternion_o lhs, UnityEngine_Quaternion_o rhs, const MethodInfo* method_info);
UnityEngine_Vector3_o UnityEngine_Quaternion__op_Multiply (UnityEngine_Quaternion_o rotation, UnityEngine_Vector3_o point, const MethodInfo* method_info);
bool UnityEngine_Quaternion__IsEqualUsingDot (float dot, const MethodInfo* method_info);
bool UnityEngine_Quaternion__op_Equality (UnityEngine_Quaternion_o lhs, UnityEngine_Quaternion_o rhs, const MethodInfo* method_info);
bool UnityEngine_Quaternion__op_Inequality (UnityEngine_Quaternion_o lhs, UnityEngine_Quaternion_o rhs, const MethodInfo* method_info);
float UnityEngine_Quaternion__Dot (UnityEngine_Quaternion_o a, UnityEngine_Quaternion_o b, const MethodInfo* method_info);
void UnityEngine_Quaternion__SetLookRotation (UnityEngine_Quaternion_o __this, UnityEngine_Vector3_o view, UnityEngine_Vector3_o up, const MethodInfo* method_info);
float UnityEngine_Quaternion__Angle (UnityEngine_Quaternion_o a, UnityEngine_Quaternion_o b, const MethodInfo* method_info);
UnityEngine_Vector3_o UnityEngine_Quaternion__Internal_MakePositive (UnityEngine_Vector3_o euler, const MethodInfo* method_info);
UnityEngine_Vector3_o UnityEngine_Quaternion__get_eulerAngles (UnityEngine_Quaternion_o __this, const MethodInfo* method_info);
void UnityEngine_Quaternion__set_eulerAngles (UnityEngine_Quaternion_o __this, UnityEngine_Vector3_o value, const MethodInfo* method_info);
UnityEngine_Quaternion_o UnityEngine_Quaternion__Euler (float x, float y, float z, const MethodInfo* method_info);
UnityEngine_Quaternion_o UnityEngine_Quaternion__Euler (UnityEngine_Vector3_o euler, const MethodInfo* method_info);
UnityEngine_Quaternion_o UnityEngine_Quaternion__RotateTowards (UnityEngine_Quaternion_o from, UnityEngine_Quaternion_o to, float maxDegreesDelta, const MethodInfo* method_info);
UnityEngine_Quaternion_o UnityEngine_Quaternion__Normalize (UnityEngine_Quaternion_o q, const MethodInfo* method_info);
void UnityEngine_Quaternion__Normalize (UnityEngine_Quaternion_o __this, const MethodInfo* method_info);
int32_t UnityEngine_Quaternion__GetHashCode (UnityEngine_Quaternion_o __this, const MethodInfo* method_info);
bool UnityEngine_Quaternion__Equals (UnityEngine_Quaternion_o __this, Il2CppObject* other, const MethodInfo* method_info);
bool UnityEngine_Quaternion__Equals (UnityEngine_Quaternion_o __this, UnityEngine_Quaternion_o other, const MethodInfo* method_info);
System_String_o* UnityEngine_Quaternion__ToString (UnityEngine_Quaternion_o __this, const MethodInfo* method_info);
void UnityEngine_Quaternion___cctor (const MethodInfo* method_info);
void UnityEngine_Quaternion__FromToRotation_Injected (UnityEngine_Vector3_o* fromDirection, UnityEngine_Vector3_o* toDirection, UnityEngine_Quaternion_o* ret, const MethodInfo* method_info);
void UnityEngine_Quaternion__Inverse_Injected (UnityEngine_Quaternion_o* rotation, UnityEngine_Quaternion_o* ret, const MethodInfo* method_info);
void UnityEngine_Quaternion__Slerp_Injected (UnityEngine_Quaternion_o* a, UnityEngine_Quaternion_o* b, float t, UnityEngine_Quaternion_o* ret, const MethodInfo* method_info);
void UnityEngine_Quaternion__SlerpUnclamped_Injected (UnityEngine_Quaternion_o* a, UnityEngine_Quaternion_o* b, float t, UnityEngine_Quaternion_o* ret, const MethodInfo* method_info);
void UnityEngine_Quaternion__Lerp_Injected (UnityEngine_Quaternion_o* a, UnityEngine_Quaternion_o* b, float t, UnityEngine_Quaternion_o* ret, const MethodInfo* method_info);
void UnityEngine_Quaternion__Internal_FromEulerRad_Injected (UnityEngine_Vector3_o* euler, UnityEngine_Quaternion_o* ret, const MethodInfo* method_info);
void UnityEngine_Quaternion__Internal_ToEulerRad_Injected (UnityEngine_Quaternion_o* rotation, UnityEngine_Vector3_o* ret, const MethodInfo* method_info);
void UnityEngine_Quaternion__AngleAxis_Injected (float angle, UnityEngine_Vector3_o* axis, UnityEngine_Quaternion_o* ret, const MethodInfo* method_info);
void UnityEngine_Quaternion__LookRotation_Injected (UnityEngine_Vector3_o* forward, UnityEngine_Vector3_o* upwards, UnityEngine_Quaternion_o* ret, const MethodInfo* method_info);
