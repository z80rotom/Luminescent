#pragma once

#include "il2cpp.h"

Dpr_BallDeco_CapsuleData_o Dpr_UI_CapsuleInfo__get_Data (Dpr_UI_CapsuleInfo_o* __this, const MethodInfo* method);
void Dpr_UI_CapsuleInfo__set_Data (Dpr_UI_CapsuleInfo_o* __this, Dpr_BallDeco_CapsuleData_o value, const MethodInfo* method);
Pml_PokePara_PokemonParam_o* Dpr_UI_CapsuleInfo__get_AttachPokemonParam (Dpr_UI_CapsuleInfo_o* __this, const MethodInfo* method);
void Dpr_UI_CapsuleInfo__set_AttachPokemonParam (Dpr_UI_CapsuleInfo_o* __this, Pml_PokePara_PokemonParam_o* value, const MethodInfo* method);
Pml_PokePara_PokemonParam_o* Dpr_UI_CapsuleInfo__get_PreviewPokemonParam (Dpr_UI_CapsuleInfo_o* __this, const MethodInfo* method);
void Dpr_UI_CapsuleInfo__set_PreviewPokemonParam (Dpr_UI_CapsuleInfo_o* __this, Pml_PokePara_PokemonParam_o* value, const MethodInfo* method);
bool Dpr_UI_CapsuleInfo__get_Is3DEditMode (Dpr_UI_CapsuleInfo_o* __this, const MethodInfo* method);
bool Dpr_UI_CapsuleInfo__get_IsAppliedTemplate (Dpr_UI_CapsuleInfo_o* __this, const MethodInfo* method);
bool Dpr_UI_CapsuleInfo__get_IsAffixedSeal (Dpr_UI_CapsuleInfo_o* __this, const MethodInfo* method);
bool Dpr_UI_CapsuleInfo__get_IsAffixSealMaxCount (Dpr_UI_CapsuleInfo_o* __this, const MethodInfo* method);
void Dpr_UI_CapsuleInfo___ctor (Dpr_UI_CapsuleInfo_o* __this, int32_t id, const MethodInfo* method);
void Dpr_UI_CapsuleInfo___ctor (Dpr_UI_CapsuleInfo_o* __this, Dpr_BallDeco_CapsuleData_o data, Pml_PokePara_PokemonParam_o* pokemonParam, const MethodInfo* method);
void Dpr_UI_CapsuleInfo__RefreshData (Dpr_UI_CapsuleInfo_o* __this, const MethodInfo* method);
void Dpr_UI_CapsuleInfo__AttachPokemon (Dpr_UI_CapsuleInfo_o* __this, Pml_PokePara_PokemonParam_o* pokemonParam, const MethodInfo* method);
void Dpr_UI_CapsuleInfo__DetachPokemon (Dpr_UI_CapsuleInfo_o* __this, const MethodInfo* method);
void Dpr_UI_CapsuleInfo__SwitchEditMode (Dpr_UI_CapsuleInfo_o* __this, const MethodInfo* method);
void Dpr_UI_CapsuleInfo__Swap (Dpr_UI_CapsuleInfo_o* __this, Dpr_UI_CapsuleInfo_o* capsuleInfo, const MethodInfo* method);
int32_t Dpr_UI_CapsuleInfo__GetCanCopySealCount (Dpr_UI_CapsuleInfo_o* __this, const MethodInfo* method);
void Dpr_UI_CapsuleInfo__CopyTo (Dpr_UI_CapsuleInfo_o* __this, Dpr_UI_CapsuleInfo_o* capsuleInfo, const MethodInfo* method);
int32_t Dpr_UI_CapsuleInfo__AddAffixSeal (Dpr_UI_CapsuleInfo_o* __this, uint16_t sealId, UnityEngine_Vector3_o pos, const MethodInfo* method);
void Dpr_UI_CapsuleInfo__SetAffixSeal (Dpr_UI_CapsuleInfo_o* __this, int32_t affixSealId, uint16_t sealId, UnityEngine_Vector3_o pos, const MethodInfo* method);
void Dpr_UI_CapsuleInfo__RemoveAffixSeal (Dpr_UI_CapsuleInfo_o* __this, int32_t affixSealId, bool isDoReturn, const MethodInfo* method);
void Dpr_UI_CapsuleInfo__RemoveAllAffixSeals (Dpr_UI_CapsuleInfo_o* __this, const MethodInfo* method);
void Dpr_UI_CapsuleInfo__SwapAffixSeal (Dpr_UI_CapsuleInfo_o* __this, int32_t affixSealId, uint16_t sealId, const MethodInfo* method);
void Dpr_UI_CapsuleInfo__SwapEachAffixSeal (Dpr_UI_CapsuleInfo_o* __this, int32_t toAffixSealId, int32_t fromAffixSealId, const MethodInfo* method);
