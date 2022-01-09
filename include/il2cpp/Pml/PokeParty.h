#pragma once

#include "il2cpp.h"

void Pml_PokeParty___ctor (Pml_PokeParty_o* __this, const MethodInfo* method_info);
bool Pml_PokeParty__AddMember (Pml_PokeParty_o* __this, Pml_PokePara_PokemonParam_o* pp, const MethodInfo* method_info);
void Pml_PokeParty__ReplaceMember (Pml_PokeParty_o* __this, uint32_t idx, Pml_PokePara_PokemonParam_o* pp, const MethodInfo* method_info);
void Pml_PokeParty__RemoveMember (Pml_PokeParty_o* __this, uint32_t idx, const MethodInfo* method_info);
void Pml_PokeParty__ExchangePosition (Pml_PokeParty_o* __this, uint8_t pos1, uint8_t pos2, const MethodInfo* method_info);
Pml_PokePara_PokemonParam_o* Pml_PokeParty__GetMemberPointer (Pml_PokeParty_o* __this, uint32_t idx, const MethodInfo* method_info);
Pml_PokePara_PokemonParam_o* Pml_PokeParty__GetMemberPointerConst (Pml_PokeParty_o* __this, uint32_t idx, const MethodInfo* method_info);
uint32_t Pml_PokeParty__GetMemberCount (Pml_PokeParty_o* __this, const MethodInfo* method_info);
void Pml_PokeParty__SetMemberCount (Pml_PokeParty_o* __this, uint32_t count, const MethodInfo* method_info);
uint32_t Pml_PokeParty__GetMemberIndex (Pml_PokeParty_o* __this, Pml_PokePara_PokemonParam_o* pokeParam, const MethodInfo* method_info);
uint32_t Pml_PokeParty__GetMemberCountEx (Pml_PokeParty_o* __this, int32_t type, const MethodInfo* method_info);
uint32_t Pml_PokeParty__GetMemberCountEx (Pml_PokeParty_o* __this, int32_t type, uint8_t pass_idx_bit, const MethodInfo* method_info);
uint32_t Pml_PokeParty__GetMemberTopIndex (Pml_PokeParty_o* __this, int32_t type, const MethodInfo* method_info);
bool Pml_PokeParty__CheckPokeExist (Pml_PokeParty_o* __this, int32_t monsno, const MethodInfo* method_info);
bool Pml_PokeParty__IsFull (Pml_PokeParty_o* __this, const MethodInfo* method_info);
void Pml_PokeParty__CopyFrom (Pml_PokeParty_o* __this, Pml_PokeParty_o* src, const MethodInfo* method_info);
void Pml_PokeParty__Clear (Pml_PokeParty_o* __this, const MethodInfo* method_info);
void Pml_PokeParty__SerializeFull (Pml_PokeParty_o* __this, Pml_PokePara_SavePokeParty_o* save, const MethodInfo* method_info);
void Pml_PokeParty__DeserializeFull (Pml_PokeParty_o* __this, Pml_PokePara_SavePokeParty_o* save, const MethodInfo* method_info);
bool Pml_PokeParty__CheckPokerusExist (Pml_PokeParty_o* __this, const MethodInfo* method_info);
bool Pml_PokeParty__PokerusCatchCheck (Pml_PokeParty_o* __this, const MethodInfo* method_info);
bool Pml_PokeParty__PokerusInfectionCheck (Pml_PokeParty_o* __this, const MethodInfo* method_info);
void Pml_PokeParty__DecreasePokerusDayCount (Pml_PokeParty_o* __this, int32_t passed_day_count, const MethodInfo* method_info);
void Pml_PokeParty__RecoverAll (Pml_PokeParty_o* __this, const MethodInfo* method_info);
void Pml_PokeParty__SetMarkingIndex (Pml_PokeParty_o* __this, uint32_t pos, const MethodInfo* method_info);
uint32_t Pml_PokeParty__GetMarkingIndex (Pml_PokeParty_o* __this, const MethodInfo* method_info);
bool Pml_PokeParty__CanTrade (Pml_PokeParty_o* __this, const MethodInfo* method_info);
bool Pml_PokeParty__CanTradeMember (Pml_PokeParty_o* __this, uint32_t idx, const MethodInfo* method_info);
void Pml_PokeParty__Dump (Pml_PokeParty_o* __this, const MethodInfo* method_info);
void Pml_PokeParty__scootOver (Pml_PokeParty_o* __this, const MethodInfo* method_info);
void Pml_PokeParty__ClearMarkingIndex (Pml_PokeParty_o* __this, const MethodInfo* method_info);
