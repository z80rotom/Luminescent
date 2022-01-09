#pragma once

#include "il2cpp.h"

Dpr_Battle_Logic_Handler_RaidBoss_HandlerGetFunc_o* Dpr_Battle_Logic_Handler_RaidBoss__getHandlerGetFunc (int32_t handlerType, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_o* Dpr_Battle_Logic_Handler_RaidBoss__Add (Dpr_Battle_Logic_EventSystem_o* eventSystem, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, int32_t handlerType, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Handler_RaidBoss__canAdd (Dpr_Battle_Logic_EventSystem_o* eventSystem, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, int32_t handlerType, const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_RaidBoss__Remove (Dpr_Battle_Logic_EventSystem_o* pEventSystem, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, int32_t handlerType, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_RaidBoss__ADD_Reinforce (const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_RaidBoss__handler_Reinforce_Start (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t pokeID, const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_RaidBoss__handler_Reinforce_End (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t pokeID, const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_RaidBoss___cctor (const MethodInfo* method_info);
