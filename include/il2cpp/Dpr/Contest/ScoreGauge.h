#pragma once

#include "il2cpp.h"

UnityEngine_Vector3_o Dpr_Contest_ScoreGauge__get_MarkCenterPos (Dpr_Contest_ScoreGauge_o* __this, const MethodInfo* method);
void Dpr_Contest_ScoreGauge__Initialize (Dpr_Contest_ScoreGauge_o* __this, float addValue, float lockTime, const MethodInfo* method);
void Dpr_Contest_ScoreGauge__SetComponents (Dpr_Contest_ScoreGauge_o* __this, const MethodInfo* method);
void Dpr_Contest_ScoreGauge__OnFinalize (Dpr_Contest_ScoreGauge_o* __this, const MethodInfo* method);
void Dpr_Contest_ScoreGauge__SetUp (Dpr_Contest_ScoreGauge_o* __this, float successScoreRatio, float initGaugeRatio, const MethodInfo* method);
Dpr_SubContents_EmitEffectParam_array* Dpr_Contest_ScoreGauge__GetHitFxParams (Dpr_Contest_ScoreGauge_o* __this, const MethodInfo* method);
void Dpr_Contest_ScoreGauge__SetScoreRatio (Dpr_Contest_ScoreGauge_o* __this, float ratio, int32_t emitPattern, const MethodInfo* method);
void Dpr_Contest_ScoreGauge__CheckSuccessRatio (Dpr_Contest_ScoreGauge_o* __this, const MethodInfo* method);
void Dpr_Contest_ScoreGauge__ResetParam (Dpr_Contest_ScoreGauge_o* __this, float ratio, const MethodInfo* method);
void Dpr_Contest_ScoreGauge__OnUpdate (Dpr_Contest_ScoreGauge_o* __this, float deltaTime, const MethodInfo* method);
void Dpr_Contest_ScoreGauge__UpdateGaugeAmount (Dpr_Contest_ScoreGauge_o* __this, float deltaTime, const MethodInfo* method);
void Dpr_Contest_ScoreGauge__SetGaugeRatio (Dpr_Contest_ScoreGauge_o* __this, float scoreRatio, const MethodInfo* method);
float Dpr_Contest_ScoreGauge__CalcLeftGaugeAmount (Dpr_Contest_ScoreGauge_o* __this, float scoreRatio, const MethodInfo* method);
float Dpr_Contest_ScoreGauge__CalcRightGaugeAmount (Dpr_Contest_ScoreGauge_o* __this, float scoreRatio, const MethodInfo* method);
void Dpr_Contest_ScoreGauge__UpdateColorFade (Dpr_Contest_ScoreGauge_o* __this, float deltaTime, const MethodInfo* method);
void Dpr_Contest_ScoreGauge__SetColorRatio (Dpr_Contest_ScoreGauge_o* __this, float ratio, const MethodInfo* method);
float Dpr_Contest_ScoreGauge__LerpColorFactor (Dpr_Contest_ScoreGauge_o* __this, float a, float b, float ratio, const MethodInfo* method);
void Dpr_Contest_ScoreGauge___ctor (Dpr_Contest_ScoreGauge_o* __this, const MethodInfo* method);
