#pragma once

#include "il2cpp.h"

void TMPro_TMP_FontAssetUtilities___cctor (const MethodInfo* method_info);
TMPro_TMP_FontAssetUtilities_o* TMPro_TMP_FontAssetUtilities__get_instance (const MethodInfo* method_info);
TMPro_TMP_Character_o* TMPro_TMP_FontAssetUtilities__GetCharacterFromFontAsset (uint32_t unicode, TMPro_TMP_FontAsset_o* sourceFontAsset, bool includeFallbacks, int32_t fontStyle, int32_t fontWeight, bool* isAlternativeTypeface, const MethodInfo* method_info);
TMPro_TMP_Character_o* TMPro_TMP_FontAssetUtilities__GetCharacterFromFontAsset_Internal (uint32_t unicode, TMPro_TMP_FontAsset_o* sourceFontAsset, bool includeFallbacks, int32_t fontStyle, int32_t fontWeight, bool* isAlternativeTypeface, const MethodInfo* method_info);
TMPro_TMP_Character_o* TMPro_TMP_FontAssetUtilities__GetCharacterFromFontAssets (uint32_t unicode, TMPro_TMP_FontAsset_o* sourceFontAsset, System_Collections_Generic_List_TMP_FontAsset__o* fontAssets, bool includeFallbacks, int32_t fontStyle, int32_t fontWeight, bool* isAlternativeTypeface, const MethodInfo* method_info);
TMPro_TMP_SpriteCharacter_o* TMPro_TMP_FontAssetUtilities__GetSpriteCharacterFromSpriteAsset (uint32_t unicode, TMPro_TMP_SpriteAsset_o* spriteAsset, bool includeFallbacks, const MethodInfo* method_info);
TMPro_TMP_SpriteCharacter_o* TMPro_TMP_FontAssetUtilities__GetSpriteCharacterFromSpriteAsset_Internal (uint32_t unicode, TMPro_TMP_SpriteAsset_o* spriteAsset, bool includeFallbacks, const MethodInfo* method_info);
void TMPro_TMP_FontAssetUtilities___ctor (TMPro_TMP_FontAssetUtilities_o* __this, const MethodInfo* method_info);
