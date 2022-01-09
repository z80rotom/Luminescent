#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_PokeTypePair___ctor (Dpr_Battle_Logic_PokeTypePair_o __this, uint16_t value, const MethodInfo* method_info);
Dpr_Battle_Logic_PokeTypePair_o Dpr_Battle_Logic_PokeTypePair__Make (uint8_t type1, uint8_t type2, uint8_t type_ex, const MethodInfo* method_info);
Dpr_Battle_Logic_PokeTypePair_o Dpr_Battle_Logic_PokeTypePair__MakePure (uint8_t type, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_PokeTypePair__GetType1 (Dpr_Battle_Logic_PokeTypePair_o pair, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_PokeTypePair__GetType2 (Dpr_Battle_Logic_PokeTypePair_o pair, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_PokeTypePair__GetTypeEx (Dpr_Battle_Logic_PokeTypePair_o pair, const MethodInfo* method_info);
void Dpr_Battle_Logic_PokeTypePair__Split (Dpr_Battle_Logic_PokeTypePair_o pair, uint8_t* type1, uint8_t* type2, uint8_t* typeEx, const MethodInfo* method_info);
bool Dpr_Battle_Logic_PokeTypePair__IsMatch (Dpr_Battle_Logic_PokeTypePair_o pair, uint8_t type, const MethodInfo* method_info);
bool Dpr_Battle_Logic_PokeTypePair__IsPure (Dpr_Battle_Logic_PokeTypePair_o pair, bool includeExType, const MethodInfo* method_info);
Dpr_Battle_Logic_PokeTypePair_o Dpr_Battle_Logic_PokeTypePair__Replace (Dpr_Battle_Logic_PokeTypePair_o pair, uint8_t targetType, uint8_t newType, const MethodInfo* method_info);
bool Dpr_Battle_Logic_PokeTypePair__IsAnyTypeExist (Dpr_Battle_Logic_PokeTypePair_o pair, const MethodInfo* method_info);
uint16_t Dpr_Battle_Logic_PokeTypePair__op_Implicit (Dpr_Battle_Logic_PokeTypePair_o pair, const MethodInfo* method_info);
Dpr_Battle_Logic_PokeTypePair_o Dpr_Battle_Logic_PokeTypePair__op_Explicit (uint16_t value, const MethodInfo* method_info);
