#pragma once

#include "il2cpp.h"

void Dpr_MsgWindow_WindowMessage__Initialize (Dpr_MsgWindow_WindowMessage_o* __this, Dpr_MsgWindow_MsgWindowConfig_o* config, System_Action_float__o* onMsgCallBack, const MethodInfo* method);
void Dpr_MsgWindow_WindowMessage__ResetMessage (Dpr_MsgWindow_WindowMessage_o* __this, const MethodInfo* method);
void Dpr_MsgWindow_WindowMessage__Clear (Dpr_MsgWindow_WindowMessage_o* __this, const MethodInfo* method);
void Dpr_MsgWindow_WindowMessage__ResetTextColor (Dpr_MsgWindow_WindowMessage_o* __this, const MethodInfo* method);
void Dpr_MsgWindow_WindowMessage__OnFinalize (Dpr_MsgWindow_WindowMessage_o* __this, const MethodInfo* method);
int32_t Dpr_MsgWindow_WindowMessage__get_CurrentMsgState (Dpr_MsgWindow_WindowMessage_o* __this, const MethodInfo* method);
void Dpr_MsgWindow_WindowMessage__SetUseFontAsset (Dpr_MsgWindow_WindowMessage_o* __this, TMPro_TMP_FontAsset_o* useFontAsset, const MethodInfo* method);
void Dpr_MsgWindow_WindowMessage__ChangeUnknownFont (Dpr_MsgWindow_WindowMessage_o* __this, const MethodInfo* method);
void Dpr_MsgWindow_WindowMessage__SetPlayMsgTime (Dpr_MsgWindow_WindowMessage_o* __this, float playMsgTime, const MethodInfo* method);
void Dpr_MsgWindow_WindowMessage__SetPlaySpeedUpFlag (Dpr_MsgWindow_WindowMessage_o* __this, bool flag, const MethodInfo* method);
void Dpr_MsgWindow_WindowMessage__SetUseMessageLineDataArray (Dpr_MsgWindow_WindowMessage_o* __this, Dpr_Message_MessageTextLineDataModel_array* textLineDataArray, const MethodInfo* method);
void Dpr_MsgWindow_WindowMessage__SetCurrentLineData (Dpr_MsgWindow_WindowMessage_o* __this, const MethodInfo* method);
void Dpr_MsgWindow_WindowMessage__SetTextColor (Dpr_MsgWindow_WindowMessage_o* __this, UnityEngine_Color_o newColor, const MethodInfo* method);
void Dpr_MsgWindow_WindowMessage__CheckTextResize (Dpr_MsgWindow_WindowMessage_o* __this, Dpr_Message_MessageTextParseDataModel_o* currentMessageData, float fontScale, int32_t windowWidth, const MethodInfo* method);
float Dpr_MsgWindow_WindowMessage__CheckOverText (Dpr_MsgWindow_WindowMessage_o* __this, Dpr_Message_MessageTextParseDataModel_o* currentMessageData, float fontScale, int32_t windowWidth, const MethodInfo* method);
void Dpr_MsgWindow_WindowMessage__SetTextParam (Dpr_MsgWindow_WindowMessage_o* __this, float fontSize, float textWidth, const MethodInfo* method);
void Dpr_MsgWindow_WindowMessage__SetFontSize (Dpr_MsgWindow_WindowMessage_o* __this, float fontSize, const MethodInfo* method);
bool Dpr_MsgWindow_WindowMessage__IsRestMessageLine (Dpr_MsgWindow_WindowMessage_o* __this, const MethodInfo* method);
float Dpr_MsgWindow_WindowMessage__GetEventValue (Dpr_MsgWindow_WindowMessage_o* __this, const MethodInfo* method);
void Dpr_MsgWindow_WindowMessage__StartPlayMessage (Dpr_MsgWindow_WindowMessage_o* __this, const MethodInfo* method);
void Dpr_MsgWindow_WindowMessage__RestartMessage (Dpr_MsgWindow_WindowMessage_o* __this, const MethodInfo* method);
void Dpr_MsgWindow_WindowMessage__UpdateMessage (Dpr_MsgWindow_WindowMessage_o* __this, float deltaTime, const MethodInfo* method);
bool Dpr_MsgWindow_WindowMessage__CanUpdateMessage (Dpr_MsgWindow_WindowMessage_o* __this, const MethodInfo* method);
bool Dpr_MsgWindow_WindowMessage__CheckWaitEvent (Dpr_MsgWindow_WindowMessage_o* __this, float deltaTime, const MethodInfo* method);
bool Dpr_MsgWindow_WindowMessage__CheckWaitState (Dpr_MsgWindow_WindowMessage_o* __this, float deltaTime, const MethodInfo* method);
bool Dpr_MsgWindow_WindowMessage__CheckTextScrollState (Dpr_MsgWindow_WindowMessage_o* __this, float deltaTime, const MethodInfo* method);
void Dpr_MsgWindow_WindowMessage__UpdateTextView (Dpr_MsgWindow_WindowMessage_o* __this, float deltaTime, const MethodInfo* method);
float Dpr_MsgWindow_WindowMessage__GetDeltaTime (Dpr_MsgWindow_WindowMessage_o* __this, float deltaTime, const MethodInfo* method);
System_String_o* Dpr_MsgWindow_WindowMessage__SetLineMessage (Dpr_MsgWindow_WindowMessage_o* __this, int32_t strIndex, const MethodInfo* method);
void Dpr_MsgWindow_WindowMessage__CheckLineEvent (Dpr_MsgWindow_WindowMessage_o* __this, const MethodInfo* method);
void Dpr_MsgWindow_WindowMessage__MsgEventEnd (Dpr_MsgWindow_WindowMessage_o* __this, const MethodInfo* method);
void Dpr_MsgWindow_WindowMessage__MsgEventWait (Dpr_MsgWindow_WindowMessage_o* __this, const MethodInfo* method);
void Dpr_MsgWindow_WindowMessage__MsgEventCallBack (Dpr_MsgWindow_WindowMessage_o* __this, const MethodInfo* method);
void Dpr_MsgWindow_WindowMessage__MsgEventNewLine (Dpr_MsgWindow_WindowMessage_o* __this, const MethodInfo* method);
void Dpr_MsgWindow_WindowMessage__MsgEventScrollLine (Dpr_MsgWindow_WindowMessage_o* __this, const MethodInfo* method);
void Dpr_MsgWindow_WindowMessage__MsgEventScrollPage (Dpr_MsgWindow_WindowMessage_o* __this, const MethodInfo* method);
void Dpr_MsgWindow_WindowMessage__DoNextPage (Dpr_MsgWindow_WindowMessage_o* __this, const MethodInfo* method);
void Dpr_MsgWindow_WindowMessage__DoNextLine (Dpr_MsgWindow_WindowMessage_o* __this, const MethodInfo* method);
void Dpr_MsgWindow_WindowMessage__DoScrollPage (Dpr_MsgWindow_WindowMessage_o* __this, const MethodInfo* method);
void Dpr_MsgWindow_WindowMessage___ctor (Dpr_MsgWindow_WindowMessage_o* __this, const MethodInfo* method);
