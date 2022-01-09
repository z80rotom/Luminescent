#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_BTL_PARTY___ctor (Dpr_Battle_Logic_BTL_PARTY_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_BTL_PARTY__Dispose (Dpr_Battle_Logic_BTL_PARTY_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_BTL_PARTY__Initialize (Dpr_Battle_Logic_BTL_PARTY_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_BTL_PARTY__CopyFrom (Dpr_Battle_Logic_BTL_PARTY_o* __this, Dpr_Battle_Logic_BTL_PARTY_o** src, const MethodInfo* method_info);
void Dpr_Battle_Logic_BTL_PARTY__AddMember (Dpr_Battle_Logic_BTL_PARTY_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* member, const MethodInfo* method_info);
void Dpr_Battle_Logic_BTL_PARTY__MoveAlivePokeToFirst (Dpr_Battle_Logic_BTL_PARTY_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_BTL_PARTY__MoveLastMember (Dpr_Battle_Logic_BTL_PARTY_o* __this, uint8_t idx, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_BTL_PARTY__GetMemberCount (Dpr_Battle_Logic_BTL_PARTY_o* __this, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_BTL_PARTY__GetAliveMemberCount (Dpr_Battle_Logic_BTL_PARTY_o* __this, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_BTL_PARTY__GetAliveMemberCountRear (Dpr_Battle_Logic_BTL_PARTY_o* __this, uint8_t startIdx, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_BTL_PARTY__GetDeadMemberCount (Dpr_Battle_Logic_BTL_PARTY_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_BTL_PARTY__IsFull (Dpr_Battle_Logic_BTL_PARTY_o* __this, const MethodInfo* method_info);
Dpr_Battle_Logic_BTL_POKEPARAM_o* Dpr_Battle_Logic_BTL_PARTY__GetMemberData (Dpr_Battle_Logic_BTL_PARTY_o* __this, uint8_t idx, const MethodInfo* method_info);
Dpr_Battle_Logic_BTL_POKEPARAM_o* Dpr_Battle_Logic_BTL_PARTY__GetMemberDataConst (Dpr_Battle_Logic_BTL_PARTY_o* __this, uint8_t idx, const MethodInfo* method_info);
void Dpr_Battle_Logic_BTL_PARTY__SwapMembers (Dpr_Battle_Logic_BTL_PARTY_o* __this, uint8_t idx1, uint8_t idx2, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_BTL_PARTY__FindMember (Dpr_Battle_Logic_BTL_PARTY_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* param, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_BTL_PARTY__FindMemberByPokeID (Dpr_Battle_Logic_BTL_PARTY_o* __this, uint8_t pokeID, const MethodInfo* method_info);
Dpr_Battle_Logic_BTL_POKEPARAM_o* Dpr_Battle_Logic_BTL_PARTY__GetAliveTopMember (Dpr_Battle_Logic_BTL_PARTY_o* __this, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_BTL_PARTY__GetMemberIndex (Dpr_Battle_Logic_BTL_PARTY_o* __this, uint8_t pokeID, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_BTL_PARTY__GetIllusionTargetMemberIndex (Dpr_Battle_Logic_BTL_PARTY_o* __this, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_BTL_PARTY__GetTotalKillCount (Dpr_Battle_Logic_BTL_PARTY_o* __this, const MethodInfo* method_info);
