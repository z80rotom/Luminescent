#pragma once

#include "il2cpp.h"

void Dpr_Contest_UIPlayerStatus__Initialize (Dpr_Contest_UIPlayerStatus_o* __this, float waitWazaStartTime, const MethodInfo* method);
void Dpr_Contest_UIPlayerStatus__SetTentionSprTable (Dpr_Contest_UIPlayerStatus_o* __this, const MethodInfo* method);
bool Dpr_Contest_UIPlayerStatus__IsReady (Dpr_Contest_UIPlayerStatus_o* __this, const MethodInfo* method);
void Dpr_Contest_UIPlayerStatus__Setup (Dpr_Contest_UIPlayerStatus_o* __this, float duration, float jumpPower, const MethodInfo* method);
void Dpr_Contest_UIPlayerStatus__LoadFx (Dpr_Contest_UIPlayerStatus_o* __this, const MethodInfo* method);
void Dpr_Contest_UIPlayerStatus__SetPlayerDataUI (Dpr_Contest_UIPlayerStatus_o* __this, Dpr_Contest_AContestPlayerData_o* data, UnityEngine_Sprite_o* wazaTypeIconSpr, UnityEngine_Sprite_o* iconSpr, const MethodInfo* method);
void Dpr_Contest_UIPlayerStatus__OnFinalize (Dpr_Contest_UIPlayerStatus_o* __this, const MethodInfo* method);
void Dpr_Contest_UIPlayerStatus__ResetParam (Dpr_Contest_UIPlayerStatus_o* __this, const MethodInfo* method);
void Dpr_Contest_UIPlayerStatus__Stop (Dpr_Contest_UIPlayerStatus_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o Dpr_Contest_UIPlayerStatus__GetIconPos (Dpr_Contest_UIPlayerStatus_o* __this, int32_t index, const MethodInfo* method);
void Dpr_Contest_UIPlayerStatus__SetTensionID (Dpr_Contest_UIPlayerStatus_o* __this, int32_t index, int32_t tensionID, const MethodInfo* method);
void Dpr_Contest_UIPlayerStatus__SetTensionID (Dpr_Contest_UIPlayerStatus_o* __this, int32_t index, int32_t tensionID, bool isUp, const MethodInfo* method);
void Dpr_Contest_UIPlayerStatus__LaunchContestWaza (Dpr_Contest_UIPlayerStatus_o* __this, int32_t playerIndex, const MethodInfo* method);
System_Collections_IEnumerator_o* Dpr_Contest_UIPlayerStatus__IE_LaunchContestWaza (Dpr_Contest_UIPlayerStatus_o* __this, int32_t playerIndex, System_Action_o* onComplete, const MethodInfo* method);
void Dpr_Contest_UIPlayerStatus__OnFinishedSkillEffect (Dpr_Contest_UIPlayerStatus_o* __this, int32_t playerIndex, const MethodInfo* method);
void Dpr_Contest_UIPlayerStatus__ShowWazaMaskByIndex (Dpr_Contest_UIPlayerStatus_o* __this, int32_t playerIndex, const MethodInfo* method);
void Dpr_Contest_UIPlayerStatus___ctor (Dpr_Contest_UIPlayerStatus_o* __this, const MethodInfo* method);
