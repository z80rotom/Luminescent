#pragma once

#include "il2cpp.h"

Dpr_UI_PokemonPartyItem_Param_o* Dpr_UI_PokemonPartyItem__get_param (Dpr_UI_PokemonPartyItem_o* __this, const MethodInfo* method_info);
Dpr_UI_PokemonIcon_o* Dpr_UI_PokemonPartyItem__get_pokemonIcon (Dpr_UI_PokemonPartyItem_o* __this, const MethodInfo* method_info);
void Dpr_UI_PokemonPartyItem__Awake (Dpr_UI_PokemonPartyItem_o* __this, const MethodInfo* method_info);
void Dpr_UI_PokemonPartyItem__OnDestroy (Dpr_UI_PokemonPartyItem_o* __this, const MethodInfo* method_info);
void Dpr_UI_PokemonPartyItem__Setup (Dpr_UI_PokemonPartyItem_o* __this, Dpr_UI_PokemonPartyItem_Param_o* param, const MethodInfo* method_info);
void Dpr_UI_PokemonPartyItem__SetEnable (Dpr_UI_PokemonPartyItem_o* __this, bool enabled, const MethodInfo* method_info);
void Dpr_UI_PokemonPartyItem__EnablePairIcon (Dpr_UI_PokemonPartyItem_o* __this, bool enabled, const MethodInfo* method_info);
void Dpr_UI_PokemonPartyItem__SetupItem (Dpr_UI_PokemonPartyItem_o* __this, const MethodInfo* method_info);
void Dpr_UI_PokemonPartyItem__ShowItemName (Dpr_UI_PokemonPartyItem_o* __this, bool enabled, const MethodInfo* method_info);
void Dpr_UI_PokemonPartyItem__ShowUsableItemText (Dpr_UI_PokemonPartyItem_o* __this, System_String_o* labelName, const MethodInfo* method_info);
void Dpr_UI_PokemonPartyItem__HideUsableItemText (Dpr_UI_PokemonPartyItem_o* __this, const MethodInfo* method_info);
void Dpr_UI_PokemonPartyItem__Select (Dpr_UI_PokemonPartyItem_o* __this, int32_t stateBits, const MethodInfo* method_info);
void Dpr_UI_PokemonPartyItem__Decide (Dpr_UI_PokemonPartyItem_o* __this, bool isOpenContextMenu, const MethodInfo* method_info);
void Dpr_UI_PokemonPartyItem__SetState (Dpr_UI_PokemonPartyItem_o* __this, const MethodInfo* method_info);
void Dpr_UI_PokemonPartyItem__SetIconState (Dpr_UI_PokemonPartyItem_o* __this, bool isSelect, const MethodInfo* method_info);
void Dpr_UI_PokemonPartyItem__ReturnItemInBag (Dpr_UI_PokemonPartyItem_o* __this, const MethodInfo* method_info);
void Dpr_UI_PokemonPartyItem__EnableSwapMode (Dpr_UI_PokemonPartyItem_o* __this, bool enabled, const MethodInfo* method_info);
UnityEngine_Vector3_o Dpr_UI_PokemonPartyItem__GetSwapPosition (Dpr_UI_PokemonPartyItem_o* __this, const MethodInfo* method_info);
void Dpr_UI_PokemonPartyItem__SetSwapPosition (Dpr_UI_PokemonPartyItem_o* __this, const MethodInfo* method_info);
void Dpr_UI_PokemonPartyItem__SetSwapPosition (Dpr_UI_PokemonPartyItem_o* __this, UnityEngine_Vector3_o pos, const MethodInfo* method_info);
void Dpr_UI_PokemonPartyItem__UpdateHp (Dpr_UI_PokemonPartyItem_o* __this, System_Action_o* onComplete, const MethodInfo* method_info);
bool Dpr_UI_PokemonPartyItem__FormChange (Dpr_UI_PokemonPartyItem_o* __this, uint16_t formNo, UnityEngine_RectTransform_o* effectRoot, System_Action_PokemonParam__o* onChangeIcon, System_Action_PokemonParam__o* onComplete, const MethodInfo* method_info);
void Dpr_UI_PokemonPartyItem__PlayVoice (Dpr_UI_PokemonPartyItem_o* __this, Pml_PokePara_PokemonParam_o* pokemonParam, System_Action_o* onComplete, const MethodInfo* method_info);
void Dpr_UI_PokemonPartyItem___ctor (Dpr_UI_PokemonPartyItem_o* __this, const MethodInfo* method_info);
void Dpr_UI_PokemonPartyItem___cctor (const MethodInfo* method_info);
