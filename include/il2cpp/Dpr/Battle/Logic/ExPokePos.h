#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_ExPokePos___ctor (Dpr_Battle_Logic_ExPokePos_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_ExPokePos___ctor (Dpr_Battle_Logic_ExPokePos_o* __this, int32_t type, uint8_t basePos, const MethodInfo* method_info);
void Dpr_Battle_Logic_ExPokePos___ctor (Dpr_Battle_Logic_ExPokePos_o* __this, Dpr_Battle_Logic_ExPokePos_o** src, const MethodInfo* method_info);
Dpr_Battle_Logic_ExPokePos_o* Dpr_Battle_Logic_ExPokePos__CopyFrom (Dpr_Battle_Logic_ExPokePos_o* __this, Dpr_Battle_Logic_ExPokePos_o** rhl, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_ExPokePos__ExpandPos (Dpr_Battle_Logic_ExPokePos_o* __this, int32_t rule, uint8_t multiMode, Dpr_Battle_Logic_BtlPokePos_array* dst, const MethodInfo* method_info);
void Dpr_Battle_Logic_ExPokePos__expandPos_single (Dpr_Battle_Logic_ExPokePos_o* __this, Dpr_Battle_Logic_ExPokePos_ExpandResult_o* result, uint8_t multiMode, const MethodInfo* method_info);
void Dpr_Battle_Logic_ExPokePos__expandPokePos_double (Dpr_Battle_Logic_ExPokePos_o* __this, Dpr_Battle_Logic_ExPokePos_ExpandResult_o* result, uint8_t multiMode, const MethodInfo* method_info);
void Dpr_Battle_Logic_ExPokePos__expandPokePos_raid (Dpr_Battle_Logic_ExPokePos_o* __this, Dpr_Battle_Logic_ExPokePos_ExpandResult_o* result, uint8_t multiMode, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_ExPokePos__ExpandExistPokeID (Dpr_Battle_Logic_ExPokePos_o* __this, int32_t rule, uint8_t multiMode, Dpr_Battle_Logic_POKECON_o* pokeCon, System_Byte_array* pokeIDAry, const MethodInfo* method_info);
