#pragma once

#include "il2cpp.h"

Dpr_Battle_Logic_Handler_Field_HandlerGetFunc_o* Dpr_Battle_Logic_Handler_Field__getHandlerGetFunc (int32_t effect, const MethodInfo* method);
bool Dpr_Battle_Logic_Handler_Field__Add (Dpr_Battle_Logic_EventSystem_o* pEventSystem, int32_t effect, uint8_t subParam, const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Field__Remove (Dpr_Battle_Logic_EventSystem_o* pEventSystem, int32_t effect, const MethodInfo* method);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Field__ADD_Fld_Weather (uint8_t sub_param, const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Field__handler_fld_Weather (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t subParam, const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Field__handler_ooame_CheckExe (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t subParam, const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Field__handler_oohideri_CheckExe (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t subParam, const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Field__handler_rankiryuu_CheckAff (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t subParam, const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Field__handler_rankiryuu_AfterDamage (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t subParam, const MethodInfo* method);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Field__ADD_Fld_TrickRoom (uint8_t sub_param, const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Field__handler_fld_TrickRoom (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t subParam, const MethodInfo* method);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Field__ADD_Fld_Juryoku (uint8_t sub_param, const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Field__handler_fld_Jyuryoku_AdjustDmg (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t subParam, const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Field__handler_fld_Jyuryoku_CheckAff (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t subParam, const MethodInfo* method);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Field__ADD_Fld_Sawagu (uint8_t sub_param, const MethodInfo* method);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Field__ADD_Fld_WonderRoom (uint8_t sub_param, const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Field__handler_fld_WonderRoom (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t subParam, const MethodInfo* method);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Field__ADD_Fld_Fuin (uint8_t sub_param, const MethodInfo* method);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Field__ADD_Fld_MagicRoom (uint8_t sub_param, const MethodInfo* method);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Field__ADD_Fld_FairyLock (uint8_t sub_param, const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Field__handler_fld_dummy (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t subParam, const MethodInfo* method);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Field__ADD_Fld_PlasmaShower (uint8_t sub_param, const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Field__handler_plasma_shower (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t subParam, const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Field__handler_plasmaShower_ChangeGWaza (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t subParam, const MethodInfo* method);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Field__ADD_Fld_KagakuhenkaGas (uint8_t sub_param, const MethodInfo* method);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Field__ADD_Fld_Ground (uint8_t sub_param, const MethodInfo* method);
bool Dpr_Battle_Logic_Handler_Field__common_isGroundEffective (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t pokeID, const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Field__handler_grass_power (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t subParam, const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Field__handler_grass_turncheck (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t subParam, const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Field__handler_mist_power (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t subParam, const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Field__handler_mist_checkFail (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t subParam, const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Field__handler_mist_sickFailed (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t subParam, const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Field__handler_elec_power (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t subParam, const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Field__handler_elec_checkFail (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t subParam, const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Field__handler_elec_sickFailed (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t subParam, const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Field__common_field_sickGuardSucceed (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, int32_t pokeContFlag, uint16_t strID, const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Field__handler_phycho_power (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t subParam, const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Field__handler_phycho_noEffectCheck (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t subParam, const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Field___cctor (const MethodInfo* method);
