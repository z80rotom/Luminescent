#pragma once

#include "il2cpp.h"

uint8_t Dpr_Battle_Logic_RaidBoss__SelectTargetPos (Dpr_Battle_Logic_RaidBoss_SelectTargetParam_o** param, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_RaidBoss__calcTargetWeight (Dpr_Battle_Logic_BTL_POKEPARAM_o* target, const MethodInfo* method);
bool Dpr_Battle_Logic_RaidBoss__CheckAngryCondition (Dpr_Battle_Logic_BTL_POKEPARAM_o* boss, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_RaidBoss__CalcNextAngryHP (Dpr_Battle_Logic_BTL_POKEPARAM_o* boss, const MethodInfo* method);
void Dpr_Battle_Logic_RaidBoss__GetCaptureValueCoef (int32_t* pCoef, bool* pIsMustSuccess, Dpr_Battle_Logic_MainModule_o* pMainModule, Dpr_Battle_Logic_BTL_POKEPARAM_o* pBoss, const MethodInfo* method);
int32_t Dpr_Battle_Logic_RaidBoss__GetCaptureValueCoefForSpGDuplication (int32_t monsno, const MethodInfo* method);
void Dpr_Battle_Logic_RaidBoss__GetCaptureValueCoefByCaptureDifficulty (int32_t* pCoef, bool* pIsMustSuccess, uint8_t difficulty, const MethodInfo* method);
bool Dpr_Battle_Logic_RaidBoss__ShouldSkipCaptureSequence (Dpr_Battle_Logic_MainModule_o* pMainModule, const MethodInfo* method);
void Dpr_Battle_Logic_RaidBoss___cctor (const MethodInfo* method);
