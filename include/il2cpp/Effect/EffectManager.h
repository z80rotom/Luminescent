#pragma once

#include "il2cpp.h"

XLSXContent_EffectDatabase_o* Effect_EffectManager__get_dbEffects (Effect_EffectManager_o* __this, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Effect_EffectManager__Start (Effect_EffectManager_o* __this, const MethodInfo* method_info);
void Effect_EffectManager__OnEnable (Effect_EffectManager_o* __this, const MethodInfo* method_info);
void Effect_EffectManager__OnDisable (Effect_EffectManager_o* __this, const MethodInfo* method_info);
void Effect_EffectManager__Destroy (Effect_EffectManager_o* __this, const MethodInfo* method_info);
bool Effect_EffectManager__get_isLoadedDatabase (Effect_EffectManager_o* __this, const MethodInfo* method_info);
void Effect_EffectManager__LoadDatabase (Effect_EffectManager_o* __this, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Effect_EffectManager__OpLoadDatabase (Effect_EffectManager_o* __this, const MethodInfo* method_info);
bool Effect_EffectManager__get_isLoadedResidents (Effect_EffectManager_o* __this, const MethodInfo* method_info);
void Effect_EffectManager__LoadResidents (Effect_EffectManager_o* __this, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Effect_EffectManager__OpLoadResidentAssetBundles (Effect_EffectManager_o* __this, const MethodInfo* method_info);
void Effect_EffectManager__Load (Effect_EffectManager_o* __this, Effect_EffectManager_LoadParam_array* loadParams, UnityEngine_Events_UnityAction_EffectData__bool__o* onLoaded, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Effect_EffectManager__OpLoad (Effect_EffectManager_o* __this, Effect_EffectManager_LoadParam_array* loadParams, UnityEngine_Events_UnityAction_EffectData__bool__o* onLoaded, const MethodInfo* method_info);
void Effect_EffectManager___Unload (Effect_EffectManager_o* __this, Effect_EffectData_o* effectData, const MethodInfo* method_info);
Effect_EffectData_o* Effect_EffectManager__FindEffectData (Effect_EffectManager_o* __this, System_String_o* assetName, const MethodInfo* method_info);
Effect_EffectInstance_o* Effect_EffectManager__Play (Effect_EffectManager_o* __this, Effect_EffectData_o* effectData, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, UnityEngine_Transform_o* attachedTransform, UnityEngine_Events_UnityAction_EffectInstance__o* onFinished, const MethodInfo* method_info);
Effect_EffectInstance_o* Effect_EffectManager__Create (Effect_EffectManager_o* __this, Effect_EffectData_o* effectData, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, UnityEngine_Transform_o* attachedTransform, const MethodInfo* method_info);
void Effect_EffectManager__OnFinishedInstance (Effect_EffectManager_o* __this, Il2CppObject* reference, const MethodInfo* method_info);
void Effect_EffectManager__RemoveInstances (Effect_EffectManager_o* __this, bool isForce, const MethodInfo* method_info);
void Effect_EffectManager__RemoveInstancesByData (Effect_EffectManager_o* __this, Effect_EffectData_o* effectData, const MethodInfo* method_info);
void Effect_EffectManager__LateUpdate (Effect_EffectManager_o* __this, const MethodInfo* method_info);
void Effect_EffectManager__UpdateDistortionCamera (Effect_EffectManager_o* __this, const MethodInfo* method_info);
void Effect_EffectManager__SetDof (Effect_EffectManager_o* __this, const MethodInfo* method_info);
void Effect_EffectManager__SetupBackgroundTexture (Effect_EffectManager_o* __this, const MethodInfo* method_info);
void Effect_EffectManager___ctor (Effect_EffectManager_o* __this, const MethodInfo* method_info);
void Effect_EffectManager___cctor (const MethodInfo* method_info);
void Effect_EffectManager___OpLoadDatabase_b__21_0 (Effect_EffectManager_o* __this, int32_t eventType, System_String_o* name, UnityEngine_Object_o* asset, const MethodInfo* method_info);
void Effect_EffectManager___OpLoadResidentAssetBundles_b__26_0 (Effect_EffectManager_o* __this, int32_t eventType, System_String_o* name, UnityEngine_Object_o* asset, const MethodInfo* method_info);
