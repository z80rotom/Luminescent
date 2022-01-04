#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_FromEvent_RankEffect___ctor (Dpr_Battle_Logic_Section_FromEvent_RankEffect_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method);
void Dpr_Battle_Logic_Section_FromEvent_RankEffect__Execute (Dpr_Battle_Logic_Section_FromEvent_RankEffect_o* __this, Dpr_Battle_Logic_Section_FromEvent_RankEffect_Result_o* result, Dpr_Battle_Logic_Section_FromEvent_RankEffect_Description_o** description, const MethodInfo* method);
bool Dpr_Battle_Logic_Section_FromEvent_RankEffect__checkTokuseiWindowDisplay (Dpr_Battle_Logic_Section_FromEvent_RankEffect_o* __this, Dpr_Battle_Logic_Section_FromEvent_RankEffect_Description_o** description, const MethodInfo* method);
bool Dpr_Battle_Logic_Section_FromEvent_RankEffect__checkEffectiveAny (Dpr_Battle_Logic_Section_FromEvent_RankEffect_o* __this, uint8_t targetPokeCount, System_Byte_array* targetPokeID, int32_t rankType, int8_t rankVolume, const MethodInfo* method);
bool Dpr_Battle_Logic_Section_FromEvent_RankEffect__addRankEffect (Dpr_Battle_Logic_Section_FromEvent_RankEffect_o* __this, Dpr_Battle_Logic_Section_FromEvent_RankEffect_Description_o** description, const MethodInfo* method);
Dpr_Battle_Logic_StrParam_o* Dpr_Battle_Logic_Section_FromEvent_RankEffect__getPreMessage (Dpr_Battle_Logic_Section_FromEvent_RankEffect_o* __this, Dpr_Battle_Logic_Section_FromEvent_RankEffect_Description_o** description, const MethodInfo* method);
bool Dpr_Battle_Logic_Section_FromEvent_RankEffect__addRankEffect (Dpr_Battle_Logic_Section_FromEvent_RankEffect_o* __this, uint8_t attackerID, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, int32_t effect, int32_t volume, uint8_t cause, uint16_t itemID, uint32_t rankEffSerial, bool isSpFailMessageDisplay, bool isMigawariThrew, bool isStandardMessageEnable, Dpr_Battle_Logic_StrParam_o* preMessage, uint8_t effectViewType, const MethodInfo* method);
Dpr_Battle_Logic_BTL_POKEPARAM_o* Dpr_Battle_Logic_Section_FromEvent_RankEffect__getPoke (Dpr_Battle_Logic_Section_FromEvent_RankEffect_o* __this, uint8_t pokeID, const MethodInfo* method);
