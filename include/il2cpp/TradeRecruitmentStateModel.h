#pragma once

#include "il2cpp.h"

int32_t TradeRecruitmentStateModel__get_currentState (TradeRecruitmentStateModel_o* __this, const MethodInfo* method);
void TradeRecruitmentStateModel__set_currentState (TradeRecruitmentStateModel_o* __this, int32_t value, const MethodInfo* method);
UnionMsgTradeWindow_o* TradeRecruitmentStateModel__get_unionMsg (TradeRecruitmentStateModel_o* __this, const MethodInfo* method);
void TradeRecruitmentStateModel__set_unionMsg (TradeRecruitmentStateModel_o* __this, UnionMsgTradeWindow_o* value, const MethodInfo* method);
int32_t TradeRecruitmentStateModel__get_sexId (TradeRecruitmentStateModel_o* __this, const MethodInfo* method);
void TradeRecruitmentStateModel__set_sexId (TradeRecruitmentStateModel_o* __this, int32_t value, const MethodInfo* method);
OnlinePlayerCharacter_o* TradeRecruitmentStateModel__get_opcCharacter (TradeRecruitmentStateModel_o* __this, const MethodInfo* method);
void TradeRecruitmentStateModel__set_opcCharacter (TradeRecruitmentStateModel_o* __this, OnlinePlayerCharacter_o* value, const MethodInfo* method);
UnionTradeContextMenu_o* TradeRecruitmentStateModel__get_contextMenu (TradeRecruitmentStateModel_o* __this, const MethodInfo* method);
void TradeRecruitmentStateModel__set_contextMenu (TradeRecruitmentStateModel_o* __this, UnionTradeContextMenu_o* value, const MethodInfo* method);
void TradeRecruitmentStateModel___ctor (TradeRecruitmentStateModel_o* __this, const MethodInfo* method);
void TradeRecruitmentStateModel__Start (TradeRecruitmentStateModel_o* __this, const MethodInfo* method);
void TradeRecruitmentStateModel__ChangeTradeRecruitmentState (TradeRecruitmentStateModel_o* __this, int32_t state, const MethodInfo* method);
void TradeRecruitmentStateModel__SetFadeCallBack (TradeRecruitmentStateModel_o* __this, System_Action_o* fadeAction, const MethodInfo* method);
void TradeRecruitmentStateModel__InitCharaState (TradeRecruitmentStateModel_o* __this, const MethodInfo* method);
void TradeRecruitmentStateModel__CloseWindow (TradeRecruitmentStateModel_o* __this, const MethodInfo* method);
void TradeRecruitmentStateModel__RecruitmentCancel (TradeRecruitmentStateModel_o* __this, CancelModel_o cancelModel, const MethodInfo* method);
void TradeRecruitmentStateModel__DefaltCancel (TradeRecruitmentStateModel_o* __this, const MethodInfo* method);
void TradeRecruitmentStateModel__Cancel (TradeRecruitmentStateModel_o* __this, const MethodInfo* method);
void TradeRecruitmentStateModel__TradeSpokenCancel (TradeRecruitmentStateModel_o* __this, CancelModel_o cancelModel, const MethodInfo* method);
void TradeRecruitmentStateModel__OpenSwitchCancelMsg (TradeRecruitmentStateModel_o* __this, bool isCancel, const MethodInfo* method);
void TradeRecruitmentStateModel__ShowTradeYesNoMenu (TradeRecruitmentStateModel_o* __this, int32_t index, System_Action_o* noFunc, const MethodInfo* method);
