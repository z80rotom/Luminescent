#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_FromEvent_Damage___ctor (Dpr_Battle_Logic_Section_FromEvent_Damage_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_FromEvent_Damage__Execute (Dpr_Battle_Logic_Section_FromEvent_Damage_o* __this, Dpr_Battle_Logic_Section_FromEvent_Damage_Result_o* result, Dpr_Battle_Logic_Section_FromEvent_Damage_Description_o** description, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_FromEvent_Damage__isDamageEnable (Dpr_Battle_Logic_Section_FromEvent_Damage_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, uint32_t damage, uint8_t damageCause, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_FromEvent_Damage__viewEffect (Dpr_Battle_Logic_Section_FromEvent_Damage_o* __this, uint16_t effectNo, uint8_t effectPos_from, uint8_t effectPos_to, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_FromEvent_Damage__addDamage (Dpr_Battle_Logic_Section_FromEvent_Damage_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, uint32_t damage, uint8_t damageCause, uint8_t damageCausePokeID, Dpr_Battle_Logic_StrParam_o** message, bool doDeadProcess, const MethodInfo* method_info);
