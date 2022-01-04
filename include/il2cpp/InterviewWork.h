#pragma once

#include "il2cpp.h"

int32_t InterviewWork__TypeToProgram (int32_t type, const MethodInfo* method);
int32_t InterviewWork__ProgramToType (int32_t tvProgram, const MethodInfo* method);
int32_t InterviewWork__TypeToInterviewBranchProgram (int32_t type, const MethodInfo* method);
int32_t InterviewWork__InterviewToTvRecordInt (int32_t index, const MethodInfo* method);
int32_t InterviewWork__TvToInterviewRecordInt (int32_t index, const MethodInfo* method);
int32_t InterviewWork__InterviewToTvRecordStr (int32_t index, const MethodInfo* method);
int32_t InterviewWork__TvToInterviewRecordStr (int32_t index, const MethodInfo* method);
XLSXContent_TvDataTable_Sheetdata_o* InterviewWork__GetTableData (int32_t type, const MethodInfo* method);
void InterviewWork__SetInterviewBranchData (int32_t index, int32_t value, const MethodInfo* method);
void InterviewWork__SetInterviewRecordStr (int32_t index, System_String_o* value, const MethodInfo* method);
void InterviewWork__SetInterviewRecordStr (int32_t index, System_String_o* value, uint8_t language, const MethodInfo* method);
void InterviewWork__SetInterviewRecordStr (int32_t index, System_String_o* value, uint8_t language, uint8_t genderId, const MethodInfo* method);
void InterviewWork__SetInterviewRecordInt (int32_t index, int32_t value, const MethodInfo* method);
void InterviewWork__ApplyInterviewToTopic (int32_t type, const MethodInfo* method);
void InterviewWork__ApplyInterviewBranchData (int32_t index, const MethodInfo* method);
void InterviewWork__ApplyInterviewRecordStr (int32_t index, const MethodInfo* method);
void InterviewWork__ApplyInterviewRecordInt (int32_t index, const MethodInfo* method);
int32_t InterviewWork__GetInterviewBranchData (int32_t index, const MethodInfo* method);
void InterviewWork__GetInterviewRecordStr (int32_t index, System_String_o** str, int32_t* langId, const MethodInfo* method);
bool InterviewWork__Check (int32_t type, const MethodInfo* method);
void InterviewWork__SetTopicRecord (int32_t type, const MethodInfo* method);
void InterviewWork__SetAndEnableTopicPersonality (int32_t pokeType, const MethodInfo* method);
void InterviewWork__SetAndEnableTopicBallDecoration (int32_t ballDecorationTrainer, const MethodInfo* method);
void InterviewWork__SetTopicRecordBattleTower (int32_t winCount, bool win, const MethodInfo* method);
void InterviewWork__SetTopicRecordContest (Pml_PokePara_PokemonParam_o* param, int32_t contestName, int32_t contestRank, int32_t contestRankingNumber, const MethodInfo* method);
void InterviewWork__SetTopicRecordPoffin (int32_t poffineTaste, int32_t poffinType, const MethodInfo* method);
void InterviewWork__SetTopicRecordTsureArukiPokemon (Pml_PokePara_PokemonParam_o* param, const MethodInfo* method);
void InterviewWork__SetTopicRecordTsureArukiItemNo (uint16_t itemNo, const MethodInfo* method);
void InterviewWork___ctor (InterviewWork_o* __this, const MethodInfo* method);
void InterviewWork___cctor (const MethodInfo* method);
