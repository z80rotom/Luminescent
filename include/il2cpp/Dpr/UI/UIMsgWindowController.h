#pragma once

#include "il2cpp.h"

bool Dpr_UI_UIMsgWindowController__get_isOpen (Dpr_UI_UIMsgWindowController_o* __this, const MethodInfo* method);
System_String_o* Dpr_UI_UIMsgWindowController__GetMessageFileName (int32_t messageFileType, const MethodInfo* method);
void Dpr_UI_UIMsgWindowController__OpenMsgWindow (Dpr_UI_UIMsgWindowController_o* __this, int32_t messageFileType, System_String_o* labelName, bool isWait, bool isBatchDisplay, System_Action_o* onFinishedMessage, System_Action_o* onCloseWindow, const MethodInfo* method);
void Dpr_UI_UIMsgWindowController__OpenMsgWindow (Dpr_UI_UIMsgWindowController_o* __this, System_String_o* messageFileName, System_String_o* labelName, bool isWait, bool isBatchDisplay, System_Action_o* onFinishedMessage, System_Action_o* onCloseWindow, const MethodInfo* method);
void Dpr_UI_UIMsgWindowController__OpenMsgWindow (Dpr_UI_UIMsgWindowController_o* __this, int32_t messageFileType, System_String_array* labelNames, System_Action_array* onSets, bool isWait, bool isBatchDisplay, System_Action_o* onFinishedMessage, System_Action_o* onCloseWindow, const MethodInfo* method);
void Dpr_UI_UIMsgWindowController__OpenMsgWindow (Dpr_UI_UIMsgWindowController_o* __this, System_String_o* messageFileName, System_String_array* labelNames, System_Action_array* onSets, bool isWait, bool isBatchDisplay, System_Action_o* onFinishedMessage, System_Action_o* onCloseWindow, const MethodInfo* method);
void Dpr_UI_UIMsgWindowController__CloseMsgWindow (Dpr_UI_UIMsgWindowController_o* __this, const MethodInfo* method);
void Dpr_UI_UIMsgWindowController__HideKeywaitIcon (Dpr_UI_UIMsgWindowController_o* __this, const MethodInfo* method);
void Dpr_UI_UIMsgWindowController__SetAnchorPosition (Dpr_UI_UIMsgWindowController_o* __this, System_Nullable_Vector2__o pos, const MethodInfo* method);
Dpr_UI_ContextMenuWindow_Param_o* Dpr_UI_UIMsgWindowController__CreateContextMenuParam (Dpr_UI_UIMsgWindowController_o* __this, int32_t messageFileType, System_String_array* labelNames, const MethodInfo* method);
Dpr_UI_ContextMenuWindow_Param_o* Dpr_UI_UIMsgWindowController__CreateContextMenuParam (Dpr_UI_UIMsgWindowController_o* __this, System_String_o* messageFileName, System_String_array* labelNames, const MethodInfo* method);
void Dpr_UI_UIMsgWindowController__OpenContextMenu (Dpr_UI_UIMsgWindowController_o* __this, Dpr_UI_ContextMenuWindow_Param_o* param, System_Action_int__o* onSelect, UnityEngine_Events_UnityAction_UIWindow__o* onClosed, const MethodInfo* method);
bool Dpr_UI_UIMsgWindowController__OnUpdate (Dpr_UI_UIMsgWindowController_o* __this, float deltaTime, const MethodInfo* method);
bool Dpr_UI_UIMsgWindowController__NextOpenMsgWindow (Dpr_UI_UIMsgWindowController_o* __this, const MethodInfo* method);
void Dpr_UI_UIMsgWindowController___ctor (Dpr_UI_UIMsgWindowController_o* __this, const MethodInfo* method);
