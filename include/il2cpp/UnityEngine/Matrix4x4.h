#pragma once

#include "il2cpp.h"

UnityEngine_Vector3_o UnityEngine_Matrix4x4__GetLossyScale (UnityEngine_Matrix4x4_o __this, const MethodInfo* method_info);
UnityEngine_Vector3_o UnityEngine_Matrix4x4__get_lossyScale (UnityEngine_Matrix4x4_o __this, const MethodInfo* method_info);
UnityEngine_Matrix4x4_o UnityEngine_Matrix4x4__TRS (UnityEngine_Vector3_o pos, UnityEngine_Quaternion_o q, UnityEngine_Vector3_o s, const MethodInfo* method_info);
void UnityEngine_Matrix4x4__SetTRS (UnityEngine_Matrix4x4_o __this, UnityEngine_Vector3_o pos, UnityEngine_Quaternion_o q, UnityEngine_Vector3_o s, const MethodInfo* method_info);
UnityEngine_Matrix4x4_o UnityEngine_Matrix4x4__Inverse (UnityEngine_Matrix4x4_o m, const MethodInfo* method_info);
UnityEngine_Matrix4x4_o UnityEngine_Matrix4x4__get_inverse (UnityEngine_Matrix4x4_o __this, const MethodInfo* method_info);
UnityEngine_Matrix4x4_o UnityEngine_Matrix4x4__Ortho (float left, float right, float bottom, float top, float zNear, float zFar, const MethodInfo* method_info);
void UnityEngine_Matrix4x4___ctor (UnityEngine_Matrix4x4_o __this, UnityEngine_Vector4_o column0, UnityEngine_Vector4_o column1, UnityEngine_Vector4_o column2, UnityEngine_Vector4_o column3, const MethodInfo* method_info);
int32_t UnityEngine_Matrix4x4__GetHashCode (UnityEngine_Matrix4x4_o __this, const MethodInfo* method_info);
bool UnityEngine_Matrix4x4__Equals (UnityEngine_Matrix4x4_o __this, Il2CppObject* other, const MethodInfo* method_info);
bool UnityEngine_Matrix4x4__Equals (UnityEngine_Matrix4x4_o __this, UnityEngine_Matrix4x4_o other, const MethodInfo* method_info);
UnityEngine_Matrix4x4_o UnityEngine_Matrix4x4__op_Multiply (UnityEngine_Matrix4x4_o lhs, UnityEngine_Matrix4x4_o rhs, const MethodInfo* method_info);
UnityEngine_Vector4_o UnityEngine_Matrix4x4__GetColumn (UnityEngine_Matrix4x4_o __this, int32_t index, const MethodInfo* method_info);
UnityEngine_Vector3_o UnityEngine_Matrix4x4__MultiplyPoint (UnityEngine_Matrix4x4_o __this, UnityEngine_Vector3_o point, const MethodInfo* method_info);
UnityEngine_Vector3_o UnityEngine_Matrix4x4__MultiplyPoint3x4 (UnityEngine_Matrix4x4_o __this, UnityEngine_Vector3_o point, const MethodInfo* method_info);
UnityEngine_Vector3_o UnityEngine_Matrix4x4__MultiplyVector (UnityEngine_Matrix4x4_o __this, UnityEngine_Vector3_o vector, const MethodInfo* method_info);
UnityEngine_Matrix4x4_o UnityEngine_Matrix4x4__Scale (UnityEngine_Vector3_o vector, const MethodInfo* method_info);
UnityEngine_Matrix4x4_o UnityEngine_Matrix4x4__Translate (UnityEngine_Vector3_o vector, const MethodInfo* method_info);
UnityEngine_Matrix4x4_o UnityEngine_Matrix4x4__Rotate (UnityEngine_Quaternion_o q, const MethodInfo* method_info);
UnityEngine_Matrix4x4_o UnityEngine_Matrix4x4__get_identity (const MethodInfo* method_info);
System_String_o* UnityEngine_Matrix4x4__ToString (UnityEngine_Matrix4x4_o __this, const MethodInfo* method_info);
void UnityEngine_Matrix4x4___cctor (const MethodInfo* method_info);
void UnityEngine_Matrix4x4__GetLossyScale_Injected (UnityEngine_Matrix4x4_o* _unity_self, UnityEngine_Vector3_o* ret, const MethodInfo* method_info);
void UnityEngine_Matrix4x4__TRS_Injected (UnityEngine_Vector3_o* pos, UnityEngine_Quaternion_o* q, UnityEngine_Vector3_o* s, UnityEngine_Matrix4x4_o* ret, const MethodInfo* method_info);
void UnityEngine_Matrix4x4__Inverse_Injected (UnityEngine_Matrix4x4_o* m, UnityEngine_Matrix4x4_o* ret, const MethodInfo* method_info);
void UnityEngine_Matrix4x4__Ortho_Injected (float left, float right, float bottom, float top, float zNear, float zFar, UnityEngine_Matrix4x4_o* ret, const MethodInfo* method_info);
