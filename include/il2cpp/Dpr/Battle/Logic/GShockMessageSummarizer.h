#pragma once

#include "il2cpp.h"

bool Dpr_Battle_Logic_GShockMessageSummarizer__rank_GetDesc (Dpr_Battle_Logic_GShockMessageSummarizer_RankEffectDesc_o* pParam, uint8_t gShockEffect, const MethodInfo* method);
void Dpr_Battle_Logic_GShockMessageSummarizer__rank_SetupMessage_Unit (Dpr_Battle_Logic_StrParam_o* pStrParam, uint8_t gShockEffect, uint8_t pokeID, int32_t volume, const MethodInfo* method);
void Dpr_Battle_Logic_GShockMessageSummarizer__rank_GetMessageParam (Dpr_Battle_Logic_StrParam_o* pStrParam, uint8_t gShockEffect, const MethodInfo* method);
void Dpr_Battle_Logic_GShockMessageSummarizer__rank_SetupMessage (uint8_t* pDefaultEffectCount, uint8_t* pUniqueEffectPokeID, Dpr_Battle_Logic_GShockEffectParam_o** gShockEffectParam, const MethodInfo* method);
void Dpr_Battle_Logic_GShockMessageSummarizer__rank_SetupMessage (Dpr_Battle_Logic_StrParam_o* pStrParam, Dpr_Battle_Logic_GShockEffectParam_o** gShockEffectParam, const MethodInfo* method);
bool Dpr_Battle_Logic_GShockMessageSummarizer__sick_GetDesc (Dpr_Battle_Logic_GShockMessageSummarizer_SickDesc_o** pParam, uint16_t effectNo, const MethodInfo* method);
void Dpr_Battle_Logic_GShockMessageSummarizer__sick_SetupMessage_Unit (Dpr_Battle_Logic_StrParam_o* pStrParam, uint16_t effectNo, uint16_t pokeID, const MethodInfo* method);
void Dpr_Battle_Logic_GShockMessageSummarizer__sick_SetupMessage_Plural (Dpr_Battle_Logic_StrParam_o* pStrParam, uint16_t effectNo, const MethodInfo* method);
void Dpr_Battle_Logic_GShockMessageSummarizer__sick_GetMessageParam (uint8_t* pTargetCount, uint8_t* pEffectNoCount, uint8_t* pUniqueEffectPokeID, uint16_t* pUniqueEffectNo, Dpr_Battle_Logic_GShockEffectParam_o** gShockEffectParam, const MethodInfo* method);
void Dpr_Battle_Logic_GShockMessageSummarizer__sick_SetupMessage (Dpr_Battle_Logic_StrParam_o* pStrParam, Dpr_Battle_Logic_GShockEffectParam_o** gShockEffectParam, const MethodInfo* method);
bool Dpr_Battle_Logic_GShockMessageSummarizer__cureSick_GetDesc (Dpr_Battle_Logic_GShockMessageSummarizer_CureSickDesc_o* pParam, uint32_t sick, const MethodInfo* method);
void Dpr_Battle_Logic_GShockMessageSummarizer__cureSick_SetupMessage_Unit (Dpr_Battle_Logic_StrParam_o* pStrParam, uint32_t sick, uint16_t pokeID, const MethodInfo* method);
void Dpr_Battle_Logic_GShockMessageSummarizer__cureSick_GetMessageParam (uint8_t* pTargetCount, uint8_t* pUniqueEffectPokeID, uint32_t* pUniqueCuredSick, Dpr_Battle_Logic_GShockEffectParam_o** gShockEffectParam, const MethodInfo* method);
void Dpr_Battle_Logic_GShockMessageSummarizer__cureSick_SetupMessage (Dpr_Battle_Logic_StrParam_o* pStrParam, Dpr_Battle_Logic_GShockEffectParam_o** gShockEffectParam, const MethodInfo* method);
bool Dpr_Battle_Logic_GShockMessageSummarizer__others_GetDesc (Dpr_Battle_Logic_GShockMessageSummarizer_OthersDesc_o* pParam, uint8_t gShockEffect, const MethodInfo* method);
void Dpr_Battle_Logic_GShockMessageSummarizer__others_SetupMessage_Unit (Dpr_Battle_Logic_StrParam_o* pStrParam, uint8_t gShockEffect, uint8_t pokeID, const MethodInfo* method);
void Dpr_Battle_Logic_GShockMessageSummarizer__others_SetupMessage_Plural (Dpr_Battle_Logic_StrParam_o* pStrParam, uint8_t gShockEffect, const MethodInfo* method);
void Dpr_Battle_Logic_GShockMessageSummarizer__others_GetMessageParam (uint8_t* pTargetCount, uint8_t* pUniqueEffectPokeID, Dpr_Battle_Logic_GShockEffectParam_o** gShockEffectParam, const MethodInfo* method);
void Dpr_Battle_Logic_GShockMessageSummarizer__others_SetupMessage (Dpr_Battle_Logic_StrParam_o* pStrParam, Dpr_Battle_Logic_GShockEffectParam_o** gShockEffectParam, const MethodInfo* method);
void Dpr_Battle_Logic_GShockMessageSummarizer__SetupMessage (Dpr_Battle_Logic_StrParam_o* pStrParam, Dpr_Battle_Logic_GShockEffectParam_o* param, const MethodInfo* method);
void Dpr_Battle_Logic_GShockMessageSummarizer___cctor (const MethodInfo* method);
