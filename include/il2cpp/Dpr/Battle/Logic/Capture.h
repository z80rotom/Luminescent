#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Capture__JudgeCapture (Dpr_Battle_Logic_Capture_JudgeResult_o* result, Dpr_Battle_Logic_Capture_JudgeParam_o** param, const MethodInfo* method);
bool Dpr_Battle_Logic_Capture__isMustCapureSuccess (Dpr_Battle_Logic_MainModule_o* mainModule, uint16_t itemID, const MethodInfo* method);
int32_t Dpr_Battle_Logic_Capture__calcCaptureIndicator (Dpr_Battle_Logic_MainModule_o* mainModule, Dpr_Battle_Logic_BattleEnv_o* battleEnv, Dpr_Battle_Logic_BTL_POKEPARAM_o* userPoke, Dpr_Battle_Logic_BTL_POKEPARAM_o* targetPoke, uint16_t itemID, int32_t captureValueCoef, const MethodInfo* method);
int32_t Dpr_Battle_Logic_Capture__getZukanCaptureRatio (Dpr_Battle_Logic_MainModule_o* mainModule, const MethodInfo* method);
int32_t Dpr_Battle_Logic_Capture__calcBallCaptureRatio (Dpr_Battle_Logic_MainModule_o* mainModule, Dpr_Battle_Logic_BattleEnv_o* battleEnv, Dpr_Battle_Logic_BTL_POKEPARAM_o* userPoke, Dpr_Battle_Logic_BTL_POKEPARAM_o* targetPoke, uint16_t itemID, const MethodInfo* method);
int32_t Dpr_Battle_Logic_Capture__getBallCaptureRatio (Dpr_Battle_Logic_MainModule_o* mainModule, Dpr_Battle_Logic_BattleEnv_o* battleEnv, Dpr_Battle_Logic_BTL_POKEPARAM_o* userPoke, Dpr_Battle_Logic_BTL_POKEPARAM_o* targetPoke, uint16_t itemID, const MethodInfo* method);
bool Dpr_Battle_Logic_Capture__checkCaptureCritical (Dpr_Battle_Logic_MainModule_o* mainModule, int32_t captureIndicator, const MethodInfo* method);
int32_t Dpr_Battle_Logic_Capture__calcCaptureValue (int32_t capture_value, const MethodInfo* method);
void Dpr_Battle_Logic_Capture__checkCapureSuccessByRandom (bool* pIsCaptured, uint8_t* pYureCount, int32_t captureValue, bool isCritical, const MethodInfo* method);
int16_t Dpr_Battle_Logic_Capture__getHeavyBallCaptureCorrectValue (uint16_t weight, const MethodInfo* method);
bool Dpr_Battle_Logic_Capture__checkMoonBallEffective (int32_t monsno, uint16_t formno, const MethodInfo* method);
int32_t Dpr_Battle_Logic_Capture__getLevelBallCaptureRatio (uint8_t myLevel, uint8_t targetLevel, const MethodInfo* method);
bool Dpr_Battle_Logic_Capture__IsEnableDarkBallOnEventTimeZone (const MethodInfo* method);
