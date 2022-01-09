#pragma once

#include "il2cpp.h"

XLSXContent_LocalKoukanData_Sheetdata_o* LocalKoukan__GetTargetData (int32_t npcindex, int32_t lang, const MethodInfo* method_info);
int32_t LocalKoukan__GetTargetMonsNo (int32_t npcindex, int32_t lang, const MethodInfo* method_info);
LocalKoukan_Operation_o* LocalKoukan__CreateOperation (Pml_PokePara_PokemonParam_o* myparam, int32_t npcindex, int32_t lang, bool istemoti, int32_t trayno, int32_t pos, const MethodInfo* method_info);
LocalKoukan_Operation_o* LocalKoukan__CreateOperation (Pml_PokePara_PokemonParam_o* from, Pml_PokePara_PokemonParam_o* other, bool istemoti, int32_t trayno, int32_t pos, const MethodInfo* method_info);
int32_t LocalKoukan__GetIndex (int32_t npcindex, int32_t lang, const MethodInfo* method_info);
Pml_PokePara_PokemonParam_o* LocalKoukan__CreateTradePokeParam (XLSXContent_LocalKoukanData_Sheetdata_o* data, const MethodInfo* method_info);
void LocalKoukan___ctor (LocalKoukan_o* __this, const MethodInfo* method_info);
