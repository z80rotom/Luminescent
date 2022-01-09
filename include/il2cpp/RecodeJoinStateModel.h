#pragma once

#include "il2cpp.h"

int32_t RecodeJoinStateModel__get_currentState (RecodeJoinStateModel_o* __this, const MethodInfo* method_info);
void RecodeJoinStateModel__set_currentState (RecodeJoinStateModel_o* __this, int32_t value, const MethodInfo* method_info);
UnionMsgRecodeWindow_o* RecodeJoinStateModel__get_unionMsg (RecodeJoinStateModel_o* __this, const MethodInfo* method_info);
void RecodeJoinStateModel__set_unionMsg (RecodeJoinStateModel_o* __this, UnionMsgRecodeWindow_o* value, const MethodInfo* method_info);
int32_t RecodeJoinStateModel__get_sexId (RecodeJoinStateModel_o* __this, const MethodInfo* method_info);
void RecodeJoinStateModel__set_sexId (RecodeJoinStateModel_o* __this, int32_t value, const MethodInfo* method_info);
OnlinePlayerCharacter_o* RecodeJoinStateModel__get_opcCharacter (RecodeJoinStateModel_o* __this, const MethodInfo* method_info);
void RecodeJoinStateModel__set_opcCharacter (RecodeJoinStateModel_o* __this, OnlinePlayerCharacter_o* value, const MethodInfo* method_info);
UnionRecodeContextMenu_o* RecodeJoinStateModel__get_contextMenu (RecodeJoinStateModel_o* __this, const MethodInfo* method_info);
void RecodeJoinStateModel__set_contextMenu (RecodeJoinStateModel_o* __this, UnionRecodeContextMenu_o* value, const MethodInfo* method_info);
void RecodeJoinStateModel___ctor (RecodeJoinStateModel_o* __this, const MethodInfo* method_info);
void RecodeJoinStateModel__Start (RecodeJoinStateModel_o* __this, const MethodInfo* method_info);
void RecodeJoinStateModel__SetFadeCallBack (RecodeJoinStateModel_o* __this, System_Action_o* fadeAction, const MethodInfo* method_info);
void RecodeJoinStateModel__InitCharaState (RecodeJoinStateModel_o* __this, const MethodInfo* method_info);
void RecodeJoinStateModel__CloseWindow (RecodeJoinStateModel_o* __this, const MethodInfo* method_info);
void RecodeJoinStateModel__ChangeRecodeJoinState (RecodeJoinStateModel_o* __this, int32_t state, const MethodInfo* method_info);
void RecodeJoinStateModel__RecodeWaitCancel (RecodeJoinStateModel_o* __this, CancelModel_o cancelModel, const MethodInfo* method_info);
void RecodeJoinStateModel__OpenSwitchMsg (RecodeJoinStateModel_o* __this, int32_t sexId, const MethodInfo* method_info);
void RecodeJoinStateModel__OpenSwitchFadeMsg (RecodeJoinStateModel_o* __this, int32_t sexId, const MethodInfo* method_info);
void RecodeJoinStateModel__OpenSwitchCancelMsg (RecodeJoinStateModel_o* __this, bool isCancel, const MethodInfo* method_info);
