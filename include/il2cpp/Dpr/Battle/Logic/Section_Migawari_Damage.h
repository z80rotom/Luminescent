#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_Migawari_Damage___ctor (Dpr_Battle_Logic_Section_Migawari_Damage_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method);
void Dpr_Battle_Logic_Section_Migawari_Damage__Execute (Dpr_Battle_Logic_Section_Migawari_Damage_o* __this, Dpr_Battle_Logic_Section_Migawari_Damage_Result_o* pResult, Dpr_Battle_Logic_Section_Migawari_Damage_Description_o** description, const MethodInfo* method);
void Dpr_Battle_Logic_Section_Migawari_Damage__putDamageEffect (Dpr_Battle_Logic_Section_Migawari_Damage_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, Dpr_Battle_Logic_WazaParam_o** wazaParam, uint16_t damage, int32_t affinity, int32_t criticalType, const MethodInfo* method);
void Dpr_Battle_Logic_Section_Migawari_Damage__putCricicalMessage (Dpr_Battle_Logic_Section_Migawari_Damage_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, Dpr_Battle_Logic_WazaParam_o* wazaParam, int32_t* criticalType, const MethodInfo* method);
uint16_t Dpr_Battle_Logic_Section_Migawari_Damage__addDamage (Dpr_Battle_Logic_Section_Migawari_Damage_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, uint16_t damage, const MethodInfo* method);
void Dpr_Battle_Logic_Section_Migawari_Damage__deleteMigawari (Dpr_Battle_Logic_Section_Migawari_Damage_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, const MethodInfo* method);
void Dpr_Battle_Logic_Section_Migawari_Damage__drainHP (Dpr_Battle_Logic_Section_Migawari_Damage_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, Dpr_Battle_Logic_WazaParam_o* wazaParam, uint16_t damage, const MethodInfo* method);
void Dpr_Battle_Logic_Section_Migawari_Damage__additionalEffect (Dpr_Battle_Logic_Section_Migawari_Damage_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, Dpr_Battle_Logic_WazaParam_o* wazaParam, Dpr_Battle_Logic_ActionDesc_o* actionDesc, uint16_t damage, const MethodInfo* method);
void Dpr_Battle_Logic_Section_Migawari_Damage__additionalEffect_User (Dpr_Battle_Logic_Section_Migawari_Damage_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_WazaParam_o* wazaParam, Dpr_Battle_Logic_ActionDesc_o* actionDesc, const MethodInfo* method);
void Dpr_Battle_Logic_Section_Migawari_Damage__damageReaction (Dpr_Battle_Logic_Section_Migawari_Damage_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, Dpr_Battle_Logic_WazaParam_o* wazaParam, int32_t affinity, uint16_t damage, int32_t criticalType, const MethodInfo* method);
