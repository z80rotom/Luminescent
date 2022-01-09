#pragma once

#include "il2cpp.h"

bool PofinGameCalc__IsCorrect (PofinGameCalc_o* __this, float rotDirection, const MethodInfo* method_info);
bool PofinGameCalc__get_isGameEnd (PofinGameCalc_o* __this, const MethodInfo* method_info);
float PofinGameCalc__get_SpeedHosei (PofinGameCalc_o* __this, const MethodInfo* method_info);
float PofinGameCalc__get_BatterColorRate (PofinGameCalc_o* __this, const MethodInfo* method_info);
void PofinGameCalc__SetPokeModel (PofinGameCalc_o* __this, System_Collections_Generic_List_FureaiPokeModel__o* pokeModels, const MethodInfo* method_info);
void PofinGameCalc__Update (PofinGameCalc_o* __this, float deltaTime, const MethodInfo* method_info);
bool PofinGameCalc__IsSearZone (PofinGameCalc_o* __this, const MethodInfo* method_info);
bool PofinGameCalc__IsSpillZone (PofinGameCalc_o* __this, const MethodInfo* method_info);
void PofinGameCalc__CheckSear (PofinGameCalc_o* __this, const MethodInfo* method_info);
void PofinGameCalc__CheckSpill (PofinGameCalc_o* __this, const MethodInfo* method_info);
void PofinGameCalc__CheckStepAndTime (PofinGameCalc_o* __this, const MethodInfo* method_info);
float PofinGameCalc__GetBlendValue (PofinGameCalc_o* __this, const MethodInfo* method_info);
float PofinGameCalc__CalcRot (PofinGameCalc_o* __this, float angleR, float angleL, float deltaTime, const MethodInfo* method_info);
void PofinGameCalc__PhaseNext (PofinGameCalc_o* __this, const MethodInfo* method_info);
bool PofinGameCalc__CheckNeedChangeRotateDirection (PofinGameCalc_o* __this, float deltaTime, const MethodInfo* method_info);
int32_t PofinGameCalc__GetSpeedValue (PofinGameCalc_o* __this, const MethodInfo* method_info);
float PofinGameCalc__GetNearAngle (PofinGameCalc_o* __this, float angle, float prevAngle, const MethodInfo* method_info);
float PofinGameCalc__Vector2ToAngle (PofinGameCalc_o* __this, UnityEngine_Vector2_o input, const MethodInfo* method_info);
void PofinGameCalc___ctor (PofinGameCalc_o* __this, const MethodInfo* method_info);
