#pragma once

#include "il2cpp.h"

void BattleReadyPoint__set_PointNum (BattleReadyPoint_o* __this, int32_t value, const MethodInfo* method_info);
int32_t BattleReadyPoint__get_PointNum (BattleReadyPoint_o* __this, const MethodInfo* method_info);
void BattleReadyPoint__Init (BattleReadyPoint_o* __this, int32_t num, const MethodInfo* method_info);
void BattleReadyPoint__SetIsActiveMode (BattleReadyPoint_o* __this, bool flag, const MethodInfo* method_info);
bool BattleReadyPoint__GetIsActiveMode (BattleReadyPoint_o* __this, const MethodInfo* method_info);
void BattleReadyPoint__Create (BattleReadyPoint_o* __this, float rad, UnityEngine_GameObject_o* target, Effect_EffectData_o* wait, Effect_EffectData_o* ready, const MethodInfo* method_info);
void BattleReadyPoint__OnDestroy (BattleReadyPoint_o* __this, const MethodInfo* method_info);
void BattleReadyPoint__Enter (BattleReadyPoint_o* __this, const MethodInfo* method_info);
void BattleReadyPoint__Leave (BattleReadyPoint_o* __this, const MethodInfo* method_info);
bool BattleReadyPoint__IsContact (BattleReadyPoint_o* __this, const MethodInfo* method_info);
void BattleReadyPoint__PlayWaitEffect (BattleReadyPoint_o* __this, const MethodInfo* method_info);
void BattleReadyPoint__PlayReadyEffect (BattleReadyPoint_o* __this, const MethodInfo* method_info);
bool BattleReadyPoint__IsInCircle (BattleReadyPoint_o* __this, const MethodInfo* method_info);
void BattleReadyPoint___ctor (BattleReadyPoint_o* __this, const MethodInfo* method_info);
