#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_UseItem___ctor (Dpr_Battle_Logic_Section_UseItem_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method);
void Dpr_Battle_Logic_Section_UseItem__Execute (Dpr_Battle_Logic_Section_UseItem_o* __this, Dpr_Battle_Logic_Section_UseItem_Result_o* pResult, Dpr_Battle_Logic_Section_UseItem_Description_o** description, const MethodInfo* method);
void Dpr_Battle_Logic_Section_UseItem__useItemCore (Dpr_Battle_Logic_Section_UseItem_o* __this, uint8_t* pUseResult, bool* pIsConsumed, bool* pIsUsedBall, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, uint16_t itemID, uint8_t actParam, uint8_t targetPokeID, Dpr_Battle_Logic_POKE_CAPTURED_CONTEXT_o* capContext, const MethodInfo* method);
bool Dpr_Battle_Logic_Section_UseItem__expGetByCaptured (Dpr_Battle_Logic_Section_UseItem_o* __this, uint8_t userClientID, uint8_t capturedPos, const MethodInfo* method);
void Dpr_Battle_Logic_Section_UseItem__putFurimukiCommand (Dpr_Battle_Logic_Section_UseItem_o* __this, uint8_t playerClientID, const MethodInfo* method);
bool Dpr_Battle_Logic_Section_UseItem__getExp (Dpr_Battle_Logic_Section_UseItem_o* __this, Dpr_Battle_Logic_BTL_PARTY_o* pParty, Dpr_Battle_Logic_ExpCalculator_CalcExpContainer_o* pExpContainer, const MethodInfo* method);
void Dpr_Battle_Logic_Section_UseItem__putCapturedCommand (Dpr_Battle_Logic_Section_UseItem_o* __this, Dpr_Battle_Logic_POKE_CAPTURED_CONTEXT_o** context, const MethodInfo* method);
void Dpr_Battle_Logic_Section_UseItem__updateZukanData (Dpr_Battle_Logic_Section_UseItem_o* __this, Dpr_Battle_Logic_POKE_CAPTURED_CONTEXT_o** context, const MethodInfo* method);
bool Dpr_Battle_Logic_Section_UseItem__escape (Dpr_Battle_Logic_Section_UseItem_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* escapePoke, const MethodInfo* method);
