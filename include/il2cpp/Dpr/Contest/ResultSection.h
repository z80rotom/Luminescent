#pragma once

#include "il2cpp.h"

void Dpr_Contest_ResultSection__SetScriptableObject (Dpr_Contest_ResultSection_o* __this, Dpr_Contest_ResultSettings_o* resultSettings, const MethodInfo* method_info);
void Dpr_Contest_ResultSection__Initialize (Dpr_Contest_ResultSection_o* __this, const MethodInfo* method_info);
void Dpr_Contest_ResultSection__ResetParam (Dpr_Contest_ResultSection_o* __this, const MethodInfo* method_info);
void Dpr_Contest_ResultSection__OnFinalize (Dpr_Contest_ResultSection_o* __this, const MethodInfo* method_info);
bool Dpr_Contest_ResultSection__get_IsRestart (Dpr_Contest_ResultSection_o* __this, const MethodInfo* method_info);
bool Dpr_Contest_ResultSection__get_IsReady (Dpr_Contest_ResultSection_o* __this, const MethodInfo* method_info);
void Dpr_Contest_ResultSection__Setup (Dpr_Contest_ResultSection_o* __this, bool isTutorial, const MethodInfo* method_info);
void Dpr_Contest_ResultSection__LoadResource (Dpr_Contest_ResultSection_o* __this, int32_t resultID, const MethodInfo* method_info);
void Dpr_Contest_ResultSection__StartSection (Dpr_Contest_ResultSection_o* __this, Dpr_Contest_ResultDataModel_o* resultDataModel, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Contest_ResultSection__IE_StartSection (Dpr_Contest_ResultSection_o* __this, int32_t firstState, const MethodInfo* method_info);
bool Dpr_Contest_ResultSection__UpdateSection (Dpr_Contest_ResultSection_o* __this, float deltaTime, const MethodInfo* method_info);
void Dpr_Contest_ResultSection__UpdateAnnouncement (Dpr_Contest_ResultSection_o* __this, float deltaTime, const MethodInfo* method_info);
void Dpr_Contest_ResultSection__UpdateTotalScores (Dpr_Contest_ResultSection_o* __this, float deltaTime, const MethodInfo* method_info);
void Dpr_Contest_ResultSection__UpdatePersonalPerformance (Dpr_Contest_ResultSection_o* __this, const MethodInfo* method_info);
void Dpr_Contest_ResultSection__UpdateTutorialMode (Dpr_Contest_ResultSection_o* __this, float deltaTime, const MethodInfo* method_info);
void Dpr_Contest_ResultSection__ChangeState (Dpr_Contest_ResultSection_o* __this, int32_t stateID, const MethodInfo* method_info);
Dpr_Contest_RankGaugeData_o* Dpr_Contest_ResultSection__CreateRankGaugeData (Dpr_Contest_ResultSection_o* __this, const MethodInfo* method_info);
void Dpr_Contest_ResultSection___ctor (Dpr_Contest_ResultSection_o* __this, const MethodInfo* method_info);
