#pragma once

#include "il2cpp.h"

int32_t Dpr_UI_GiftNetworkController__get_ProgressCount (Dpr_UI_GiftNetworkController_o* __this, const MethodInfo* method);
void Dpr_UI_GiftNetworkController__set_ProgressCount (Dpr_UI_GiftNetworkController_o* __this, int32_t value, const MethodInfo* method);
void Dpr_UI_GiftNetworkController__CallInternetGo (Dpr_UI_GiftNetworkController_o* __this, System_Action_bool__SessionErrorType__o* onFinishedInternetGo, const MethodInfo* method);
bool Dpr_UI_GiftNetworkController__IsConnect (Dpr_UI_GiftNetworkController_o* __this, const MethodInfo* method);
void Dpr_UI_GiftNetworkController__CheckSerialRequest (Dpr_UI_GiftNetworkController_o* __this, System_String_o* serialCode, System_Action_int__ushort__o* onComplete, const MethodInfo* method);
void Dpr_UI_GiftNetworkController__SerialServerCallback (Dpr_UI_GiftNetworkController_o* __this, bool isSuccess, int32_t eve, int32_t serverResult, int64_t responseCode, System_String_o* responseStr, const MethodInfo* method);
void Dpr_UI_GiftNetworkController__UpdateSerialCodeUsed (Dpr_UI_GiftNetworkController_o* __this, const MethodInfo* method);
void Dpr_UI_GiftNetworkController__GetGiftListItemInfos (Dpr_UI_GiftNetworkController_o* __this, System_UInt16_array* dataNos, System_Action_byte______o* onComplete, const MethodInfo* method);
void Dpr_UI_GiftNetworkController__GetGiftListItemInfosCallback (Dpr_UI_GiftNetworkController_o* __this, bool isSuccess, int32_t eve, int32_t serverResult, int64_t responseCode, System_String_o* responseStr, const MethodInfo* method);
void Dpr_UI_GiftNetworkController__NextReadFile (Dpr_UI_GiftNetworkController_o* __this, const MethodInfo* method);
void Dpr_UI_GiftNetworkController___ctor (Dpr_UI_GiftNetworkController_o* __this, const MethodInfo* method);
