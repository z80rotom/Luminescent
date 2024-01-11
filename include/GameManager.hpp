#pragma once

#include "il2cpp.hpp"
#include "XLSXContent/FieldEncountTable.hpp"
#include "XLSXContent/MapAttributeTable.hpp"
#include "XLSXContent/MapInfo.hpp"

struct GameManager
{
    static XLSXContent::FieldEncountTable::Sheettable_o * GetFieldEncountData(int32_t zoneID, MethodInfo *method);
    static int32_t get_currentPeriodOfDay(MethodInfo * method);
    static void GetAttribute(UnityEngine_Vector2Int_o grid, int32_t *code, int32_t *stop, bool debugdraw, MethodInfo *method);
    static XLSXContent::MapAttributeTable_SheetData_o * GetAttributeTable(int32_t code, MethodInfo *method);
    static XLSXContent::MapInfo_o * get_mapInfo(MethodInfo *method);
    static int32_t GetUrayamaMonsNo(int32_t index, MethodInfo *method);
    static int32_t GetSafariMonsNo(int32_t index, MethodInfo *method);
};
