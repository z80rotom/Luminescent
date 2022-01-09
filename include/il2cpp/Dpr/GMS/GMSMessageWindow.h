#pragma once

#include "il2cpp.h"

void Dpr_GMS_GMSMessageWindow__Initialize (Dpr_GMS_GMSMessageWindow_o* __this, const MethodInfo* method_info);
void Dpr_GMS_GMSMessageWindow__OnFinalize (Dpr_GMS_GMSMessageWindow_o* __this, const MethodInfo* method_info);
void Dpr_GMS_GMSMessageWindow__SetMessageDatas (Dpr_GMS_GMSMessageWindow_o* __this, XLSXContent_GMSMasterData_SheetWindowMessage_array* windowMessage, const MethodInfo* method_info);
void Dpr_GMS_GMSMessageWindow__SetChoiceYesNoTexts (Dpr_GMS_GMSMessageWindow_o* __this, const MethodInfo* method_info);
void Dpr_GMS_GMSMessageWindow__SetChoiceGMSModeTexts (Dpr_GMS_GMSMessageWindow_o* __this, const MethodInfo* method_info);
void Dpr_GMS_GMSMessageWindow__SetChoiceTradeTexts (Dpr_GMS_GMSMessageWindow_o* __this, const MethodInfo* method_info);
void Dpr_GMS_GMSMessageWindow__SetChoiceMarkedMonsDataTexts (Dpr_GMS_GMSMessageWindow_o* __this, const MethodInfo* method_info);
void Dpr_GMS_GMSMessageWindow__SetChoiceMonsDataTexts (Dpr_GMS_GMSMessageWindow_o* __this, const MethodInfo* method_info);
bool Dpr_GMS_GMSMessageWindow__get_IsOpen (Dpr_GMS_GMSMessageWindow_o* __this, const MethodInfo* method_info);
void Dpr_GMS_GMSMessageWindow__SetMsgSpeed (Dpr_GMS_GMSMessageWindow_o* __this, int32_t msgSpeed, const MethodInfo* method_info);
void Dpr_GMS_GMSMessageWindow__ShowMessage (Dpr_GMS_GMSMessageWindow_o* __this, int32_t messageID, bool canInputClose, System_Action_o* onFinishedMessage, System_Action_o* onClosedWindow, bool defaultPos, const MethodInfo* method_info);
void Dpr_GMS_GMSMessageWindow__ShowAutoCloseMessage (Dpr_GMS_GMSMessageWindow_o* __this, int32_t messageID, float showMsgTime, System_Action_o* onClosedWindow, bool defaultPos, const MethodInfo* method_info);
void Dpr_GMS_GMSMessageWindow__OpenMsgWindow (Dpr_GMS_GMSMessageWindow_o* __this, System_Action_o* onClosedWindow, bool defaultPos, const MethodInfo* method_info);
void Dpr_GMS_GMSMessageWindow__SettingMsbtData (Dpr_GMS_GMSMessageWindow_o* __this, int32_t messageID, const MethodInfo* method_info);
void Dpr_GMS_GMSMessageWindow__CloseMsgWindow (Dpr_GMS_GMSMessageWindow_o* __this, const MethodInfo* method_info);
void Dpr_GMS_GMSMessageWindow__OpenYesNoMenu (Dpr_GMS_GMSMessageWindow_o* __this, System_Action_int__o* onChoiced, System_Action_o* onClosed, const MethodInfo* method_info);
void Dpr_GMS_GMSMessageWindow__OpenChoiceModeSelectMenu (Dpr_GMS_GMSMessageWindow_o* __this, int32_t initSelectIndex, System_Action_int__o* onChoiced, System_Action_o* onClosed, const MethodInfo* method_info);
void Dpr_GMS_GMSMessageWindow__OpenChoiceTradeMenu (Dpr_GMS_GMSMessageWindow_o* __this, System_Action_int__o* onChoiced, System_Action_o* onClosed, const MethodInfo* method_info);
void Dpr_GMS_GMSMessageWindow__OpenChoiceMonsDataMenu (Dpr_GMS_GMSMessageWindow_o* __this, System_Action_int__o* onChoiced, System_Action_o* onClosed, const MethodInfo* method_info);
void Dpr_GMS_GMSMessageWindow__OpenChoiceMarkedMonsDataMenu (Dpr_GMS_GMSMessageWindow_o* __this, System_Action_int__o* onChoiced, System_Action_o* onClosed, const MethodInfo* method_info);
void Dpr_GMS_GMSMessageWindow__OpenContextMenu (Dpr_GMS_GMSMessageWindow_o* __this, System_String_array* menuLabels, int32_t initSelectIndex, System_Action_int__o* onChoiced, System_Action_o* onClosed, uint32_t seDecide, const MethodInfo* method_info);
void Dpr_GMS_GMSMessageWindow__OpenContextMenuFromMsgWindowManager (Dpr_GMS_GMSMessageWindow_o* __this, System_String_array* textArray, int32_t initSelectIndex, System_Action_int__o* onChoiced, System_Action_o* onClosed, const MethodInfo* method_info);
void Dpr_GMS_GMSMessageWindow__OpenContextMenuFromUIManager (Dpr_GMS_GMSMessageWindow_o* __this, UnityEngine_Vector3_o windowPos, System_String_array* textArray, int32_t initSelectIndex, System_Action_int__o* onChoiced, System_Action_o* onClosed, uint32_t seDecide, const MethodInfo* method_info);
void Dpr_GMS_GMSMessageWindow__OnUpdate (Dpr_GMS_GMSMessageWindow_o* __this, float deltaTime, const MethodInfo* method_info);
void Dpr_GMS_GMSMessageWindow___ctor (Dpr_GMS_GMSMessageWindow_o* __this, const MethodInfo* method_info);
