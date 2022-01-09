#pragma once

#include "il2cpp.h"

void Dpr_UI_GiftWindow__OnCreate (Dpr_UI_GiftWindow_o* __this, const MethodInfo* method_info);
void Dpr_UI_GiftWindow__OnAddContextMenuYesNoItemParams (Dpr_UI_GiftWindow_o* __this, System_Collections_Generic_List_ContextMenuItem_Param__o* contextMenuItemParams, const MethodInfo* method_info);
void Dpr_UI_GiftWindow__Open (Dpr_UI_GiftWindow_o* __this, int32_t prevWindowId, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_GiftWindow__OpOpen (Dpr_UI_GiftWindow_o* __this, int32_t prevWindowId, const MethodInfo* method_info);
void Dpr_UI_GiftWindow__Close (Dpr_UI_GiftWindow_o* __this, UnityEngine_Events_UnityAction_UIWindow__o* onClosed_, int32_t nextWindowId, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_GiftWindow__OpClose (Dpr_UI_GiftWindow_o* __this, UnityEngine_Events_UnityAction_UIWindow__o* onClosed_, int32_t nextWindowId, const MethodInfo* method_info);
void Dpr_UI_GiftWindow__OnUpdate (Dpr_UI_GiftWindow_o* __this, float deltaTime, const MethodInfo* method_info);
void Dpr_UI_GiftWindow__HideAllSubWindows (Dpr_UI_GiftWindow_o* __this, const MethodInfo* method_info);
void Dpr_UI_GiftWindow__ShowMainMenuWindow (Dpr_UI_GiftWindow_o* __this, const MethodInfo* method_info);
void Dpr_UI_GiftWindow__ShowSerialCodeWindow (Dpr_UI_GiftWindow_o* __this, bool isClear, const MethodInfo* method_info);
void Dpr_UI_GiftWindow__ShowDownloadWindow (Dpr_UI_GiftWindow_o* __this, int32_t min, int32_t max, const MethodInfo* method_info);
void Dpr_UI_GiftWindow__ShowListWindow (Dpr_UI_GiftWindow_o* __this, Dpr_UI_GiftListItemInfo_array* giftListItemInfos, System_Action_o* onReceivedGift, bool isSerial, const MethodInfo* method_info);
void Dpr_UI_GiftWindow__ShowCompleteWindow (Dpr_UI_GiftWindow_o* __this, const MethodInfo* method_info);
void Dpr_UI_GiftWindow__ShowHistoryWindow (Dpr_UI_GiftWindow_o* __this, const MethodInfo* method_info);
void Dpr_UI_GiftWindow__ShowErrorWindow (Dpr_UI_GiftWindow_o* __this, System_String_o* labelName, UnityEngine_Events_UnityAction_UIWindow__o* onCloseCallback, const MethodInfo* method_info);
void Dpr_UI_GiftWindow__OnCloseMainMenuWindow (Dpr_UI_GiftWindow_o* __this, Dpr_UI_UIWindow_o* subWindow, const MethodInfo* method_info);
void Dpr_UI_GiftWindow__OnCloseSerialCodeWindow (Dpr_UI_GiftWindow_o* __this, Dpr_UI_UIWindow_o* subWindow, const MethodInfo* method_info);
void Dpr_UI_GiftWindow__OnCloseListWindow (Dpr_UI_GiftWindow_o* __this, Dpr_UI_UIWindow_o* subWindow, const MethodInfo* method_info);
void Dpr_UI_GiftWindow__OnCloseHistoryWindow (Dpr_UI_GiftWindow_o* __this, Dpr_UI_UIWindow_o* subWindow, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_GiftWindow__StartReceiveInternet (Dpr_UI_GiftWindow_o* __this, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_GiftWindow__StartReceiveSerialCode (Dpr_UI_GiftWindow_o* __this, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_GiftWindow__ConnectInternet (Dpr_UI_GiftWindow_o* __this, bool isShowWarningSerialCode, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_GiftWindow__StartAuthenticateSerialCode (Dpr_UI_GiftWindow_o* __this, System_String_o* inputCode, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_GiftWindow__DownloadList (Dpr_UI_GiftWindow_o* __this, uint16_t dataNo, bool isSerial, const MethodInfo* method_info);
System_Collections_Generic_List_GiftListItemInfo__o* Dpr_UI_GiftWindow__ConvertGiftDatas (Dpr_UI_GiftWindow_o* __this, System_Byte_array* data, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_GiftWindow__StartProgress (Dpr_UI_GiftWindow_o* __this, int32_t max, const MethodInfo* method_info);
void Dpr_UI_GiftWindow___ctor (Dpr_UI_GiftWindow_o* __this, const MethodInfo* method_info);
void Dpr_UI_GiftWindow___cctor (const MethodInfo* method_info);
void Dpr_UI_GiftWindow____n__0 (Dpr_UI_GiftWindow_o* __this, int32_t prevWindowId, const MethodInfo* method_info);
void Dpr_UI_GiftWindow___ShowSerialCodeWindow_b__23_0 (Dpr_UI_GiftWindow_o* __this, Dpr_UI_UIWindow_o* __, const MethodInfo* method_info);
void Dpr_UI_GiftWindow___OnCloseListWindow_b__31_0 (Dpr_UI_GiftWindow_o* __this, Dpr_UI_UIWindow_o* __, const MethodInfo* method_info);
