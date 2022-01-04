#pragma once

#include "il2cpp.h"

uint32_t Dpr_Battle_Logic_ActPri__GetShiftWidthByMask (uint32_t mask, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_ActPri__MakeBitFlag (uint32_t value, uint32_t mask, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_ActPri__GetMaskedValue (uint32_t value, uint32_t mask, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_ActPri__SetMaskedValue (uint32_t oldValue, uint32_t mask, uint32_t setValue, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_ActPri__Make (uint8_t dominantPri, uint8_t operationPri, uint8_t wazaPri, uint8_t spPri, uint16_t agility, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_ActPri__ChangeAgility (uint32_t priority, uint16_t agility, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_ActPri__ChangeWazaPriority (uint32_t priority, uint8_t wazaPri, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_ActPri__GetWazaPri (uint32_t priority, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_ActPri__GetSpPri (uint32_t priority, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_ActPri__GetOperationPri (uint32_t priority, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_ActPri__GetDominantPri (uint32_t priority, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_ActPri__SetDominantPri (uint32_t priority, uint8_t dominantPri, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_ActPri__SetSpPri (uint32_t priority, uint8_t spPri, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_ActPri__ToHandlerPri (uint32_t priority, const MethodInfo* method);
int32_t Dpr_Battle_Logic_ActPri__ToWazaOrgPri (uint32_t priority, const MethodInfo* method);
