#pragma once

#include "il2cpp.h"

void UnityEngine_Bounds___ctor (UnityEngine_Bounds_o __this, UnityEngine_Vector3_o center, UnityEngine_Vector3_o size, const MethodInfo* method_info);
int32_t UnityEngine_Bounds__GetHashCode (UnityEngine_Bounds_o __this, const MethodInfo* method_info);
bool UnityEngine_Bounds__Equals (UnityEngine_Bounds_o __this, Il2CppObject* other, const MethodInfo* method_info);
bool UnityEngine_Bounds__Equals (UnityEngine_Bounds_o __this, UnityEngine_Bounds_o other, const MethodInfo* method_info);
UnityEngine_Vector3_o UnityEngine_Bounds__get_center (UnityEngine_Bounds_o __this, const MethodInfo* method_info);
void UnityEngine_Bounds__set_center (UnityEngine_Bounds_o __this, UnityEngine_Vector3_o value, const MethodInfo* method_info);
UnityEngine_Vector3_o UnityEngine_Bounds__get_size (UnityEngine_Bounds_o __this, const MethodInfo* method_info);
void UnityEngine_Bounds__set_size (UnityEngine_Bounds_o __this, UnityEngine_Vector3_o value, const MethodInfo* method_info);
UnityEngine_Vector3_o UnityEngine_Bounds__get_extents (UnityEngine_Bounds_o __this, const MethodInfo* method_info);
void UnityEngine_Bounds__set_extents (UnityEngine_Bounds_o __this, UnityEngine_Vector3_o value, const MethodInfo* method_info);
UnityEngine_Vector3_o UnityEngine_Bounds__get_min (UnityEngine_Bounds_o __this, const MethodInfo* method_info);
UnityEngine_Vector3_o UnityEngine_Bounds__get_max (UnityEngine_Bounds_o __this, const MethodInfo* method_info);
bool UnityEngine_Bounds__op_Equality (UnityEngine_Bounds_o lhs, UnityEngine_Bounds_o rhs, const MethodInfo* method_info);
bool UnityEngine_Bounds__op_Inequality (UnityEngine_Bounds_o lhs, UnityEngine_Bounds_o rhs, const MethodInfo* method_info);
void UnityEngine_Bounds__SetMinMax (UnityEngine_Bounds_o __this, UnityEngine_Vector3_o min, UnityEngine_Vector3_o max, const MethodInfo* method_info);
void UnityEngine_Bounds__Encapsulate (UnityEngine_Bounds_o __this, UnityEngine_Vector3_o point, const MethodInfo* method_info);
bool UnityEngine_Bounds__Intersects (UnityEngine_Bounds_o __this, UnityEngine_Bounds_o bounds, const MethodInfo* method_info);
System_String_o* UnityEngine_Bounds__ToString (UnityEngine_Bounds_o __this, const MethodInfo* method_info);
