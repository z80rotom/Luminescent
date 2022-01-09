#pragma once

#include "il2cpp.h"

Pml_PokePara_PokemonParam_o* Dpr_UI_LevelUpPokemonPanel__get_PokemonParam (Dpr_UI_LevelUpPokemonPanel_o* __this, const MethodInfo* method_info);
void Dpr_UI_LevelUpPokemonPanel__set_PokemonParam (Dpr_UI_LevelUpPokemonPanel_o* __this, Pml_PokePara_PokemonParam_o* value, const MethodInfo* method_info);
Dpr_UI_UILevelUp_PokemonStatus_o Dpr_UI_LevelUpPokemonPanel__get_CurrentPokemonStatus (Dpr_UI_LevelUpPokemonPanel_o* __this, const MethodInfo* method_info);
void Dpr_UI_LevelUpPokemonPanel__set_CurrentPokemonStatus (Dpr_UI_LevelUpPokemonPanel_o* __this, Dpr_UI_UILevelUp_PokemonStatus_o value, const MethodInfo* method_info);
Dpr_UI_UILevelUp_PokemonStatus_o Dpr_UI_LevelUpPokemonPanel__get_BeforePokemonStatus (Dpr_UI_LevelUpPokemonPanel_o* __this, const MethodInfo* method_info);
void Dpr_UI_LevelUpPokemonPanel__set_BeforePokemonStatus (Dpr_UI_LevelUpPokemonPanel_o* __this, Dpr_UI_UILevelUp_PokemonStatus_o value, const MethodInfo* method_info);
System_Action_o* Dpr_UI_LevelUpPokemonPanel__get_OnGaugeUp (Dpr_UI_LevelUpPokemonPanel_o* __this, const MethodInfo* method_info);
void Dpr_UI_LevelUpPokemonPanel__set_OnGaugeUp (Dpr_UI_LevelUpPokemonPanel_o* __this, System_Action_o* value, const MethodInfo* method_info);
System_Action_o* Dpr_UI_LevelUpPokemonPanel__get_OnLevelUp (Dpr_UI_LevelUpPokemonPanel_o* __this, const MethodInfo* method_info);
void Dpr_UI_LevelUpPokemonPanel__set_OnLevelUp (Dpr_UI_LevelUpPokemonPanel_o* __this, System_Action_o* value, const MethodInfo* method_info);
bool Dpr_UI_LevelUpPokemonPanel__get_IsLevelUp (Dpr_UI_LevelUpPokemonPanel_o* __this, const MethodInfo* method_info);
void Dpr_UI_LevelUpPokemonPanel__set_IsLevelUp (Dpr_UI_LevelUpPokemonPanel_o* __this, bool value, const MethodInfo* method_info);
bool Dpr_UI_LevelUpPokemonPanel__get_IsLearnWaza (Dpr_UI_LevelUpPokemonPanel_o* __this, const MethodInfo* method_info);
bool Dpr_UI_LevelUpPokemonPanel__get_IsAnimation (Dpr_UI_LevelUpPokemonPanel_o* __this, const MethodInfo* method_info);
void Dpr_UI_LevelUpPokemonPanel__set_IsAnimation (Dpr_UI_LevelUpPokemonPanel_o* __this, bool value, const MethodInfo* method_info);
bool Dpr_UI_LevelUpPokemonPanel__get_IsActive (Dpr_UI_LevelUpPokemonPanel_o* __this, const MethodInfo* method_info);
void Dpr_UI_LevelUpPokemonPanel__set_IsActive (Dpr_UI_LevelUpPokemonPanel_o* __this, bool value, const MethodInfo* method_info);
void Dpr_UI_LevelUpPokemonPanel__SetActive (Dpr_UI_LevelUpPokemonPanel_o* __this, bool isActive, const MethodInfo* method_info);
void Dpr_UI_LevelUpPokemonPanel__Set (Dpr_UI_LevelUpPokemonPanel_o* __this, Pml_PokePara_PokemonParam_o* param, const MethodInfo* method_info);
void Dpr_UI_LevelUpPokemonPanel__SkipAnimation (Dpr_UI_LevelUpPokemonPanel_o* __this, const MethodInfo* method_info);
bool Dpr_UI_LevelUpPokemonPanel__AddExp (Dpr_UI_LevelUpPokemonPanel_o* __this, uint32_t exp, const MethodInfo* method_info);
void Dpr_UI_LevelUpPokemonPanel__LevelUp (Dpr_UI_LevelUpPokemonPanel_o* __this, int32_t count, const MethodInfo* method_info);
float Dpr_UI_LevelUpPokemonPanel__CalcExpBarTweenDuration (Dpr_UI_LevelUpPokemonPanel_o* __this, uint32_t addExp, const MethodInfo* method_info);
void Dpr_UI_LevelUpPokemonPanel__SetExpBarTweenDuration (Dpr_UI_LevelUpPokemonPanel_o* __this, float duration, const MethodInfo* method_info);
void Dpr_UI_LevelUpPokemonPanel__HandledLevelUp (Dpr_UI_LevelUpPokemonPanel_o* __this, const MethodInfo* method_info);
Dpr_UI_LevelUpPokemonPanel_LearnWazaResult_o Dpr_UI_LevelUpPokemonPanel__GetCurrentNewLearnWazaResult (Dpr_UI_LevelUpPokemonPanel_o* __this, const MethodInfo* method_info);
void Dpr_UI_LevelUpPokemonPanel__HandledNewLearnWazaResult (Dpr_UI_LevelUpPokemonPanel_o* __this, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_LevelUpPokemonPanel__OpLoadIcon (Dpr_UI_LevelUpPokemonPanel_o* __this, Pml_PokePara_CoreParam_o* param, UnityEngine_UI_Image_o* image, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_LevelUpPokemonPanel__AddExpCoroutine (Dpr_UI_LevelUpPokemonPanel_o* __this, int64_t exp, const MethodInfo* method_info);
void Dpr_UI_LevelUpPokemonPanel__SetupExpBar (Dpr_UI_LevelUpPokemonPanel_o* __this, uint32_t min, uint32_t max, uint32_t current, const MethodInfo* method_info);
void Dpr_UI_LevelUpPokemonPanel__SetExpBarValue (Dpr_UI_LevelUpPokemonPanel_o* __this, uint32_t value, const MethodInfo* method_info);
void Dpr_UI_LevelUpPokemonPanel__FadeInLevelUpImage (Dpr_UI_LevelUpPokemonPanel_o* __this, const MethodInfo* method_info);
System_String_o* Dpr_UI_LevelUpPokemonPanel__GetLevelText (Dpr_UI_LevelUpPokemonPanel_o* __this, Pml_PokePara_CoreParam_o* param, const MethodInfo* method_info);
System_String_o* Dpr_UI_LevelUpPokemonPanel__GetAddExpText (Dpr_UI_LevelUpPokemonPanel_o* __this, int64_t exp, const MethodInfo* method_info);
uint32_t Dpr_UI_LevelUpPokemonPanel__GetLevelMinExp (Dpr_UI_LevelUpPokemonPanel_o* __this, int32_t monsNo, uint16_t formNo, uint8_t level, const MethodInfo* method_info);
void Dpr_UI_LevelUpPokemonPanel___ctor (Dpr_UI_LevelUpPokemonPanel_o* __this, const MethodInfo* method_info);
void Dpr_UI_LevelUpPokemonPanel___SetExpBarValue_b__66_0 (Dpr_UI_LevelUpPokemonPanel_o* __this, const MethodInfo* method_info);
