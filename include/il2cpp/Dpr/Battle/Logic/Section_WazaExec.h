#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_WazaExec___ctor (Dpr_Battle_Logic_Section_WazaExec_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_WazaExec__Execute (Dpr_Battle_Logic_Section_WazaExec_o* __this, Dpr_Battle_Logic_Section_WazaExec_Result_o* pResult, Dpr_Battle_Logic_Section_WazaExec_Description_o** description, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_WazaExec__updateWazaExecRecord (Dpr_Battle_Logic_Section_WazaExec_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, int32_t waza, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_Section_WazaExec__execTameWaza (Dpr_Battle_Logic_Section_WazaExec_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_WazaParam_o* wazaParam, Dpr_Battle_Logic_PokeSet_o* taragets, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_WazaExec__section_CheckWazaInvalid (Dpr_Battle_Logic_Section_WazaExec_o* __this, bool* pIsWazaValid, Dpr_Battle_Logic_DmgAffRec_o* pAffinityRecorder, Dpr_Battle_Logic_BTL_POKEPARAM_o* pAttacker, Dpr_Battle_Logic_WazaParam_o* pWazaParam, Dpr_Battle_Logic_ActionDesc_o* actionDesc, Dpr_Battle_Logic_PokeSet_o* pTaragets, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_WazaExec__section_WazaExecCategory (Dpr_Battle_Logic_Section_WazaExec_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* pAttacker, Dpr_Battle_Logic_ActionDesc_o* actionDesc, Dpr_Battle_Logic_WazaParam_o* pWazaParam, Dpr_Battle_Logic_DmgAffRec_o* pAffinityRecorder, Dpr_Battle_Logic_PokeSet_o* pTaragets, bool isDamageWaza, int32_t wazaCategory, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_WazaExec__section_WazaExecedEffect (Dpr_Battle_Logic_Section_WazaExec_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* pAttacker, Dpr_Battle_Logic_WazaParam_o* pWazaParam, Dpr_Battle_Logic_ActionDesc_o* pActionDesc, Dpr_Battle_Logic_WazaEffectReservedPos_o* pQueReservePos, bool isWazaValid, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_WazaExec__event_WazaExeDone (Dpr_Battle_Logic_Section_WazaExec_o* __this, uint8_t pokeID, int32_t waza, Dpr_Battle_Logic_ActionDesc_o* actionDesc, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_WazaExec__incWazaUsedCount (Dpr_Battle_Logic_Section_WazaExec_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* pAttacker, int32_t wazano, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_WazaExec__checkPokeDead (Dpr_Battle_Logic_Section_WazaExec_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, const MethodInfo* method_info);
