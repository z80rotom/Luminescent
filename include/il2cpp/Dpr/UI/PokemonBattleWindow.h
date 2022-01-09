#pragma once

#include "il2cpp.h"

void Dpr_UI_PokemonBattleWindow__OnCreate (Dpr_UI_PokemonBattleWindow_o* __this, const MethodInfo* method_info);
void Dpr_UI_PokemonBattleWindow__Open (Dpr_UI_PokemonBattleWindow_o* __this, Dpr_UI_PokemonBattleWindow_Param_o* param, Dpr_Battle_Logic_PokeSelParam_o* selParam, int32_t prevWindowId, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_PokemonBattleWindow__OpOpen (Dpr_UI_PokemonBattleWindow_o* __this, Dpr_UI_PokemonBattleWindow_Param_o* param, Dpr_Battle_Logic_PokeSelParam_o* selParam, int32_t prevWindowId, const MethodInfo* method_info);
void Dpr_UI_PokemonBattleWindow__Close (Dpr_UI_PokemonBattleWindow_o* __this, UnityEngine_Events_UnityAction_UIWindow__o* onClosed_, int32_t nextWindowId, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_PokemonBattleWindow__OpClose (Dpr_UI_PokemonBattleWindow_o* __this, UnityEngine_Events_UnityAction_UIWindow__o* onClosed_, int32_t nextWindowId, const MethodInfo* method_info);
int32_t Dpr_UI_PokemonBattleWindow__GetPlateType (Dpr_UI_PokemonBattleWindow_o* __this, int32_t index, const MethodInfo* method_info);
int32_t Dpr_UI_PokemonBattleWindow__GetMemberCount (Dpr_UI_PokemonBattleWindow_o* __this, const MethodInfo* method_info);
void Dpr_UI_PokemonBattleWindow__OnUpdate (Dpr_UI_PokemonBattleWindow_o* __this, float deltaTime, const MethodInfo* method_info);
void Dpr_UI_PokemonBattleWindow__SetSelectType (Dpr_UI_PokemonBattleWindow_o* __this, int32_t selectType, const MethodInfo* method_info);
void Dpr_UI_PokemonBattleWindow__UpdateKeyGuide (Dpr_UI_PokemonBattleWindow_o* __this, const MethodInfo* method_info);
void Dpr_UI_PokemonBattleWindow__OnSelectChangedPartyItem (Dpr_UI_PokemonBattleWindow_o* __this, Dpr_UI_PokemonPartyItem_o* partyItem, int32_t selectIndex, const MethodInfo* method_info);
void Dpr_UI_PokemonBattleWindow__OnClickPartyItem (Dpr_UI_PokemonBattleWindow_o* __this, Dpr_UI_PokemonPartyItem_o* partyItem, int32_t selectIndex, const MethodInfo* method_info);
void Dpr_UI_PokemonBattleWindow__OpenContextMenu (Dpr_UI_PokemonBattleWindow_o* __this, Dpr_UI_PokemonPartyItem_o* partyItem, int32_t selectIndex, const MethodInfo* method_info);
void Dpr_UI_PokemonBattleWindow__OpenBagWindow (Dpr_UI_PokemonBattleWindow_o* __this, int32_t modeType, Pml_PokePara_PokemonParam_o* selectPokemonParam, const MethodInfo* method_info);
void Dpr_UI_PokemonBattleWindow__PokemonSwap (Dpr_UI_PokemonBattleWindow_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* pokeParam, int32_t posType, const MethodInfo* method_info);
int32_t Dpr_UI_PokemonBattleWindow__GetSwapPokmeonNum (Dpr_UI_PokemonBattleWindow_o* __this, const MethodInfo* method_info);
int32_t Dpr_UI_PokemonBattleWindow__GetSelectedPokemonNum (Dpr_UI_PokemonBattleWindow_o* __this, const MethodInfo* method_info);
Dpr_Battle_Logic_BTL_POKEPARAM_o* Dpr_UI_PokemonBattleWindow__GetSelectedPokeParam (Dpr_UI_PokemonBattleWindow_o* __this, const MethodInfo* method_info);
void Dpr_UI_PokemonBattleWindow__SetSelectPokemonParam (Dpr_UI_PokemonBattleWindow_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* pokeParam, int32_t posType, const MethodInfo* method_info);
int32_t Dpr_UI_PokemonBattleWindow__GetEmptyPositionType (Dpr_UI_PokemonBattleWindow_o* __this, const MethodInfo* method_info);
void Dpr_UI_PokemonBattleWindow__ResetSelectPokemonParam (Dpr_UI_PokemonBattleWindow_o* __this, const MethodInfo* method_info);
System_Collections_Generic_List_ContextMenuItem_Param__o* Dpr_UI_PokemonBattleWindow__GetContextMenuItems (Dpr_UI_PokemonBattleWindow_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* pokeParam, Dpr_UI_PokemonPartyItem_o* partyItem, const MethodInfo* method_info);
bool Dpr_UI_PokemonBattleWindow__IsRecovery (Dpr_UI_PokemonBattleWindow_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* pokeParam, const MethodInfo* method_info);
bool Dpr_UI_PokemonBattleWindow__IsSwapWaitPokemon (Dpr_UI_PokemonBattleWindow_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* param, const MethodInfo* method_info);
void Dpr_UI_PokemonBattleWindow___ctor (Dpr_UI_PokemonBattleWindow_o* __this, const MethodInfo* method_info);
void Dpr_UI_PokemonBattleWindow____n__0 (Dpr_UI_PokemonBattleWindow_o* __this, int32_t prevWindowId, const MethodInfo* method_info);
void Dpr_UI_PokemonBattleWindow___OnUpdate_b__20_0 (Dpr_UI_PokemonBattleWindow_o* __this, UnityEngine_Events_UnityAction_UIWindow__o* onClosed_, const MethodInfo* method_info);
void Dpr_UI_PokemonBattleWindow___PokemonSwap_b__27_1 (Dpr_UI_PokemonBattleWindow_o* __this, UnityEngine_Events_UnityAction_UIWindow__o* onClosed_, const MethodInfo* method_info);
