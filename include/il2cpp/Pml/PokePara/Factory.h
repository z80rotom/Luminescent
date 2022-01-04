#pragma once

#include "il2cpp.h"

System_Byte_array* Pml_PokePara_Factory__CreateCoreData (const MethodInfo* method);
System_Byte_array* Pml_PokePara_Factory__CreateCoreData (int32_t monsno, uint16_t level, uint64_t id, const MethodInfo* method);
System_Byte_array* Pml_PokePara_Factory__CreateCoreData (Pml_PokePara_InitialSpec_o* spec, const MethodInfo* method);
void Pml_PokePara_Factory__SetupCoreData (System_Byte_array* coreData, Pml_PokePara_InitialSpec_o* spec, const MethodInfo* method);
System_Byte_array* Pml_PokePara_Factory__CreateCalcData (uint32_t personalRnd, const MethodInfo* method);
Pml_PokePara_PokemonParam_o* Pml_PokePara_Factory__CreateNukenin (Pml_PokePara_PokemonParam_o* tutinin, const MethodInfo* method);
void Pml_PokePara_Factory__FixInitSpec (Pml_PokePara_InitialSpec_o* pFixSpec, Pml_PokePara_InitialSpec_o* spec, const MethodInfo* method);
int32_t Pml_PokePara_Factory__getSeikakuAtRandom (Pml_Local_RandomGenerator_o* pRandom, int32_t monsno, uint16_t formno, const MethodInfo* method);
int32_t Pml_PokePara_Factory__getHighSeikakuAtRandom (Pml_Local_RandomGenerator_o* pRandom, const MethodInfo* method);
int32_t Pml_PokePara_Factory__getLowSeikakuAtRandom (Pml_Local_RandomGenerator_o* pRandom, const MethodInfo* method);
uint8_t Pml_PokePara_Factory__GetSexAtRandomInPersonalDistribution (int32_t monsno, uint16_t formno, Pml_Local_RandomGenerator_o* pRandom, const MethodInfo* method);
int16_t Pml_PokePara_Factory__GetSizePersonalValue (int16_t value, Pml_Local_RandomGenerator_o* pRandom, const MethodInfo* method);
System_Byte_array* Pml_PokePara_Factory__AllocCoreData (const MethodInfo* method);
void Pml_PokePara_Factory__ClearCoreData (System_Byte_array* coreData, const MethodInfo* method);
void Pml_PokePara_Factory__InitCoreData (System_Byte_array* coreData, Pml_PokePara_InitialSpec_o* spec, const MethodInfo* method);
uint32_t Pml_PokePara_Factory__GetRandom (Pml_Local_RandomGenerator_o* pRandGenerator, const MethodInfo* method);
uint32_t Pml_PokePara_Factory__GetRandom (Pml_Local_RandomGenerator_o* pRandGenerator, uint32_t max_range, const MethodInfo* method);
System_Byte_array* Pml_PokePara_Factory__AllocFullData (const MethodInfo* method);
System_Byte_array* Pml_PokePara_Factory__CreateFullData (const MethodInfo* method);
