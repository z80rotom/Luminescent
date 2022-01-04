#pragma once

#include "il2cpp.h"

void BattleRuleSelectWindow__Open (BattleRuleSelectWindow_o* __this, System_Collections_Generic_List_BattleModeID__o* battleMode, System_Action_BattleModeID__o* onDecide, System_Action_o* onCancel, bool fadeIn, bool cancelFade, int32_t prevWindowId, const MethodInfo* method);
void BattleRuleSelectWindow__Close (BattleRuleSelectWindow_o* __this, const MethodInfo* method);
void BattleRuleSelectWindow__OnUpdate (BattleRuleSelectWindow_o* __this, float deltaTime, const MethodInfo* method);
void BattleRuleSelectWindow__OnCreate (BattleRuleSelectWindow_o* __this, const MethodInfo* method);
int32_t BattleRuleSelectWindow__GetCurrentSelectIndex (BattleRuleSelectWindow_o* __this, const MethodInfo* method);
void BattleRuleSelectWindow__SetKeyguide (BattleRuleSelectWindow_o* __this, const MethodInfo* method);
void BattleRuleSelectWindow__MoveSelectRule (BattleRuleSelectWindow_o* __this, bool right, const MethodInfo* method);
void BattleRuleSelectWindow__SelectRule (BattleRuleSelectWindow_o* __this, int32_t index, const MethodInfo* method);
int32_t BattleRuleSelectWindow__GetPrevIndex (BattleRuleSelectWindow_o* __this, const MethodInfo* method);
int32_t BattleRuleSelectWindow__GetNextIndex (BattleRuleSelectWindow_o* __this, const MethodInfo* method);
void BattleRuleSelectWindow__DecideRule (BattleRuleSelectWindow_o* __this, const MethodInfo* method);
void BattleRuleSelectWindow__Decide (BattleRuleSelectWindow_o* __this, const MethodInfo* method);
void BattleRuleSelectWindow__Back (BattleRuleSelectWindow_o* __this, const MethodInfo* method);
System_String_array* BattleRuleSelectWindow__GetMsbtFileLabel (BattleRuleSelectWindow_o* __this, System_String_o* label, const MethodInfo* method);
void BattleRuleSelectWindow___ctor (BattleRuleSelectWindow_o* __this, const MethodInfo* method);
void BattleRuleSelectWindow___cctor (const MethodInfo* method);
