#pragma once

#include "il2cpp.h"

uint16_t Dpr_Battle_Logic_AffCounter__GetVoid (Dpr_Battle_Logic_AffCounter_o* __this, const MethodInfo* method);
uint16_t Dpr_Battle_Logic_AffCounter__GetAdvantage (Dpr_Battle_Logic_AffCounter_o* __this, const MethodInfo* method);
uint16_t Dpr_Battle_Logic_AffCounter__GetDisadvantage (Dpr_Battle_Logic_AffCounter_o* __this, const MethodInfo* method);
uint16_t Dpr_Battle_Logic_AffCounter__GetRecvVoid (Dpr_Battle_Logic_AffCounter_o* __this, const MethodInfo* method);
uint16_t Dpr_Battle_Logic_AffCounter__GetRecvAdvantage (Dpr_Battle_Logic_AffCounter_o* __this, const MethodInfo* method);
uint16_t Dpr_Battle_Logic_AffCounter__GetRecvDisadvantage (Dpr_Battle_Logic_AffCounter_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_AffCounter___ctor (Dpr_Battle_Logic_AffCounter_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_AffCounter__CopyFrom (Dpr_Battle_Logic_AffCounter_o* __this, Dpr_Battle_Logic_AffCounter_o** src, const MethodInfo* method);
void Dpr_Battle_Logic_AffCounter__Clear (Dpr_Battle_Logic_AffCounter_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_AffCounter__CountUp (Dpr_Battle_Logic_AffCounter_o* __this, Dpr_Battle_Logic_MainModule_o** mainModule, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* defender, int32_t affinity, const MethodInfo* method);
void Dpr_Battle_Logic_AffCounter__CountUp_Core (Dpr_Battle_Logic_AffCounter_o* __this, uint16_t* pCnt, const MethodInfo* method);
