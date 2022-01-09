#pragma once

#include "il2cpp.h"

void UnityEngine_AnimationCurve__Internal_Destroy (intptr_t ptr, const MethodInfo* method_info);
intptr_t UnityEngine_AnimationCurve__Internal_Create (UnityEngine_Keyframe_array* keys, const MethodInfo* method_info);
bool UnityEngine_AnimationCurve__Internal_Equals (UnityEngine_AnimationCurve_o* __this, intptr_t other, const MethodInfo* method_info);
void UnityEngine_AnimationCurve__Finalize (UnityEngine_AnimationCurve_o* __this, const MethodInfo* method_info);
float UnityEngine_AnimationCurve__Evaluate (UnityEngine_AnimationCurve_o* __this, float time, const MethodInfo* method_info);
UnityEngine_Keyframe_array* UnityEngine_AnimationCurve__get_keys (UnityEngine_AnimationCurve_o* __this, const MethodInfo* method_info);
UnityEngine_Keyframe_o UnityEngine_AnimationCurve__get_Item (UnityEngine_AnimationCurve_o* __this, int32_t index, const MethodInfo* method_info);
int32_t UnityEngine_AnimationCurve__get_length (UnityEngine_AnimationCurve_o* __this, const MethodInfo* method_info);
UnityEngine_Keyframe_o UnityEngine_AnimationCurve__GetKey (UnityEngine_AnimationCurve_o* __this, int32_t index, const MethodInfo* method_info);
UnityEngine_Keyframe_array* UnityEngine_AnimationCurve__GetKeys (UnityEngine_AnimationCurve_o* __this, const MethodInfo* method_info);
UnityEngine_AnimationCurve_o* UnityEngine_AnimationCurve__EaseInOut (float timeStart, float valueStart, float timeEnd, float valueEnd, const MethodInfo* method_info);
void UnityEngine_AnimationCurve___ctor (UnityEngine_AnimationCurve_o* __this, UnityEngine_Keyframe_array* keys, const MethodInfo* method_info);
void UnityEngine_AnimationCurve___ctor (UnityEngine_AnimationCurve_o* __this, const MethodInfo* method_info);
bool UnityEngine_AnimationCurve__Equals (UnityEngine_AnimationCurve_o* __this, Il2CppObject* o, const MethodInfo* method_info);
bool UnityEngine_AnimationCurve__Equals (UnityEngine_AnimationCurve_o* __this, UnityEngine_AnimationCurve_o* other, const MethodInfo* method_info);
int32_t UnityEngine_AnimationCurve__GetHashCode (UnityEngine_AnimationCurve_o* __this, const MethodInfo* method_info);
void UnityEngine_AnimationCurve__GetKey_Injected (UnityEngine_AnimationCurve_o* __this, int32_t index, UnityEngine_Keyframe_o* ret, const MethodInfo* method_info);
