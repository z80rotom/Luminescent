#pragma once

#include "il2cpp.h"

bool Dpr_PokeRegulation__CheckLegend (int32_t monsno, uint8_t formno, const MethodInfo* method);
bool Dpr_PokeRegulation__CheckSubLegend (int32_t monsno, const MethodInfo* method);
void Dpr_PokeRegulation__ModifyLevelPokeParty (Pml_PokeParty_o* iPtrPokeParty, uint8_t levelRangeType, uint32_t modify_level, const MethodInfo* method);
void Dpr_PokeRegulation__ModifyLevelPokeParam (Pml_PokePara_PokemonParam_o* pp, uint8_t levelRangeType, uint32_t modify_level, const MethodInfo* method);
void Dpr_PokeRegulation__MakeLevelRevise (Pml_PokePara_PokemonParam_o* iPtrPokePara, int32_t level, const MethodInfo* method);
uint32_t Dpr_PokeRegulation__ModifyLevelCalc (uint8_t levelRangeType, uint32_t level, uint32_t modify_level, const MethodInfo* method);
bool Dpr_PokeRegulation__CheckBothPoke (Pml_PokeParty_o* iPtrPokeParty, System_Collections_Generic_List_MonsNo__o* bothPoke, const MethodInfo* method);
bool Dpr_PokeRegulation__CheckBothItem (Pml_PokeParty_o* iPtrPokeParty, System_Collections_Generic_List_ItemNo__o* bothItem, const MethodInfo* method);
void Dpr_PokeRegulation___cctor (const MethodInfo* method);
