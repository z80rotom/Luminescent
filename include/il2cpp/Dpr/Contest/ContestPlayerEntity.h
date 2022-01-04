#pragma once

#include "il2cpp.h"

void Dpr_Contest_ContestPlayerEntity___ctor (Dpr_Contest_ContestPlayerEntity_o* __this, Dpr_Contest_AContestPlayerData_o* playerData, const MethodInfo* method);
void Dpr_Contest_ContestPlayerEntity__Setup (Dpr_Contest_ContestPlayerEntity_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestPlayerEntity__SetupTrainerModel (Dpr_Contest_ContestPlayerEntity_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestPlayerEntity__SetupPokeModel (Dpr_Contest_ContestPlayerEntity_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestPlayerEntity__Dispose (Dpr_Contest_ContestPlayerEntity_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestPlayerEntity__ResetParam (Dpr_Contest_ContestPlayerEntity_o* __this, UnityEngine_Vector3_o trainerPos, UnityEngine_Vector3_o pokemonPos, const MethodInfo* method);
Dpr_Contest_AContestPlayerData_o* Dpr_Contest_ContestPlayerEntity__get_PlayerData (Dpr_Contest_ContestPlayerEntity_o* __this, const MethodInfo* method);
int32_t Dpr_Contest_ContestPlayerEntity__get_Index (Dpr_Contest_ContestPlayerEntity_o* __this, const MethodInfo* method);
int32_t Dpr_Contest_ContestPlayerEntity__get_PlayerType (Dpr_Contest_ContestPlayerEntity_o* __this, const MethodInfo* method);
UnityEngine_Sprite_o* Dpr_Contest_ContestPlayerEntity__GetPmIconSpr (Dpr_Contest_ContestPlayerEntity_o* __this, const MethodInfo* method);
UnityEngine_Sprite_o* Dpr_Contest_ContestPlayerEntity__GetWazaTypeIconSpr (Dpr_Contest_ContestPlayerEntity_o* __this, const MethodInfo* method);
Dpr_Battle_View_Objects_BOTrainer_o* Dpr_Contest_ContestPlayerEntity__get_BoTrainer (Dpr_Contest_ContestPlayerEntity_o* __this, const MethodInfo* method);
Dpr_Battle_View_Objects_BOPokemon_o* Dpr_Contest_ContestPlayerEntity__get_BoPokemon (Dpr_Contest_ContestPlayerEntity_o* __this, const MethodInfo* method);
Dpr_ObjectEntity_o* Dpr_Contest_ContestPlayerEntity__get_BallEntity (Dpr_Contest_ContestPlayerEntity_o* __this, const MethodInfo* method);
XLSXContent_PokemonInfo_SheetCatalog_o* Dpr_Contest_ContestPlayerEntity__get_Catalog (Dpr_Contest_ContestPlayerEntity_o* __this, const MethodInfo* method);
bool Dpr_Contest_ContestPlayerEntity__get_IsActiveBOPokemon (Dpr_Contest_ContestPlayerEntity_o* __this, const MethodInfo* method);
bool Dpr_Contest_ContestPlayerEntity__get_IsActiveWazaPokemon (Dpr_Contest_ContestPlayerEntity_o* __this, const MethodInfo* method);
int32_t Dpr_Contest_ContestPlayerEntity__CalcTotalScore (Dpr_Contest_ContestPlayerEntity_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestPlayerEntity__AppendLoadResource (Dpr_Contest_ContestPlayerEntity_o* __this, UnityEngine_Transform_o* cluster, UnityEngine_Transform_o* parent, UnityEngine_Vector3_o trainerPos, UnityEngine_Vector3_o pokemonPos, int32_t colorID, int32_t trainerType, bool isUser, const MethodInfo* method);
void Dpr_Contest_ContestPlayerEntity__AppendLoadTrainerModel (Dpr_Contest_ContestPlayerEntity_o* __this, System_String_o* path, UnityEngine_Transform_o* cluster, UnityEngine_Vector3_o pos, int32_t colorID, int32_t trainerType, const MethodInfo* method);
void Dpr_Contest_ContestPlayerEntity__AppendLoadPokemonModel (Dpr_Contest_ContestPlayerEntity_o* __this, System_String_o* path, UnityEngine_Transform_o* parent, UnityEngine_Vector3_o pos, bool isUser, const MethodInfo* method);
void Dpr_Contest_ContestPlayerEntity__CreateCopyModel (Dpr_Contest_ContestPlayerEntity_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
void Dpr_Contest_ContestPlayerEntity__AppendLoadBallModel (Dpr_Contest_ContestPlayerEntity_o* __this, System_String_o* path, UnityEngine_Transform_o* cluster, const MethodInfo* method);
System_Collections_Generic_List_BtlvEffectInstance__o* Dpr_Contest_ContestPlayerEntity__get_SealEffects (Dpr_Contest_ContestPlayerEntity_o* __this, const MethodInfo* method);
Dpr_Battle_View_Objects_BtlvEffectInstance_o* Dpr_Contest_ContestPlayerEntity__get_LightEffect (Dpr_Contest_ContestPlayerEntity_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestPlayerEntity__CreateSealEffectInstance (Dpr_Contest_ContestPlayerEntity_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestPlayerEntity__ReleaseBallEffects (Dpr_Contest_ContestPlayerEntity_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestPlayerEntity__AppendLoadWazaTypeIcon (Dpr_Contest_ContestPlayerEntity_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestPlayerEntity__AppendLoadPokemonIcon (Dpr_Contest_ContestPlayerEntity_o* __this, const MethodInfo* method);
Dpr_Battle_View_Objects_BOPokemon_o* Dpr_Contest_ContestPlayerEntity__get_WazaPokemon (Dpr_Contest_ContestPlayerEntity_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestPlayerEntity__ReplaceWazaPokemon (Dpr_Contest_ContestPlayerEntity_o* __this, Dpr_Battle_View_Objects_BOPokemon_o* boPokemon, const MethodInfo* method);
void Dpr_Contest_ContestPlayerEntity__OnLaunchWazaAnimation (Dpr_Contest_ContestPlayerEntity_o* __this, UnityEngine_Vector3_o pos, const MethodInfo* method);
void Dpr_Contest_ContestPlayerEntity__OnFinishWazaAnimation (Dpr_Contest_ContestPlayerEntity_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestPlayerEntity__SetModelRenderActive (Dpr_Contest_ContestPlayerEntity_o* __this, bool active, const MethodInfo* method);
void Dpr_Contest_ContestPlayerEntity__UnloadAssetBundle (Dpr_Contest_ContestPlayerEntity_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestPlayerEntity__ReleaseBallResource (Dpr_Contest_ContestPlayerEntity_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestPlayerEntity___AppendLoadPokemonIcon_b__59_0 (Dpr_Contest_ContestPlayerEntity_o* __this, UnityEngine_Sprite_o* spr, const MethodInfo* method);
