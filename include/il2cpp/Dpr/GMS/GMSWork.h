#pragma once

#include "il2cpp.h"

uint16_t Dpr_GMS_GMSWork__get_GetStartTradeListIndex (const MethodInfo* method);
void Dpr_GMS_GMSWork__SetStartTradeListIndex (uint16_t index, const MethodInfo* method);
uint16_t Dpr_GMS_GMSWork__get_GetStartBrowsingListIndex (const MethodInfo* method);
void Dpr_GMS_GMSWork__SetStartBrowsingListIndex (uint16_t index, const MethodInfo* method);
uint8_t Dpr_GMS_GMSWork__get_GetUserAchievementStep (const MethodInfo* method);
void Dpr_GMS_GMSWork__SetUserAchievementStep (uint8_t step, const MethodInfo* method);
int32_t Dpr_GMS_GMSWork__CalcPointExtDataIndex (int32_t pointIndex, int32_t historyIndex, const MethodInfo* method);
void Dpr_GMS_GMSWork__OverwriteHistoryData (int32_t pointIndex, int32_t dataIndex, Dpr_GMS_IntermediatePointData_o* newHistoryData, const MethodInfo* method);
void Dpr_GMS_GMSWork__SwapHistoryData (int32_t srcPointIndex, int32_t srcDataIndex, int32_t destPointIndex, int32_t destDataIndex, const MethodInfo* method);
void Dpr_GMS_GMSWork__DeleteHistoryData (int32_t pointIndex, int32_t dataIndex, const MethodInfo* method);
void Dpr_GMS_GMSWork__SortHistoryData (int32_t pointIndex, const MethodInfo* method);
Dpr_GMS_IntermediatePointData_o* Dpr_GMS_GMSWork__ConvertPointData (DPData_GMS_POINT_HISTORY_DATA_o hitsoryData, DPData_GMS_POINT_HISTORY_EXT_DATA_o extData, const MethodInfo* method);
Dpr_GMS_IntermediatePointData_o* Dpr_GMS_GMSWork__ConvertPointData (Dpr_GMS_TradeResultData_o* resultData, const MethodInfo* method);
void Dpr_GMS_GMSWork__ResetGMSData (const MethodInfo* method);
void Dpr_GMS_GMSWork__ResetAllPointHistoryData (const MethodInfo* method);
void Dpr_GMS_GMSWork__SetHistoryData (DPData_GMS_POINT_HISTORY_DATA_o* historyData, DPData_GMS_POINT_HISTORY_EXT_DATA_o* extData, Dpr_GMS_IntermediatePointData_o* newHistoryData, const MethodInfo* method);
void Dpr_GMS_GMSWork__ResetHistoryData (DPData_GMS_POINT_HISTORY_DATA_o* historyData, const MethodInfo* method);
void Dpr_GMS_GMSWork__ApplyReportData_MagicalTrade (Dpr_GMS_TradeResultData_o* tradeResult, const MethodInfo* method);
void Dpr_GMS_GMSWork__EmitLog (System_String_o* log, int32_t logType, const MethodInfo* method);
