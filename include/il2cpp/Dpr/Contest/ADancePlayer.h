#pragma once

#include "il2cpp.h"

void Dpr_Contest_ADancePlayer___ctor (Dpr_Contest_ADancePlayer_o* __this, int32_t playerIndex, System_Collections_Generic_List_NotesDataModel__o* notesDataList, System_Action_ADancePlayer__o* onLockSkill, const MethodInfo* method);
float Dpr_Contest_ADancePlayer__CalcLastNoteArriveTime (Dpr_Contest_ADancePlayer_o* __this, const MethodInfo* method);
float Dpr_Contest_ADancePlayer__get_SkillAnimDuration (Dpr_Contest_ADancePlayer_o* __this, const MethodInfo* method);
void Dpr_Contest_ADancePlayer__SetSkillAnimDuration (Dpr_Contest_ADancePlayer_o* __this, float skillAnimDuration, const MethodInfo* method);
bool Dpr_Contest_ADancePlayer__get_IsActive (Dpr_Contest_ADancePlayer_o* __this, const MethodInfo* method);
int32_t Dpr_Contest_ADancePlayer__get_PlayerIndex (Dpr_Contest_ADancePlayer_o* __this, const MethodInfo* method);
int32_t Dpr_Contest_ADancePlayer__get_CurrentActionID (Dpr_Contest_ADancePlayer_o* __this, const MethodInfo* method);
int32_t Dpr_Contest_ADancePlayer__get_PlayerType (Dpr_Contest_ADancePlayer_o* __this, const MethodInfo* method);
void Dpr_Contest_ADancePlayer__Reset (Dpr_Contest_ADancePlayer_o* __this, const MethodInfo* method);
void Dpr_Contest_ADancePlayer__OnFinalize (Dpr_Contest_ADancePlayer_o* __this, const MethodInfo* method);
void Dpr_Contest_ADancePlayer__OnUpdate (Dpr_Contest_ADancePlayer_o* __this, double elapsedTime, const MethodInfo* method);
void Dpr_Contest_ADancePlayer__CheckCanUseSkill (Dpr_Contest_ADancePlayer_o* __this, const MethodInfo* method);
void Dpr_Contest_ADancePlayer__ForceLaunchSkill (Dpr_Contest_ADancePlayer_o* __this, float reservedLaunchElapsedTime, const MethodInfo* method);
bool Dpr_Contest_ADancePlayer__CheckSendScore (Dpr_Contest_ADancePlayer_o* __this, const MethodInfo* method);
void Dpr_Contest_ADancePlayer__ChangeMultiMode (Dpr_Contest_ADancePlayer_o* __this, bool isHost, float syncScoreSpan, const MethodInfo* method);
