#pragma once

#include "il2cpp.h"

void Dpr_UI_XMenuTop__Awake (Dpr_UI_XMenuTop_o* __this, const MethodInfo* method_info);
void Dpr_UI_XMenuTop__OnCreate (Dpr_UI_XMenuTop_o* __this, const MethodInfo* method_info);
void Dpr_UI_XMenuTop__Open (Dpr_UI_XMenuTop_o* __this, Dpr_UI_XMenuTop_Param_o* param, int32_t prevWindowId, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_XMenuTop__OpOpen (Dpr_UI_XMenuTop_o* __this, Dpr_UI_XMenuTop_Param_o* param, int32_t prevWindowId, const MethodInfo* method_info);
void Dpr_UI_XMenuTop__SetupTownmapGuideMessageWindow (Dpr_UI_XMenuTop_o* __this, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_XMenuTop__OpUpdateTownmapGuideMessageWindow (Dpr_UI_XMenuTop_o* __this, const MethodInfo* method_info);
void Dpr_UI_XMenuTop__StopTownmapGuideMessageWindow (Dpr_UI_XMenuTop_o* __this, const MethodInfo* method_info);
void Dpr_UI_XMenuTop__SmartPoint_AssetAssistant_IViewportChangeHandler_OnViewportChange (Dpr_UI_XMenuTop_o* __this, int32_t screenWidth, int32_t screenHeight, const MethodInfo* method_info);
void Dpr_UI_XMenuTop__SetupItems (Dpr_UI_XMenuTop_o* __this, const MethodInfo* method_info);
bool Dpr_UI_XMenuTop__IsActiveItem (Dpr_UI_XMenuTop_o* __this, int32_t type, const MethodInfo* method_info);
bool Dpr_UI_XMenuTop__IsSwap (Dpr_UI_XMenuTop_o* __this, const MethodInfo* method_info);
void Dpr_UI_XMenuTop__SetupActiveItems (Dpr_UI_XMenuTop_o* __this, const MethodInfo* method_info);
void Dpr_UI_XMenuTop__Close (Dpr_UI_XMenuTop_o* __this, UnityEngine_Events_UnityAction_UIWindow__o* onClosed_, bool isRemoveKeyguide, int32_t nextWindowId, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_XMenuTop__OpClose (Dpr_UI_XMenuTop_o* __this, UnityEngine_Events_UnityAction_UIWindow__o* onClosed_, bool isRemoveKeyguide, int32_t nextWindowId, const MethodInfo* method_info);
void Dpr_UI_XMenuTop__OnUpdate (Dpr_UI_XMenuTop_o* __this, float deltaTime, const MethodInfo* method_info);
bool Dpr_UI_XMenuTop__IsLimitingItem (Dpr_UI_XMenuTop_o* __this, int32_t itemType, const MethodInfo* method_info);
void Dpr_UI_XMenuTop__PlaySeDecide (Dpr_UI_XMenuTop_o* __this, int32_t itemType, const MethodInfo* method_info);
void Dpr_UI_XMenuTop__OpenItem (Dpr_UI_XMenuTop_o* __this, int32_t itemType, const MethodInfo* method_info);
int32_t Dpr_UI_XMenuTop__GetWindowId (Dpr_UI_XMenuTop_o* __this, int32_t itemType, const MethodInfo* method_info);
void Dpr_UI_XMenuTop__OnItemClosed (Dpr_UI_XMenuTop_o* __this, Dpr_UI_UIWindow_o* window, const MethodInfo* method_info);
void Dpr_UI_XMenuTop__UpdateSwap (Dpr_UI_XMenuTop_o* __this, float deltaTime, const MethodInfo* method_info);
void Dpr_UI_XMenuTop__UpdateSelectItem (Dpr_UI_XMenuTop_o* __this, float deltaTime, const MethodInfo* method_info);
bool Dpr_UI_XMenuTop__SetSelectIndex (Dpr_UI_XMenuTop_o* __this, int32_t selectIndex, bool isInitialize, const MethodInfo* method_info);
void Dpr_UI_XMenuTop__OpenMessageWindow (Dpr_UI_XMenuTop_o* __this, Dpr_MsgWindow_MsgWindowParam_o* messageParam, const MethodInfo* method_info);
Dpr_UI_ContextMenuWindow_o* Dpr_UI_XMenuTop__CreateContextMenuYesNo (Dpr_UI_XMenuTop_o* __this, System_Func_ContextMenuItem__bool__o* onClicked, Dpr_UI_ContextMenuWindow_Param_o* contextMenuParam, const MethodInfo* method_info);
void Dpr_UI_XMenuTop__OnAddContextMenuYesNoItemParams (Dpr_UI_XMenuTop_o* __this, System_Collections_Generic_List_ContextMenuItem_Param__o* contextMenuItemParams, const MethodInfo* method_info);
void Dpr_UI_XMenuTop___ctor (Dpr_UI_XMenuTop_o* __this, const MethodInfo* method_info);
void Dpr_UI_XMenuTop____n__0 (Dpr_UI_XMenuTop_o* __this, int32_t prevWindowId, const MethodInfo* method_info);
void Dpr_UI_XMenuTop___OnUpdate_b__35_0 (Dpr_UI_XMenuTop_o* __this, UnityEngine_Events_UnityAction_UIWindow__o* onClosed_, const MethodInfo* method_info);
void Dpr_UI_XMenuTop___OnUpdate_b__35_1 (Dpr_UI_XMenuTop_o* __this, const MethodInfo* method_info);
bool Dpr_UI_XMenuTop___OnUpdate_b__35_2 (Dpr_UI_XMenuTop_o* __this, Dpr_UI_ContextMenuItem_o* contextMenuItem, const MethodInfo* method_info);
void Dpr_UI_XMenuTop___OnUpdate_b__35_3 (Dpr_UI_XMenuTop_o* __this, UnityEngine_Events_UnityAction_UIWindow__o* onClosed_, const MethodInfo* method_info);
