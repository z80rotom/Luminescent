#include "Pml/PokePara/CoreParam.h"

#include "il2cpp-api.h"
#include "util.hpp"
#include "logger.hpp"

const int32_t MANAPHY_MONSNO = 490;

int32_t MakeUniqueID(int32_t monsNo, int32_t formNo, uint8_t sex, bool isRare, bool isEgg)
{
    if (isEgg)
    {
        if (monsNo == MANAPHY_MONSNO)
        {
            return 120 + (isRare ? 1 : 0);
        }
        else
        {
            return 20 + (isRare ? 1 : 0);
        }
    }
    else
    {
        return (monsNo * 10000) + (formNo * 100) + (sex * 10) + (isRare ? 1 : 0);
    }
}


int32_t DataManager_GetUniqueID1(int32_t monsNo, int32_t formNo, uint8_t sex, bool isRare, bool isEgg)
{
    return MakeUniqueID(monsNo, formNo, sex, isRare, isEgg);
}

int32_t DataManager_GetUniqueID2(Pml::PokePara::CoreParam* pokemonParam)
{
    system_load_typeinfo((void *)0x3435);

    if (pokemonParam == nullptr)
        return 0;

    return MakeUniqueID(pokemonParam->GetMonsNo(nullptr), pokemonParam->GetFormNo(nullptr), pokemonParam->GetSex(nullptr), pokemonParam->GetRareType(nullptr) != 0, pokemonParam->IsEgg(2, nullptr));
}

int32_t DataManager_GetUniqueID3(int32_t monsNo, int32_t formNo, uint8_t sex, uint8_t rareType, bool isEgg)
{
    system_load_typeinfo((void *)0x3436);

    return MakeUniqueID(monsNo, formNo, sex, rareType != 0, isEgg);
}


bool Allow_Release_Egg()
{
    // Never is an egg
    return false;
}
