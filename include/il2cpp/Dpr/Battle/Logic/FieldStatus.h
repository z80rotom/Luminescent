#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_FieldStatus___ctor (Dpr_Battle_Logic_FieldStatus_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_FieldStatus__Init (Dpr_Battle_Logic_FieldStatus_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_FieldStatus__initWork (Dpr_Battle_Logic_FieldStatus_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_FieldStatus__CopyFrom (Dpr_Battle_Logic_FieldStatus_o* __this, Dpr_Battle_Logic_FieldStatus_o** src, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_FieldStatus__GetWeather (Dpr_Battle_Logic_FieldStatus_o* __this, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_FieldStatus__GetWeatherPassedTurn (Dpr_Battle_Logic_FieldStatus_o* __this, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_FieldStatus__GetWeatherRemainingTurn (Dpr_Battle_Logic_FieldStatus_o* __this, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_FieldStatus__GetWeatherCausePokeID (Dpr_Battle_Logic_FieldStatus_o* __this, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_FieldStatus__GetWeatherWholeTurn (Dpr_Battle_Logic_FieldStatus_o* __this, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_FieldStatus__GetWeatherTurnUpCount (Dpr_Battle_Logic_FieldStatus_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_FieldStatus__SetWeather (Dpr_Battle_Logic_FieldStatus_o* __this, uint8_t weather, uint16_t turn, uint16_t turnUpCount, uint8_t causePokeID, const MethodInfo* method);
void Dpr_Battle_Logic_FieldStatus__EndWeather (Dpr_Battle_Logic_FieldStatus_o* __this, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_FieldStatus__TurnCheckWeather (Dpr_Battle_Logic_FieldStatus_o* __this, const MethodInfo* method);
bool Dpr_Battle_Logic_FieldStatus__AddEffect (Dpr_Battle_Logic_FieldStatus_o* __this, int32_t effect, Dpr_Battle_Logic_BTL_SICKCONT_o* cont, const MethodInfo* method);
bool Dpr_Battle_Logic_FieldStatus__addEffectCore (Dpr_Battle_Logic_FieldStatus_o* __this, int32_t effect, Dpr_Battle_Logic_BTL_SICKCONT_o* cont, uint16_t sub_param, const MethodInfo* method);
bool Dpr_Battle_Logic_FieldStatus__RemoveEffect (Dpr_Battle_Logic_FieldStatus_o* __this, int32_t effect, const MethodInfo* method);
bool Dpr_Battle_Logic_FieldStatus__AddDependPoke (Dpr_Battle_Logic_FieldStatus_o* __this, int32_t effect, uint8_t pokeID, const MethodInfo* method);
bool Dpr_Battle_Logic_FieldStatus__RemoveDependPoke (Dpr_Battle_Logic_FieldStatus_o* __this, int32_t effect, uint8_t pokeID, const MethodInfo* method);
bool Dpr_Battle_Logic_FieldStatus__IsDependPoke (Dpr_Battle_Logic_FieldStatus_o* __this, int32_t effect, uint8_t pokeID, const MethodInfo* method);
bool Dpr_Battle_Logic_FieldStatus__CheckFuin (Dpr_Battle_Logic_FieldStatus_o* __this, Dpr_Battle_Logic_MainModule_o** mainModule, Dpr_Battle_Logic_POKECON_o* pokeCon, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, int32_t waza, const MethodInfo* method);
bool Dpr_Battle_Logic_FieldStatus__IncTurnCount (Dpr_Battle_Logic_FieldStatus_o* __this, int32_t effect, const MethodInfo* method);
bool Dpr_Battle_Logic_FieldStatus__CheckEffect (Dpr_Battle_Logic_FieldStatus_o* __this, int32_t effect, const MethodInfo* method);
bool Dpr_Battle_Logic_FieldStatus__CheckEffect (Dpr_Battle_Logic_FieldStatus_o* __this, int32_t effect, uint16_t subParam, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_FieldStatus__CheckRemainingTurn (Dpr_Battle_Logic_FieldStatus_o* __this, int32_t effect, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_FieldStatus__GetPassedTurn (Dpr_Battle_Logic_FieldStatus_o* __this, int32_t effect, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_FieldStatus__GetWholeTurn (Dpr_Battle_Logic_FieldStatus_o* __this, int32_t effect, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_FieldStatus__GetDependPokeID (Dpr_Battle_Logic_FieldStatus_o* __this, int32_t effect, const MethodInfo* method);
void Dpr_Battle_Logic_FieldStatus__clearFactorWork (Dpr_Battle_Logic_FieldStatus_o* __this, int32_t effect, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_FieldStatus__GetDependPokeCount (Dpr_Battle_Logic_FieldStatus_o* __this, int32_t effect, const MethodInfo* method);
bool Dpr_Battle_Logic_FieldStatus__IsKagakuhenkaGasEffective (Dpr_Battle_Logic_FieldStatus_o* __this, const MethodInfo* method);
bool Dpr_Battle_Logic_FieldStatus__CheckTokuseiEffectiveOnKagakuhenkaGas (Dpr_Battle_Logic_FieldStatus_o* __this, int32_t tokusei, const MethodInfo* method);
bool Dpr_Battle_Logic_FieldStatus__ChangeGround (Dpr_Battle_Logic_FieldStatus_o* __this, uint8_t ground, Dpr_Battle_Logic_BTL_SICKCONT_o cont, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_FieldStatus__GetGround (Dpr_Battle_Logic_FieldStatus_o* __this, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_FieldStatus__GetGroundPassedTurn (Dpr_Battle_Logic_FieldStatus_o* __this, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_FieldStatus__GetGroundRemainingTurn (Dpr_Battle_Logic_FieldStatus_o* __this, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_FieldStatus__GetGroundWholeTurn (Dpr_Battle_Logic_FieldStatus_o* __this, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_FieldStatus__GetGroundTurnUpCount (Dpr_Battle_Logic_FieldStatus_o* __this, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_FieldStatus__GetGroundCausePokeID (Dpr_Battle_Logic_FieldStatus_o* __this, const MethodInfo* method);
