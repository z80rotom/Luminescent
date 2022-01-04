#pragma once

#include "il2cpp.h"

int32_t Dpr_UI_ZukanHabitatTownmap__get_habitatType (Dpr_UI_ZukanHabitatTownmap_o* __this, const MethodInfo* method);
bool Dpr_UI_ZukanHabitatTownmap__get_isNotfound (Dpr_UI_ZukanHabitatTownmap_o* __this, const MethodInfo* method);
void Dpr_UI_ZukanHabitatTownmap__Setup (Dpr_UI_ZukanHabitatTownmap_o* __this, Pml_PokePara_PokemonParam_o* pokemonParam, int32_t timeZone, UnityEngine_Events_UnityAction_Townmap_Cell__bool__o* onCellChanged, const MethodInfo* method);
void Dpr_UI_ZukanHabitatTownmap__SetupSpecial (Dpr_UI_ZukanHabitatTownmap_o* __this, System_Collections_Generic_List_Vector2Int__o* grids, XLSXContent_SheetDistributionTable_o* distData, int32_t habitatType, int32_t type, const MethodInfo* method);
void Dpr_UI_ZukanHabitatTownmap__SetupNormal (Dpr_UI_ZukanHabitatTownmap_o* __this, System_Collections_Generic_List_Vector2Int__o* grids, XLSXContent_SheetDistributionTable_o* distData, int32_t type, int32_t timeZone, const MethodInfo* method);
void Dpr_UI_ZukanHabitatTownmap__SetupHabitat (Dpr_UI_ZukanHabitatTownmap_o* __this, System_Collections_Generic_List_Vector2Int__o* grids, XLSXContent_SheetDistributionTable_o* distData, int32_t type, int32_t timeZone, const MethodInfo* method);
XLSXContent_UIDatabase_SheetDistributionMapchip_o* Dpr_UI_ZukanHabitatTownmap__GetMapchipData (Dpr_UI_ZukanHabitatTownmap_o* __this, UnityEngine_Vector2Int_o grid, int32_t type, int32_t timeZone, const MethodInfo* method);
void Dpr_UI_ZukanHabitatTownmap__ShowHabitat (Dpr_UI_ZukanHabitatTownmap_o* __this, int32_t type, int32_t timeZone, const MethodInfo* method);
bool Dpr_UI_ZukanHabitatTownmap__UpdateMove (Dpr_UI_ZukanHabitatTownmap_o* __this, float deltaTime, Dpr_UI_UIInputController_o* input, const MethodInfo* method);
void Dpr_UI_ZukanHabitatTownmap___ctor (Dpr_UI_ZukanHabitatTownmap_o* __this, const MethodInfo* method);
