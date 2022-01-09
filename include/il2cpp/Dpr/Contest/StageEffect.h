#pragma once

#include "il2cpp.h"

bool Dpr_Contest_StageEffect__get_IsLoading (Dpr_Contest_StageEffect_o* __this, const MethodInfo* method_info);
void Dpr_Contest_StageEffect__Initialize (Dpr_Contest_StageEffect_o* __this, const MethodInfo* method_info);
void Dpr_Contest_StageEffect__OnFinalize (Dpr_Contest_StageEffect_o* __this, const MethodInfo* method_info);
void Dpr_Contest_StageEffect__ResetLoadCount (Dpr_Contest_StageEffect_o* __this, const MethodInfo* method_info);
void Dpr_Contest_StageEffect__LoadStageLight (Dpr_Contest_StageEffect_o* __this, uint32_t userRank, Dpr_Contest_LightSetting_array* lightDataArray, UnityEngine_Vector3_o offsetPos, const MethodInfo* method_info);
void Dpr_Contest_StageEffect__PauseAllStageLight (Dpr_Contest_StageEffect_o* __this, const MethodInfo* method_info);
int32_t Dpr_Contest_StageEffect__get_NowMonitorIndex (Dpr_Contest_StageEffect_o* __this, const MethodInfo* method_info);
float Dpr_Contest_StageEffect__GetMonitorFxTime (Dpr_Contest_StageEffect_o* __this, const MethodInfo* method_info);
void Dpr_Contest_StageEffect__LoadMonitorEffects (Dpr_Contest_StageEffect_o* __this, UnityEngine_Transform_o* parent, UnityEngine_Vector3_o offsetPosition, int32_t startMonitorIndex, EffectContestID_array* monitorFxIDs, const MethodInfo* method_info);
void Dpr_Contest_StageEffect__LoadMonitorFx (Dpr_Contest_StageEffect_o* __this, int32_t index, int32_t effectID, bool playAwake, UnityEngine_Vector3_o offsetPosition, const MethodInfo* method_info);
void Dpr_Contest_StageEffect__LoadConfettiFx (Dpr_Contest_StageEffect_o* __this, const MethodInfo* method_info);
void Dpr_Contest_StageEffect__LoadResultSpotLightFx (Dpr_Contest_StageEffect_o* __this, const MethodInfo* method_info);
void Dpr_Contest_StageEffect__LoadContestFx (Dpr_Contest_StageEffect_o* __this, int32_t effectID, System_Action_EffectData__o* onCompleteLoad, const MethodInfo* method_info);
UnityEngine_ParticleSystem_o* Dpr_Contest_StageEffect__GetMonitorFx (Dpr_Contest_StageEffect_o* __this, int32_t index, const MethodInfo* method_info);
void Dpr_Contest_StageEffect__SwitchMonitor (Dpr_Contest_StageEffect_o* __this, const MethodInfo* method_info);
void Dpr_Contest_StageEffect__MoveMonitorPositionX (Dpr_Contest_StageEffect_o* __this, float moveX, const MethodInfo* method_info);
void Dpr_Contest_StageEffect__PlayConfettiFx (Dpr_Contest_StageEffect_o* __this, UnityEngine_Vector3_o confettiPos, const MethodInfo* method_info);
void Dpr_Contest_StageEffect__PlayResultLight (Dpr_Contest_StageEffect_o* __this, UnityEngine_Vector3_o lightPos, const MethodInfo* method_info);
void Dpr_Contest_StageEffect__StopStageLightFx (Dpr_Contest_StageEffect_o* __this, const MethodInfo* method_info);
void Dpr_Contest_StageEffect__PlayStageLightFx (Dpr_Contest_StageEffect_o* __this, const MethodInfo* method_info);
void Dpr_Contest_StageEffect__StopMonitorFx (Dpr_Contest_StageEffect_o* __this, const MethodInfo* method_info);
void Dpr_Contest_StageEffect__PlayMonitorFx (Dpr_Contest_StageEffect_o* __this, const MethodInfo* method_info);
void Dpr_Contest_StageEffect__StopConfettiFx (Dpr_Contest_StageEffect_o* __this, const MethodInfo* method_info);
void Dpr_Contest_StageEffect___ctor (Dpr_Contest_StageEffect_o* __this, const MethodInfo* method_info);
void Dpr_Contest_StageEffect___LoadConfettiFx_b__22_0 (Dpr_Contest_StageEffect_o* __this, Effect_EffectData_o* fxData, const MethodInfo* method_info);
void Dpr_Contest_StageEffect___LoadResultSpotLightFx_b__23_0 (Dpr_Contest_StageEffect_o* __this, Effect_EffectData_o* fxData, const MethodInfo* method_info);
