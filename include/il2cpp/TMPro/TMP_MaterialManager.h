#pragma once

#include "il2cpp.h"

void TMPro_TMP_MaterialManager___cctor (const MethodInfo* method);
void TMPro_TMP_MaterialManager__OnPreRender (const MethodInfo* method);
UnityEngine_Material_o* TMPro_TMP_MaterialManager__GetStencilMaterial (UnityEngine_Material_o* baseMaterial, int32_t stencilID, const MethodInfo* method);
void TMPro_TMP_MaterialManager__ReleaseStencilMaterial (UnityEngine_Material_o* stencilMaterial, const MethodInfo* method);
UnityEngine_Material_o* TMPro_TMP_MaterialManager__GetBaseMaterial (UnityEngine_Material_o* stencilMaterial, const MethodInfo* method);
UnityEngine_Material_o* TMPro_TMP_MaterialManager__SetStencil (UnityEngine_Material_o* material, int32_t stencilID, const MethodInfo* method);
void TMPro_TMP_MaterialManager__AddMaskingMaterial (UnityEngine_Material_o* baseMaterial, UnityEngine_Material_o* stencilMaterial, int32_t stencilID, const MethodInfo* method);
void TMPro_TMP_MaterialManager__RemoveStencilMaterial (UnityEngine_Material_o* stencilMaterial, const MethodInfo* method);
void TMPro_TMP_MaterialManager__ReleaseBaseMaterial (UnityEngine_Material_o* baseMaterial, const MethodInfo* method);
void TMPro_TMP_MaterialManager__ClearMaterials (const MethodInfo* method);
int32_t TMPro_TMP_MaterialManager__GetStencilID (UnityEngine_GameObject_o* obj, const MethodInfo* method);
UnityEngine_Material_o* TMPro_TMP_MaterialManager__GetMaterialForRendering (UnityEngine_UI_MaskableGraphic_o* graphic, UnityEngine_Material_o* baseMaterial, const MethodInfo* method);
UnityEngine_Transform_o* TMPro_TMP_MaterialManager__FindRootSortOverrideCanvas (UnityEngine_Transform_o* start, const MethodInfo* method);
UnityEngine_Material_o* TMPro_TMP_MaterialManager__GetFallbackMaterial (TMPro_TMP_FontAsset_o* fontAsset, UnityEngine_Material_o* sourceMaterial, int32_t atlasIndex, const MethodInfo* method);
UnityEngine_Material_o* TMPro_TMP_MaterialManager__GetFallbackMaterial (UnityEngine_Material_o* sourceMaterial, UnityEngine_Material_o* targetMaterial, const MethodInfo* method);
void TMPro_TMP_MaterialManager__AddFallbackMaterialReference (UnityEngine_Material_o* targetMaterial, const MethodInfo* method);
void TMPro_TMP_MaterialManager__RemoveFallbackMaterialReference (UnityEngine_Material_o* targetMaterial, const MethodInfo* method);
void TMPro_TMP_MaterialManager__CleanupFallbackMaterials (const MethodInfo* method);
void TMPro_TMP_MaterialManager__ReleaseFallbackMaterial (UnityEngine_Material_o* fallbackMaterial, const MethodInfo* method);
void TMPro_TMP_MaterialManager__CopyMaterialPresetProperties (UnityEngine_Material_o* source, UnityEngine_Material_o* destination, const MethodInfo* method);
