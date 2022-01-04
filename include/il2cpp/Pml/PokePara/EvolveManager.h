#pragma once

#include "il2cpp.h"

void Pml_PokePara_EvolveManager___ctor (Pml_PokePara_EvolveManager_o* __this, const MethodInfo* method);
int32_t Pml_PokePara_EvolveManager__GetEvolvedMonsNo_byLevelUp (Pml_PokePara_EvolveManager_o* __this, Pml_PokePara_CoreParam_o* poke, Pml_PokeParty_o* party, Pml_PokePara_EvolveSituation_o* situation, uint32_t* root_num, const MethodInfo* method);
int32_t Pml_PokePara_EvolveManager__GetEvolvedMonsNo_byEvent (Pml_PokePara_EvolveManager_o* __this, Pml_PokePara_CoreParam_o* poke, Pml_PokeParty_o* party, Pml_PokePara_EvolveSituation_o* situation, uint32_t* root_num, const MethodInfo* method);
int32_t Pml_PokePara_EvolveManager__GetEvolvedMonsNo_byItem (Pml_PokePara_EvolveManager_o* __this, Pml_PokePara_CoreParam_o* poke, Pml_PokePara_EvolveSituation_o* situation, uint32_t use_item, uint32_t* root_num, const MethodInfo* method);
int32_t Pml_PokePara_EvolveManager__GetEvolvedMonsNo_byTrade (Pml_PokePara_EvolveManager_o* __this, Pml_PokePara_CoreParam_o* poke, Pml_PokePara_CoreParam_o* pair_poke, uint32_t* root_num, const MethodInfo* method);
bool Pml_PokePara_EvolveManager__HaveEvolutionRoot (Pml_PokePara_EvolveManager_o* __this, Pml_PokePara_CoreParam_o* poke, const MethodInfo* method);
bool Pml_PokePara_EvolveManager__CheckItem_KAWARAZUNOISHI (Pml_PokePara_EvolveManager_o* __this, uint32_t item, const MethodInfo* method);
bool Pml_PokePara_EvolveManager__canEvolve (Pml_PokePara_EvolveManager_o* __this, Pml_PokePara_CoreParam_o* poke, const MethodInfo* method);
bool Pml_PokePara_EvolveManager__IsSatisfyEvolveConditionLevelUp (Pml_PokePara_EvolveManager_o* __this, Pml_PokePara_CoreParam_o* poke, Pml_PokeParty_o* party, Pml_PokePara_EvolveSituation_o* situation, XLSXContent_EvolveTable_SheetEvolve_o* evolveData, int32_t evolveRouteIndex, const MethodInfo* method);
bool Pml_PokePara_EvolveManager__IsSatisfyEvolveConditionEvent (Pml_PokePara_EvolveManager_o* __this, Pml_PokePara_CoreParam_o* poke, Pml_PokeParty_o* party, Pml_PokePara_EvolveSituation_o* situation, XLSXContent_EvolveTable_SheetEvolve_o* evolveData, int32_t evolveRouteIndex, const MethodInfo* method);
bool Pml_PokePara_EvolveManager__IsSatisfyEvolveConditionItem (Pml_PokePara_EvolveManager_o* __this, Pml_PokePara_CoreParam_o* poke, Pml_PokePara_EvolveSituation_o* situation, uint32_t use_item, XLSXContent_EvolveTable_SheetEvolve_o* evolveData, int32_t evolveRouteIndex, const MethodInfo* method);
bool Pml_PokePara_EvolveManager__IsSatisfyEvolveConditionTrade (Pml_PokePara_EvolveManager_o* __this, Pml_PokePara_CoreParam_o* poke, Pml_PokePara_CoreParam_o* pair_poke, XLSXContent_EvolveTable_SheetEvolve_o* evolveData, int32_t evolveRouteIndex, const MethodInfo* method);
