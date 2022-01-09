#pragma once

#include "il2cpp.h"

int32_t NetStateModel__get_nowStateID (NetStateModel_o* __this, const MethodInfo* method_info);
void NetStateModel__set_nowStateID (NetStateModel_o* __this, int32_t value, const MethodInfo* method_info);
bool NetStateModel__get_isOtherWaiting (NetStateModel_o* __this, const MethodInfo* method_info);
void NetStateModel__set_isOtherWaiting (NetStateModel_o* __this, bool value, const MethodInfo* method_info);
void NetStateModel__set_unionMsgBattleWindow (NetStateModel_o* __this, UnionMsgBattleWindow_o* value, const MethodInfo* method_info);
UnionMsgBattleWindow_o* NetStateModel__get_unionMsgBattleWindow (NetStateModel_o* __this, const MethodInfo* method_info);
UnionBaseMsgWindow_o* NetStateModel__get_msgWindow (NetStateModel_o* __this, const MethodInfo* method_info);
void NetStateModel__set_msgWindow (NetStateModel_o* __this, UnionBaseMsgWindow_o* value, const MethodInfo* method_info);
void NetStateModel__Start (NetStateModel_o* __this, const MethodInfo* method_info);
void NetStateModel__MyUpdate (NetStateModel_o* __this, float deltaTime, const MethodInfo* method_info);
void NetStateModel__SetState (NetStateModel_o* __this, int32_t stateID, System_Action_CancelModel__o* OnCancel, bool isOtherWaiting, const MethodInfo* method_info);
void NetStateModel__Cancel (NetStateModel_o* __this, CancelModel_o model, const MethodInfo* method_info);
void NetStateModel__SetCancelModel (NetStateModel_o* __this, CancelModel_o cancelModel, const MethodInfo* method_info);
bool NetStateModel__IsOtherPlayerCheck (NetStateModel_o* __this, const MethodInfo* method_info);
void NetStateModel__EnablePlayerInputActive (NetStateModel_o* __this, const MethodInfo* method_info);
void NetStateModel__CloseWindow (NetStateModel_o* __this, const MethodInfo* method_info);
void NetStateModel__OpenSwitchCancelMsg (NetStateModel_o* __this, bool isCancel, const MethodInfo* method_info);
bool NetStateModel__IsCancelable (NetStateModel_o* __this, const MethodInfo* method_info);
void NetStateModel___ctor (NetStateModel_o* __this, const MethodInfo* method_info);
