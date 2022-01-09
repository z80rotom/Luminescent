#pragma once

#include "il2cpp.h"

void EncEffectSequenceController__set_PlayState (EncEffectSequenceController_o* __this, int32_t value, const MethodInfo* method_info);
int32_t EncEffectSequenceController__get_PlayState (EncEffectSequenceController_o* __this, const MethodInfo* method_info);
void EncEffectSequenceController___ctor (EncEffectSequenceController_o* __this, System_String_o* assetname, FieldManager_o* field, const MethodInfo* method_info);
System_Collections_IEnumerator_o* EncEffectSequenceController__EffectLoad (EncEffectSequenceController_o* __this, System_String_o* assetname, const MethodInfo* method_info);
System_Collections_IEnumerator_o* EncEffectSequenceController__LoadGymEffect (EncEffectSequenceController_o* __this, const MethodInfo* method_info);
System_Collections_IEnumerator_o* EncEffectSequenceController__LoadLeagueEffect (EncEffectSequenceController_o* __this, const MethodInfo* method_info);
System_Collections_IEnumerator_o* EncEffectSequenceController__LoadTowerEffect (EncEffectSequenceController_o* __this, const MethodInfo* method_info);
void EncEffectSequenceController__Release (EncEffectSequenceController_o* __this, const MethodInfo* method_info);
void EncEffectSequenceController__Play (EncEffectSequenceController_o* __this, const MethodInfo* method_info);
void EncEffectSequenceController__ForceFinish (EncEffectSequenceController_o* __this, const MethodInfo* method_info);
void EncEffectSequenceController__update (EncEffectSequenceController_o* __this, float deltatime, const MethodInfo* method_info);
void EncEffectSequenceController__CommandRunning (EncEffectSequenceController_o* __this, EncEffectSequenceData_KeyData_o* data, const MethodInfo* method_info);
void EncEffectSequenceController__ProcCommandStart (EncEffectSequenceController_o* __this, EncEffectSequenceData_KeyData_o* data, const MethodInfo* method_info);
void EncEffectSequenceController__ProcCommandUpdate (EncEffectSequenceController_o* __this, EncEffectSequenceData_KeyData_o* data, const MethodInfo* method_info);
void EncEffectSequenceController__ProcCommandEnd (EncEffectSequenceController_o* __this, EncEffectSequenceData_KeyData_o* data, const MethodInfo* method_info);
void EncEffectSequenceController__LegendCamera (EncEffectSequenceController_o* __this, const MethodInfo* method_info);
void EncEffectSequenceController__SetLegendCamera (EncEffectSequenceController_o* __this, int32_t index, UnityEngine_Vector3_o* pos, UnityEngine_Vector3_o* rot, const MethodInfo* method_info);
void EncEffectSequenceController___EffectLoad_b__12_0 (EncEffectSequenceController_o* __this, int32_t eventType, System_String_o* name, UnityEngine_Object_o* asset, const MethodInfo* method_info);
void EncEffectSequenceController___EffectLoad_b__12_1 (EncEffectSequenceController_o* __this, Effect_EffectData_o* effectData, bool isAllLoaded, const MethodInfo* method_info);
