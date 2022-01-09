#pragma once

#include "il2cpp.h"

uint16_t Pml_PokePara_Encoder__CalcChecksum (void* pData, uint32_t dataSize, const MethodInfo* method_info);
void Pml_PokePara_Encoder__Encode (void* pData, uint32_t dataSize, uint32_t key, const MethodInfo* method_info);
void Pml_PokePara_Encoder__Decode (void* pData, uint32_t dataSize, uint32_t key, const MethodInfo* method_info);
uint16_t Pml_PokePara_Encoder__CalcNextRandCode (uint32_t* code, const MethodInfo* method_info);
