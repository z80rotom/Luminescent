#pragma once

#include "il2cpp.h"

bool FieldWazaCutIn__get_IsInitialized (FieldWazaCutIn_o* __this, const MethodInfo* method_info);
void FieldWazaCutIn__set_IsInitialized (FieldWazaCutIn_o* __this, bool value, const MethodInfo* method_info);
bool FieldWazaCutIn__get_IsBusy (FieldWazaCutIn_o* __this, const MethodInfo* method_info);
bool FieldWazaCutIn__get_IsLoaded (FieldWazaCutIn_o* __this, const MethodInfo* method_info);
bool FieldWazaCutIn__get_IsPlayedEffect (FieldWazaCutIn_o* __this, const MethodInfo* method_info);
bool FieldWazaCutIn__get_IsOverrideEnvironmentSettings (FieldWazaCutIn_o* __this, const MethodInfo* method_info);
void FieldWazaCutIn__set_IsOverrideEnvironmentSettings (FieldWazaCutIn_o* __this, bool value, const MethodInfo* method_info);
void FieldWazaCutIn__Initialize (FieldWazaCutIn_o* __this, const MethodInfo* method_info);
void FieldWazaCutIn__Load (FieldWazaCutIn_o* __this, int32_t monsNo, const MethodInfo* method_info);
void FieldWazaCutIn__Load (FieldWazaCutIn_o* __this, Pml_PokePara_PokemonParam_o* param, const MethodInfo* method_info);
void FieldWazaCutIn__Load (FieldWazaCutIn_o* __this, int32_t monsNo, uint16_t formNo, uint8_t sex, bool isRare, const MethodInfo* method_info);
void FieldWazaCutIn__Release (FieldWazaCutIn_o* __this, const MethodInfo* method_info);
void FieldWazaCutIn__Play (FieldWazaCutIn_o* __this, const MethodInfo* method_info);
void FieldWazaCutIn__PlayCutIn (FieldWazaCutIn_o* __this, const MethodInfo* method_info);
int32_t FieldWazaCutIn__GetAnimationIndex (BaseEntity_o* entity, System_String_o* clipName, const MethodInfo* method_info);
void FieldWazaCutIn__End (FieldWazaCutIn_o* __this, const MethodInfo* method_info);
void FieldWazaCutIn__Update (FieldWazaCutIn_o* __this, float deltaTime, const MethodInfo* method_info);
void FieldWazaCutIn__ForceCaptureInvisible (FieldWazaCutIn_o* __this, const MethodInfo* method_info);
float FieldWazaCutIn__GetParam (FieldWazaCutIn_o* __this, int32_t paramIndex, const MethodInfo* method_info);
XLSXContent_FieldWazaCutInParam_SheetPokemonParam_o* FieldWazaCutIn__GetPokemonParam (FieldWazaCutIn_o* __this, int32_t uniqueId, const MethodInfo* method_info);
void FieldWazaCutIn__CalcPokemonPosRot (FieldWazaCutIn_o* __this, XLSXContent_FieldWazaCutInParam_SheetPokemonParam_o* param, UnityEngine_Vector3_o* pos, UnityEngine_Vector3_o* rot, UnityEngine_Vector3_o* scale, const MethodInfo* method_info);
void FieldWazaCutIn__SetEnviroment (FieldWazaCutIn_o* __this, const MethodInfo* method_info);
void FieldWazaCutIn__ResetEnviroment (FieldWazaCutIn_o* __this, const MethodInfo* method_info);
EnvironmentSettings_o* FieldWazaCutIn__GetEnvironmentSettings (FieldWazaCutIn_o* __this, const MethodInfo* method_info);
void FieldWazaCutIn__SetupLightParam (FieldWazaCutIn_o* __this, const MethodInfo* method_info);
void FieldWazaCutIn__SetupCamera (FieldWazaCutIn_o* __this, const MethodInfo* method_info);
void FieldWazaCutIn__ResetCamera (FieldWazaCutIn_o* __this, const MethodInfo* method_info);
void FieldWazaCutIn___ctor (FieldWazaCutIn_o* __this, const MethodInfo* method_info);
void FieldWazaCutIn___Load_b__34_0 (FieldWazaCutIn_o* __this, int32_t type, System_String_o* name, UnityEngine_Object_o* content, const MethodInfo* method_info);
void FieldWazaCutIn___Play_b__36_0 (FieldWazaCutIn_o* __this, bool success, const MethodInfo* method_info);
void FieldWazaCutIn___PlayCutIn_g__ChangeDefaultLayer_37_0 (UnityEngine_GameObject_o* self, int32_t layer, const MethodInfo* method_info);
void FieldWazaCutIn___PlayCutIn_b__37_1 (FieldWazaCutIn_o* __this, Effect_EffectInstance_o* effectInstance, const MethodInfo* method_info);
void FieldWazaCutIn___PlayCutIn_b__37_2 (FieldWazaCutIn_o* __this, Effect_EffectInstance_o* effectInstance, const MethodInfo* method_info);
void FieldWazaCutIn___Update_g__SetPokemonPosX_40_0 (FieldWazaCutIn_o* __this, float x, const MethodInfo* method_info);
