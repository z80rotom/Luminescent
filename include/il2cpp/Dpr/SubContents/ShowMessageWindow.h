#pragma once

#include "il2cpp.h"

void Dpr_SubContents_ShowMessageWindow__Setup (Dpr_SubContents_ShowMessageWindow_o* __this, System_String_o* msbtName, int32_t msgSpeed, bool isNetwork, const MethodInfo* method);
void Dpr_SubContents_ShowMessageWindow__Setup (Dpr_SubContents_ShowMessageWindow_o* __this, System_String_o* msbtName, bool batchDisplayFlag, bool isNetwork, const MethodInfo* method);
void Dpr_SubContents_ShowMessageWindow__Initialize (Dpr_SubContents_ShowMessageWindow_o* __this, System_String_o* msbtName, const MethodInfo* method);
void Dpr_SubContents_ShowMessageWindow__OnFinalize (Dpr_SubContents_ShowMessageWindow_o* __this, const MethodInfo* method);
bool Dpr_SubContents_ShowMessageWindow__get_IsOpen (Dpr_SubContents_ShowMessageWindow_o* __this, const MethodInfo* method);
Dpr_MsgWindow_MsgWindowParam_o* Dpr_SubContents_ShowMessageWindow__get_MsgWindowParam (Dpr_SubContents_ShowMessageWindow_o* __this, const MethodInfo* method);
int32_t Dpr_SubContents_ShowMessageWindow__get_MsgWindowState (Dpr_SubContents_ShowMessageWindow_o* __this, const MethodInfo* method);
void Dpr_SubContents_ShowMessageWindow__ChangeMSBTFile (Dpr_SubContents_ShowMessageWindow_o* __this, System_String_o* newMsbtName, const MethodInfo* method);
void Dpr_SubContents_ShowMessageWindow__SetWndAnchorPos (Dpr_SubContents_ShowMessageWindow_o* __this, System_Nullable_Vector2__o anchorPos, const MethodInfo* method);
void Dpr_SubContents_ShowMessageWindow__SetMsgSpeed (Dpr_SubContents_ShowMessageWindow_o* __this, int32_t msgSpeed, const MethodInfo* method);
void Dpr_SubContents_ShowMessageWindow__SetBatchDisplayFlag (Dpr_SubContents_ShowMessageWindow_o* __this, bool flag, const MethodInfo* method);
void Dpr_SubContents_ShowMessageWindow__SetNetworkMode (Dpr_SubContents_ShowMessageWindow_o* __this, bool isNetwork, const MethodInfo* method);
void Dpr_SubContents_ShowMessageWindow__ShowMessage (Dpr_SubContents_ShowMessageWindow_o* __this, System_String_o* labelName, System_Action_o* onFinishMessage, bool isShowloadingIcon, bool inputEnabled, const MethodInfo* method);
void Dpr_SubContents_ShowMessageWindow__ShowAutoCloseMessage (Dpr_SubContents_ShowMessageWindow_o* __this, System_String_o* labelName, float showDuration, System_Action_o* onFinishMessage, System_Action_o* onClosedWindow, const MethodInfo* method);
void Dpr_SubContents_ShowMessageWindow__ShowInputCloseMessage (Dpr_SubContents_ShowMessageWindow_o* __this, System_String_o* labelName, System_Action_o* onFinishMessage, System_Action_o* onClosedWindow, const MethodInfo* method);
void Dpr_SubContents_ShowMessageWindow__OpenMsgWindow (Dpr_SubContents_ShowMessageWindow_o* __this, System_String_o* labelName, bool inputEnabled, System_Action_o* onFinishMessage, bool isShowloadingIcon, const MethodInfo* method);
void Dpr_SubContents_ShowMessageWindow__ShowInputCloseItemPocketMessage (Dpr_SubContents_ShowMessageWindow_o* __this, System_String_o* labelName, int32_t itemNo, System_Action_o* onFinishMessage, System_Action_o* onClosedWindow, const MethodInfo* method);
void Dpr_SubContents_ShowMessageWindow__OnUpdate (Dpr_SubContents_ShowMessageWindow_o* __this, float deltaTime, const MethodInfo* method);
void Dpr_SubContents_ShowMessageWindow__UpdateAutoClose (Dpr_SubContents_ShowMessageWindow_o* __this, float deltaTime, const MethodInfo* method);
bool Dpr_SubContents_ShowMessageWindow__CheckTime (Dpr_SubContents_ShowMessageWindow_o* __this, float deltaTime, const MethodInfo* method);
void Dpr_SubContents_ShowMessageWindow__UpdateInputClose (Dpr_SubContents_ShowMessageWindow_o* __this, const MethodInfo* method);
void Dpr_SubContents_ShowMessageWindow__WaitCloseWindow (Dpr_SubContents_ShowMessageWindow_o* __this, const MethodInfo* method);
void Dpr_SubContents_ShowMessageWindow__CloseMsgWindow (Dpr_SubContents_ShowMessageWindow_o* __this, const MethodInfo* method);
void Dpr_SubContents_ShowMessageWindow___ctor (Dpr_SubContents_ShowMessageWindow_o* __this, const MethodInfo* method);
