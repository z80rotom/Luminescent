#pragma once

#include "il2cpp.h"

bool Dpr_Contest_AContestSkillBase__get_IsActive (Dpr_Contest_AContestSkillBase_o* __this, const MethodInfo* method);
int32_t Dpr_Contest_AContestSkillBase__get_SkillType (Dpr_Contest_AContestSkillBase_o* __this, const MethodInfo* method);
uint8_t Dpr_Contest_AContestSkillBase__get_WazaType (Dpr_Contest_AContestSkillBase_o* __this, const MethodInfo* method);
void Dpr_Contest_AContestSkillBase__Reset (Dpr_Contest_AContestSkillBase_o* __this, const MethodInfo* method);
void Dpr_Contest_AContestSkillBase__CreateSkill (Dpr_Contest_AContestSkillBase_o* __this, XLSXContent_ContestWazaInfo_SheetContestWazaData_o* skillData, uint8_t wazaType, Dpr_Contest_PlayerDanceDataModel_o* target, const MethodInfo* method);
void Dpr_Contest_AContestSkillBase__ActivateSkillEffect (Dpr_Contest_AContestSkillBase_o* __this, Dpr_Contest_SkillBonusParam_o* bonusParam, double elapsedTime, System_Action_o* onFinished, const MethodInfo* method);
void Dpr_Contest_AContestSkillBase__UpdateSkill (Dpr_Contest_AContestSkillBase_o* __this, double elapsedTime, const MethodInfo* method);
void Dpr_Contest_AContestSkillBase__FinishSkill (Dpr_Contest_AContestSkillBase_o* __this, const MethodInfo* method);
void Dpr_Contest_AContestSkillBase___ctor (Dpr_Contest_AContestSkillBase_o* __this, const MethodInfo* method);
