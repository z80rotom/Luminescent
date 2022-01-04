#pragma once

#include "il2cpp.h"

bool Dpr_GMS_GMSResourceLoader__get_IsLoading (Dpr_GMS_GMSResourceLoader_o* __this, const MethodInfo* method);
void Dpr_GMS_GMSResourceLoader__UnloadAssetBundle (Dpr_GMS_GMSResourceLoader_o* __this, const MethodInfo* method);
void Dpr_GMS_GMSResourceLoader__AppendLoadAsset (Dpr_GMS_GMSResourceLoader_o* __this, System_String_o* assetBundlePath, System_Action_Object__o* onCompleteLoad, const MethodInfo* method);
void Dpr_GMS_GMSResourceLoader__AppendLoadGameObject (Dpr_GMS_GMSResourceLoader_o* __this, System_String_o* assetBundlePath, System_Action_GameObject__o* onCompleteLoad, const MethodInfo* method);
void Dpr_GMS_GMSResourceLoader__AppendLoadScenePrefabs (Dpr_GMS_GMSResourceLoader_o* __this, System_String_o* assetBundlePath, UnityEngine_Transform_o* parent, System_Action_string__GameObject__o* onCompleteLoad, const MethodInfo* method);
void Dpr_GMS_GMSResourceLoader__AppendLoadEarth (Dpr_GMS_GMSResourceLoader_o* __this, System_String_o* path, UnityEngine_Transform_o* content, float earthRadius, System_Action_GameObject__o* onComplete, const MethodInfo* method);
void Dpr_GMS_GMSResourceLoader__AppendLoadTexture2D (Dpr_GMS_GMSResourceLoader_o* __this, System_String_o* path, System_Action_Texture2D__o* onComplete, const MethodInfo* method);
void Dpr_GMS_GMSResourceLoader__AppendLoadTextureSprite (Dpr_GMS_GMSResourceLoader_o* __this, System_String_o* path, System_Action_Sprite__o* onComplete, const MethodInfo* method);
void Dpr_GMS_GMSResourceLoader__LoadSpriteAtlas (Dpr_GMS_GMSResourceLoader_o* __this, System_String_o* assetBundlePath, System_Action_SpriteAtlas__o* onCompleteLoad, const MethodInfo* method);
void Dpr_GMS_GMSResourceLoader__RequestLoadAsset (Dpr_GMS_GMSResourceLoader_o* __this, const MethodInfo* method);
void Dpr_GMS_GMSResourceLoader___ctor (Dpr_GMS_GMSResourceLoader_o* __this, const MethodInfo* method);
void Dpr_GMS_GMSResourceLoader___RequestLoadAsset_b__11_0 (Dpr_GMS_GMSResourceLoader_o* __this, int32_t requestEventType, System_String_o* name, UnityEngine_Object_o* asset, const MethodInfo* method);
