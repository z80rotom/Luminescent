#pragma once

#include "il2cpp.h"

void Dpr_UI_ContestMatchingResume__Initialize (Dpr_UI_ContestMatchingResume_o* __this, Dpr_UI_ContestMatchingUI_o* contestMatchingUI, Dpr_Contest_ContestMatchingNetwork_o* network, System_Action_ContestMatching_FinishPattern__o* onFinish, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingResume__OnFinalize (Dpr_UI_ContestMatchingResume_o* __this, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingResume__Reset (Dpr_UI_ContestMatchingResume_o* __this, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingResume__StartProcess (Dpr_UI_ContestMatchingResume_o* __this, int32_t stationIndex, Dpr_UI_UISelectorWindow_o* selectorWindow, XLSXContent_ContestMasterDatas_o* contestMasterDatas, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingResume__OnFinishMessage (Dpr_UI_ContestMatchingResume_o* __this, const MethodInfo* method_info);
bool Dpr_UI_ContestMatchingResume__CheckSameMember (Dpr_UI_ContestMatchingResume_o* __this, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingResume__LoadCharacterModel (Dpr_UI_ContestMatchingResume_o* __this, int32_t stationIndex, System_Action_o* onComplete, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingResume__OnUpdate (Dpr_UI_ContestMatchingResume_o* __this, float deltaTime, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingResume__UpdateCheckEntry (Dpr_UI_ContestMatchingResume_o* __this, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingResume__UpdateReady (Dpr_UI_ContestMatchingResume_o* __this, float deltaTime, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingResume__UpdateWait (Dpr_UI_ContestMatchingResume_o* __this, float deltaTime, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingResume__ChangeState (Dpr_UI_ContestMatchingResume_o* __this, int32_t newState, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingResume__OnChangeState_CheckEntry (Dpr_UI_ContestMatchingResume_o* __this, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingResume__OnChangeState_Ready (Dpr_UI_ContestMatchingResume_o* __this, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingResume__OnChangeState_Wait (Dpr_UI_ContestMatchingResume_o* __this, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingResume__OnChangeState_Finish (Dpr_UI_ContestMatchingResume_o* __this, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingResume__SetReadyFlag (Dpr_UI_ContestMatchingResume_o* __this, int32_t stationIndex, bool flag, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingResume__OnLeaveOtherPlayer (Dpr_UI_ContestMatchingResume_o* __this, int32_t stationIndex, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingResume__Deactivate (Dpr_UI_ContestMatchingResume_o* __this, const MethodInfo* method_info);
bool Dpr_UI_ContestMatchingResume__IsFinishPreparation (Dpr_UI_ContestMatchingResume_o* __this, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingResume__OnReceiveReadyData (Dpr_UI_ContestMatchingResume_o* __this, int32_t stationIndex, int32_t noticeID, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingResume___ctor (Dpr_UI_ContestMatchingResume_o* __this, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingResume___StartProcess_b__15_0 (Dpr_UI_ContestMatchingResume_o* __this, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingResume___OnFinishMessage_b__16_0 (Dpr_UI_ContestMatchingResume_o* __this, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingResume___OnChangeState_CheckEntry_b__24_0 (Dpr_UI_ContestMatchingResume_o* __this, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingResume___OnChangeState_CheckEntry_b__24_1 (Dpr_UI_ContestMatchingResume_o* __this, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingResume___OnChangeState_Finish_b__27_0 (Dpr_UI_ContestMatchingResume_o* __this, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingResume___OnChangeState_Finish_b__27_1 (Dpr_UI_ContestMatchingResume_o* __this, const MethodInfo* method_info);
