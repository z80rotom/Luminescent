#pragma once

#include "il2cpp.h"

int32_t TvWork__RandRange (int32_t min, int32_t max, const MethodInfo* method);
void TvWork__GetLinkRecord (int32_t tvProgram, DPData_TV_DATA_ID_INT_array** recordInt, DPData_TV_DATA_ID_STR_array** recordStr, const MethodInfo* method);
void TvWork__Initialize (const MethodInfo* method);
void TvWork__RecordTvIntDataSet (int32_t index, int32_t value, const MethodInfo* method);
void TvWork__RecordTvIntDataSet (int32_t index, int32_t value, const MethodInfo* method);
void TvWork__RecordTvStrDataSet (int32_t index, System_String_o* value, const MethodInfo* method);
void TvWork__RecordTvStrDataSet (int32_t index, System_String_o* value, uint8_t language, const MethodInfo* method);
void TvWork__RecordTvStrDataSet (int32_t index, System_String_o* value, uint8_t language, uint8_t genderId, const MethodInfo* method);
void TvWork__RecordTvStrDataSet (int32_t index, System_String_o* value, const MethodInfo* method);
void TvWork__RecordTvStrDataSet (int32_t index, System_String_o* value, uint8_t language, const MethodInfo* method);
void TvWork__RecordTvStrDataSet (int32_t index, System_String_o* value, uint8_t language, uint8_t genderId, const MethodInfo* method);
void TvWork__TvBranchDataSet (int32_t index, int32_t value, const MethodInfo* method);
void TvWork__TVTpicEnable (int32_t index, const MethodInfo* method);
void TvWork__TVTpicDisable (int32_t index, const MethodInfo* method);
int32_t TvWork__GetRecordTvIntData (int32_t index, const MethodInfo* method);
int32_t TvWork__GetRecordTvIntData (int32_t index, const MethodInfo* method);
System_String_o* TvWork__GetRecordTvStrData (int32_t index, const MethodInfo* method);
System_String_o* TvWork__GetRecordTvStrData (int32_t index, const MethodInfo* method);
void TvWork__GetRecordTvStrData (int32_t index, System_String_o** str, int32_t* langId, const MethodInfo* method);
void TvWork__GetRecordTvStrData (int32_t index, System_String_o** str, int32_t* langId, const MethodInfo* method);
void TvWork__GetRecordTvStrData (int32_t index, System_String_o** str, int32_t* langId, int32_t* genderId, const MethodInfo* method);
void TvWork__GetRecordTvStrData (int32_t index, System_String_o** str, int32_t* langId, int32_t* genderId, const MethodInfo* method);
int32_t TvWork__GetTvBranchData (int32_t index, const MethodInfo* method);
bool TvWork__GetTVTpicCreate (int32_t index, const MethodInfo* method);
void TvWork__AddTvWatchCount (const MethodInfo* method);
int32_t TvWork__GetTvWatchCount (const MethodInfo* method);
int32_t TvWork__GetOverSaveDataIntMyWorkIndex (int32_t index, const MethodInfo* method);
int32_t TvWork__GetOverSaveDataIntUseWorkIndex (int32_t index, const MethodInfo* method);
TvWork_RecordData_o* TvWork__CreateRecordData (const MethodInfo* method);
void TvWork__ApplyRecordData (TvWork_RecordData_o* recordData, const MethodInfo* method);
bool TvWork__CheckEnableRecordProgram (int32_t tvProgram, const MethodInfo* method);
int32_t TvWork__GetMyBranchData (int32_t tvProgram, const MethodInfo* method);
DPData_TV_STR_DATA_o TvWork__GetMyStrData (int32_t index, const MethodInfo* method);
int32_t TvWork__GetMyIntData (int32_t index, const MethodInfo* method);
void TvWork__SetUseBranchData (int32_t tvProgram, int32_t value, const MethodInfo* method);
void TvWork__SetUseStrData (int32_t index, DPData_TV_STR_DATA_o value, const MethodInfo* method);
void TvWork__SetUseIntData (int32_t index, int32_t value, const MethodInfo* method);
XLSXContent_TvDataTable_Sheetdata_o* TvWork__GetTableData (int32_t tvProgram, const MethodInfo* method);
XLSXContent_TvDataTable_Sheetdata_o* TvWork__GetTableData (int32_t tvProgram, const MethodInfo* method);
int32_t TvWork__GetChannel (const MethodInfo* method);
int32_t TvWork__GetChannel (int32_t hour, int32_t minute, int32_t dayOfWeek, const MethodInfo* method);
int32_t TvWork__FindEnableProgram (const MethodInfo* method);
bool TvWork__CheckEnableProgram (int32_t id, const MethodInfo* method);
System_Int32_array* TvWork__GetCommercialIndexArray (const MethodInfo* method);
bool TvWork__FlagCheck (int32_t flagIndex, const MethodInfo* method);
void TvWork__CapturePokemon (Pml_PokePara_PokemonParam_o* param, int32_t ballcnt, const MethodInfo* method);
void TvWork__CaptureFailed (int32_t ballcnt, bool isWin, const MethodInfo* method);
void TvWork__SetFishing (int32_t rod, int32_t monsno, const MethodInfo* method);
void TvWork__ChangeGroupName (const MethodInfo* method);
void TvWork__HiddenItem (uint16_t itemNo, const MethodInfo* method);
void TvWork__EggHatch (Pml_PokePara_PokemonParam_o* param, int32_t placeNo, const MethodInfo* method);
void TvWork__Seimeihandan (Pml_PokePara_PokemonParam_o* param, const MethodInfo* method);
void TvWork__Kasekihori (int32_t itemNo, const MethodInfo* method);
void TvWork__Safari (int32_t monsNo, int32_t safariCount, const MethodInfo* method);
void TvWork__Ryouyaku (Pml_PokePara_PokemonParam_o* param, uint16_t itemNo, const MethodInfo* method);
void TvWork__KinomiHousaku (uint16_t itemNo, int32_t itemCount, const MethodInfo* method);
void TvWork__NewGroup (const MethodInfo* method);
void TvWork__CustumBallSakusei (int32_t sealName, int32_t monsNo, const MethodInfo* method);
void TvWork__RareMonohiroi (uint16_t itemNo, Pml_PokePara_PokemonParam_o* param, const MethodInfo* method);
void TvWork__HimitsukichiReceiveNice (int32_t niceCount, const MethodInfo* method);
void TvWork__HimitsukichiSendNice (int32_t niceCount, const MethodInfo* method);
void TvWork__BtlTowerRensyouKousin (int32_t monsNo, int32_t winCount, bool isDouble, const MethodInfo* method);
void TvWork__OokisasokuteiKousin (int32_t monsNo, int32_t sizeValue, const MethodInfo* method);
void TvWork__KinomiMeijin (uint16_t itemNo, const MethodInfo* method);
void TvWork__SafariMeijin (int32_t pokemonCount, const MethodInfo* method);
void TvWork__SekizouHakkutunin (int32_t statueCount, const MethodInfo* method);
void TvWork__Hikariishi (int32_t hikariishiCount, const MethodInfo* method);
void TvWork__GroupSyoukai (int32_t groupPokemonType, System_String_o* groupName, System_String_o* memberName, const MethodInfo* method);
void TvWork__WeatherReport (int32_t weatherNo, int32_t placeNo, const MethodInfo* method);
void TvWork__TairyouHassei (int32_t placeNo, int32_t monsNo, const MethodInfo* method);
void TvWork__PokemonAisyou (int32_t aisyou, int32_t pokemonType, int32_t effectivePokemonType, const MethodInfo* method);
void TvWork__KinomiJouhou (int32_t state, int32_t placeNo, const MethodInfo* method);
void TvWork__DouguMotteruYasei (int32_t monsNo, uint16_t itemNo, const MethodInfo* method);
void TvWork__FashionChange (int32_t style, int32_t placeNo, const MethodInfo* method);
void TvWork__MakeDailyTopic (const MethodInfo* method);
void TvWork__MakeTairyouhasseiTopic (const MethodInfo* method);
void TvWork___cctor (const MethodInfo* method);
