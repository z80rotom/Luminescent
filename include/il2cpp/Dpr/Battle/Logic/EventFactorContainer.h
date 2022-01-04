#pragma once

#include "il2cpp.h"

uint32_t Dpr_Battle_Logic_EventFactorContainer__calcFactorPriority (uint8_t mainPri, uint32_t subPri, const MethodInfo* method);
bool Dpr_Battle_Logic_EventFactorContainer__isDependPokeFactorType (uint8_t factorType, const MethodInfo* method);
void Dpr_Battle_Logic_EventFactorContainer___ctor (Dpr_Battle_Logic_EventFactorContainer_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_EventFactorContainer__createFactors (Dpr_Battle_Logic_EventFactorContainer_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_EventFactorContainer__storeAllFactors (Dpr_Battle_Logic_EventFactorContainer_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_EventFactorContainer__CopyFrom (Dpr_Battle_Logic_EventFactorContainer_o* __this, Dpr_Battle_Logic_EventFactorContainer_o** src, const MethodInfo* method);
Dpr_Battle_Logic_EventFactor_o* Dpr_Battle_Logic_EventFactorContainer__getFactor (Dpr_Battle_Logic_EventFactorContainer_o* __this, uint16_t instanceID, const MethodInfo* method);
void Dpr_Battle_Logic_EventFactorContainer__Clear (Dpr_Battle_Logic_EventFactorContainer_o* __this, const MethodInfo* method);
Dpr_Battle_Logic_EventFactor_o* Dpr_Battle_Logic_EventFactorContainer__AddFactor (Dpr_Battle_Logic_EventFactorContainer_o* __this, uint8_t factorType, uint16_t subID, uint8_t mainPri, uint32_t subPri, uint8_t dependID, Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* handlerTable, uint8_t handlerNum, uint16_t eventLevel, const MethodInfo* method);
void Dpr_Battle_Logic_EventFactorContainer__RemoveFactor (Dpr_Battle_Logic_EventFactorContainer_o* __this, Dpr_Battle_Logic_EventFactor_o* pFactor, const MethodInfo* method);
Dpr_Battle_Logic_EventFactor_o* Dpr_Battle_Logic_EventFactorContainer__GetFirstFactor (Dpr_Battle_Logic_EventFactorContainer_o* __this, const MethodInfo* method);
Dpr_Battle_Logic_EventFactor_o* Dpr_Battle_Logic_EventFactorContainer__SeekFactor (Dpr_Battle_Logic_EventFactorContainer_o* __this, uint8_t factorType, const MethodInfo* method);
Dpr_Battle_Logic_EventFactor_o* Dpr_Battle_Logic_EventFactorContainer__SeekFactor (Dpr_Battle_Logic_EventFactorContainer_o* __this, uint8_t factorType, uint8_t dependID, const MethodInfo* method);
Dpr_Battle_Logic_EventFactor_o* Dpr_Battle_Logic_EventFactorContainer__GetNextFactor (Dpr_Battle_Logic_EventFactorContainer_o* __this, Dpr_Battle_Logic_EventFactor_o* pFactor, bool isSkipDependIDCheck, const MethodInfo* method);
void Dpr_Battle_Logic_EventFactorContainer__storeFactor (Dpr_Battle_Logic_EventFactorContainer_o* __this, Dpr_Battle_Logic_EventFactor_o* pFactor, const MethodInfo* method);
void Dpr_Battle_Logic_EventFactorContainer__storeAllRunningFactor (Dpr_Battle_Logic_EventFactorContainer_o* __this, const MethodInfo* method);
Dpr_Battle_Logic_EventFactor_o* Dpr_Battle_Logic_EventFactorContainer__pickStoredFactor (Dpr_Battle_Logic_EventFactorContainer_o* __this, int32_t instanceID, const MethodInfo* method);
void Dpr_Battle_Logic_EventFactorContainer__addRunningFactor (Dpr_Battle_Logic_EventFactorContainer_o* __this, Dpr_Battle_Logic_EventFactor_o* pNewFactor, const MethodInfo* method);
bool Dpr_Battle_Logic_EventFactorContainer__SwapFactorsSideEffect (Dpr_Battle_Logic_EventFactorContainer_o* __this, int32_t side1, int32_t side2, int32_t effect, const MethodInfo* method);
