#pragma once

#include "il2cpp.h"

int32_t Dpr_UI_ZukanInfo__get_MonsNo (Dpr_UI_ZukanInfo_o* __this, const MethodInfo* method);
void Dpr_UI_ZukanInfo__set_MonsNo (Dpr_UI_ZukanInfo_o* __this, int32_t value, const MethodInfo* method);
int32_t Dpr_UI_ZukanInfo__get_ZukanNo (Dpr_UI_ZukanInfo_o* __this, const MethodInfo* method);
void Dpr_UI_ZukanInfo__set_ZukanNo (Dpr_UI_ZukanInfo_o* __this, int32_t value, const MethodInfo* method);
System_String_o* Dpr_UI_ZukanInfo__get_Name (Dpr_UI_ZukanInfo_o* __this, const MethodInfo* method);
void Dpr_UI_ZukanInfo__set_Name (Dpr_UI_ZukanInfo_o* __this, System_String_o* value, const MethodInfo* method);
uint16_t Dpr_UI_ZukanInfo__get_Height (Dpr_UI_ZukanInfo_o* __this, const MethodInfo* method);
void Dpr_UI_ZukanInfo__set_Height (Dpr_UI_ZukanInfo_o* __this, uint16_t value, const MethodInfo* method);
uint16_t Dpr_UI_ZukanInfo__get_Weight (Dpr_UI_ZukanInfo_o* __this, const MethodInfo* method);
void Dpr_UI_ZukanInfo__set_Weight (Dpr_UI_ZukanInfo_o* __this, uint16_t value, const MethodInfo* method);
System_String_o* Dpr_UI_ZukanInfo__get_HeightText (Dpr_UI_ZukanInfo_o* __this, const MethodInfo* method);
void Dpr_UI_ZukanInfo__set_HeightText (Dpr_UI_ZukanInfo_o* __this, System_String_o* value, const MethodInfo* method);
System_String_o* Dpr_UI_ZukanInfo__get_WeightText (Dpr_UI_ZukanInfo_o* __this, const MethodInfo* method);
void Dpr_UI_ZukanInfo__set_WeightText (Dpr_UI_ZukanInfo_o* __this, System_String_o* value, const MethodInfo* method);
uint8_t Dpr_UI_ZukanInfo__get_Type1 (Dpr_UI_ZukanInfo_o* __this, const MethodInfo* method);
void Dpr_UI_ZukanInfo__set_Type1 (Dpr_UI_ZukanInfo_o* __this, uint8_t value, const MethodInfo* method);
uint8_t Dpr_UI_ZukanInfo__get_Type2 (Dpr_UI_ZukanInfo_o* __this, const MethodInfo* method);
void Dpr_UI_ZukanInfo__set_Type2 (Dpr_UI_ZukanInfo_o* __this, uint8_t value, const MethodInfo* method);
int32_t Dpr_UI_ZukanInfo__get_GetStatus (Dpr_UI_ZukanInfo_o* __this, const MethodInfo* method);
void Dpr_UI_ZukanInfo__set_GetStatus (Dpr_UI_ZukanInfo_o* __this, int32_t value, const MethodInfo* method);
bool Dpr_UI_ZukanInfo__get_ExistForm (Dpr_UI_ZukanInfo_o* __this, const MethodInfo* method);
bool Dpr_UI_ZukanInfo__get_CanChangeModel (Dpr_UI_ZukanInfo_o* __this, const MethodInfo* method);
bool Dpr_UI_ZukanInfo__get_CanShowDescription (Dpr_UI_ZukanInfo_o* __this, const MethodInfo* method);
System_String_o* Dpr_UI_ZukanInfo__get_DescriptionMessageFileName (Dpr_UI_ZukanInfo_o* __this, const MethodInfo* method);
void Dpr_UI_ZukanInfo___ctor (Dpr_UI_ZukanInfo_o* __this, int32_t monsNo, bool isShinouZukan, const MethodInfo* method);
void Dpr_UI_ZukanInfo__SetFormNo (Dpr_UI_ZukanInfo_o* __this, int32_t formNo, const MethodInfo* method);
void Dpr_UI_ZukanInfo__Set (Dpr_UI_ZukanInfo_o* __this, int32_t formNo, uint8_t sex, bool isRare, const MethodInfo* method);
void Dpr_UI_ZukanInfo__SetupUITexts (Dpr_UI_ZukanInfo_o* __this, Dpr_UI_UIText_o* nameText, Dpr_UI_UIText_o* classText, Dpr_UI_UIText_o* heightText, Dpr_UI_UIText_o* weightText, Dpr_UI_UIText_o* descText, Dpr_UI_UIText_o* formNameText, const MethodInfo* method);
int32_t Dpr_UI_ZukanInfo__GetCurrentModelSexType (Dpr_UI_ZukanInfo_o* __this, const MethodInfo* method);
bool Dpr_UI_ZukanInfo__IsRareCurrentModel (Dpr_UI_ZukanInfo_o* __this, const MethodInfo* method);
void Dpr_UI_ZukanInfo__MoveModelSelect (Dpr_UI_ZukanInfo_o* __this, int32_t value, const MethodInfo* method);
Pml_PokePara_PokemonParam_o* Dpr_UI_ZukanInfo__GetCurrentPokemonParam (Dpr_UI_ZukanInfo_o* __this, const MethodInfo* method);
void Dpr_UI_ZukanInfo__UpdateInfo (Dpr_UI_ZukanInfo_o* __this, const MethodInfo* method);
XLSXContent_PokemonInfo_SheetCatalog_array* Dpr_UI_ZukanInfo__GetCatalogs (Dpr_UI_ZukanInfo_o* __this, int32_t monsNo, int32_t formMax, bool isUnknownSex, const MethodInfo* method);
