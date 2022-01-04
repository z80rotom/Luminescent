#pragma once

#include "il2cpp.h"

int32_t TradeJoinStateModel__get_currentState (TradeJoinStateModel_o* __this, const MethodInfo* method);
void TradeJoinStateModel__set_currentState (TradeJoinStateModel_o* __this, int32_t value, const MethodInfo* method);
UnionMsgTradeWindow_o* TradeJoinStateModel__get_unionMsg (TradeJoinStateModel_o* __this, const MethodInfo* method);
void TradeJoinStateModel__set_unionMsg (TradeJoinStateModel_o* __this, UnionMsgTradeWindow_o* value, const MethodInfo* method);
int32_t TradeJoinStateModel__get_sexId (TradeJoinStateModel_o* __this, const MethodInfo* method);
void TradeJoinStateModel__set_sexId (TradeJoinStateModel_o* __this, int32_t value, const MethodInfo* method);
OnlinePlayerCharacter_o* TradeJoinStateModel__get_opcCharacter (TradeJoinStateModel_o* __this, const MethodInfo* method);
void TradeJoinStateModel__set_opcCharacter (TradeJoinStateModel_o* __this, OnlinePlayerCharacter_o* value, const MethodInfo* method);
UnionTradeContextMenu_o* TradeJoinStateModel__get_contextMenu (TradeJoinStateModel_o* __this, const MethodInfo* method);
void TradeJoinStateModel__set_contextMenu (TradeJoinStateModel_o* __this, UnionTradeContextMenu_o* value, const MethodInfo* method);
void TradeJoinStateModel___ctor (TradeJoinStateModel_o* __this, const MethodInfo* method);
void TradeJoinStateModel__Start (TradeJoinStateModel_o* __this, const MethodInfo* method);
void TradeJoinStateModel__SetFadeCallBack (TradeJoinStateModel_o* __this, System_Action_o* fadeAction, const MethodInfo* method);
void TradeJoinStateModel__InitCharaState (TradeJoinStateModel_o* __this, const MethodInfo* method);
void TradeJoinStateModel__CloseWindow (TradeJoinStateModel_o* __this, const MethodInfo* method);
void TradeJoinStateModel__ChangeTradeJoinState (TradeJoinStateModel_o* __this, int32_t state, const MethodInfo* method);
void TradeJoinStateModel__DefaltCancel (TradeJoinStateModel_o* __this, const MethodInfo* method);
void TradeJoinStateModel__TradeWaitCancel (TradeJoinStateModel_o* __this, CancelModel_o cancelModel, const MethodInfo* method);
void TradeJoinStateModel__OpenSwitchMsg (TradeJoinStateModel_o* __this, int32_t sexId, const MethodInfo* method);
void TradeJoinStateModel__OpenSwitchFadeMsg (TradeJoinStateModel_o* __this, int32_t sexId, const MethodInfo* method);
void TradeJoinStateModel__OpenSwitchCancelMsg (TradeJoinStateModel_o* __this, bool isCancel, const MethodInfo* method);
