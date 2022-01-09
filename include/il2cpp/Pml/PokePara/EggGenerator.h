#pragma once

#include "il2cpp.h"

Pml_PokePara_PokemonParam_o* Pml_PokePara_EggGenerator__CreateEgg (Pml_PokePara_CoreParam_o* poke1, Pml_PokePara_CoreParam_o* poke2, Pml_PokePara_EggGenerator_Setting_o* setting, const MethodInfo* method_info);
Pml_PokePara_CoreParam_o* Pml_PokePara_EggGenerator__CreateEgg_CoreParam (Pml_PokePara_CoreParam_o* poke1, Pml_PokePara_CoreParam_o* poke2, Pml_PokePara_EggGenerator_Setting_o* setting, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__DecideParents (Pml_PokePara_Parents_o* parents, Pml_PokePara_CoreParam_o* poke1, Pml_PokePara_CoreParam_o* poke2, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__CorrectParents_SEX (Pml_PokePara_Parents_o* parents, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__CorrectParents_METAMON (Pml_PokePara_Parents_o* parents, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__ReverseParents (Pml_PokePara_Parents_o* parents, const MethodInfo* method_info);
Pml_PokePara_CoreParam_o* Pml_PokePara_EggGenerator__GetBasePokemon_forMonsNo (Pml_PokePara_Parents_o* parents, const MethodInfo* method_info);
Pml_PokePara_CoreParam_o* Pml_PokePara_EggGenerator__GetBasePokemon_forForm (Pml_PokePara_Parents_o* parents, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__DecideEggParams (Pml_PokePara_EggParam_o* egg_param, Pml_PokePara_Parents_o* parents, Pml_PokePara_EggGenerator_Setting_o* setting, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__DecideEggParam_MonsNo_BASIC (Pml_PokePara_EggParam_o* egg, Pml_PokePara_Parents_o* parents, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__DecideEggParam_MonsNo_NIDORAN (Pml_PokePara_EggParam_o* egg, Pml_PokePara_Parents_o* parents, Pml_PokePara_EggGenerator_SavedRandomFunc_o* randFunc, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__DecideEggParam_MonsNo_BARUBIITO (Pml_PokePara_EggParam_o* egg, Pml_PokePara_Parents_o* parents, Pml_PokePara_EggGenerator_SavedRandomFunc_o* randFunc, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__DecideEggParam_MonsNo_FIONE (Pml_PokePara_EggParam_o* egg, Pml_PokePara_Parents_o* parents, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__DecideEggParam_MonsNo_FormNo_BABY (Pml_PokePara_EggParam_o* egg, Pml_PokePara_Parents_o* parents, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__DecideEggParam_Form_BASIC (Pml_PokePara_EggParam_o* egg, Pml_PokePara_Parents_o* parents, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__DecideEggParam_Form_KAWARAZUNOISHI (Pml_PokePara_EggParam_o* egg, Pml_PokePara_Parents_o* parents, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__DecideEggParam_Form_REGION (Pml_PokePara_EggParam_o* egg, Pml_PokePara_Parents_o* parents, Pml_PokePara_EggGenerator_Setting_o* setting, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__DecideEggParam_Form_SIRUKII (Pml_PokePara_EggParam_o* egg, Pml_PokePara_Parents_o* parents, Pml_PokePara_EggGenerator_SavedRandomFunc_o* randFunc, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__DecideEggParam_Form_MINOMUTTI (Pml_PokePara_EggParam_o* egg, Pml_PokePara_Parents_o* parents, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__DecideEggParam_Sex (Pml_PokePara_EggParam_o* egg, int32_t monsno, uint16_t formno, Pml_PokePara_EggGenerator_SavedRandomFunc_o* randFunc, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__DecideEggParam_Seikaku_BASIC (Pml_PokePara_EggParam_o* egg, Pml_PokePara_Parents_o* parents, Pml_PokePara_EggGenerator_SavedRandomFunc_o* randFunc, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__DecideEggParam_Seikaku_KAWARAZUNOISI (Pml_PokePara_EggParam_o* egg, Pml_PokePara_Parents_o* parents, Pml_PokePara_EggGenerator_SavedRandomFunc_o* randFunc, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__DecideEggParam_TokuseiIndex (Pml_PokePara_EggParam_o* egg, Pml_PokePara_Parents_o* parents, Pml_PokePara_EggGenerator_SavedRandomFunc_o* randFunc, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__DecideEggParam_BirthCount (Pml_PokePara_EggParam_o* egg, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__DecideDerivedTalentPower_AKAIITO (Pml_PokePara_EggParam_o* egg, Pml_PokePara_Parents_o* parents, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__DecideDerivedTalentPower_ITEM (Pml_PokePara_EggParam_o* egg, Pml_PokePara_Parents_o* parents, Pml_PokePara_EggGenerator_SavedRandomFunc_o* randFunc, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__DecideDerivedTalentPower_RANDOM (Pml_PokePara_EggParam_o* egg, Pml_PokePara_Parents_o* parents, Pml_PokePara_EggGenerator_SavedRandomFunc_o* randFunc, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__DecideEggParam_TalentPower_RANDOM (Pml_PokePara_EggParam_o* egg, Pml_PokePara_Parents_o* parents, Pml_PokePara_EggGenerator_SavedRandomFunc_o* randFunc, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__DecideEggParam_TalentPower_DERIVE (Pml_PokePara_EggParam_o* egg, Pml_PokePara_Parents_o* parents, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__DecideEggParam_PersonalRnd (Pml_PokePara_EggParam_o* egg, Pml_PokePara_Parents_o* parents, Pml_PokePara_EggGenerator_SavedRandomFunc_o* randFunc, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__DecideEggParam_RareRnd (Pml_PokePara_EggParam_o* egg, Pml_PokePara_Parents_o* parents, bool have_HIKARUOMAMORI, Pml_PokePara_EggGenerator_SavedRandomFunc_o* randFunc, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__DecideEggParam_Waza_DEFAULT (Pml_PokePara_EggParam_o* egg, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__PushWaza_to_EggParam (Pml_PokePara_EggParam_o* egg, int32_t wazano, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__PushEggWaza_to_EggParam (Pml_PokePara_EggParam_o* egg, Pml_PokePara_CoreParam_o* parent, Pml_PokePara_EggWazaData_o* eggWazaData, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__DecideEggParam_Waza_EGG (Pml_PokePara_EggParam_o* egg, Pml_PokePara_Parents_o* parents, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__DecideEggParam_Waza_PARENTS (Pml_PokePara_EggParam_o* egg, Pml_PokePara_Parents_o* parents, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__DecideEggParam_Waza_PITYUU (Pml_PokePara_EggParam_o* egg, Pml_PokePara_Parents_o* parents, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__DecideEggParam_Waza_MACHINE (Pml_PokePara_EggParam_o* egg, Pml_PokePara_Parents_o* parents, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__DecideEggParam_BallID (Pml_PokePara_EggParam_o* egg, Pml_PokePara_Parents_o* parents, Pml_PokePara_EggGenerator_SavedRandomFunc_o* randFunc, const MethodInfo* method_info);
bool Pml_PokePara_EggGenerator__IsWazaMachineAbleToUse (int32_t monsno, uint16_t formno, uint16_t itemno, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator__SetupEggParam (Pml_PokePara_CoreParam_o* egg, Pml_PokePara_EggParam_o* egg_param, Pml_PokePara_Parents_o* parents, Pml_PokePara_EggGenerator_Setting_o* setting, const MethodInfo* method_info);
bool Pml_PokePara_EggGenerator__isFormInheritEnableByKawarazuNoIshi (uint16_t* pFormNo, Pml_PokePara_CoreParam_o* pParent, const MethodInfo* method_info);
int32_t Pml_PokePara_EggGenerator__GetSeedMonsNo (int32_t monsno, uint16_t formno, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator___ctor (Pml_PokePara_EggGenerator_o* __this, const MethodInfo* method_info);
void Pml_PokePara_EggGenerator___cctor (const MethodInfo* method_info);
