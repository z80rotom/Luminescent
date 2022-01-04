#pragma once

#include "il2cpp.h"

Dpr_UI_PokemonParty_Param_o* Dpr_UI_PokemonParty__get_param (Dpr_UI_PokemonParty_o* __this, const MethodInfo* method);
System_Collections_Generic_List_PokemonPartyItem__o* Dpr_UI_PokemonParty__get_items (Dpr_UI_PokemonParty_o* __this, const MethodInfo* method);
int32_t Dpr_UI_PokemonParty__get_selectIndex (Dpr_UI_PokemonParty_o* __this, const MethodInfo* method);
void Dpr_UI_PokemonParty__Awake (Dpr_UI_PokemonParty_o* __this, const MethodInfo* method);
void Dpr_UI_PokemonParty__Setup (Dpr_UI_PokemonParty_o* __this, Dpr_UI_PokemonParty_Param_o* param, const MethodInfo* method);
void Dpr_UI_PokemonParty__SetupActiveItems (Dpr_UI_PokemonParty_o* __this, const MethodInfo* method);
void Dpr_UI_PokemonParty__SetActive (Dpr_UI_PokemonParty_o* __this, bool enabled, bool isSelectChanged, const MethodInfo* method);
bool Dpr_UI_PokemonParty__OnUpdate (Dpr_UI_PokemonParty_o* __this, float deltaTime, Dpr_UI_UIInputController_o* input, const MethodInfo* method);
void Dpr_UI_PokemonParty__UpdateSelect (Dpr_UI_PokemonParty_o* __this, float deltaTime, const MethodInfo* method);
bool Dpr_UI_PokemonParty__UpdateSwap (Dpr_UI_PokemonParty_o* __this, float deltaTime, const MethodInfo* method);
bool Dpr_UI_PokemonParty__UpdateItemSwap (Dpr_UI_PokemonParty_o* __this, float deltaTime, const MethodInfo* method);
bool Dpr_UI_PokemonParty__SetSelectIndex (Dpr_UI_PokemonParty_o* __this, int32_t selectIndex, bool isInitialize, const MethodInfo* method);
void Dpr_UI_PokemonParty__ResetSelectIndex (Dpr_UI_PokemonParty_o* __this, const MethodInfo* method);
Dpr_UI_PokemonPartyItem_o* Dpr_UI_PokemonParty__GetSelectedItem (Dpr_UI_PokemonParty_o* __this, const MethodInfo* method);
void Dpr_UI_PokemonParty__BeginSwap (Dpr_UI_PokemonParty_o* __this, UnityEngine_Events_UnityAction_PokemonPartyItem__PokemonPartyItem__o* onSwapChanged, const MethodInfo* method);
bool Dpr_UI_PokemonParty__IsSwapMode (Dpr_UI_PokemonParty_o* __this, const MethodInfo* method);
void Dpr_UI_PokemonParty__BeginItemSwap (Dpr_UI_PokemonParty_o* __this, UnityEngine_Events_UnityAction_PokemonPartyItem__PokemonPartyItem__bool__bool__o* onSwapChanged, const MethodInfo* method);
void Dpr_UI_PokemonParty__SetBasePlateType (Dpr_UI_PokemonParty_o* __this, int32_t index, int32_t plateType, const MethodInfo* method);
void Dpr_UI_PokemonParty___ctor (Dpr_UI_PokemonParty_o* __this, const MethodInfo* method);
