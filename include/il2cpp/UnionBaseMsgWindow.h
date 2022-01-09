#pragma once

#include "il2cpp.h"

bool UnionBaseMsgWindow__get_isMessageFinished (UnionBaseMsgWindow_o* __this, const MethodInfo* method_info);
Dpr_MsgWindow_MsgWindowParam_o* UnionBaseMsgWindow__get_nowMSG (UnionBaseMsgWindow_o* __this, const MethodInfo* method_info);
bool UnionBaseMsgWindow__get_isEnableInput (UnionBaseMsgWindow_o* __this, const MethodInfo* method_info);
void UnionBaseMsgWindow__Init (UnionBaseMsgWindow_o* __this, const MethodInfo* method_info);
void UnionBaseMsgWindow__ClearParam (UnionBaseMsgWindow_o* __this, const MethodInfo* method_info);
void UnionBaseMsgWindow__SetTargetDataMessage (UnionBaseMsgWindow_o* __this, int32_t targetStaitonIndex, int32_t targetSexId, int32_t setTagIndex, const MethodInfo* method_info);
void UnionBaseMsgWindow__SetDefMessages (UnionBaseMsgWindow_o* __this, const MethodInfo* method_info);
void UnionBaseMsgWindow__SetGreetAfterMessage (UnionBaseMsgWindow_o* __this, int32_t id, const MethodInfo* method_info);
void UnionBaseMsgWindow__SetMessagesData (UnionBaseMsgWindow_o* __this, System_Collections_Generic_List_UnionTextData_MsgStringParamData__o* msgStringParamDatas, bool isNetMode, bool isLoadIcon, const MethodInfo* method_info);
void UnionBaseMsgWindow__SetMessagesData (UnionBaseMsgWindow_o* __this, System_String_o* msgFileName, System_String_o* labelName, bool isNetMode, bool isLoadIcon, const MethodInfo* method_info);
Dpr_MsgWindow_MsgWindowParam_o* UnionBaseMsgWindow__CreateMsgWindowParam (UnionBaseMsgWindow_o* __this, System_String_o* msgFileName, System_String_o* labelName, bool isNetMode, bool isLoadIcon, const MethodInfo* method_info);
bool UnionBaseMsgWindow__IsOpen (UnionBaseMsgWindow_o* __this, const MethodInfo* method_info);
void UnionBaseMsgWindow__OpenMsgWindow (UnionBaseMsgWindow_o* __this, int32_t index, int32_t speakerID, const MethodInfo* method_info);
void UnionBaseMsgWindow__CloseWindow (UnionBaseMsgWindow_o* __this, const MethodInfo* method_info);
Dpr_MsgWindow_MsgWindowParam_o* UnionBaseMsgWindow__GetNowMessage (UnionBaseMsgWindow_o* __this, const MethodInfo* method_info);
int32_t UnionBaseMsgWindow__GetNowMessageNo (UnionBaseMsgWindow_o* __this, const MethodInfo* method_info);
void UnionBaseMsgWindow__SetOnCloseCallBack (UnionBaseMsgWindow_o* __this, System_Action_o* closeEndFunc, const MethodInfo* method_info);
void UnionBaseMsgWindow__SetOnFinishMsgCallBack (UnionBaseMsgWindow_o* __this, System_Action_o* finishFunc, const MethodInfo* method_info);
System_String_o* UnionBaseMsgWindow__GetSpeakerName (UnionBaseMsgWindow_o* __this, int32_t speakerID, const MethodInfo* method_info);
void UnionBaseMsgWindow___ctor (UnionBaseMsgWindow_o* __this, const MethodInfo* method_info);
