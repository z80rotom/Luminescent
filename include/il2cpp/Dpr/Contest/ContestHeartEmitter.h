#pragma once

#include "il2cpp.h"

bool Dpr_Contest_ContestHeartEmitter__get_IsLoaded (Dpr_Contest_ContestHeartEmitter_o* __this, const MethodInfo* method_info);
void Dpr_Contest_ContestHeartEmitter__Setup (Dpr_Contest_ContestHeartEmitter_o* __this, Dpr_Contest_ContestPlayerEntity_array* playerEntityArray, UnityEngine_Transform_o* visualHeartContent, UnityEngine_Transform_o* danceHeartContent, Dpr_Contest_ContestSettings_o* contestSetting, const MethodInfo* method_info);
void Dpr_Contest_ContestHeartEmitter__GenerateVisualHeartPool (Dpr_Contest_ContestHeartEmitter_o* __this, UnityEngine_Transform_o* visualHeartContent, Dpr_Contest_ContestPlayerEntity_array* playerEntityArray, const MethodInfo* method_info);
int32_t Dpr_Contest_ContestHeartEmitter__CalcGenerateVisualNormalHeartNum (Dpr_Contest_ContestHeartEmitter_o* __this, Dpr_Contest_ContestPlayerEntity_array* playerEntityArray, const MethodInfo* method_info);
int32_t Dpr_Contest_ContestHeartEmitter__CalcGenerateVisualLargeHeartNum (Dpr_Contest_ContestHeartEmitter_o* __this, Dpr_Contest_ContestPlayerEntity_array* playerEntityArray, const MethodInfo* method_info);
void Dpr_Contest_ContestHeartEmitter__GenerateDanceHeartPool (Dpr_Contest_ContestHeartEmitter_o* __this, UnityEngine_Transform_o* danceHeartContent, const MethodInfo* method_info);
void Dpr_Contest_ContestHeartEmitter__LoadFxData (Dpr_Contest_ContestHeartEmitter_o* __this, int32_t fxID, int32_t poolCount, System_Action_EffectData__o* onComplete, const MethodInfo* method_info);
void Dpr_Contest_ContestHeartEmitter__Reset (Dpr_Contest_ContestHeartEmitter_o* __this, const MethodInfo* method_info);
void Dpr_Contest_ContestHeartEmitter__OnFinalize (Dpr_Contest_ContestHeartEmitter_o* __this, const MethodInfo* method_info);
void Dpr_Contest_ContestHeartEmitter__CreateVisualHeartFx (Dpr_Contest_ContestHeartEmitter_o* __this, int32_t emitNum, UnityEngine_Vector2_o emitPos, bool isLarge, const MethodInfo* method_info);
Dpr_Contest_DanceHeartEffect_o* Dpr_Contest_ContestHeartEmitter__CreatePlayerHeart (Dpr_Contest_ContestHeartEmitter_o* __this, UnityEngine_Vector2_o from, UnityEngine_Vector2_o to, int32_t pattern, System_Action_o* onComplete, const MethodInfo* method_info);
Dpr_Contest_DanceHeartEffect_o* Dpr_Contest_ContestHeartEmitter__CreateNPCHeart (Dpr_Contest_ContestHeartEmitter_o* __this, UnityEngine_Vector2_o from, UnityEngine_Vector2_o to, int32_t pattern, System_Action_o* onComplete, const MethodInfo* method_info);
Dpr_Contest_DanceHeartEffect_o* Dpr_Contest_ContestHeartEmitter__FindDeactiveDanceNormalHeart (Dpr_Contest_ContestHeartEmitter_o* __this, const MethodInfo* method_info);
Dpr_Contest_DanceHeartEffect_o* Dpr_Contest_ContestHeartEmitter__FindDeactiveDanceLargeHeart (Dpr_Contest_ContestHeartEmitter_o* __this, const MethodInfo* method_info);
void Dpr_Contest_ContestHeartEmitter__UpdateVisualHeart (Dpr_Contest_ContestHeartEmitter_o* __this, float deltaTime, const MethodInfo* method_info);
void Dpr_Contest_ContestHeartEmitter__StopVisualHeartFx (Dpr_Contest_ContestHeartEmitter_o* __this, const MethodInfo* method_info);
void Dpr_Contest_ContestHeartEmitter__StopDanceHeartFx (Dpr_Contest_ContestHeartEmitter_o* __this, const MethodInfo* method_info);
void Dpr_Contest_ContestHeartEmitter___ctor (Dpr_Contest_ContestHeartEmitter_o* __this, const MethodInfo* method_info);
void Dpr_Contest_ContestHeartEmitter___Setup_b__20_0 (Dpr_Contest_ContestHeartEmitter_o* __this, Effect_EffectData_o* fx, const MethodInfo* method_info);
void Dpr_Contest_ContestHeartEmitter___Setup_b__20_1 (Dpr_Contest_ContestHeartEmitter_o* __this, Effect_EffectData_o* fx, const MethodInfo* method_info);
