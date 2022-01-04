#pragma once

#include "il2cpp.h"

uint16_t Pml_PokePara_Encoder__CalcChecksum (void* pData, uint32_t dataSize, const MethodInfo* method);
void Pml_PokePara_Encoder__Encode (void* pData, uint32_t dataSize, uint32_t key, const MethodInfo* method);
void Pml_PokePara_Encoder__Decode (void* pData, uint32_t dataSize, uint32_t key, const MethodInfo* method);
uint16_t Pml_PokePara_Encoder__CalcNextRandCode (uint32_t* code, const MethodInfo* method);
