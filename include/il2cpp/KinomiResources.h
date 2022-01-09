#pragma once

#include "il2cpp.h"

void KinomiResources__LoadAll (KinomiResources_o* __this, const MethodInfo* method_info);
void KinomiResources__ReleaseAll (KinomiResources_o* __this, const MethodInfo* method_info);
void KinomiResources__OnLoadedCommonObject (KinomiResources_o* __this, int32_t index, UnityEngine_Object_o* content, const MethodInfo* method_info);
void KinomiResources__OnLoadedGrowedObject (KinomiResources_o* __this, int32_t index, UnityEngine_Object_o* content, const MethodInfo* method_info);
bool KinomiResources__IsValid (KinomiResources_o* __this, const MethodInfo* method_info);
UnityEngine_GameObject_o* KinomiResources__GetCommonObject (KinomiResources_o* __this, int32_t type, const MethodInfo* method_info);
UnityEngine_GameObject_o* KinomiResources__GetGrowedObject (KinomiResources_o* __this, int32_t tagNo, const MethodInfo* method_info);
void KinomiResources___ctor (KinomiResources_o* __this, const MethodInfo* method_info);
void KinomiResources___cctor (const MethodInfo* method_info);
