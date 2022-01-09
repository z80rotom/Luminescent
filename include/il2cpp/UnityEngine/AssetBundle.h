#pragma once

#include "il2cpp.h"

void UnityEngine_AssetBundle___ctor (UnityEngine_AssetBundle_o* __this, const MethodInfo* method_info);
UnityEngine_AssetBundleCreateRequest_o* UnityEngine_AssetBundle__LoadFromFileAsync_Internal (System_String_o* path, uint32_t crc, uint64_t offset, const MethodInfo* method_info);
UnityEngine_AssetBundleCreateRequest_o* UnityEngine_AssetBundle__LoadFromFileAsync (System_String_o* path, const MethodInfo* method_info);
UnityEngine_AssetBundle_o* UnityEngine_AssetBundle__LoadFromFile_Internal (System_String_o* path, uint32_t crc, uint64_t offset, const MethodInfo* method_info);
UnityEngine_AssetBundle_o* UnityEngine_AssetBundle__LoadFromFile (System_String_o* path, const MethodInfo* method_info);
UnityEngine_AssetBundleCreateRequest_o* UnityEngine_AssetBundle__LoadFromMemoryAsync_Internal (System_Byte_array* binary, uint32_t crc, const MethodInfo* method_info);
UnityEngine_AssetBundleCreateRequest_o* UnityEngine_AssetBundle__LoadFromMemoryAsync (System_Byte_array* binary, const MethodInfo* method_info);
UnityEngine_Object_o* UnityEngine_AssetBundle__LoadAsset (UnityEngine_AssetBundle_o* __this, System_String_o* name, const MethodInfo* method_info);
UnityEngine_Object_o* UnityEngine_AssetBundle__LoadAsset (UnityEngine_AssetBundle_o* __this, System_String_o* name, System_Type_o* type, const MethodInfo* method_info);
UnityEngine_Object_o* UnityEngine_AssetBundle__LoadAsset_Internal (UnityEngine_AssetBundle_o* __this, System_String_o* name, System_Type_o* type, const MethodInfo* method_info);
UnityEngine_AssetBundleRequest_o* UnityEngine_AssetBundle__LoadAssetAsync (UnityEngine_AssetBundle_o* __this, System_String_o* name, const MethodInfo* method_info);
UnityEngine_AssetBundleRequest_o* UnityEngine_AssetBundle__LoadAssetAsync (UnityEngine_AssetBundle_o* __this, System_String_o* name, System_Type_o* type, const MethodInfo* method_info);
UnityEngine_Object_array* UnityEngine_AssetBundle__LoadAllAssets (UnityEngine_AssetBundle_o* __this, const MethodInfo* method_info);
UnityEngine_Object_array* UnityEngine_AssetBundle__LoadAllAssets (UnityEngine_AssetBundle_o* __this, System_Type_o* type, const MethodInfo* method_info);
UnityEngine_AssetBundleRequest_o* UnityEngine_AssetBundle__LoadAllAssetsAsync (UnityEngine_AssetBundle_o* __this, const MethodInfo* method_info);
UnityEngine_AssetBundleRequest_o* UnityEngine_AssetBundle__LoadAllAssetsAsync (UnityEngine_AssetBundle_o* __this, System_Type_o* type, const MethodInfo* method_info);
UnityEngine_AssetBundleRequest_o* UnityEngine_AssetBundle__LoadAssetAsync_Internal (UnityEngine_AssetBundle_o* __this, System_String_o* name, System_Type_o* type, const MethodInfo* method_info);
void UnityEngine_AssetBundle__Unload (UnityEngine_AssetBundle_o* __this, bool unloadAllLoadedObjects, const MethodInfo* method_info);
UnityEngine_Object_array* UnityEngine_AssetBundle__LoadAssetWithSubAssets_Internal (UnityEngine_AssetBundle_o* __this, System_String_o* name, System_Type_o* type, const MethodInfo* method_info);
UnityEngine_AssetBundleRequest_o* UnityEngine_AssetBundle__LoadAssetWithSubAssetsAsync_Internal (UnityEngine_AssetBundle_o* __this, System_String_o* name, System_Type_o* type, const MethodInfo* method_info);
