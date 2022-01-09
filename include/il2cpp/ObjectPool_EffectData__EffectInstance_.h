#pragma once

#include "il2cpp.h"

void ObjectPool_EffectData__EffectInstance___Instantiates (ObjectPool_EffectData__EffectInstance__o* __this, int32_t count, Effect_EffectData_o* key, UnityEngine_GameObject_o* prefab, UnityEngine_Transform_o* parentTransform, const MethodInfo* method_info);
bool ObjectPool_EffectData__EffectInstance___Destroies (ObjectPool_EffectData__EffectInstance__o* __this, Effect_EffectData_o* key, const MethodInfo* method_info);
Effect_EffectInstance_o* ObjectPool_EffectData__EffectInstance___Create (ObjectPool_EffectData__EffectInstance__o* __this, Effect_EffectData_o* key, bool isActived, const MethodInfo* method_info);
bool ObjectPool_EffectData__EffectInstance___Release (ObjectPool_EffectData__EffectInstance__o* __this, Effect_EffectData_o* key, Effect_EffectInstance_o* value, bool isForceDelete, const MethodInfo* method_info);
void ObjectPool_EffectData__EffectInstance____ctor (ObjectPool_EffectData__EffectInstance__o* __this, const MethodInfo* method_info);
