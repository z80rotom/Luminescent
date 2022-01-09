#pragma once

#include "il2cpp.h"

UnityEngine_GameObject_o* Effect_EffectData__get_prefab (Effect_EffectData_o* __this, const MethodInfo* method_info);
bool Effect_EffectData__get_isLooped (Effect_EffectData_o* __this, const MethodInfo* method_info);
System_String_o* Effect_EffectData__get_assetBundleName (Effect_EffectData_o* __this, const MethodInfo* method_info);
void Effect_EffectData___ctor (Effect_EffectData_o* __this, System_String_o* assetBundleName, const MethodInfo* method_info);
void Effect_EffectData__Setup (Effect_EffectData_o* __this, UnityEngine_GameObject_o* prefab, const MethodInfo* method_info);
bool Effect_EffectData__ComputeIsLooped (UnityEngine_GameObject_o* prefab, UnityEngine_ParticleSystem_o** baseParticleSystem, const MethodInfo* method_info);
int32_t Effect_EffectData__Release (Effect_EffectData_o* __this, const MethodInfo* method_info);
