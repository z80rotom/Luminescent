#pragma once

#include "il2cpp.h"

System_Collections_Generic_List_UgPokeLottery_PokeSlot__o* Dpr_UnderGround_UgPokeLottery__DoLottery (Dpr_UnderGround_UgPokeLottery_o* __this, int32_t randMarkID, const MethodInfo* method);
int32_t Dpr_UnderGround_UgPokeLottery__GetRarePoke (Dpr_UnderGround_UgPokeLottery_o* __this, int32_t randMarkID, int32_t versionID, const MethodInfo* method);
void Dpr_UnderGround_UgPokeLottery__LotteryPoke (Dpr_UnderGround_UgPokeLottery_o* __this, XLSXContent_UgEncount_Sheettable_array* origList, System_Collections_Generic_List_UgPokeLottery_PokeSlot__o* slots, uint8_t rareTryCount, const MethodInfo* method);
Pml_PokePara_PokemonParam_o* Dpr_UnderGround_UgPokeLottery__CreatePokemonParam_by_Tokusei (Dpr_UnderGround_UgPokeLottery_o* __this, int32_t monsNo, uint8_t rareTryCount, const MethodInfo* method);
int16_t Dpr_UnderGround_UgPokeLottery__GetTamagoWazaNo (Dpr_UnderGround_UgPokeLottery_o* __this, Pml_PokePara_PokemonParam_o* param, const MethodInfo* method);
void Dpr_UnderGround_UgPokeLottery__SetTamagoWaza (Dpr_UnderGround_UgPokeLottery_o* __this, Pml_PokePara_PokemonParam_o* param, uint16_t wazaNo, const MethodInfo* method);
XLSXContent_UgEncount_Sheettable_array* Dpr_UnderGround_UgPokeLottery__GetEnablePokes (Dpr_UnderGround_UgPokeLottery_o* __this, int32_t versionNo, int32_t storyNo, const MethodInfo* method);
XLSXContent_UgEncount_Sheettable_array* Dpr_UnderGround_UgPokeLottery__GetFilteredListWithTypeAndSize (Dpr_UnderGround_UgPokeLottery_o* __this, XLSXContent_UgEncount_Sheettable_array* list, Dpr_UnderGround_UgPokeLottery_PokeSlot_o* slot, const MethodInfo* method);
System_Collections_Generic_List_UgPokeLottery_PokeSlot__o* Dpr_UnderGround_UgPokeLottery__CreateSlots (Dpr_UnderGround_UgPokeLottery_o* __this, int32_t Num, const MethodInfo* method);
int32_t Dpr_UnderGround_UgPokeLottery__GetRandomSize (Dpr_UnderGround_UgPokeLottery_o* __this, System_Collections_Generic_List_MonsSize__o* list, System_Collections_Generic_List_MonsSize__o* existSizeList, const MethodInfo* method);
int32_t Dpr_UnderGround_UgPokeLottery__GetStoryNo (Dpr_UnderGround_UgPokeLottery_o* __this, const MethodInfo* method);
int32_t Dpr_UnderGround_UgPokeLottery__GetVersionNo (Dpr_UnderGround_UgPokeLottery_o* __this, const MethodInfo* method);
uint16_t Dpr_UnderGround_UgPokeLottery__GetPokeLevel (Dpr_UnderGround_UgPokeLottery_o* __this, bool SelectForceMax, const MethodInfo* method);
void Dpr_UnderGround_UgPokeLottery___ctor (Dpr_UnderGround_UgPokeLottery_o* __this, const MethodInfo* method);
