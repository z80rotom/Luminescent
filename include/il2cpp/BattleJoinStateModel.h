#pragma once

#include "il2cpp.h"

int32_t BattleJoinStateModel__get_currentState (BattleJoinStateModel_o* __this, const MethodInfo* method);
void BattleJoinStateModel__set_currentState (BattleJoinStateModel_o* __this, int32_t value, const MethodInfo* method);
int32_t BattleJoinStateModel__get_sexId (BattleJoinStateModel_o* __this, const MethodInfo* method);
void BattleJoinStateModel__set_sexId (BattleJoinStateModel_o* __this, int32_t value, const MethodInfo* method);
OnlinePlayerCharacter_o* BattleJoinStateModel__get_opcCharacter (BattleJoinStateModel_o* __this, const MethodInfo* method);
void BattleJoinStateModel__set_opcCharacter (BattleJoinStateModel_o* __this, OnlinePlayerCharacter_o* value, const MethodInfo* method);
UnionBattleContextMenu_o* BattleJoinStateModel__get_contextMenu (BattleJoinStateModel_o* __this, const MethodInfo* method);
void BattleJoinStateModel__set_contextMenu (BattleJoinStateModel_o* __this, UnionBattleContextMenu_o* value, const MethodInfo* method);
UnionBattleRuleWindow_o* BattleJoinStateModel__get_unionBattleRuleWindow (BattleJoinStateModel_o* __this, const MethodInfo* method);
void BattleJoinStateModel__set_unionBattleRuleWindow (BattleJoinStateModel_o* __this, UnionBattleRuleWindow_o* value, const MethodInfo* method);
void BattleJoinStateModel___ctor (BattleJoinStateModel_o* __this, const MethodInfo* method);
void BattleJoinStateModel__Start (BattleJoinStateModel_o* __this, const MethodInfo* method);
void BattleJoinStateModel__SetFadeCallBack (BattleJoinStateModel_o* __this, System_Action_o* fadeAction, const MethodInfo* method);
void BattleJoinStateModel__InitCharaState (BattleJoinStateModel_o* __this, const MethodInfo* method);
void BattleJoinStateModel__ChangeBattleJoinState (BattleJoinStateModel_o* __this, int32_t state, const MethodInfo* method);
void BattleJoinStateModel__BattleRuleApprovalCancel (BattleJoinStateModel_o* __this, CancelModel_o cancelModel, const MethodInfo* method);
void BattleJoinStateModel__BattleRuleSelectCancel (BattleJoinStateModel_o* __this, CancelModel_o cancelModel, const MethodInfo* method);
void BattleJoinStateModel__BattleRuleSelectEndCancel (BattleJoinStateModel_o* __this, CancelModel_o cancelModel, const MethodInfo* method);
void BattleJoinStateModel__CloseWindow (BattleJoinStateModel_o* __this, const MethodInfo* method);
void BattleJoinStateModel__OpenSwitchMsg (BattleJoinStateModel_o* __this, int32_t sexId, const MethodInfo* method);
void BattleJoinStateModel__OpenSwitchFadeMsg (BattleJoinStateModel_o* __this, int32_t sexId, const MethodInfo* method);
void BattleJoinStateModel__OpenSwitchCancelMsg (BattleJoinStateModel_o* __this, bool isCancel, const MethodInfo* method);
void BattleJoinStateModel__ShowBattleJoinYesNoMenu (BattleJoinStateModel_o* __this, int32_t staIndex, const MethodInfo* method);
void BattleJoinStateModel__SetBattleStateDebugWindowText (BattleJoinStateModel_o* __this, System_String_o* nameTxt, int32_t battleModeId, int32_t langId, const MethodInfo* method);
void BattleJoinStateModel__ShowBattleStateWindow (BattleJoinStateModel_o* __this, int32_t index, int32_t battleModeId, const MethodInfo* method);
void BattleJoinStateModel__HideBattleStateWindow (BattleJoinStateModel_o* __this, const MethodInfo* method);
void BattleJoinStateModel__Decide (BattleJoinStateModel_o* __this, int32_t targetIndex, int32_t battleModeID, const MethodInfo* method);
void BattleJoinStateModel__Cancel (BattleJoinStateModel_o* __this, int32_t targetIndex, const MethodInfo* method);
bool BattleJoinStateModel__IsCancelable (BattleJoinStateModel_o* __this, const MethodInfo* method);
