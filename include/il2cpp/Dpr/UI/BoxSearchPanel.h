#pragma once

#include "il2cpp.h"

int32_t Dpr_UI_BoxSearchPanel__get_CurrentIndex (Dpr_UI_BoxSearchPanel_o* __this, const MethodInfo* method_info);
void Dpr_UI_BoxSearchPanel__set_CurrentIndex (Dpr_UI_BoxSearchPanel_o* __this, int32_t value, const MethodInfo* method_info);
int32_t Dpr_UI_BoxSearchPanel__get_CurrentDepth (Dpr_UI_BoxSearchPanel_o* __this, const MethodInfo* method_info);
void Dpr_UI_BoxSearchPanel__set_CurrentDepth (Dpr_UI_BoxSearchPanel_o* __this, int32_t value, const MethodInfo* method_info);
int32_t Dpr_UI_BoxSearchPanel__get_MaxDepth (Dpr_UI_BoxSearchPanel_o* __this, const MethodInfo* method_info);
void Dpr_UI_BoxSearchPanel__set_MaxDepth (Dpr_UI_BoxSearchPanel_o* __this, int32_t value, const MethodInfo* method_info);
Dpr_UI_BoxWindow_SEARCH_DATA_o* Dpr_UI_BoxSearchPanel__get_SearchData (Dpr_UI_BoxSearchPanel_o* __this, const MethodInfo* method_info);
void Dpr_UI_BoxSearchPanel__set_SearchData (Dpr_UI_BoxSearchPanel_o* __this, Dpr_UI_BoxWindow_SEARCH_DATA_o* value, const MethodInfo* method_info);
int32_t Dpr_UI_BoxSearchPanel__get_SearchType (Dpr_UI_BoxSearchPanel_o* __this, const MethodInfo* method_info);
System_Int32_array* Dpr_UI_BoxSearchPanel__get_DepthIndexes (Dpr_UI_BoxSearchPanel_o* __this, const MethodInfo* method_info);
void Dpr_UI_BoxSearchPanel__set_DepthIndexes (Dpr_UI_BoxSearchPanel_o* __this, System_Int32_array* value, const MethodInfo* method_info);
System_Collections_Generic_List_int__o* Dpr_UI_BoxSearchPanel__get_LastSelectValues (Dpr_UI_BoxSearchPanel_o* __this, const MethodInfo* method_info);
void Dpr_UI_BoxSearchPanel__set_LastSelectValues (Dpr_UI_BoxSearchPanel_o* __this, System_Collections_Generic_List_int__o* value, const MethodInfo* method_info);
System_Collections_Generic_List_BoxWindow_SearchItemData__o* Dpr_UI_BoxSearchPanel__get_SearchItemList (Dpr_UI_BoxSearchPanel_o* __this, const MethodInfo* method_info);
void Dpr_UI_BoxSearchPanel__set_SearchItemList (Dpr_UI_BoxSearchPanel_o* __this, System_Collections_Generic_List_BoxWindow_SearchItemData__o* value, const MethodInfo* method_info);
void Dpr_UI_BoxSearchPanel__Initialize (Dpr_UI_BoxSearchPanel_o* __this, Dpr_UI_BoxWindow_SEARCH_DATA_o* searchData, System_Action_o* onClose, System_Action_o* onDecide, System_Action_o* onExecute, System_Action_o* onChange, const MethodInfo* method_info);
void Dpr_UI_BoxSearchPanel__OnRequiredItemData (Dpr_UI_BoxSearchPanel_o* __this, Dpr_UI_IUIButton_o* button, const MethodInfo* method_info);
void Dpr_UI_BoxSearchPanel__OnSelectItemScrollViewItem (Dpr_UI_BoxSearchPanel_o* __this, Dpr_UI_IUIButton_o* button, const MethodInfo* method_info);
void Dpr_UI_BoxSearchPanel__OnUnSelectItemScrollViewItem (Dpr_UI_BoxSearchPanel_o* __this, Dpr_UI_IUIButton_o* button, const MethodInfo* method_info);
void Dpr_UI_BoxSearchPanel__Open (Dpr_UI_BoxSearchPanel_o* __this, int32_t index, int32_t markColors, const MethodInfo* method_info);
void Dpr_UI_BoxSearchPanel__Close (Dpr_UI_BoxSearchPanel_o* __this, const MethodInfo* method_info);
void Dpr_UI_BoxSearchPanel__OnUpdate (Dpr_UI_BoxSearchPanel_o* __this, const MethodInfo* method_info);
void Dpr_UI_BoxSearchPanel__ChangeSearchItem (Dpr_UI_BoxSearchPanel_o* __this, int32_t value, const MethodInfo* method_info);
void Dpr_UI_BoxSearchPanel__SetSelectedItemText (Dpr_UI_BoxSearchPanel_o* __this, System_String_o* selectedText, const MethodInfo* method_info);
void Dpr_UI_BoxSearchPanel__SetDepth (Dpr_UI_BoxSearchPanel_o* __this, int32_t searchType, const MethodInfo* method_info);
void Dpr_UI_BoxSearchPanel__SetSearchItemTexts (Dpr_UI_BoxSearchPanel_o* __this, const MethodInfo* method_info);
void Dpr_UI_BoxSearchPanel__CreateSearchDataList (Dpr_UI_BoxSearchPanel_o* __this, int32_t depthValue, int32_t subIndex, const MethodInfo* method_info);
void Dpr_UI_BoxSearchPanel__CreateSearchDataListCore (Dpr_UI_BoxSearchPanel_o* __this, int32_t indexGroup, Dpr_Message_MessageMsgFile_o* defaultMsgFile, const MethodInfo* method_info);
System_String_o* Dpr_UI_BoxSearchPanel__GetCalcTextID (Dpr_UI_BoxSearchPanel_o* __this, System_String_o* baseTextID, int32_t index, const MethodInfo* method_info);
void Dpr_UI_BoxSearchPanel__AddSearchList (Dpr_UI_BoxSearchPanel_o* __this, Dpr_Message_MessageMsgFile_o* msgFile, System_String_o* messageID, UnityEngine_Sprite_o* sprite, const MethodInfo* method_info);
int32_t Dpr_UI_BoxSearchPanel__GetCountOfIndexGroup (Dpr_UI_BoxSearchPanel_o* __this, int32_t type, int32_t group, const MethodInfo* method_info);
void Dpr_UI_BoxSearchPanel__SetSearchData (Dpr_UI_BoxSearchPanel_o* __this, Dpr_UI_BoxWindow_SEARCH_DATA_o* searchData, int32_t subIndex, bool isApplyPanel, const MethodInfo* method_info);
int32_t Dpr_UI_BoxSearchPanel__GetSubIndex (Dpr_UI_BoxSearchPanel_o* __this, const MethodInfo* method_info);
void Dpr_UI_BoxSearchPanel__ClearSearchData (Dpr_UI_BoxSearchPanel_o* __this, const MethodInfo* method_info);
int32_t Dpr_UI_BoxSearchPanel__GetNoFromMessageID (Dpr_UI_BoxSearchPanel_o* __this, System_String_o* messageID, const MethodInfo* method_info);
void Dpr_UI_BoxSearchPanel___ctor (Dpr_UI_BoxSearchPanel_o* __this, const MethodInfo* method_info);
void Dpr_UI_BoxSearchPanel___Close_b__46_0 (Dpr_UI_BoxSearchPanel_o* __this, const MethodInfo* method_info);
