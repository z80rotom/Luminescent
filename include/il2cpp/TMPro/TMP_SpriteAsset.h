#pragma once

#include "il2cpp.h"

System_String_o* TMPro_TMP_SpriteAsset__get_version (TMPro_TMP_SpriteAsset_o* __this, const MethodInfo* method_info);
void TMPro_TMP_SpriteAsset__set_version (TMPro_TMP_SpriteAsset_o* __this, System_String_o* value, const MethodInfo* method_info);
UnityEngine_TextCore_FaceInfo_o TMPro_TMP_SpriteAsset__get_faceInfo (TMPro_TMP_SpriteAsset_o* __this, const MethodInfo* method_info);
void TMPro_TMP_SpriteAsset__set_faceInfo (TMPro_TMP_SpriteAsset_o* __this, UnityEngine_TextCore_FaceInfo_o value, const MethodInfo* method_info);
System_Collections_Generic_List_TMP_SpriteCharacter__o* TMPro_TMP_SpriteAsset__get_spriteCharacterTable (TMPro_TMP_SpriteAsset_o* __this, const MethodInfo* method_info);
void TMPro_TMP_SpriteAsset__set_spriteCharacterTable (TMPro_TMP_SpriteAsset_o* __this, System_Collections_Generic_List_TMP_SpriteCharacter__o* value, const MethodInfo* method_info);
System_Collections_Generic_Dictionary_uint__TMP_SpriteCharacter__o* TMPro_TMP_SpriteAsset__get_spriteCharacterLookupTable (TMPro_TMP_SpriteAsset_o* __this, const MethodInfo* method_info);
void TMPro_TMP_SpriteAsset__set_spriteCharacterLookupTable (TMPro_TMP_SpriteAsset_o* __this, System_Collections_Generic_Dictionary_uint__TMP_SpriteCharacter__o* value, const MethodInfo* method_info);
System_Collections_Generic_List_TMP_SpriteGlyph__o* TMPro_TMP_SpriteAsset__get_spriteGlyphTable (TMPro_TMP_SpriteAsset_o* __this, const MethodInfo* method_info);
void TMPro_TMP_SpriteAsset__set_spriteGlyphTable (TMPro_TMP_SpriteAsset_o* __this, System_Collections_Generic_List_TMP_SpriteGlyph__o* value, const MethodInfo* method_info);
void TMPro_TMP_SpriteAsset__Awake (TMPro_TMP_SpriteAsset_o* __this, const MethodInfo* method_info);
UnityEngine_Material_o* TMPro_TMP_SpriteAsset__GetDefaultSpriteMaterial (TMPro_TMP_SpriteAsset_o* __this, const MethodInfo* method_info);
void TMPro_TMP_SpriteAsset__UpdateLookupTables (TMPro_TMP_SpriteAsset_o* __this, const MethodInfo* method_info);
int32_t TMPro_TMP_SpriteAsset__GetSpriteIndexFromHashcode (TMPro_TMP_SpriteAsset_o* __this, int32_t hashCode, const MethodInfo* method_info);
int32_t TMPro_TMP_SpriteAsset__GetSpriteIndexFromUnicode (TMPro_TMP_SpriteAsset_o* __this, uint32_t unicode, const MethodInfo* method_info);
int32_t TMPro_TMP_SpriteAsset__GetSpriteIndexFromName (TMPro_TMP_SpriteAsset_o* __this, System_String_o* name, const MethodInfo* method_info);
TMPro_TMP_SpriteAsset_o* TMPro_TMP_SpriteAsset__SearchForSpriteByUnicode (TMPro_TMP_SpriteAsset_o* spriteAsset, uint32_t unicode, bool includeFallbacks, int32_t* spriteIndex, const MethodInfo* method_info);
TMPro_TMP_SpriteAsset_o* TMPro_TMP_SpriteAsset__SearchForSpriteByUnicodeInternal (System_Collections_Generic_List_TMP_SpriteAsset__o* spriteAssets, uint32_t unicode, bool includeFallbacks, int32_t* spriteIndex, const MethodInfo* method_info);
TMPro_TMP_SpriteAsset_o* TMPro_TMP_SpriteAsset__SearchForSpriteByUnicodeInternal (TMPro_TMP_SpriteAsset_o* spriteAsset, uint32_t unicode, bool includeFallbacks, int32_t* spriteIndex, const MethodInfo* method_info);
TMPro_TMP_SpriteAsset_o* TMPro_TMP_SpriteAsset__SearchForSpriteByHashCode (TMPro_TMP_SpriteAsset_o* spriteAsset, int32_t hashCode, bool includeFallbacks, int32_t* spriteIndex, const MethodInfo* method_info);
TMPro_TMP_SpriteAsset_o* TMPro_TMP_SpriteAsset__SearchForSpriteByHashCodeInternal (System_Collections_Generic_List_TMP_SpriteAsset__o* spriteAssets, int32_t hashCode, bool searchFallbacks, int32_t* spriteIndex, const MethodInfo* method_info);
TMPro_TMP_SpriteAsset_o* TMPro_TMP_SpriteAsset__SearchForSpriteByHashCodeInternal (TMPro_TMP_SpriteAsset_o* spriteAsset, int32_t hashCode, bool searchFallbacks, int32_t* spriteIndex, const MethodInfo* method_info);
void TMPro_TMP_SpriteAsset__SortGlyphTable (TMPro_TMP_SpriteAsset_o* __this, const MethodInfo* method_info);
void TMPro_TMP_SpriteAsset__SortCharacterTable (TMPro_TMP_SpriteAsset_o* __this, const MethodInfo* method_info);
void TMPro_TMP_SpriteAsset__SortGlyphAndCharacterTables (TMPro_TMP_SpriteAsset_o* __this, const MethodInfo* method_info);
void TMPro_TMP_SpriteAsset__UpgradeSpriteAsset (TMPro_TMP_SpriteAsset_o* __this, const MethodInfo* method_info);
void TMPro_TMP_SpriteAsset___ctor (TMPro_TMP_SpriteAsset_o* __this, const MethodInfo* method_info);
