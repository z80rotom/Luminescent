#pragma once

#include "il2cpp.h"

int32_t TradeRecruitmentStateModel__get_currentState (TradeRecruitmentStateModel_o* __this, const MethodInfo* method_info);
void TradeRecruitmentStateModel__set_currentState (TradeRecruitmentStateModel_o* __this, int32_t value, const MethodInfo* method_info);
UnionMsgTradeWindow_o* TradeRecruitmentStateModel__get_unionMsg (TradeRecruitmentStateModel_o* __this, const MethodInfo* method_info);
void TradeRecruitmentStateModel__set_unionMsg (TradeRecruitmentStateModel_o* __this, UnionMsgTradeWindow_o* value, const MethodInfo* method_info);
int32_t TradeRecruitmentStateModel__get_sexId (TradeRecruitmentStateModel_o* __this, const MethodInfo* method_info);
void TradeRecruitmentStateModel__set_sexId (TradeRecruitmentStateModel_o* __this, int32_t value, const MethodInfo* method_info);
OnlinePlayerCharacter_o* TradeRecruitmentStateModel__get_opcCharacter (TradeRecruitmentStateModel_o* __this, const MethodInfo* method_info);
void TradeRecruitmentStateModel__set_opcCharacter (TradeRecruitmentStateModel_o* __this, OnlinePlayerCharacter_o* value, const MethodInfo* method_info);
UnionTradeContextMenu_o* TradeRecruitmentStateModel__get_contextMenu (TradeRecruitmentStateModel_o* __this, const MethodInfo* method_info);
void TradeRecruitmentStateModel__set_contextMenu (TradeRecruitmentStateModel_o* __this, UnionTradeContextMenu_o* value, const MethodInfo* method_info);
void TradeRecruitmentStateModel___ctor (TradeRecruitmentStateModel_o* __this, const MethodInfo* method_info);
void TradeRecruitmentStateModel__Start (TradeRecruitmentStateModel_o* __this, const MethodInfo* method_info);
void TradeRecruitmentStateModel__ChangeTradeRecruitmentState (TradeRecruitmentStateModel_o* __this, int32_t state, const MethodInfo* method_info);
void TradeRecruitmentStateModel__SetFadeCallBack (TradeRecruitmentStateModel_o* __this, System_Action_o* fadeAction, const MethodInfo* method_info);
void TradeRecruitmentStateModel__InitCharaState (TradeRecruitmentStateModel_o* __this, const MethodInfo* method_info);
void TradeRecruitmentStateModel__CloseWindow (TradeRecruitmentStateModel_o* __this, const MethodInfo* method_info);
void TradeRecruitmentStateModel__RecruitmentCancel (TradeRecruitmentStateModel_o* __this, CancelModel_o cancelModel, const MethodInfo* method_info);
void TradeRecruitmentStateModel__DefaltCancel (TradeRecruitmentStateModel_o* __this, const MethodInfo* method_info);
void TradeRecruitmentStateModel__Cancel (TradeRecruitmentStateModel_o* __this, const MethodInfo* method_info);
void TradeRecruitmentStateModel__TradeSpokenCancel (TradeRecruitmentStateModel_o* __this, CancelModel_o cancelModel, const MethodInfo* method_info);
void TradeRecruitmentStateModel__OpenSwitchCancelMsg (TradeRecruitmentStateModel_o* __this, bool isCancel, const MethodInfo* method_info);
void TradeRecruitmentStateModel__ShowTradeYesNoMenu (TradeRecruitmentStateModel_o* __this, int32_t index, System_Action_o* noFunc, const MethodInfo* method_info);
