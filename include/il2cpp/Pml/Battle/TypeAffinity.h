#pragma once

#include "il2cpp.h"

uint32_t Pml_Battle_TypeAffinity__calcLSB (uint32_t value, const MethodInfo* method);
int32_t Pml_Battle_TypeAffinity__CalcAffinity (uint8_t wazaType, uint8_t pokeType, bool isSakasaBattle, const MethodInfo* method);
int32_t Pml_Battle_TypeAffinity__CalcAffinity (uint8_t wazaType, uint8_t pokeType1, uint8_t pokeType2, bool isSakasaBattle, const MethodInfo* method);
int32_t Pml_Battle_TypeAffinity__CalcAffinity (uint8_t wazaType, Pml_PokePara_PokemonParam_o* pokeParam, bool isSakasaBattle, const MethodInfo* method);
int32_t Pml_Battle_TypeAffinity__MulAffinity (int32_t aff1, int32_t aff2, const MethodInfo* method);
int32_t Pml_Battle_TypeAffinity__ConvAboutAffinity (int32_t aff, const MethodInfo* method);
int32_t Pml_Battle_TypeAffinity__TCalcAffinityAbout (uint8_t wazaType, uint8_t pokeType, bool isSakasaBattle, const MethodInfo* method);
int32_t Pml_Battle_TypeAffinity__CalcAffinityAbout (uint8_t wazaType, uint8_t pokeType1, uint8_t pokeType2, bool isSakasaBattle, const MethodInfo* method);
int32_t Pml_Battle_TypeAffinity__CalcAffinityAbout (uint8_t wazaType, Pml_PokePara_PokemonParam_o* pokeParam, bool isSakasaBattle, const MethodInfo* method);
void Pml_Battle_TypeAffinity___cctor (const MethodInfo* method);
