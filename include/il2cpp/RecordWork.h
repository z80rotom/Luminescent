#pragma once

#include "il2cpp.h"

void RecordWork__Create (const MethodInfo* method_info);
void RecordWork__CreateAddData (const MethodInfo* method_info);
void RecordWork__PatchLanguage (const MethodInfo* method_info);
void RecordWork__Add (int32_t index, uint32_t add, const MethodInfo* method_info);
void RecordWork__Add (int32_t index, uint32_t add, const MethodInfo* method_info);
void RecordWork__Sub (int32_t index, uint32_t add, const MethodInfo* method_info);
void RecordWork__Sub (int32_t index, uint32_t add, const MethodInfo* method_info);
void RecordWork__Set (int32_t index, uint32_t value, const MethodInfo* method_info);
void RecordWork__Set (int32_t index, uint32_t value, const MethodInfo* method_info);
uint32_t RecordWork__Get (int32_t index, const MethodInfo* method_info);
uint32_t RecordWork__Get (int32_t index, const MethodInfo* method_info);
uint32_t RecordWork__MaxValue (int32_t index, int32_t* recordindex, const MethodInfo* method_info);
uint32_t RecordWork__MaxValue (int32_t index, int32_t* recordindex, const MethodInfo* method_info);
int32_t RecordWork__CheckHeadData (DPData_RECORD_HEAD_o* recodeHeadData, const MethodInfo* method_info);
int32_t RecordWork__CheckHeadAndGroupData (DPData_RECORD_HEAD_o* recodeHeadData, DPData_RANDOM_SEED_o* seed, const MethodInfo* method_info);
int32_t RecordWork__GetNullGroup (const MethodInfo* method_info);
void RecordWork__SetHeadRecord (int32_t index, DPData_RECORD_HEAD_o* recodeHeadData, const MethodInfo* method_info);
int32_t RecordWork__GetOldRecordIndex (const MethodInfo* method_info);
int32_t RecordWork__SetOtherRecord (DPData_RANDOM_SEED_o seed, DPData_RECORD_o* record, DPData_RECORD_HEAD_o* recodeHeadData, const MethodInfo* method_info);
void RecordWork__AddDataMineNull (const MethodInfo* method_info);
System_String_o* RecordWork__GetUserName (int32_t index, const MethodInfo* method_info);
uint32_t RecordWork__GetUniqueID (int32_t index, const MethodInfo* method_info);
int32_t RecordWork__GetLanguage (int32_t index, const MethodInfo* method_info);
uint8_t RecordWork__GetSex (int32_t index, const MethodInfo* method_info);
int32_t RecordWork__GetBodyType (int32_t index, const MethodInfo* method_info);
uint8_t RecordWork__GetRankingActive (int32_t index, int32_t uiIndex, const MethodInfo* method_info);
void RecordWork__SetRankingDisable (int32_t index, int32_t uiIndex, const MethodInfo* method_info);
void RecordWork__LimitCheck (uint32_t* data, uint32_t limit, const MethodInfo* method_info);
void RecordWork__IllegalDataCheck (const MethodInfo* method_info);
