#pragma once

#include "il2cpp.h"

bool Dpr_Message_FontManager__Awake (Dpr_Message_FontManager_o* __this, const MethodInfo* method_info);
void Dpr_Message_FontManager__Start (Dpr_Message_FontManager_o* __this, const MethodInfo* method_info);
void Dpr_Message_FontManager__InitializeMaterialSetting (Dpr_Message_FontManager_o* __this, const MethodInfo* method_info);
void Dpr_Message_FontManager__Destroy (Dpr_Message_FontManager_o* __this, const MethodInfo* method_info);
void Dpr_Message_FontManager__DestroyAllFontAsset (Dpr_Message_FontManager_o* __this, const MethodInfo* method_info);
bool Dpr_Message_FontManager__get_IsRunning (Dpr_Message_FontManager_o* __this, const MethodInfo* method_info);
void Dpr_Message_FontManager__LoadAllFontAsset (Dpr_Message_FontManager_o* __this, const MethodInfo* method_info);
void Dpr_Message_FontManager__LoadFontAssetByLangId (Dpr_Message_FontManager_o* __this, int32_t langId, const MethodInfo* method_info);
void Dpr_Message_FontManager__RegistLoadTask (Dpr_Message_FontManager_o* __this, int32_t langId, const MethodInfo* method_info);
void Dpr_Message_FontManager__UnloadFontAssets (Dpr_Message_FontManager_o* __this, const MethodInfo* method_info);
void Dpr_Message_FontManager__UnloadFontAssetByLanguageId (Dpr_Message_FontManager_o* __this, int32_t langId, const MethodInfo* method_info);
TMPro_TMP_FontAsset_o* Dpr_Message_FontManager__GetFontAsset (Dpr_Message_FontManager_o* __this, const MethodInfo* method_info);
TMPro_TMP_FontAsset_o* Dpr_Message_FontManager__GetFontAssetByLangId (Dpr_Message_FontManager_o* __this, int32_t langId, const MethodInfo* method_info);
Dpr_Message_FontAssetInfo_o* Dpr_Message_FontManager__GetFontAssetInfo (Dpr_Message_FontManager_o* __this, const MethodInfo* method_info);
Dpr_Message_FontAssetInfo_o* Dpr_Message_FontManager__GetFontAssetInfoByLangId (Dpr_Message_FontManager_o* __this, int32_t langId, const MethodInfo* method_info);
void Dpr_Message_FontManager__ClearAllFontAtlas (Dpr_Message_FontManager_o* __this, const MethodInfo* method_info);
void Dpr_Message_FontManager__ClearFontAtlasByLanugageId (Dpr_Message_FontManager_o* __this, int32_t langId, const MethodInfo* method_info);
void Dpr_Message_FontManager__ReloadMaterialTable (Dpr_Message_FontManager_o* __this, const MethodInfo* method_info);
void Dpr_Message_FontManager__ClearMaterialTable (Dpr_Message_FontManager_o* __this, const MethodInfo* method_info);
UnityEngine_Material_o* Dpr_Message_FontManager__CreateMaterial (Dpr_Message_FontManager_o* __this, UnityEngine_Material_o* baseMaterial, Dpr_Message_FontMaterialProperty_o* fontMaterialProperty, const MethodInfo* method_info);
void Dpr_Message_FontManager__ChangeFontMaterial (Dpr_Message_FontManager_o* __this, TMPro_TextMeshProUGUI_o* text, int32_t materialIndex, const MethodInfo* method_info);
void Dpr_Message_FontManager__OnFinishedLoadFontAsset (Dpr_Message_FontManager_o* __this, Dpr_Message_LoadFontAssetTask_o* loadTask, const MethodInfo* method_info);
bool Dpr_Message_FontManager__HasFontDataModel (Dpr_Message_FontManager_o* __this, int32_t langId, const MethodInfo* method_info);
bool Dpr_Message_FontManager__HasFontDataModel (Dpr_Message_FontManager_o* __this, int32_t key, const MethodInfo* method_info);
int32_t Dpr_Message_FontManager__ConvertLangIdToKey (Dpr_Message_FontManager_o* __this, int32_t langId, const MethodInfo* method_info);
int32_t Dpr_Message_FontManager__get_UserLanguageId (Dpr_Message_FontManager_o* __this, const MethodInfo* method_info);
void Dpr_Message_FontManager___ctor (Dpr_Message_FontManager_o* __this, const MethodInfo* method_info);
