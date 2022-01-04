#pragma once

#include "il2cpp.h"

void TMPro_MaterialReference___ctor (TMPro_MaterialReference_o __this, int32_t index, TMPro_TMP_FontAsset_o* fontAsset, TMPro_TMP_SpriteAsset_o* spriteAsset, UnityEngine_Material_o* material, float padding, const MethodInfo* method);
bool TMPro_MaterialReference__Contains (TMPro_MaterialReference_array* materialReferences, TMPro_TMP_FontAsset_o* fontAsset, const MethodInfo* method);
int32_t TMPro_MaterialReference__AddMaterialReference (UnityEngine_Material_o* material, TMPro_TMP_FontAsset_o* fontAsset, TMPro_MaterialReference_array** materialReferences, System_Collections_Generic_Dictionary_int__int__o* materialReferenceIndexLookup, const MethodInfo* method);
int32_t TMPro_MaterialReference__AddMaterialReference (UnityEngine_Material_o* material, TMPro_TMP_SpriteAsset_o* spriteAsset, TMPro_MaterialReference_array** materialReferences, System_Collections_Generic_Dictionary_int__int__o* materialReferenceIndexLookup, const MethodInfo* method);
