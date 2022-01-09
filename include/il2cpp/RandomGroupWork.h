#pragma once

#include "il2cpp.h"

int32_t RandomGroupWork__RandomRange (int32_t min, int32_t max, const MethodInfo* method_info);
int32_t RandomGroupWork__RandomValue (int32_t max, const MethodInfo* method_info);
float RandomGroupWork__Value (const MethodInfo* method_info);
float RandomGroupWork__RandomRangeF (float min, float max, const MethodInfo* method_info);
int32_t RandomGroupWork__GetWorkSize (const MethodInfo* method_info);
void RandomGroupWork__Copy (int32_t from, int32_t to, const MethodInfo* method_info);
void RandomGroupWork__Init (const MethodInfo* method_info);
void RandomGroupWork__Update (int64_t days, const MethodInfo* method_info);
uint64_t RandomGroupWork__GetRandomSeed (int32_t no, const MethodInfo* method_info);
void RandomGroupWork__SetRandomSeed (int32_t no, uint64_t seed, const MethodInfo* method_info);
uint64_t RandomGroupWork__GetRandom (int32_t no, const MethodInfo* method_info);
uint64_t RandomGroupWork__GetDefaultRandom (const MethodInfo* method_info);
void RandomGroupWork__SetRandom (int32_t no, const MethodInfo* method_info);
System_String_o* RandomGroupWork__GetNamePtr (int32_t no, int32_t type, const MethodInfo* method_info);
void RandomGroupWork__SetName (int32_t no, int32_t type, System_String_o* str, const MethodInfo* method_info);
void RandomGroupWork__SetSex (int32_t no, int32_t sex, const MethodInfo* method_info);
int32_t RandomGroupWork__GetSex (int32_t no, const MethodInfo* method_info);
int32_t RandomGroupWork__GetRegionCode (int32_t no, const MethodInfo* method_info);
void RandomGroupWork__SetRegionCode (int32_t no, int32_t region_code, const MethodInfo* method_info);
DPData__RANDOM_GROUP_o RandomGroupWork__SaveData_GetRandomGroup (const MethodInfo* method_info);
bool RandomGroupWork__ExistCheck (int32_t no, const MethodInfo* method_info);
bool RandomGroupWork__EntryCheck (int32_t no, const MethodInfo* method_info);
bool RandomGroupWork__SameGroupNameCheck (System_String_o* group_name, const MethodInfo* method_info);
bool RandomGroupWork__IsNullData (DPData_RANDOM_SEED_o* rs, const MethodInfo* method_info);
bool RandomGroupWork__Compare (int32_t no, DPData_RANDOM_SEED_o* s1, const MethodInfo* method_info);
bool RandomGroupWork__Compare (DPData_RANDOM_SEED_o* s1, DPData_RANDOM_SEED_o* s2, const MethodInfo* method_info);
bool RandomGroupWork__RandomGroup_IsNullData (int32_t no, const MethodInfo* method_info);
uint64_t RandomGroupWork__gf_fix_rand (uint64_t seed, const MethodInfo* method_info);
void RandomGroupWork__SetTimeStmp (int32_t no, int64_t timestmp, const MethodInfo* method_info);
int64_t RandomGroupWork__GetTimeStmp (int32_t no, const MethodInfo* method_info);
void RandomGroupWork__SetUserID (int32_t no, int32_t userid, const MethodInfo* method_info);
int32_t RandomGroupWork__GetUserID (int32_t no, const MethodInfo* method_info);
void RandomGroupWork__ChangeGroupData (int32_t no, DPData_RANDOM_SEED_o* seed, const MethodInfo* method_info);
void RandomGroupWork__SetDailyRandom (const MethodInfo* method_info);
int32_t RandomGroupWork__GetDailyRandom (const MethodInfo* method_info);
bool RandomGroupWork__IsEqualName (System_String_o* name, const MethodInfo* method_info);
