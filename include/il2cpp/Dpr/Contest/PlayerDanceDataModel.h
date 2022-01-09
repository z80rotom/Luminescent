#pragma once

#include "il2cpp.h"

void Dpr_Contest_PlayerDanceDataModel___ctor (Dpr_Contest_PlayerDanceDataModel_o* __this, const MethodInfo* method_info);
void Dpr_Contest_PlayerDanceDataModel__SetPlayerData (Dpr_Contest_PlayerDanceDataModel_o* __this, Dpr_Contest_PlayerDanceData_o* data, const MethodInfo* method_info);
void Dpr_Contest_PlayerDanceDataModel__ResetParam (Dpr_Contest_PlayerDanceDataModel_o* __this, const MethodInfo* method_info);
int32_t Dpr_Contest_PlayerDanceDataModel__get_StackLiveScore (Dpr_Contest_PlayerDanceDataModel_o* __this, const MethodInfo* method_info);
void Dpr_Contest_PlayerDanceDataModel__AddLiveScore (Dpr_Contest_PlayerDanceDataModel_o* __this, int32_t addScore, const MethodInfo* method_info);
void Dpr_Contest_PlayerDanceDataModel__DecLiveScore (Dpr_Contest_PlayerDanceDataModel_o* __this, int32_t decScore, const MethodInfo* method_info);
void Dpr_Contest_PlayerDanceDataModel__AddTapTimingCount (Dpr_Contest_PlayerDanceDataModel_o* __this, int32_t timingID, const MethodInfo* method_info);
int32_t Dpr_Contest_PlayerDanceDataModel__GetTapTimingCount (Dpr_Contest_PlayerDanceDataModel_o* __this, int32_t timingID, const MethodInfo* method_info);
void Dpr_Contest_PlayerDanceDataModel__ForceSetTension (Dpr_Contest_PlayerDanceDataModel_o* __this, int32_t tension, const MethodInfo* method_info);
void Dpr_Contest_PlayerDanceDataModel__SetUpdownCount (Dpr_Contest_PlayerDanceDataModel_o* __this, Dpr_Contest_TensionData_o* tensionData, const MethodInfo* method_info);
bool Dpr_Contest_PlayerDanceDataModel__AddSuccessCount (Dpr_Contest_PlayerDanceDataModel_o* __this, const MethodInfo* method_info);
void Dpr_Contest_PlayerDanceDataModel__UpTension (Dpr_Contest_PlayerDanceDataModel_o* __this, const MethodInfo* method_info);
bool Dpr_Contest_PlayerDanceDataModel__AddFailedCount (Dpr_Contest_PlayerDanceDataModel_o* __this, const MethodInfo* method_info);
void Dpr_Contest_PlayerDanceDataModel__DownTension (Dpr_Contest_PlayerDanceDataModel_o* __this, const MethodInfo* method_info);
void Dpr_Contest_PlayerDanceDataModel__ResetTensionCount (Dpr_Contest_PlayerDanceDataModel_o* __this, const MethodInfo* method_info);
bool Dpr_Contest_PlayerDanceDataModel__AddHeartGauge (Dpr_Contest_PlayerDanceDataModel_o* __this, int32_t addValue, const MethodInfo* method_info);
bool Dpr_Contest_PlayerDanceDataModel__get_IsAlreadyUseSkill (Dpr_Contest_PlayerDanceDataModel_o* __this, const MethodInfo* method_info);
bool Dpr_Contest_PlayerDanceDataModel__get_IsActiveSkill (Dpr_Contest_PlayerDanceDataModel_o* __this, const MethodInfo* method_info);
bool Dpr_Contest_PlayerDanceDataModel__get_IsForceSuccess (Dpr_Contest_PlayerDanceDataModel_o* __this, const MethodInfo* method_info);
bool Dpr_Contest_PlayerDanceDataModel__get_CanEmitHeart (Dpr_Contest_PlayerDanceDataModel_o* __this, const MethodInfo* method_info);
void Dpr_Contest_PlayerDanceDataModel__UseSkill (Dpr_Contest_PlayerDanceDataModel_o* __this, const MethodInfo* method_info);
void Dpr_Contest_PlayerDanceDataModel__LockSkill (Dpr_Contest_PlayerDanceDataModel_o* __this, const MethodInfo* method_info);
void Dpr_Contest_PlayerDanceDataModel__LaunchSkill (Dpr_Contest_PlayerDanceDataModel_o* __this, const MethodInfo* method_info);
void Dpr_Contest_PlayerDanceDataModel__FinishedSkillAnim (Dpr_Contest_PlayerDanceDataModel_o* __this, const MethodInfo* method_info);
void Dpr_Contest_PlayerDanceDataModel__ActivateSkillEffect (Dpr_Contest_PlayerDanceDataModel_o* __this, double elapsedTime, System_Action_o* onFinishSkillEffect, const MethodInfo* method_info);
void Dpr_Contest_PlayerDanceDataModel__UpdateSkillEffect (Dpr_Contest_PlayerDanceDataModel_o* __this, double elapsedTime, const MethodInfo* method_info);
void Dpr_Contest_PlayerDanceDataModel__AddWazaScore (Dpr_Contest_PlayerDanceDataModel_o* __this, int32_t score, const MethodInfo* method_info);
