#pragma once

#include "il2cpp.h"

bool Dpr_Message_MsgDataFileLoader__get_IsLoading (Dpr_Message_MsgDataFileLoader_o* __this, const MethodInfo* method);
void Dpr_Message_MsgDataFileLoader__Initialize (Dpr_Message_MsgDataFileLoader_o* __this, System_Action_LoadAssetBundleTask__o* onCompleteLoadAssetAct, System_Action_LoadMsbtFileTask__o* onCompleteLoadMsbtAct, const MethodInfo* method);
void Dpr_Message_MsgDataFileLoader__Dispose (Dpr_Message_MsgDataFileLoader_o* __this, const MethodInfo* method);
void Dpr_Message_MsgDataFileLoader__RegistLoadCommonAssetBundleTask (Dpr_Message_MsgDataFileLoader_o* __this, System_String_o* asssetBundleName, const MethodInfo* method);
void Dpr_Message_MsgDataFileLoader__RegistLoadAssetBundleTask (Dpr_Message_MsgDataFileLoader_o* __this, System_String_o* asssetBundleName, const MethodInfo* method);
void Dpr_Message_MsgDataFileLoader__RequestLoadAssetBundle (Dpr_Message_MsgDataFileLoader_o* __this, System_Action_o* onFinishedLoadRequest, const MethodInfo* method);
void Dpr_Message_MsgDataFileLoader___ctor (Dpr_Message_MsgDataFileLoader_o* __this, const MethodInfo* method);
void Dpr_Message_MsgDataFileLoader___RegistLoadCommonAssetBundleTask_b__7_0 (Dpr_Message_MsgDataFileLoader_o* __this, int32_t requestEventType, System_String_o* name, UnityEngine_Object_o* asset, const MethodInfo* method);
void Dpr_Message_MsgDataFileLoader___RegistLoadAssetBundleTask_b__8_0 (Dpr_Message_MsgDataFileLoader_o* __this, int32_t requestEventType, System_String_o* name, UnityEngine_Object_o* asset, const MethodInfo* method);
