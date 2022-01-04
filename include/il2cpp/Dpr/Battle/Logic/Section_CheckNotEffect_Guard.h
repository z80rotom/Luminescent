#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_CheckNotEffect_Guard___ctor (Dpr_Battle_Logic_Section_CheckNotEffect_Guard_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method);
void Dpr_Battle_Logic_Section_CheckNotEffect_Guard__Execute (Dpr_Battle_Logic_Section_CheckNotEffect_Guard_o* __this, Dpr_Battle_Logic_Section_CheckNotEffect_Guard_Result_o* pResult, Dpr_Battle_Logic_Section_CheckNotEffect_Guard_Description_o** description, const MethodInfo* method);
void Dpr_Battle_Logic_Section_CheckNotEffect_Guard__check_Field (Dpr_Battle_Logic_Section_CheckNotEffect_Guard_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_WazaParam_o* wazaParam, Dpr_Battle_Logic_DmgAffRec_o* affinityRecorder, Dpr_Battle_Logic_PokeSet_o* targets, const MethodInfo* method);
void Dpr_Battle_Logic_Section_CheckNotEffect_Guard__check_Side (Dpr_Battle_Logic_Section_CheckNotEffect_Guard_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_WazaParam_o* wazaParam, Dpr_Battle_Logic_DmgAffRec_o* affinityRecorder, Dpr_Battle_Logic_PokeSet_o* targets, const MethodInfo* method);
void Dpr_Battle_Logic_Section_CheckNotEffect_Guard__check_Mamoru (Dpr_Battle_Logic_Section_CheckNotEffect_Guard_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_WazaParam_o* wazaParam, Dpr_Battle_Logic_DmgAffRec_o* affinityRecorder, Dpr_Battle_Logic_PokeSet_o* targets, const MethodInfo* method);
bool Dpr_Battle_Logic_Section_CheckNotEffect_Guard__isNoEffectByMamoru (Dpr_Battle_Logic_Section_CheckNotEffect_Guard_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, Dpr_Battle_Logic_WazaParam_o* wazaParam, Dpr_Battle_Logic_DmgAffRec_o* affinityRecorder, const MethodInfo* method);
bool Dpr_Battle_Logic_Section_CheckNotEffect_Guard__isNoEffectByMamoru_Others (Dpr_Battle_Logic_Section_CheckNotEffect_Guard_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, Dpr_Battle_Logic_WazaParam_o* wazaParam, Dpr_Battle_Logic_DmgAffRec_o* affinityRecorder, const MethodInfo* method);
void Dpr_Battle_Logic_Section_CheckNotEffect_Guard__onMamoruSuccess (Dpr_Battle_Logic_Section_CheckNotEffect_Guard_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, Dpr_Battle_Logic_WazaParam_o* wazaParam, const MethodInfo* method);
void Dpr_Battle_Logic_Section_CheckNotEffect_Guard__check_Others (Dpr_Battle_Logic_Section_CheckNotEffect_Guard_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_WazaParam_o* wazaParam, Dpr_Battle_Logic_DmgAffRec_o* affinityRecorder, Dpr_Battle_Logic_PokeSet_o* targets, const MethodInfo* method);
