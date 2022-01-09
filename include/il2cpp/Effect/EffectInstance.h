#pragma once

#include "il2cpp.h"

Effect_EffectData_o* Effect_EffectInstance__get_effectData (Effect_EffectInstance_o* __this, const MethodInfo* method_info);
void Effect_EffectInstance__set_effectData (Effect_EffectInstance_o* __this, Effect_EffectData_o* value, const MethodInfo* method_info);
UnityEngine_ParticleSystem_o* Effect_EffectInstance__get_particleSystem (Effect_EffectInstance_o* __this, const MethodInfo* method_info);
void Effect_EffectInstance__set_particleSystem (Effect_EffectInstance_o* __this, UnityEngine_ParticleSystem_o* value, const MethodInfo* method_info);
UnityEngine_GameObject_o* Effect_EffectInstance__get_gameObject (Effect_EffectInstance_o* __this, const MethodInfo* method_info);
System_String_o* Effect_EffectInstance__get_name (Effect_EffectInstance_o* __this, const MethodInfo* method_info);
UnityEngine_Transform_o* Effect_EffectInstance__get_attachedTransform (Effect_EffectInstance_o* __this, const MethodInfo* method_info);
UnityEngine_Vector3_o Effect_EffectInstance__get_localPosition (Effect_EffectInstance_o* __this, const MethodInfo* method_info);
UnityEngine_Quaternion_o Effect_EffectInstance__get_localRotation (Effect_EffectInstance_o* __this, const MethodInfo* method_info);
void Effect_EffectInstance__IObjectPoolInstance_SetGameObject (Effect_EffectInstance_o* __this, UnityEngine_GameObject_o* obj, const MethodInfo* method_info);
UnityEngine_GameObject_o* Effect_EffectInstance__IObjectPoolInstance_GetGameObject (Effect_EffectInstance_o* __this, const MethodInfo* method_info);
void Effect_EffectInstance__IObjectPoolInstance_OnCreate (Effect_EffectInstance_o* __this, const MethodInfo* method_info);
void Effect_EffectInstance__IObjectPoolInstance_OnRelease (Effect_EffectInstance_o* __this, const MethodInfo* method_info);
void Effect_EffectInstance___Setup (Effect_EffectInstance_o* __this, Effect_EffectData_o* effectData, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, UnityEngine_Transform_o* attachedTransform, UnityEngine_Events_UnityAction_object__o* onFinished, const MethodInfo* method_info);
void Effect_EffectInstance__SetupParticleSystemController (Effect_EffectInstance_o* __this, UnityEngine_Events_UnityAction_object__o* onFinished, const MethodInfo* method_info);
void Effect_EffectInstance__OnFinished (Effect_EffectInstance_o* __this, Il2CppObject* reference, const MethodInfo* method_info);
Effect_EffectInstance_o* Effect_EffectInstance__Play (Effect_EffectInstance_o* __this, UnityEngine_Events_UnityAction_EffectInstance__o* onFinished, const MethodInfo* method_info);
void Effect_EffectInstance__Stop (Effect_EffectInstance_o* __this, float fadeTime, bool isForce, const MethodInfo* method_info);
void Effect_EffectInstance__StopInternal (Effect_EffectInstance_o* __this, bool isForce, const MethodInfo* method_info);
bool Effect_EffectInstance___Update (Effect_EffectInstance_o* __this, float deltaTime, const MethodInfo* method_info);
void Effect_EffectInstance__UpdateFader (Effect_EffectInstance_o* __this, float deltaTime, const MethodInfo* method_info);
void Effect_EffectInstance___UpdateTransform (Effect_EffectInstance_o* __this, const MethodInfo* method_info);
void Effect_EffectInstance__MatrixMultiply4x3 (UnityEngine_Matrix4x4_o* mT, UnityEngine_Matrix4x4_o* lhs, UnityEngine_Matrix4x4_o* rhs, const MethodInfo* method_info);
void Effect_EffectInstance__SetMultiplyColor (Effect_EffectInstance_o* __this, UnityEngine_Color_o mulColor, const MethodInfo* method_info);
UnityEngine_Color_o Effect_EffectInstance__GetMulColor (Effect_EffectInstance_o* __this, const MethodInfo* method_info);
void Effect_EffectInstance__SetTransformParent (Effect_EffectInstance_o* __this, UnityEngine_Transform_o* parent, bool worldPositionStays, const MethodInfo* method_info);
void Effect_EffectInstance__RestoreTransformParent (Effect_EffectInstance_o* __this, const MethodInfo* method_info);
void Effect_EffectInstance___ctor (Effect_EffectInstance_o* __this, const MethodInfo* method_info);
