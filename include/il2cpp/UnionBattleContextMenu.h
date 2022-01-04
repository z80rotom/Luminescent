#pragma once

#include "il2cpp.h"

BattleRecruitmentStateModel_o* UnionBattleContextMenu__get_battleRecruitmentModel (UnionBattleContextMenu_o* __this, const MethodInfo* method);
void UnionBattleContextMenu__set_battleRecruitmentModel (UnionBattleContextMenu_o* __this, BattleRecruitmentStateModel_o* value, const MethodInfo* method);
BattleJoinStateModel_o* UnionBattleContextMenu__get_battleJoinModel (UnionBattleContextMenu_o* __this, const MethodInfo* method);
void UnionBattleContextMenu__set_battleJoinModel (UnionBattleContextMenu_o* __this, BattleJoinStateModel_o* value, const MethodInfo* method);
void UnionBattleContextMenu__SetCallBack (UnionBattleContextMenu_o* __this, System_Action_int__int__int__o* setMacthFunc, const MethodInfo* method);
void UnionBattleContextMenu__ClearCallBack (UnionBattleContextMenu_o* __this, const MethodInfo* method);
void UnionBattleContextMenu__CreateContextBattleTypeMenu (UnionBattleContextMenu_o* __this, System_String_o* mFileName, System_String_array* MenuMessagesList, int32_t stationIndex, const MethodInfo* method);
void UnionBattleContextMenu__ShowBattleJoinYesNoWindow (UnionBattleContextMenu_o* __this, int32_t targetIndex, System_Action_int__BattleModeID__o* decide, System_Action_int__o* cancel, const MethodInfo* method);
void UnionBattleContextMenu__ShowBattleRecruitmentYesNoWindow (UnionBattleContextMenu_o* __this, int32_t targetIndex, const MethodInfo* method);
void UnionBattleContextMenu__ShowBattleJoinOtherYesNoWindow (UnionBattleContextMenu_o* __this, int32_t targetIndex, System_Action_int__o* decide, System_Action_o* cancel, const MethodInfo* method);
void UnionBattleContextMenu__SetActionFade (UnionBattleContextMenu_o* __this, System_Action_o* fadeFunc, const MethodInfo* method);
void UnionBattleContextMenu__SetTransitionType (UnionBattleContextMenu_o* __this, const MethodInfo* method);
void UnionBattleContextMenu__SendRuleSelectState (UnionBattleContextMenu_o* __this, int32_t targetIndex, const MethodInfo* method);
void UnionBattleContextMenu__SendIsMatchWaitData (UnionBattleContextMenu_o* __this, const MethodInfo* method);
void UnionBattleContextMenu__SendRequestIsMatchWaitData (UnionBattleContextMenu_o* __this, int32_t stationIndex, const MethodInfo* method);
void UnionBattleContextMenu___ctor (UnionBattleContextMenu_o* __this, const MethodInfo* method);
