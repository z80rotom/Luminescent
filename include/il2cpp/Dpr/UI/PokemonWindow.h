#pragma once

#include "il2cpp.h"

void Dpr_UI_PokemonWindow__OnCreate (Dpr_UI_PokemonWindow_o* __this, const MethodInfo* method_info);
void Dpr_UI_PokemonWindow__Open (Dpr_UI_PokemonWindow_o* __this, Dpr_UI_PokemonWindow_Param_o* param, int32_t prevWindowId, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_PokemonWindow__OpOpen (Dpr_UI_PokemonWindow_o* __this, Dpr_UI_PokemonWindow_Param_o* param, int32_t prevWindowId, const MethodInfo* method_info);
void Dpr_UI_PokemonWindow__Close (Dpr_UI_PokemonWindow_o* __this, UnityEngine_Events_UnityAction_UIWindow__o* onClosed_, int32_t nextWindowId, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_PokemonWindow__OpClose (Dpr_UI_PokemonWindow_o* __this, UnityEngine_Events_UnityAction_UIWindow__o* onClosed_, int32_t nextWindowId, const MethodInfo* method_info);
void Dpr_UI_PokemonWindow__OnUpdate (Dpr_UI_PokemonWindow_o* __this, float deltaTime, const MethodInfo* method_info);
bool Dpr_UI_PokemonWindow__IsFieldWazaSelectMode (Dpr_UI_PokemonWindow_o* __this, const MethodInfo* method_info);
bool Dpr_UI_PokemonWindow__IsSwapMode (Dpr_UI_PokemonWindow_o* __this, const MethodInfo* method_info);
bool Dpr_UI_PokemonWindow__IsEnableBox (Dpr_UI_PokemonWindow_o* __this, const MethodInfo* method_info);
void Dpr_UI_PokemonWindow__OnSelectChangedPartyItem (Dpr_UI_PokemonWindow_o* __this, Dpr_UI_PokemonPartyItem_o* partyItem, int32_t selectIndex, const MethodInfo* method_info);
void Dpr_UI_PokemonWindow__SetupKeyguide (Dpr_UI_PokemonWindow_o* __this, const MethodInfo* method_info);
bool Dpr_UI_PokemonWindow__HasItemByParty (Dpr_UI_PokemonWindow_o* __this, const MethodInfo* method_info);
void Dpr_UI_PokemonWindow__SetupModelView (Dpr_UI_PokemonWindow_o* __this, Pml_PokePara_PokemonParam_o* pokemonParam, const MethodInfo* method_info);
void Dpr_UI_PokemonWindow__OnClickPartyItem (Dpr_UI_PokemonWindow_o* __this, Dpr_UI_PokemonPartyItem_o* partyItem, int32_t selectIndex, const MethodInfo* method_info);
void Dpr_UI_PokemonWindow__ShowPartyItemName (Dpr_UI_PokemonWindow_o* __this, bool enabled, const MethodInfo* method_info);
void Dpr_UI_PokemonWindow__OpenContextMenu (Dpr_UI_PokemonWindow_o* __this, Dpr_UI_PokemonPartyItem_o* partyItem, int32_t selectIndex, const MethodInfo* method_info);
void Dpr_UI_PokemonWindow__FieldWaza (Dpr_UI_PokemonWindow_o* __this, int32_t fieldWazaNo, Dpr_UI_PokemonPartyItem_o* partyItem, int32_t selectIndex, const MethodInfo* method_info);
void Dpr_UI_PokemonWindow__OpenBagWindow (Dpr_UI_PokemonWindow_o* __this, int32_t modeType, Pml_PokePara_PokemonParam_o* selectPokemonParam, const MethodInfo* method_info);
void Dpr_UI_PokemonWindow__GiveItem (Dpr_UI_PokemonWindow_o* __this, bool isChain, const MethodInfo* method_info);
void Dpr_UI_PokemonWindow__PokemonSwap (Dpr_UI_PokemonWindow_o* __this, const MethodInfo* method_info);
void Dpr_UI_PokemonWindow__SelectPokemonByFieldWaza (Dpr_UI_PokemonWindow_o* __this, int32_t wazaNo, Dpr_UI_PokemonPartyItem_o* partyItem, const MethodInfo* method_info);
void Dpr_UI_PokemonWindow__UseFieldWaza (Dpr_UI_PokemonWindow_o* __this, Dpr_UI_PokemonPartyItem_o* partyItem, const MethodInfo* method_info);
void Dpr_UI_PokemonWindow__CheckFormChange (Dpr_UI_PokemonWindow_o* __this, Dpr_UI_PokemonPartyItem_o* pokemonPartyItem, UnityEngine_Events_UnityAction_o* onComplete, const MethodInfo* method_info);
void Dpr_UI_PokemonWindow__SetInputEnable (Dpr_UI_PokemonWindow_o* __this, bool enable, const MethodInfo* method_info);
void Dpr_UI_PokemonWindow___ctor (Dpr_UI_PokemonWindow_o* __this, const MethodInfo* method_info);
void Dpr_UI_PokemonWindow____n__0 (Dpr_UI_PokemonWindow_o* __this, int32_t prevWindowId, const MethodInfo* method_info);
void Dpr_UI_PokemonWindow___OnUpdate_b__15_0 (Dpr_UI_PokemonWindow_o* __this, const MethodInfo* method_info);
void Dpr_UI_PokemonWindow___OnUpdate_b__15_1 (Dpr_UI_PokemonWindow_o* __this, Dpr_UI_UIWindow_o* __, const MethodInfo* method_info);
void Dpr_UI_PokemonWindow___FieldWaza_b__26_0 (Dpr_UI_PokemonWindow_o* __this, UnityEngine_Events_UnityAction_UIWindow__o* onClosed_, const MethodInfo* method_info);
void Dpr_UI_PokemonWindow___PokemonSwap_b__29_1 (Dpr_UI_PokemonWindow_o* __this, Dpr_UI_PokemonPartyItem_o* from, Dpr_UI_PokemonPartyItem_o* to, const MethodInfo* method_info);
