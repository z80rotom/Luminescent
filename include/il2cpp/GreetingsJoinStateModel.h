#pragma once

#include "il2cpp.h"

int32_t GreetingsJoinStateModel__get_currentState (GreetingsJoinStateModel_o* __this, const MethodInfo* method);
void GreetingsJoinStateModel__set_currentState (GreetingsJoinStateModel_o* __this, int32_t value, const MethodInfo* method);
UnionMsgGreetingsWindow_o* GreetingsJoinStateModel__get_unionMsg (GreetingsJoinStateModel_o* __this, const MethodInfo* method);
void GreetingsJoinStateModel__set_unionMsg (GreetingsJoinStateModel_o* __this, UnionMsgGreetingsWindow_o* value, const MethodInfo* method);
int32_t GreetingsJoinStateModel__get_sexId (GreetingsJoinStateModel_o* __this, const MethodInfo* method);
void GreetingsJoinStateModel__set_sexId (GreetingsJoinStateModel_o* __this, int32_t value, const MethodInfo* method);
OnlinePlayerCharacter_o* GreetingsJoinStateModel__get_opcCharacter (GreetingsJoinStateModel_o* __this, const MethodInfo* method);
void GreetingsJoinStateModel__set_opcCharacter (GreetingsJoinStateModel_o* __this, OnlinePlayerCharacter_o* value, const MethodInfo* method);
UnionGreetingsContextMenu_o* GreetingsJoinStateModel__get_contextMenu (GreetingsJoinStateModel_o* __this, const MethodInfo* method);
void GreetingsJoinStateModel__set_contextMenu (GreetingsJoinStateModel_o* __this, UnionGreetingsContextMenu_o* value, const MethodInfo* method);
void GreetingsJoinStateModel___ctor (GreetingsJoinStateModel_o* __this, const MethodInfo* method);
void GreetingsJoinStateModel__Start (GreetingsJoinStateModel_o* __this, const MethodInfo* method);
void GreetingsJoinStateModel__SetFadeCallBack (GreetingsJoinStateModel_o* __this, System_Action_o* fadeAction, const MethodInfo* method);
void GreetingsJoinStateModel__InitCharaState (GreetingsJoinStateModel_o* __this, const MethodInfo* method);
void GreetingsJoinStateModel__CloseWindow (GreetingsJoinStateModel_o* __this, const MethodInfo* method);
void GreetingsJoinStateModel__ChangeGreetingsJoinState (GreetingsJoinStateModel_o* __this, int32_t state, const MethodInfo* method);
void GreetingsJoinStateModel__GreetingsWaitCancel (GreetingsJoinStateModel_o* __this, CancelModel_o cancelModel, const MethodInfo* method);
void GreetingsJoinStateModel__OpenSwitchMsg (GreetingsJoinStateModel_o* __this, int32_t sexId, const MethodInfo* method);
void GreetingsJoinStateModel__OpenSwitchFadeMsg (GreetingsJoinStateModel_o* __this, int32_t sexId, const MethodInfo* method);
void GreetingsJoinStateModel__OpenSwitchCancelMsg (GreetingsJoinStateModel_o* __this, bool isCancel, const MethodInfo* method);
