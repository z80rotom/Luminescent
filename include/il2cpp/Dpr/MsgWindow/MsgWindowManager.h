#pragma once

#include "il2cpp.h"

void Dpr_MsgWindow_MsgWindowManager__Start (Dpr_MsgWindow_MsgWindowManager_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* Dpr_MsgWindow_MsgWindowManager__IE_StartMsgWindow (Dpr_MsgWindow_MsgWindowManager_o* __this, const MethodInfo* method);
void Dpr_MsgWindow_MsgWindowManager__OnUpdate (Dpr_MsgWindow_MsgWindowManager_o* __this, float deltaTime, const MethodInfo* method);
void Dpr_MsgWindow_MsgWindowManager__Destroy (Dpr_MsgWindow_MsgWindowManager_o* __this, const MethodInfo* method);
Dpr_MsgWindow_MsgWindowDataContainer_o* Dpr_MsgWindow_MsgWindowManager__get_DataContainer (Dpr_MsgWindow_MsgWindowManager_o* __this, const MethodInfo* method);
void Dpr_MsgWindow_MsgWindowManager__SetMsgWindowData (XLSXContent_MsgWindowData_o* msgWindowData, const MethodInfo* method);
Dpr_MsgWindow_MsgWindow_o* Dpr_MsgWindow_MsgWindowManager__get_MsgWindow (Dpr_MsgWindow_MsgWindowManager_o* __this, const MethodInfo* method);
bool Dpr_MsgWindow_MsgWindowManager__get_IsOpenWindow (const MethodInfo* method);
bool Dpr_MsgWindow_MsgWindowManager__get_IsOpen (const MethodInfo* method);
Dpr_MsgWindow_MsgWindow_o* Dpr_MsgWindow_MsgWindowManager__OpenMsg (Dpr_MsgWindow_MsgWindowParam_o* msgWindowParam, const MethodInfo* method);
Dpr_MsgWindow_MsgWindow_o* Dpr_MsgWindow_MsgWindowManager__OpenBoardMsg (Dpr_MsgWindow_MsgWindowParam_o* msgWindowParam, int32_t roadsignPattern, const MethodInfo* method);
Dpr_MsgWindow_MsgWindow_o* Dpr_MsgWindow_MsgWindowManager__OpenItemGetMsg (Dpr_MsgWindow_MsgWindowParam_o* msgWindowParam, const MethodInfo* method);
Dpr_MsgWindow_MsgWindow_o* Dpr_MsgWindow_MsgWindowManager__OpenBtlMsg (Dpr_MsgWindow_MsgWindowParam_o* msgWindowParam, const MethodInfo* method);
void Dpr_MsgWindow_MsgWindowManager__CloseMsg (const MethodInfo* method);
void Dpr_MsgWindow_MsgWindowManager__ReplaceMsg (Dpr_MsgWindow_MsgWindowParam_o* msgWindowParam, const MethodInfo* method);
void Dpr_MsgWindow_MsgWindowManager__ReplaceBtlMsg (Dpr_MsgWindow_MsgWindowParam_o* msgWindowParam, const MethodInfo* method);
void Dpr_MsgWindow_MsgWindowManager__MoveNextPage (const MethodInfo* method);
void Dpr_MsgWindow_MsgWindowManager__OpenYesNoMenu (System_Action_int__o* onSelectChoices, int32_t cursorType, bool useCancel, bool initSelectYes, System_Action_o* onClosed, uint32_t seDecide, const MethodInfo* method);
void Dpr_MsgWindow_MsgWindowManager__OpenContextMenu_YESNO (Dpr_MsgWindow_MsgWindowManager_o* __this, System_Action_int__o* onSelectChoices, int32_t cursorType, bool selectYes, bool useCancel, System_Action_o* onClosed, uint32_t seDecide, const MethodInfo* method);
void Dpr_MsgWindow_MsgWindowManager__OpenCustomMenu (System_String_o* msbtName, System_String_array* labelNameArray, System_Action_int__o* onSelectChoices, int32_t cursorType, bool useCancel, int32_t initSelectIndex, System_Action_o* onClosed, uint32_t seDecide, const MethodInfo* method);
void Dpr_MsgWindow_MsgWindowManager__OpenContextMenu_Custom (Dpr_MsgWindow_MsgWindowManager_o* __this, System_String_o* msbtName, System_String_array* labelNameArray, System_Action_int__o* onSelectChoices, int32_t cursorType, bool useCancel, int32_t initSelectIndex, System_Action_o* onClosed, uint32_t seDecide, const MethodInfo* method);
void Dpr_MsgWindow_MsgWindowManager__OpenCustomMenu (System_String_array* textArray, System_Action_int__o* onSelectChoices, int32_t cursorType, bool useCancel, int32_t initSelectIndex, System_Action_o* onClosed, uint32_t seDecide, const MethodInfo* method);
void Dpr_MsgWindow_MsgWindowManager__OpenContextMenu_Custom (Dpr_MsgWindow_MsgWindowManager_o* __this, System_String_array* textArray, System_Action_int__o* onSelectChoices, int32_t cursorType, bool useCancel, int32_t initSelectIndex, System_Action_o* onCloseed, uint32_t seDecide, const MethodInfo* method);
void Dpr_MsgWindow_MsgWindowManager__CloseContextMenu (Dpr_MsgWindow_MsgWindowManager_o* __this, const MethodInfo* method);
Dpr_UI_ContextMenuWindow_Param_o* Dpr_MsgWindow_MsgWindowManager__CreateContextMenuParam (Dpr_MsgWindow_MsgWindowManager_o* __this, System_String_o* msbtName, System_String_array* labelNameArray, int32_t initSelectIndex, int32_t cursorType, bool useCancel, uint32_t seDecide, const MethodInfo* method);
Dpr_UI_ContextMenuWindow_Param_o* Dpr_MsgWindow_MsgWindowManager__CreateContextMenuParam (Dpr_MsgWindow_MsgWindowManager_o* __this, System_String_array* textArray, int32_t initSelectIndex, int32_t cursorType, bool useCancel, uint32_t seDecide, const MethodInfo* method);
void Dpr_MsgWindow_MsgWindowManager__OpenContextMenu (Dpr_MsgWindow_MsgWindowManager_o* __this, Dpr_UI_ContextMenuWindow_Param_o* menuParam, System_Action_int__o* onSelectChoices, System_Action_o* onClosed, const MethodInfo* method);
void Dpr_MsgWindow_MsgWindowManager__ClearMsgWindowCallbackFunc (const MethodInfo* method);
void Dpr_MsgWindow_MsgWindowManager___ctor (Dpr_MsgWindow_MsgWindowManager_o* __this, const MethodInfo* method);
