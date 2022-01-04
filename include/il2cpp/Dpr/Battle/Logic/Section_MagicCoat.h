#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_MagicCoat___ctor (Dpr_Battle_Logic_Section_MagicCoat_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method);
void Dpr_Battle_Logic_Section_MagicCoat__Execute (Dpr_Battle_Logic_Section_MagicCoat_o* __this, Dpr_Battle_Logic_Section_MagicCoat_Result_o* pResult, Dpr_Battle_Logic_Section_MagicCoat_Description_o** description, const MethodInfo* method);
void Dpr_Battle_Logic_Section_MagicCoat__executeMagicCoat (Dpr_Battle_Logic_Section_MagicCoat_o* __this, uint8_t robPokeID, uint8_t targetPokeID, uint8_t targetPos, int32_t waza, const MethodInfo* method);
void Dpr_Battle_Logic_Section_MagicCoat__event_WazaReflect (Dpr_Battle_Logic_Section_MagicCoat_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* robPoke, Dpr_Battle_Logic_BTL_POKEPARAM_o* targetPoke, int32_t waza, const MethodInfo* method);
void Dpr_Battle_Logic_Section_MagicCoat__getWazaParam (Dpr_Battle_Logic_Section_MagicCoat_o* __this, Dpr_Battle_Logic_WazaParam_o* wazaParam, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, int32_t waza, const MethodInfo* method);
void Dpr_Battle_Logic_Section_MagicCoat__registerTarget (Dpr_Battle_Logic_Section_MagicCoat_o* __this, Dpr_Battle_Logic_PokeSet_o* pokeSet, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_WazaParam_o* wazaParam, uint8_t targetPos, const MethodInfo* method);
void Dpr_Battle_Logic_Section_MagicCoat__wazaExec (Dpr_Battle_Logic_Section_MagicCoat_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_WazaParam_o* wazaParam, Dpr_Battle_Logic_PokeSet_o* targets, const MethodInfo* method);
