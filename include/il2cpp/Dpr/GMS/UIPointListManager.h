#pragma once

#include "il2cpp.h"

void Dpr_GMS_UIPointListManager__Initialize (Dpr_GMS_UIPointListManager_o* __this, System_Action_PointHistoryDataModel__o* onSelectPointData, System_Action_o* onReleaseInput, System_Action_o* onCancelSelect, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__InitializeScrollView (Dpr_GMS_UIPointListManager_o* __this, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__Setup (Dpr_GMS_UIPointListManager_o* __this, Dpr_GMS_GMSPointDataContainer_o* dataContainer, int32_t startTradeListIndex, int32_t startBrowsingListIndex, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__OnFinalize (Dpr_GMS_UIPointListManager_o* __this, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__SetInputEnabled (Dpr_GMS_UIPointListManager_o* __this, bool enabled, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__OnChangeStateMain (Dpr_GMS_UIPointListManager_o* __this, int32_t gmsMode, int32_t index, bool canControllList, const MethodInfo* method);
bool Dpr_GMS_UIPointListManager__get_IsShowPointHistoryView (Dpr_GMS_UIPointListManager_o* __this, const MethodInfo* method);
bool Dpr_GMS_UIPointListManager__get_PlayingPointDataList (Dpr_GMS_UIPointListManager_o* __this, const MethodInfo* method);
int32_t Dpr_GMS_UIPointListManager__get_TradePointListIndex (Dpr_GMS_UIPointListManager_o* __this, const MethodInfo* method);
int32_t Dpr_GMS_UIPointListManager__get_BrowsingPointListIndex (Dpr_GMS_UIPointListManager_o* __this, const MethodInfo* method);
int32_t Dpr_GMS_UIPointListManager__get_BrowsingDataIndex (Dpr_GMS_UIPointListManager_o* __this, const MethodInfo* method);
int32_t Dpr_GMS_UIPointListManager__get_CurrentSelectPointHistoryIndex (Dpr_GMS_UIPointListManager_o* __this, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__HideAllUI (Dpr_GMS_UIPointListManager_o* __this, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__ShowTradePointList (Dpr_GMS_UIPointListManager_o* __this, int32_t index, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__HideTradePointList (Dpr_GMS_UIPointListManager_o* __this, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__ShowBrowsingPointList (Dpr_GMS_UIPointListManager_o* __this, int32_t index, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__HideBrowsingPointList (Dpr_GMS_UIPointListManager_o* __this, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__ShowPointHistoryInTrade (Dpr_GMS_UIPointListManager_o* __this, int32_t pointIndex, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__ShowHistoryList (Dpr_GMS_UIPointListManager_o* __this, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__HideBrowsingHistoryList (Dpr_GMS_UIPointListManager_o* __this, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__SetShowHistoryFlag (Dpr_GMS_UIPointListManager_o* __this, bool flag, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__OnDeleteAllHistoryData (Dpr_GMS_UIPointListManager_o* __this, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__MoveTradePointListIndex (Dpr_GMS_UIPointListManager_o* __this, int32_t index, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__MovePointDataListIndex (Dpr_GMS_UIPointListManager_o* __this, int32_t index, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__ReloadBrowsingPointList (Dpr_GMS_UIPointListManager_o* __this, int32_t startIndex, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__ResetDataListItemView (Dpr_GMS_UIPointListManager_o* __this, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__ReloadHistoryViewData (Dpr_GMS_UIPointListManager_o* __this, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__OnUpdate (Dpr_GMS_UIPointListManager_o* __this, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__OnRequiredTradePointItem (Dpr_GMS_UIPointListManager_o* __this, Dpr_GMS_AUIGMSScrollItem_o* item, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__OnMoveTradePointView (Dpr_GMS_UIPointListManager_o* __this, int32_t index, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__OnSelectTradePointItem (Dpr_GMS_UIPointListManager_o* __this, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__OnRequiredBrowsingPointItem (Dpr_GMS_UIPointListManager_o* __this, Dpr_GMS_AUIGMSScrollItem_o* item, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__UpdatePointDataIconView (Dpr_GMS_UIPointListManager_o* __this, Dpr_GMS_GMSPointDataModel_o* newData, Dpr_GMS_UIBrowsingPointDataItem_o* targetItem, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__OnMoveBrowsingPointView (Dpr_GMS_UIPointListManager_o* __this, int32_t index, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__OnSelectBrowsingPointItem (Dpr_GMS_UIPointListManager_o* __this, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__OnRequiredHistoryDataItem (Dpr_GMS_UIPointListManager_o* __this, Dpr_GMS_AUIGMSScrollItem_o* item, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__OnSelectHistoryItem (Dpr_GMS_UIPointListManager_o* __this, const MethodInfo* method);
Dpr_GMS_PointHistoryDataModel_o* Dpr_GMS_UIPointListManager__GetMonsData (Dpr_GMS_UIPointListManager_o* __this, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__OnCancelHistory (Dpr_GMS_UIPointListManager_o* __this, const MethodInfo* method);
void Dpr_GMS_UIPointListManager__OnReleaseListInput (Dpr_GMS_UIPointListManager_o* __this, const MethodInfo* method);
void Dpr_GMS_UIPointListManager___ctor (Dpr_GMS_UIPointListManager_o* __this, const MethodInfo* method);
