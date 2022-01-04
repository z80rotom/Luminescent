#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_POKECON__InitSystem (const MethodInfo* method);
void Dpr_Battle_Logic_POKECON__QuitSystem (const MethodInfo* method);
void Dpr_Battle_Logic_POKECON___ctor (Dpr_Battle_Logic_POKECON_o* __this, Dpr_Battle_Logic_MainModule_o* mainModule, Dpr_Battle_Logic_FieldStatus_o* fieldStatus, const MethodInfo* method);
void Dpr_Battle_Logic_POKECON__Dispose (Dpr_Battle_Logic_POKECON_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_POKECON__Clear (Dpr_Battle_Logic_POKECON_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_POKECON__storeAllPokeParam (Dpr_Battle_Logic_POKECON_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_POKECON__storePokeParam (Dpr_Battle_Logic_POKECON_o* __this, uint8_t pokeID, const MethodInfo* method);
void Dpr_Battle_Logic_POKECON__activatePokeParam (Dpr_Battle_Logic_POKECON_o* __this, uint8_t pokeID, const MethodInfo* method);
void Dpr_Battle_Logic_POKECON__CopyFrom (Dpr_Battle_Logic_POKECON_o* __this, Dpr_Battle_Logic_POKECON_o** src, const MethodInfo* method);
void Dpr_Battle_Logic_POKECON__SetParty (Dpr_Battle_Logic_POKECON_o* __this, uint8_t clientID, Pml_PokeParty_o* srcParty, Dpr_Battle_Logic_PartyDesc_o** partyDesc, Dpr_Battle_Logic_MyStatus_o* playerData, const MethodInfo* method);
void Dpr_Battle_Logic_POKECON__addPokeParam (Dpr_Battle_Logic_POKECON_o* __this, uint8_t clientID, uint8_t pokeID, Pml_PokePara_PokemonParam_o* srcParam, Dpr_Battle_Logic_DefaultPowerUpDesc_o** defaultPowerUpDesc, Dpr_Battle_Logic_MyStatus_o* playerData, const MethodInfo* method);
void Dpr_Battle_Logic_POKECON__setupPokeParam (Dpr_Battle_Logic_POKECON_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* pokeParam, uint8_t pokeID, Pml_PokePara_PokemonParam_o* srcParam, Dpr_Battle_Logic_DefaultPowerUpDesc_o** defaultPowerUpDesc, Dpr_Battle_Logic_MyStatus_o* playerData, const MethodInfo* method);
bool Dpr_Battle_Logic_POKECON__checkForceGEnable (Dpr_Battle_Logic_POKECON_o* __this, Pml_PokePara_PokemonParam_o* pPoke, const MethodInfo* method);
void Dpr_Battle_Logic_POKECON__updateIllusionTarget (Dpr_Battle_Logic_POKECON_o* __this, uint8_t clientID, const MethodInfo* method);
Dpr_Battle_Logic_BTL_PARTY_o* Dpr_Battle_Logic_POKECON__GetPartyData (Dpr_Battle_Logic_POKECON_o* __this, uint32_t clientID, const MethodInfo* method);
Dpr_Battle_Logic_BTL_PARTY_o* Dpr_Battle_Logic_POKECON__GetPartyDataConst (Dpr_Battle_Logic_POKECON_o* __this, uint32_t clientID, const MethodInfo* method);
Dpr_Battle_Logic_BTL_POKEPARAM_o* Dpr_Battle_Logic_POKECON__GetClientPokeDataConst (Dpr_Battle_Logic_POKECON_o* __this, uint8_t clientID, uint8_t memberIdx, const MethodInfo* method);
Dpr_Battle_Logic_BTL_POKEPARAM_o* Dpr_Battle_Logic_POKECON__GetPokeParam (Dpr_Battle_Logic_POKECON_o* __this, uint8_t pokeID, const MethodInfo* method);
Dpr_Battle_Logic_BTL_POKEPARAM_o* Dpr_Battle_Logic_POKECON__GetPokeParamConst (Dpr_Battle_Logic_POKECON_o* __this, uint8_t pokeID, const MethodInfo* method);
bool Dpr_Battle_Logic_POKECON__IsExistPokemon (Dpr_Battle_Logic_POKECON_o* __this, uint8_t pokeID, const MethodInfo* method);
Dpr_Battle_Logic_BTL_POKEPARAM_o* Dpr_Battle_Logic_POKECON__GetViewSrcPokeParam (Dpr_Battle_Logic_POKECON_o* __this, uint8_t pokeID, const MethodInfo* method);
void Dpr_Battle_Logic_POKECON__ConvertToPokeParty (Dpr_Battle_Logic_POKECON_o* __this, Pml_PokeParty_o* pDstParty, uint8_t clientID, bool fDefaultForm, const MethodInfo* method);
void Dpr_Battle_Logic_POKECON__ConvertToPokePartyByStartingOrder (Dpr_Battle_Logic_POKECON_o* __this, Pml_PokeParty_o* pDstParty, uint8_t clientID, System_Boolean_array* fightPokeIdx, const MethodInfo* method);
void Dpr_Battle_Logic_POKECON__convertToPokeParamAndAddPokeParty (Dpr_Battle_Logic_POKECON_o* __this, Pml_PokeParty_o* pDstParty, Dpr_Battle_Logic_BTL_PARTY_o* pBtlParty, uint8_t memberIdx, const MethodInfo* method);
int32_t Dpr_Battle_Logic_POKECON__FindPokemon (Dpr_Battle_Logic_POKECON_o* __this, uint8_t clientID, uint8_t pokeID, const MethodInfo* method);
Dpr_Battle_Logic_BTL_POKEPARAM_o* Dpr_Battle_Logic_POKECON__GetFrontPokeData (Dpr_Battle_Logic_POKECON_o* __this, uint8_t pos, const MethodInfo* method);
Dpr_Battle_Logic_BTL_POKEPARAM_o* Dpr_Battle_Logic_POKECON__GetFrontPokeDataConst (Dpr_Battle_Logic_POKECON_o* __this, uint8_t pos, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_POKECON__GetFrontPokeID (Dpr_Battle_Logic_POKECON_o* __this, uint8_t pos, const MethodInfo* method);
Dpr_Battle_Logic_BTL_POKEPARAM_o* Dpr_Battle_Logic_POKECON__GetClientPokeData (Dpr_Battle_Logic_POKECON_o* __this, uint8_t clientID, uint8_t posIdx, const MethodInfo* method);
void Dpr_Battle_Logic_POKECON___cctor (const MethodInfo* method);
