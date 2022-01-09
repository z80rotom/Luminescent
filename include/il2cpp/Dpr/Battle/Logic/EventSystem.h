#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_EventSystem___ctor (Dpr_Battle_Logic_EventSystem_o* __this, Dpr_Battle_Logic_EventSystem_SetupParam_o** param, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventSystem__Initialize (Dpr_Battle_Logic_EventSystem_o* __this, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactorContainer_o* Dpr_Battle_Logic_EventSystem__GetFactorContainer (Dpr_Battle_Logic_EventSystem_o* __this, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_o* Dpr_Battle_Logic_EventSystem__AddFactor (Dpr_Battle_Logic_EventSystem_o* __this, uint8_t factorType, uint16_t subID, uint8_t mainPri, uint32_t subPri, uint8_t dependID, Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* handlerTable, uint8_t handlerNum, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventSystem__RemoveFactor (Dpr_Battle_Logic_EventSystem_o* __this, Dpr_Battle_Logic_EventFactor_o* pFactor, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventSystem__RemoveIsolateFactors (Dpr_Battle_Logic_EventSystem_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventSystem__SleepFactors (Dpr_Battle_Logic_EventSystem_o* __this, uint16_t pokeID, uint8_t factorType, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventSystem__WakeFactors (Dpr_Battle_Logic_EventSystem_o* __this, uint16_t pokeID, uint8_t factorType, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventSystem__WakeAllFactors (Dpr_Battle_Logic_EventSystem_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventSystem__CallEvent (Dpr_Battle_Logic_EventSystem_o* __this, uint16_t eventID, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventSystem__CallEvent_Force (Dpr_Battle_Logic_EventSystem_o* __this, uint16_t eventID, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventSystem__CallEvent_TargetType (Dpr_Battle_Logic_EventSystem_o* __this, uint16_t eventID, uint8_t type, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventSystem__callEventCore (Dpr_Battle_Logic_EventSystem_o* __this, uint16_t eventID, uint8_t targetFactorType, bool isSkipCheckEnable, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventSystem__notifyHandlers (Dpr_Battle_Logic_EventSystem_o* __this, uint16_t eventID, uint8_t targetFactorType, bool isSkipCheckEnable, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_o* Dpr_Battle_Logic_EventSystem__nofityHandler (Dpr_Battle_Logic_EventSystem_o* __this, uint16_t eventID, uint8_t targetFactorType, bool isSkipCheckEnable, Dpr_Battle_Logic_EventFactor_o* factor, const MethodInfo* method_info);
bool Dpr_Battle_Logic_EventSystem__checkHandlerSkip (Dpr_Battle_Logic_EventSystem_o* __this, Dpr_Battle_Logic_EventFactor_o* factor, uint16_t eventID, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_o* Dpr_Battle_Logic_EventSystem__getFirstFactor (Dpr_Battle_Logic_EventSystem_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventSystem__EVENTVAR_Push (Dpr_Battle_Logic_EventSystem_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventSystem__EVENTVAR_Pop (Dpr_Battle_Logic_EventSystem_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventSystem__EVENTVAR_CheckStackCleared (Dpr_Battle_Logic_EventSystem_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventSystem__EVENTVAR_SetValue (Dpr_Battle_Logic_EventSystem_o* __this, uint16_t label, int32_t value, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventSystem__EVENTVAR_SetConstValue (Dpr_Battle_Logic_EventSystem_o* __this, uint16_t label, int32_t value, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventSystem__EVENTVAR_SetRewriteOnceValue (Dpr_Battle_Logic_EventSystem_o* __this, uint16_t label, int32_t value, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventSystem__EVENTVAR_RecoveryRewriteOncePermission (Dpr_Battle_Logic_EventSystem_o* __this, uint16_t label, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventSystem__EVENTVAR_SetMulValue (Dpr_Battle_Logic_EventSystem_o* __this, uint16_t label, int32_t value, int32_t mulMin, int32_t mulMax, const MethodInfo* method_info);
bool Dpr_Battle_Logic_EventSystem__EVENTVAR_RewriteValue (Dpr_Battle_Logic_EventSystem_o* __this, uint16_t label, int32_t value, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventSystem__EVENTVAR_MulValue (Dpr_Battle_Logic_EventSystem_o* __this, uint16_t label, int32_t value, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_EventSystem__EVENTVAR_GetValue (Dpr_Battle_Logic_EventSystem_o* __this, uint16_t label, const MethodInfo* method_info);
bool Dpr_Battle_Logic_EventSystem__EVENTVAR_GetValueIfExist (Dpr_Battle_Logic_EventSystem_o* __this, uint16_t label, int32_t* pValue, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventSystem__EVENTVAR_SetWorkAddress (Dpr_Battle_Logic_EventSystem_o* __this, uint16_t label, Il2CppObject* p, const MethodInfo* method_info);
Il2CppObject* Dpr_Battle_Logic_EventSystem__EVENTVAR_GetWorkAddress (Dpr_Battle_Logic_EventSystem_o* __this, uint16_t label, const MethodInfo* method_info);
