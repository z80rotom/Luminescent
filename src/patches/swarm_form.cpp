#include "System/String.hpp"
#include "TairyouHasseiPokeManager.hpp"
#include "ZoneWork.hpp"
#include "GameData/DataManager.hpp"
#include "Pml/Personal/PersonalSystem.hpp"

extern System::String * StringLiteral_9287;

const uint8_t FEMALE_ONLY = 254;
const uint8_t GENDERLESS = 255;

// arg0 is a string literal
// arg1 is a formatted mons no, but unneccessary here
System::String * SwarmForm_getAssetBundleName(void * arg0, void * arg1, TairyouHasseiPokeManager_o *__this)
{
    System::Array<MonsLv_o> * swarm_monsLv = ZoneWork::TairyouHassei_MonsLv(__this->fields._targetZone, nullptr);
    int32_t inMonsNo = swarm_monsLv->m_Items[0].fields.monsNo;

    int32_t monsNo = inMonsNo & 0x0000FFFF;
    int32_t formNo = (inMonsNo & 0xFFFF0000) >> 16;
    uint8_t sex = 0;
    bool isRare = false;
    bool isEgg = false;

    XLSXContent::PersonalTable::SheetPersonal_o * personal = Pml::Personal::PersonalSystem::GetPersonalData(monsNo, formNo, nullptr);
    uint8_t sexRate = personal->fields.sex;
    if (sexRate == FEMALE_ONLY)
    {
        sex = 1;
    } else if (sexRate == GENDERLESS) 
    {
        sex = 2;
    }

    XLSXContent::PokemonInfo::SheetCatalog_o * catalog;
    catalog = GameData::DataManager::GetPokemonCatalog(monsNo, formNo, sex, isRare, isEgg, nullptr);
    System::String * AssetBundleName = catalog->fields.AssetBundleName;

    return System::String::Concat((Il2CppObject * ) StringLiteral_9287, (Il2CppObject * ) AssetBundleName, nullptr);
}