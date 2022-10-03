#include "il2cpp.hpp"
#include <cstdlib>
#include "util.hpp"
#include "PlayerWork.hpp"
#include "MonsLv.hpp"
#include "System/Array.hpp"
#include "GameManager.hpp"
#include "XLSXContent/FieldEncountTable.hpp"
#include "util.hpp"

// 04e54300
extern void * MonsLv_Array_TypeInfo;
// 04e4a4e0
extern void * System_Int32_array_TypeInfo;

using namespace XLSXContent::FieldEncountTable;


int32_t getScaledLevel()
{
    uint32_t numBadges = GetBadgeCount();
    
    uint32_t avgLevel = 5;

    switch (numBadges)
    {
        case 0:
            avgLevel = 5;
            break;
        case 1: // Roark
            avgLevel = 16;
            break;
        case 2: // Gardenia
            avgLevel = 26;
            break;
        case 3: // Fantina
            avgLevel = 33;
            break;
        case 4: // Maylene
            avgLevel = 39;
            break;
        case 5: // Crasher Wake
            avgLevel = 44;
            break;
        case 6: // Byron
            avgLevel = 53;
            break;
        case 7: // Candice
            avgLevel = 56;
            break;
        case 8: // Volkner
            avgLevel = 62;
            break;
        default:
            break;
    }

    return avgLevel;
}

Sheettable_o * GameManager_GetFieldEncountData(int32_t zoneID, MethodInfo *method)
{
    Sheettable_o * fieldEncData = GameManager::GetFieldEncountData(zoneID, method);

    int32_t lv = getScaledLevel();
    int32_t minlv = std::max(lv-5, 1);
    int32_t maxlv = std::min(lv, 100);

    for (size_t i = 0; i < 12; i++)
    {
        fieldEncData->fields.ground_mons->m_Items[i].fields.minlv = minlv;
        fieldEncData->fields.ground_mons->m_Items[i].fields.maxlv = maxlv;
    }

    for (size_t i = 0; i < 2; i++)
    {
        fieldEncData->fields.tairyo->m_Items[i].fields.minlv = minlv;
        fieldEncData->fields.tairyo->m_Items[i].fields.maxlv = maxlv;
    }

    for (size_t i = 0; i < 2; i++)
    {
        fieldEncData->fields.day->m_Items[i].fields.minlv = minlv;
        fieldEncData->fields.day->m_Items[i].fields.maxlv = maxlv;
    }

    for (size_t i = 0; i < 2; i++)
    {
        fieldEncData->fields.night->m_Items[i].fields.minlv = minlv;
        fieldEncData->fields.night->m_Items[i].fields.maxlv = maxlv;
    }

    for (size_t i = 0; i < 4; i++)
    {
        fieldEncData->fields.swayGrass->m_Items[i].fields.minlv = minlv;
        fieldEncData->fields.swayGrass->m_Items[i].fields.maxlv = maxlv;
    }

    for (size_t i = 0; i < 2; i++)
    {
        fieldEncData->fields.gbaFire->m_Items[i].fields.minlv = minlv;
        fieldEncData->fields.gbaFire->m_Items[i].fields.maxlv = maxlv;
    }
    
    for (size_t i = 0; i < 2; i++)
    {
        fieldEncData->fields.gbaLeaf->m_Items[i].fields.minlv = minlv;
        fieldEncData->fields.gbaLeaf->m_Items[i].fields.maxlv = maxlv;
    }

    for (size_t i = 0; i < 2; i++)
    {
        fieldEncData->fields.gbaRuby->m_Items[i].fields.minlv = minlv;
        fieldEncData->fields.gbaRuby->m_Items[i].fields.maxlv = maxlv;
    }
    
    for (size_t i = 0; i < 2; i++)
    {
        fieldEncData->fields.gbaSapp->m_Items[i].fields.minlv = minlv;
        fieldEncData->fields.gbaSapp->m_Items[i].fields.maxlv = maxlv;
    }

    for (size_t i = 0; i < 2; i++)
    {
        fieldEncData->fields.gbaEme->m_Items[i].fields.minlv = minlv;
        fieldEncData->fields.gbaEme->m_Items[i].fields.maxlv = maxlv;
    }

    for (size_t i = 0; i < 5; i++)
    {
        fieldEncData->fields.water_mons->m_Items[i].fields.minlv = minlv;
        fieldEncData->fields.water_mons->m_Items[i].fields.maxlv = maxlv;
    }

    return fieldEncData;
}