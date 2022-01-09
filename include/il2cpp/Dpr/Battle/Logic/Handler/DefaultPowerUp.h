#pragma once

#include "il2cpp.h"

Dpr_Battle_Logic_Handler_DefaultPowerUp_HandlerGetFunc_o* Dpr_Battle_Logic_Handler_DefaultPowerUp__getHandlerGetFunc (int32_t powerUpReason, const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_DefaultPowerUp__removeFactorForce (Dpr_Battle_Logic_EventSystem_o* pEventSystem, uint8_t pokeId, int32_t powerUpReason, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Handler_DefaultPowerUp__Add (Dpr_Battle_Logic_EventSystem_o* pEventSystem, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_DefaultPowerUp__Remove (Dpr_Battle_Logic_EventSystem_o* pEventSystem, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_DefaultPowerUp__ADD_Nusi (const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_DefaultPowerUp__handler_Nusi_MemberIn (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t pokeID, const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_DefaultPowerUp___cctor (const MethodInfo* method_info);
