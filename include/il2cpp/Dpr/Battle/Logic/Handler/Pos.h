#pragma once

#include "il2cpp.h"

Dpr_Battle_Logic_EventFactor_o* Dpr_Battle_Logic_Handler_Pos__getEventFactor (Dpr_Battle_Logic_EventSystem_o* pEventSystem, int32_t effect, uint8_t pokePos, const MethodInfo* method);
bool Dpr_Battle_Logic_Handler_Pos__isRegistable (Dpr_Battle_Logic_EventSystem_o* pEventSystem, int32_t effect, uint8_t pokePos, const MethodInfo* method);
Dpr_Battle_Logic_Handler_Pos_HandlerGetFunc_o* Dpr_Battle_Logic_Handler_Pos__getHandlerGetFunc (int32_t effect, const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Pos__Add (Dpr_Battle_Logic_EventSystem_o* pEventSystem, int32_t effect, uint8_t pos, uint8_t pokeID, System_Int32_array* param, uint8_t param_cnt, const MethodInfo* method);
bool Dpr_Battle_Logic_Handler_Pos__Remove (Dpr_Battle_Logic_EventSystem_o* pEventSystem, int32_t eff, uint8_t pos, const MethodInfo* method);
bool Dpr_Battle_Logic_Handler_Pos__IsRegistered (Dpr_Battle_Logic_EventSystem_o* pEventSystem, int32_t eff, uint8_t pos, const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Pos__common_removePosEffect (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t myPos, const MethodInfo* method);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Pos__ADD_Negaigoto (const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Pos__handler_pos_Negaigoto (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t pokePos, const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Pos__negaigoto_recoverHP (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t btlPokePos, const MethodInfo* method);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Pos__ADD_MikadukiNoMai (const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Pos__handler_pos_MikadukiNoMai (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t pokePos, const MethodInfo* method);
bool Dpr_Battle_Logic_Handler_Pos__mikadukiNoMai_check (Dpr_Battle_Logic_BTL_POKEPARAM_o* bpp, const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Pos__mikadukiNoMai_recover (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t pokeID, Dpr_Battle_Logic_BTL_POKEPARAM_o* bpp, uint8_t btlPokePos, const MethodInfo* method);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Pos__ADD_IyasiNoNegai (const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Pos__handler_pos_IyasiNoNegai (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t pokePos, const MethodInfo* method);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Pos__ADD_DelayAttack (const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Pos__handler_pos_DelayAttack (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t pokePos, const MethodInfo* method);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Pos__ADD_BatonTouch (const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Pos__handler_pos_BatonTouch (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t pokePos, const MethodInfo* method);
void Dpr_Battle_Logic_Handler_Pos___cctor (const MethodInfo* method);
