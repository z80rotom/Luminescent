#pragma once

#include "il2cpp.h"

void Dpr_Contest_ResultAnnouncement__Initialize (Dpr_Contest_ResultAnnouncement_o* __this, Dpr_Contest_ResultSettings_o* setting, const MethodInfo* method_info);
void Dpr_Contest_ResultAnnouncement__InitResultTitle (Dpr_Contest_ResultAnnouncement_o* __this, const MethodInfo* method_info);
void Dpr_Contest_ResultAnnouncement__InitRankGauge (Dpr_Contest_ResultAnnouncement_o* __this, const MethodInfo* method_info);
void Dpr_Contest_ResultAnnouncement__OnFinalize (Dpr_Contest_ResultAnnouncement_o* __this, const MethodInfo* method_info);
bool Dpr_Contest_ResultAnnouncement__get_IsReady (Dpr_Contest_ResultAnnouncement_o* __this, const MethodInfo* method_info);
void Dpr_Contest_ResultAnnouncement__LoadResultFx (Dpr_Contest_ResultAnnouncement_o* __this, int32_t resultID, const MethodInfo* method_info);
void Dpr_Contest_ResultAnnouncement__Setup (Dpr_Contest_ResultAnnouncement_o* __this, Dpr_Contest_RankGaugeData_o* gaugeData, UnityEngine_Sprite_o* spr, bool isMultiMode, int32_t resultId, const MethodInfo* method_info);
void Dpr_Contest_ResultAnnouncement__StartAnimation (Dpr_Contest_ResultAnnouncement_o* __this, const MethodInfo* method_info);
bool Dpr_Contest_ResultAnnouncement__OnUpdate (Dpr_Contest_ResultAnnouncement_o* __this, float deltaTime, const MethodInfo* method_info);
void Dpr_Contest_ResultAnnouncement__UpdateGauge (Dpr_Contest_ResultAnnouncement_o* __this, float deltaTime, const MethodInfo* method_info);
bool Dpr_Contest_ResultAnnouncement__CheckRankUp (Dpr_Contest_ResultAnnouncement_o* __this, const MethodInfo* method_info);
void Dpr_Contest_ResultAnnouncement__SetGaugeRatio (Dpr_Contest_ResultAnnouncement_o* __this, float gaugeRatio, const MethodInfo* method_info);
void Dpr_Contest_ResultAnnouncement__SetGaugeAnimParam (Dpr_Contest_ResultAnnouncement_o* __this, const MethodInfo* method_info);
int32_t Dpr_Contest_ResultAnnouncement__GetNextRankPoint (Dpr_Contest_ResultAnnouncement_o* __this, const MethodInfo* method_info);
bool Dpr_Contest_ResultAnnouncement__IsMaxRank (Dpr_Contest_ResultAnnouncement_o* __this, const MethodInfo* method_info);
void Dpr_Contest_ResultAnnouncement__StopGaugeSE (Dpr_Contest_ResultAnnouncement_o* __this, const MethodInfo* method_info);
void Dpr_Contest_ResultAnnouncement__UpdateRankupAnim (Dpr_Contest_ResultAnnouncement_o* __this, const MethodInfo* method_info);
void Dpr_Contest_ResultAnnouncement__ChangeUserRank (Dpr_Contest_ResultAnnouncement_o* __this, const MethodInfo* method_info);
void Dpr_Contest_ResultAnnouncement__UpdateWait (Dpr_Contest_ResultAnnouncement_o* __this, float deltaTime, const MethodInfo* method_info);
void Dpr_Contest_ResultAnnouncement__StartFadeout (Dpr_Contest_ResultAnnouncement_o* __this, const MethodInfo* method_info);
void Dpr_Contest_ResultAnnouncement__OnCompleteTitleFade (Dpr_Contest_ResultAnnouncement_o* __this, const MethodInfo* method_info);
float Dpr_Contest_ResultAnnouncement__CalcInitGaugeRatio (Dpr_Contest_ResultAnnouncement_o* __this, const MethodInfo* method_info);
void Dpr_Contest_ResultAnnouncement__OnCompleteTitleFadeBackWards (Dpr_Contest_ResultAnnouncement_o* __this, const MethodInfo* method_info);
void Dpr_Contest_ResultAnnouncement__OnCompleteRankInfoFade (Dpr_Contest_ResultAnnouncement_o* __this, const MethodInfo* method_info);
void Dpr_Contest_ResultAnnouncement___ctor (Dpr_Contest_ResultAnnouncement_o* __this, const MethodInfo* method_info);
void Dpr_Contest_ResultAnnouncement___UpdateWait_b__40_0 (Dpr_Contest_ResultAnnouncement_o* __this, const MethodInfo* method_info);
void Dpr_Contest_ResultAnnouncement___UpdateWait_b__40_1 (Dpr_Contest_ResultAnnouncement_o* __this, const MethodInfo* method_info);
void Dpr_Contest_ResultAnnouncement___OnCompleteTitleFade_b__42_1 (Dpr_Contest_ResultAnnouncement_o* __this, const MethodInfo* method_info);
void Dpr_Contest_ResultAnnouncement___OnCompleteTitleFade_b__42_0 (Dpr_Contest_ResultAnnouncement_o* __this, const MethodInfo* method_info);
void Dpr_Contest_ResultAnnouncement___OnCompleteRankInfoFade_b__45_0 (Dpr_Contest_ResultAnnouncement_o* __this, const MethodInfo* method_info);
