#pragma once

#include "il2cpp.h"

System_String_o* Dpr_Message_MessageHelper__ExtractionLangNameByName (System_String_o* fileName, const MethodInfo* method);
bool Dpr_Message_MessageHelper__IsEFIGS (int32_t languageId, const MethodInfo* method);
System_String_o* Dpr_Message_MessageHelper__SurroundFontTag (System_String_o* word, uint32_t languageId, const MethodInfo* method);
System_String_o* Dpr_Message_MessageHelper__SurroundFontTag (System_String_o* word, int32_t languageId, const MethodInfo* method);
System_String_o* Dpr_Message_MessageHelper__GetFontFileName (int32_t languageId, const MethodInfo* method);
System_String_array* Dpr_Message_MessageHelper__GetLocalizeVariants (const MethodInfo* method);
System_String_o* Dpr_Message_MessageHelper__GetLanguageVariant (const MethodInfo* method);
System_String_o* Dpr_Message_MessageHelper__GetLanguageVariant (int32_t langID, const MethodInfo* method);
System_String_o* Dpr_Message_MessageHelper__AddVariantNameToPath (System_String_o* path, const MethodInfo* method);
System_String_o* Dpr_Message_MessageHelper__AddVariantNameToPath (System_String_o* path, System_String_o* langVariant, const MethodInfo* method);
bool Dpr_Message_MessageHelper__CheckExcludeCode (uint16_t c, const MethodInfo* method);
bool Dpr_Message_MessageHelper__CheckNewLineCharCode (uint16_t c, const MethodInfo* method);
uint16_t Dpr_Message_MessageHelper__ConvertUnicodeToChar (int32_t unicode, const MethodInfo* method);
int32_t Dpr_Message_MessageHelper__GetGenderQtyId (int32_t genderId, int32_t qtyId, const MethodInfo* method);
int32_t Dpr_Message_MessageHelper__CheckQtyIdByCount (int32_t count, int32_t langID, const MethodInfo* method);
bool Dpr_Message_MessageHelper__IsVowel (uint16_t initial, const MethodInfo* method);
bool Dpr_Message_MessageHelper__IsFRVowel (uint16_t initial, const MethodInfo* method);
bool Dpr_Message_MessageHelper__IsITVowelE (uint16_t initial, const MethodInfo* method);
bool Dpr_Message_MessageHelper__ContainParam (uint16_t target, System_Char_array** paramArray, const MethodInfo* method);
bool Dpr_Message_MessageHelper__IsDigitWordByUnicode (System_Byte_array* unicodes, const MethodInfo* method);
void Dpr_Message_MessageHelper__SetEggName (System_String_o* eggName, const MethodInfo* method);
bool Dpr_Message_MessageHelper__IsEggName (System_String_o* nickName, const MethodInfo* method);
int32_t Dpr_Message_MessageHelper__GetEggNameGender (int32_t langID, int32_t genderID, const MethodInfo* method);
int32_t Dpr_Message_MessageHelper__GetEggNameInitialSound (int32_t langID, int32_t initialSound, const MethodInfo* method);
float Dpr_Message_MessageHelper__CalcMessageWidth (int32_t langID, System_String_o* str, float textFontScale, const MethodInfo* method);
float Dpr_Message_MessageHelper__CheckMessageWidth (Dpr_Message_FontAssetInfo_o* fontAssetInfo, System_String_o* str, float textFontScale, const MethodInfo* method);
float Dpr_Message_MessageHelper__CheckMessageWidth (TMPro_TMP_FontAsset_o* fontAsset, System_String_o* str, float textFontScale, const MethodInfo* method);
bool Dpr_Message_MessageHelper__IsSpriteFontCode (uint32_t unicode, const MethodInfo* method);
bool Dpr_Message_MessageHelper__ExistMissingChara (int32_t langID, System_String_o** checkStr, const MethodInfo* method);
bool Dpr_Message_MessageHelper__ExistMissingChara (TMPro_TMP_FontAsset_o* fontAsset, System_String_o** checkStr, const MethodInfo* method);
int32_t Dpr_Message_MessageHelper__CreateNotationValue (float centiSize, int32_t* integerValue, int32_t* decimalValue, const MethodInfo* method);
void Dpr_Message_MessageHelper__SplitRealNumber (float baseValue, float* integerValue, float* decimalValue, const MethodInfo* method);
void Dpr_Message_MessageHelper__EmitLog (System_String_o* log, int32_t logType, const MethodInfo* method);
int32_t Dpr_Message_MessageHelper__ConvertMsgId (int32_t langId, const MethodInfo* method);
void Dpr_Message_MessageHelper___cctor (const MethodInfo* method);
