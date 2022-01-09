#pragma once

#include "il2cpp.h"

bool EvolveDemoTools__CanEvolve (int32_t* nextMonsNo, uint32_t* evolutionRoot, Pml_PokeParty_o* playerParty, Pml_PokePara_PokemonParam_o* poke, Pml_PokePara_EvolveSituation_o* situation, Pml_PokePara_PokemonParam_o* pairPoke, uint16_t itemNo, const MethodInfo* method_info);
bool EvolveDemoTools__DoEvolve (EvolveDemoTools_Param_o param, System_Action_Demo_Evolve_Result__o* onResult, Pml_PokePara_PokemonParam_o* pairPoke, uint16_t itemNo, System_Action_o* onEndDemo, bool isUseEndExitFade, const MethodInfo* method_info);
System_Collections_IEnumerator_o* EvolveDemoTools__RegisterZukanCoroutine (Pml_PokePara_PokemonParam_o* capturedPokemon, System_Action_o* onEnd, const MethodInfo* method_info);
