#pragma once

#include "il2cpp.hpp"
#include "XLSXContent/FieldEncountTable.hpp"

struct GameManager
{
    static XLSXContent::FieldEncountTable::Sheettable_o * GetFieldEncountData(int32_t zoneID, MethodInfo *method);
    static int32_t get_currentPeriodOfDay(MethodInfo * method);
};