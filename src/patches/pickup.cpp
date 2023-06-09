#include "il2cpp.hpp"

#include "GameData/DataManager.hpp"
#include "System/Array.hpp"
#include "UnityEngine/Random.hpp"
#include "XLSXContent/MonohiroiTable.hpp"

#include "util.hpp"
#include "logger.hpp"

uint16_t GetPickupItem(uint32_t level, MethodInfo *method)
{
    socket_log_fmt("Generating a Pickup Item at level %d\n", level);
    system_load_typeinfo((void *)0x3f4d);

    if (level > 100)
    {
        return 0;
    }

    System::Array<XLSXContent::MonohiroiTable_SheetMonoHiroi_o*>* pickupTable = GameData::DataManager_TypeInfo->static_fields->MonohiroiTable->fields.MonoHiroi;
    uint32_t tableIndex = getLevelCapIndexOfLevel(level);

    if (tableIndex >= pickupTable->m_Items[0]->fields.Ratios->max_length)
    {
        // Use the last column if we go over the end of the table
        tableIndex = pickupTable->m_Items[0]->fields.Ratios->max_length - 1;
    }

    int32_t ratioTotal = 0;
    for (int32_t i=0; i<pickupTable->max_length; i++)
    {
        ratioTotal += pickupTable->m_Items[i]->fields.Ratios->m_Items[tableIndex];
    }
    
    int32_t randomRoll = UnityEngine::Random::Range(1, ratioTotal+1, nullptr);
    int32_t ratio = 0;
    for (int32_t i=0; i<pickupTable->max_length; i++)
    {
        ratio += pickupTable->m_Items[i]->fields.Ratios->m_Items[tableIndex];
        if (randomRoll <= ratio)
        {
            socket_log_fmt("Returning item %d\n", pickupTable->m_Items[i]->fields.ID);
            return pickupTable->m_Items[i]->fields.ID;
        }
    }

    return 0;
}
