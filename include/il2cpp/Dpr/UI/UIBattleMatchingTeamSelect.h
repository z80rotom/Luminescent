#pragma once

#include "il2cpp.h"

bool Dpr_UI_UIBattleMatchingTeamSelect__get_isActiveKeyGuide (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect__set_isActiveKeyGuide (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, bool value, const MethodInfo* method);
bool Dpr_UI_UIBattleMatchingTeamSelect__get_IsServerError (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect__OnCreate (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect__Open (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, System_Action_o* onDecide, System_Action_o* onCancel, bool firstOpen, bool fadeIn, bool cancelFade, int32_t prevWindowId, const MethodInfo* method);
System_Collections_IEnumerator_o* Dpr_UI_UIBattleMatchingTeamSelect__OpOpen (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, int32_t prevWindowId, bool firstOpen, bool fadeIn, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect__OpenTeam (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, System_Action_o* onCancel, int32_t prevWindowId, const MethodInfo* method);
System_Collections_IEnumerator_o* Dpr_UI_UIBattleMatchingTeamSelect__OpOpenTeam (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, int32_t prevWindowId, const MethodInfo* method);
bool Dpr_UI_UIBattleMatchingTeamSelect__CanClose (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect__PreClose (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect__Close (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, bool isCloseCB, const MethodInfo* method);
System_Collections_IEnumerator_o* Dpr_UI_UIBattleMatchingTeamSelect__OpClose (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, bool isCloseCB, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect__OnUpdate (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, float deltaTime, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect__OnUpdateMatchingMenu (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect__OnUpdateClosingUIMenu (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, float deltaTime, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect__SetKeyguide (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, bool backOnly, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect__CloseKeyGuide (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect__SetActiveArrow (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, bool active, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect__RemainingWarningText (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, bool warning, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect__UpdateUITimeText (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, System_String_o* minutes, System_String_o* seconds, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect__OpenBox (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* Dpr_UI_UIBattleMatchingTeamSelect__CloseBox (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect__MoveTeam (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, bool right, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect__SelectTeam (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, int32_t index, const MethodInfo* method);
int32_t Dpr_UI_UIBattleMatchingTeamSelect__GetPrevIndex (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, const MethodInfo* method);
int32_t Dpr_UI_UIBattleMatchingTeamSelect__GetNextIndex (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect__SetTeam (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, const MethodInfo* method);
Pml_PokePara_PokemonParam_array* Dpr_UI_UIBattleMatchingTeamSelect__GetPokemonParams (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, int32_t index, const MethodInfo* method);
System_Boolean_array* Dpr_UI_UIBattleMatchingTeamSelect__GetRegulations (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, Pml_PokePara_PokemonParam_array* pokemonParams, const MethodInfo* method);
int32_t Dpr_UI_UIBattleMatchingTeamSelect__GetRegulation (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, Pml_PokePara_PokemonParam_array* pokemonParams, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect__GetRegulation (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, Pml_PokePara_PokemonParam_array* pokemonParams, System_Collections_Generic_List_MonsNo__o** monsNoList, System_Collections_Generic_List_ItemNo__o** itemNoList, const MethodInfo* method);
bool Dpr_UI_UIBattleMatchingTeamSelect__IsRegulationEmpty (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, Pml_PokePara_PokemonParam_array* pokemonParams, const MethodInfo* method);
bool Dpr_UI_UIBattleMatchingTeamSelect__IsRegulationNotEnoughNum (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, Pml_PokePara_PokemonParam_array* pokemonParams, const MethodInfo* method);
bool Dpr_UI_UIBattleMatchingTeamSelect__IsRegulationLegend (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, int32_t monsNo, const MethodInfo* method);
bool Dpr_UI_UIBattleMatchingTeamSelect__IsRegulationSamePokemon (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, System_Collections_Generic_List_MonsNo__o* monsNoList, int32_t monsNo, const MethodInfo* method);
bool Dpr_UI_UIBattleMatchingTeamSelect__IsRegulationSameItem (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, System_Collections_Generic_List_ItemNo__o* itemNoList, uint16_t itemNo, const MethodInfo* method);
bool Dpr_UI_UIBattleMatchingTeamSelect__IsRegulationIllegal (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, uint32_t id, const MethodInfo* method);
System_Collections_IEnumerator_o* Dpr_UI_UIBattleMatchingTeamSelect__CheckIllegal (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, System_Action_o* onFinish, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect__DecideTeam (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, const MethodInfo* method);
Pml_PokePara_PokemonParam_array* Dpr_UI_UIBattleMatchingTeamSelect__CreateModifyLevelParty (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, Pml_PokePara_PokemonParam_array** pokemonParams, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect__Decide (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect__Back (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect__ShowDefaultMessageWindow (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, bool firstOpen, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect__ShowInputCloseMessageWindow (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, System_String_o* msbt, System_String_o* label, System_Action_o* onCloseed, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect__ShowConfirmYesNoMsg (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, System_String_o* message, System_Action_o* onSelectYes, System_Action_o* onSelectNo, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect__CloseMessageWindow (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect__OpenContextMenu (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, System_String_array* contextLabels, System_Action_int__o* onSelect, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect__CloseContextMenu (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect___ctor (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect____n__0 (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, int32_t prevWindowId, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect___OnUpdateClosingUIMenu_b__36_1 (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, Dpr_UI_UIWindow_o* window, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect___OpenBox_b__42_0 (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, Dpr_UI_UIWindow_o* __, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect___CloseBox_b__43_0 (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, const MethodInfo* method);
void Dpr_UI_UIBattleMatchingTeamSelect___ShowDefaultMessageWindow_b__64_0 (Dpr_UI_UIBattleMatchingTeamSelect_o* __this, const MethodInfo* method);
