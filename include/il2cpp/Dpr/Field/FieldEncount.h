#pragma once

#include "il2cpp.h"

Dpr_Field_EncountResult_o* Dpr_Field_FieldEncount__FieldEncount_Check (FieldObjectEntity_o* entity, bool inGridmove, const MethodInfo* method);
void Dpr_Field_FieldEncount__EncountAttributeCheck (int32_t attribute, XLSXContent_FieldEncountTable_Sheettable_o* data, int32_t* enc_location, uint32_t* prob, const MethodInfo* method);
void Dpr_Field_FieldEncount__GetEncountProbFishing (int32_t inRodType, XLSXContent_FieldEncountTable_Sheettable_o* data, uint32_t* prob, const MethodInfo* method);
Dpr_Field_EncountResult_o* Dpr_Field_FieldEncount__SetFishingEncount (int32_t inRodType, UnityEngine_Vector2Int_o position, const MethodInfo* method);
Dpr_Field_EncountResult_o* Dpr_Field_FieldEncount__SetSweetEncount (const MethodInfo* method);
void Dpr_Field_FieldEncount__ApplyDayTime (MonsLv_array** enc_data, XLSXContent_FieldEncountTable_Sheettable_o* data, const MethodInfo* method);
void Dpr_Field_FieldEncount__ApplyAgbSlot (MonsLv_array** enc_data, XLSXContent_FieldEncountTable_Sheettable_o* data, const MethodInfo* method);
int32_t Dpr_Field_FieldEncount__GetMaxLvMonsTblNo (MonsLv_array* inEncCommonData, Dpr_Field_FieldEncount_ENC_FLD_SPA_o inFldSpa, int32_t inTblNo, const MethodInfo* method);
void Dpr_Field_FieldEncount__SetSpaStruct (Pml_PokePara_PokemonParam_o* inPokeParam, XLSXContent_FieldEncountTable_Sheettable_o* inData, Dpr_Field_FieldEncount_ENC_FLD_SPA_o* outSpa, const MethodInfo* method);
uint32_t Dpr_Field_FieldEncount__ChangeEncProb (bool inIsFishing, uint32_t inProb, Dpr_Field_FieldEncount_ENC_FLD_SPA_o inFldSpa, int32_t inWeatherCode, Pml_PokePara_PokemonParam_o* inPokeParam, const MethodInfo* method);
bool Dpr_Field_FieldEncount__CheckEcntCancelByLv (Dpr_Field_FieldEncount_ENC_FLD_SPA_o inFldSpa, Pml_PokePara_PokemonParam_o* inMyPokeParam, int32_t inEneLv, const MethodInfo* method);
bool Dpr_Field_FieldEncount__CheckSpray (int32_t inEneLv, Dpr_Field_FieldEncount_ENC_FLD_SPA_o* inSpa, const MethodInfo* method);
uint32_t Dpr_Field_FieldEncount__ChangeEncProbByEquipItem (Pml_PokePara_PokemonParam_o* inMyPokeParam, uint32_t ioPer, const MethodInfo* method);
bool Dpr_Field_FieldEncount__WildEncSingle (Pml_PokePara_PokemonParam_o* poke_param, Dpr_Field_EncountResult_o** param, XLSXContent_FieldEncountTable_Sheettable_o* data, MonsLv_array* enc_data, Dpr_Field_FieldEncount_ENC_FLD_SPA_o inFldSpa, Dpr_Field_FieldEncount_SWAY_ENC_INFO_o inSwayEncInfo, const MethodInfo* method);
bool Dpr_Field_FieldEncount__WildEncDouble (Pml_PokePara_PokemonParam_o* poke_param, Dpr_Field_EncountResult_o** param, MonsLv_array* enc_data, Dpr_Field_FieldEncount_ENC_FLD_SPA_o inFldSpa, const MethodInfo* method);
bool Dpr_Field_FieldEncount__WildWaterEncSingle (Pml_PokePara_PokemonParam_o* poke_param, Dpr_Field_EncountResult_o** param, MonsLv_array* enc_data, Dpr_Field_FieldEncount_ENC_FLD_SPA_o inFldSpa, const MethodInfo* method);
bool Dpr_Field_FieldEncount__FishingEncSingle (Pml_PokePara_PokemonParam_o* poke_param, Dpr_Field_EncountResult_o** battle_param, MonsLv_array* inData, Dpr_Field_FieldEncount_ENC_FLD_SPA_o inFldSpa, int32_t inRodType, const MethodInfo* method);
bool Dpr_Field_FieldEncount__MapEncountCheck (uint32_t per, int32_t attr, bool inGridmove, const MethodInfo* method);
bool Dpr_Field_FieldEncount__EncountWalkCheck (float walkcnt, uint32_t per, const MethodInfo* method);
bool Dpr_Field_FieldEncount__EncountCheckMain (uint32_t per, const MethodInfo* method);
int32_t Dpr_Field_FieldEncount__RandomPokeSet (const MethodInfo* method);
int32_t Dpr_Field_FieldEncount__RandomPokeSetNoGround (const MethodInfo* method);
int32_t Dpr_Field_FieldEncount__RandomPokeSetFishing (int32_t inFishingRod, const MethodInfo* method);
bool Dpr_Field_FieldEncount__SetEncountData (Pml_PokePara_PokemonParam_o* param, int32_t inRodType, Dpr_Field_FieldEncount_ENC_FLD_SPA_o inFldSpa, MonsLv_array* inData, int32_t location, int32_t inTarget, Dpr_Field_EncountResult_o** outBattleParam, const MethodInfo* method);
bool Dpr_Field_FieldEncount__SetEncountDataDecideMons (int32_t inMonsNo, uint32_t inLv, int32_t inTarget, bool inRare, Dpr_Field_FieldEncount_ENC_FLD_SPA_o inFldSpa, Pml_PokePara_PokemonParam_o* param, Dpr_Field_EncountResult_o** outBattleParam, const MethodInfo* method);
bool Dpr_Field_FieldEncount__SetSwayEncountData (Pml_PokePara_PokemonParam_o* param, Dpr_Field_FieldEncount_ENC_FLD_SPA_o inFldSpa, MonsLv_array* inData, int32_t inTarget, Dpr_Field_EncountResult_o** outBattleParam, int32_t inMonsNo, uint32_t inLv, const MethodInfo* method);
bool Dpr_Field_FieldEncount__CheckFixTypeEcnt (Dpr_Field_FieldEncount_ENC_FLD_SPA_o inFldSpa, MonsLv_array* inData, int32_t inListNum, uint8_t type, int32_t tokusei, int32_t* outNo, const MethodInfo* method);
bool Dpr_Field_FieldEncount__FixPokeSet (MonsLv_array* inData, int32_t inListNum, uint8_t type, int32_t* outNo, const MethodInfo* method);
int32_t Dpr_Field_FieldEncount__SetEncountPokeLv (MonsLv_o inData, Dpr_Field_FieldEncount_ENC_FLD_SPA_o inFldSpa, const MethodInfo* method);
void Dpr_Field_FieldEncount__EncountParamSetRare (int32_t poke, int32_t lv, int32_t inTarget, Dpr_Field_FieldEncount_ENC_FLD_SPA_o inFldSpa, Pml_PokePara_PokemonParam_o* inPokeParam, Dpr_Field_EncountResult_o** outBattleParam, const MethodInfo* method);
void Dpr_Field_FieldEncount__EncountParamSet (int32_t poke, int32_t lv, int32_t inTarget, Dpr_Field_FieldEncount_ENC_FLD_SPA_o inFldSpa, Pml_PokePara_PokemonParam_o* inPokeParam, Dpr_Field_EncountResult_o** outBattleParam, const MethodInfo* method);
void Dpr_Field_FieldEncount__LastTokuseiCheck (Dpr_Field_EncountResult_o** result, Dpr_Field_FieldEncount_ENC_FLD_SPA_o* spa, const MethodInfo* method);
void Dpr_Field_FieldEncount__LastProc (Dpr_Field_EncountResult_o** result, Dpr_Field_FieldEncount_ENC_FLD_SPA_o* spa, const MethodInfo* method);
void Dpr_Field_FieldEncount__SetSfariMonster (bool inSafariFlg, bool inBookGet, MonsLv_array** enc_data, const MethodInfo* method);
int32_t Dpr_Field_FieldEncount__GetSafariScopeMonster (int32_t zoneId, const MethodInfo* method);
void Dpr_Field_FieldEncount__SafariEnc_SetSafariEnc (int32_t inRandomSeed, bool inBookGet, int32_t inZoneID, MonsLv_array** outenc_data, const MethodInfo* method);
int32_t Dpr_Field_FieldEncount__CheckMovePokeEnc (const MethodInfo* method);
bool Dpr_Field_FieldEncount__IsTairyouHassei (const MethodInfo* method);
int32_t Dpr_Field_FieldEncount__SafariRandomSeed (const MethodInfo* method);
void Dpr_Field_FieldEncount___ctor (Dpr_Field_FieldEncount_o* __this, const MethodInfo* method);
