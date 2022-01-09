#pragma once

#include "il2cpp.h"

TMPro_MaterialReferenceManager_o* TMPro_MaterialReferenceManager__get_instance (const MethodInfo* method_info);
void TMPro_MaterialReferenceManager__AddFontAsset (TMPro_TMP_FontAsset_o* fontAsset, const MethodInfo* method_info);
void TMPro_MaterialReferenceManager__AddFontAssetInternal (TMPro_MaterialReferenceManager_o* __this, TMPro_TMP_FontAsset_o* fontAsset, const MethodInfo* method_info);
void TMPro_MaterialReferenceManager__AddSpriteAsset (TMPro_TMP_SpriteAsset_o* spriteAsset, const MethodInfo* method_info);
void TMPro_MaterialReferenceManager__AddSpriteAssetInternal (TMPro_MaterialReferenceManager_o* __this, TMPro_TMP_SpriteAsset_o* spriteAsset, const MethodInfo* method_info);
void TMPro_MaterialReferenceManager__AddSpriteAsset (int32_t hashCode, TMPro_TMP_SpriteAsset_o* spriteAsset, const MethodInfo* method_info);
void TMPro_MaterialReferenceManager__AddSpriteAssetInternal (TMPro_MaterialReferenceManager_o* __this, int32_t hashCode, TMPro_TMP_SpriteAsset_o* spriteAsset, const MethodInfo* method_info);
void TMPro_MaterialReferenceManager__AddFontMaterial (int32_t hashCode, UnityEngine_Material_o* material, const MethodInfo* method_info);
void TMPro_MaterialReferenceManager__AddFontMaterialInternal (TMPro_MaterialReferenceManager_o* __this, int32_t hashCode, UnityEngine_Material_o* material, const MethodInfo* method_info);
void TMPro_MaterialReferenceManager__AddColorGradientPreset (int32_t hashCode, TMPro_TMP_ColorGradient_o* spriteAsset, const MethodInfo* method_info);
void TMPro_MaterialReferenceManager__AddColorGradientPreset_Internal (TMPro_MaterialReferenceManager_o* __this, int32_t hashCode, TMPro_TMP_ColorGradient_o* spriteAsset, const MethodInfo* method_info);
bool TMPro_MaterialReferenceManager__Contains (TMPro_MaterialReferenceManager_o* __this, TMPro_TMP_FontAsset_o* font, const MethodInfo* method_info);
bool TMPro_MaterialReferenceManager__Contains (TMPro_MaterialReferenceManager_o* __this, TMPro_TMP_SpriteAsset_o* sprite, const MethodInfo* method_info);
bool TMPro_MaterialReferenceManager__TryGetFontAsset (int32_t hashCode, TMPro_TMP_FontAsset_o** fontAsset, const MethodInfo* method_info);
bool TMPro_MaterialReferenceManager__TryGetFontAssetInternal (TMPro_MaterialReferenceManager_o* __this, int32_t hashCode, TMPro_TMP_FontAsset_o** fontAsset, const MethodInfo* method_info);
bool TMPro_MaterialReferenceManager__TryGetSpriteAsset (int32_t hashCode, TMPro_TMP_SpriteAsset_o** spriteAsset, const MethodInfo* method_info);
bool TMPro_MaterialReferenceManager__TryGetSpriteAssetInternal (TMPro_MaterialReferenceManager_o* __this, int32_t hashCode, TMPro_TMP_SpriteAsset_o** spriteAsset, const MethodInfo* method_info);
bool TMPro_MaterialReferenceManager__TryGetColorGradientPreset (int32_t hashCode, TMPro_TMP_ColorGradient_o** gradientPreset, const MethodInfo* method_info);
bool TMPro_MaterialReferenceManager__TryGetColorGradientPresetInternal (TMPro_MaterialReferenceManager_o* __this, int32_t hashCode, TMPro_TMP_ColorGradient_o** gradientPreset, const MethodInfo* method_info);
bool TMPro_MaterialReferenceManager__TryGetMaterial (int32_t hashCode, UnityEngine_Material_o** material, const MethodInfo* method_info);
bool TMPro_MaterialReferenceManager__TryGetMaterialInternal (TMPro_MaterialReferenceManager_o* __this, int32_t hashCode, UnityEngine_Material_o** material, const MethodInfo* method_info);
void TMPro_MaterialReferenceManager___ctor (TMPro_MaterialReferenceManager_o* __this, const MethodInfo* method_info);
