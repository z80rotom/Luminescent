#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_BTL_ACTION__SetFightParam (Dpr_Battle_Logic_BTL_ACTION_PARAM_o* p, uint8_t pokeID, int32_t waza, uint8_t targetPos, bool forbidGWaza, bool forceGWaza, const MethodInfo* method_info);
void Dpr_Battle_Logic_BTL_ACTION__ChangeFightTargetPos (Dpr_Battle_Logic_BTL_ACTION_PARAM_o* p, uint8_t nextTargetPos, const MethodInfo* method_info);
void Dpr_Battle_Logic_BTL_ACTION__FightParamToWazaInfoMode (Dpr_Battle_Logic_BTL_ACTION_PARAM_o* p, const MethodInfo* method_info);
bool Dpr_Battle_Logic_BTL_ACTION__IsWazaInfoMode (Dpr_Battle_Logic_BTL_ACTION_PARAM_o* p, const MethodInfo* method_info);
bool Dpr_Battle_Logic_BTL_ACTION__IsFight (Dpr_Battle_Logic_BTL_ACTION_PARAM_o* p, const MethodInfo* method_info);
bool Dpr_Battle_Logic_BTL_ACTION__IsFightWithG (Dpr_Battle_Logic_BTL_ACTION_PARAM_o* p, const MethodInfo* method_info);
bool Dpr_Battle_Logic_BTL_ACTION__IsGStart (Dpr_Battle_Logic_BTL_ACTION_PARAM_o* p, const MethodInfo* method_info);
bool Dpr_Battle_Logic_BTL_ACTION__IsItem (Dpr_Battle_Logic_BTL_ACTION_PARAM_o* p, const MethodInfo* method_info);
bool Dpr_Battle_Logic_BTL_ACTION__IsCheer (Dpr_Battle_Logic_BTL_ACTION_PARAM_o* p, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_BTL_ACTION__GetWazaID (Dpr_Battle_Logic_BTL_ACTION_PARAM_o* act, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_BTL_ACTION__GetWazaTargetPos (Dpr_Battle_Logic_BTL_ACTION_PARAM_o* act, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_BTL_ACTION__GetOriginalWazaID (Dpr_Battle_Logic_BTL_ACTION_PARAM_o* act, const MethodInfo* method_info);
void Dpr_Battle_Logic_BTL_ACTION__SetItemParam (Dpr_Battle_Logic_BTL_ACTION_PARAM_o* p, uint8_t pokeID, uint16_t itemNumber, uint8_t targetID, uint8_t wazaIdx, const MethodInfo* method_info);
void Dpr_Battle_Logic_BTL_ACTION__SetChangeParam (Dpr_Battle_Logic_BTL_ACTION_PARAM_o* p, uint8_t posIdx, uint8_t memberIdx, const MethodInfo* method_info);
void Dpr_Battle_Logic_BTL_ACTION__SetChangeDepleteParam (Dpr_Battle_Logic_BTL_ACTION_PARAM_o* p, const MethodInfo* method_info);
bool Dpr_Battle_Logic_BTL_ACTION__IsDeplete (Dpr_Battle_Logic_BTL_ACTION_PARAM_o* p, const MethodInfo* method_info);
void Dpr_Battle_Logic_BTL_ACTION__SetEscapeParam (Dpr_Battle_Logic_BTL_ACTION_PARAM_o* p, uint8_t pokeID, const MethodInfo* method_info);
void Dpr_Battle_Logic_BTL_ACTION__SetCheer (Dpr_Battle_Logic_BTL_ACTION_PARAM_o* p, const MethodInfo* method_info);
void Dpr_Battle_Logic_BTL_ACTION__SetSafariBall (Dpr_Battle_Logic_BTL_ACTION_PARAM_o* p, uint8_t pokeID, const MethodInfo* method_info);
void Dpr_Battle_Logic_BTL_ACTION__SetSafariEsa (Dpr_Battle_Logic_BTL_ACTION_PARAM_o* p, uint8_t pokeID, const MethodInfo* method_info);
void Dpr_Battle_Logic_BTL_ACTION__SetSafariDoro (Dpr_Battle_Logic_BTL_ACTION_PARAM_o* p, uint8_t pokeID, const MethodInfo* method_info);
void Dpr_Battle_Logic_BTL_ACTION__SetSafariYousumi (Dpr_Battle_Logic_BTL_ACTION_PARAM_o* p, uint8_t pokeID, const MethodInfo* method_info);
void Dpr_Battle_Logic_BTL_ACTION__SetNULL (Dpr_Battle_Logic_BTL_ACTION_PARAM_o* p, const MethodInfo* method_info);
void Dpr_Battle_Logic_BTL_ACTION__SetSkip (Dpr_Battle_Logic_BTL_ACTION_PARAM_o* p, uint8_t pokeID, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_BTL_ACTION__GetAction (Dpr_Battle_Logic_BTL_ACTION_PARAM_o* p, const MethodInfo* method_info);
void Dpr_Battle_Logic_BTL_ACTION__SetRecPlayOver (Dpr_Battle_Logic_BTL_ACTION_PARAM_o* act, const MethodInfo* method_info);
void Dpr_Battle_Logic_BTL_ACTION__SetRecPlayError (Dpr_Battle_Logic_BTL_ACTION_PARAM_o* act, const MethodInfo* method_info);
