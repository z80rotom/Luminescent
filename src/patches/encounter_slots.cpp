#include "il2cpp.hpp"
#include "il2cpp-api.h"

#include "AttributeID.hpp"
#include "DpData.hpp"
#include "Dpr/Field/EncountResult.hpp"
#include "Dpr/Field/FieldEncount.hpp"
#include "Dpr/Field/FieldEncount/ENC_FLD_SPA.hpp"
#include "Dpr/Field/SwayGrass.hpp"
#include "EncountDataWork.hpp"
#include "FieldObjectEntity.hpp"
#include "GameManager.hpp"
#include "PlayerWork.hpp"
#include "Pml/Local/Random.h"
#include "Pml/PokePara/CoreParam.h"
#include "Pml/PokePara/PokemonParam.h"
#include "Pml/PokeParty.hpp"
#include "RandomGroupWork.hpp"
#include "XLSXContent/MapAttributeTable.hpp"
#include "XLSXContent/MapInfo.hpp"
#include "XLSXContent/FieldEncountTable.hpp"
#include "ZoneWork.hpp"
#include "ZukanWork.hpp"

#include "logger.hpp"
#include "util.hpp"

// Slots
const int32_t SLOT_TIME_OF_DAY_1 = 2;
const int32_t SLOT_TIME_OF_DAY_2 = 3;
const int32_t SLOT_SWARM_1 = 0;
const int32_t SLOT_SWARM_2 = 1;
const int32_t SLOT_TROPHY_GARDEN_1 = 6;
const int32_t SLOT_TROPHY_GARDEN_2 = 7;
const int32_t SLOT_DUALSLOT_1 = 2;
const int32_t SLOT_DUALSLOT_2 = 3;
const int32_t SLOT_DUALSLOT_WATER_1 = 1;
const int32_t SLOT_SAFARI_1 = 6;
const int32_t SLOT_SAFARI_2 = 7;
const int32_t SLOT_RADAR_1 = 4;
const int32_t SLOT_RADAR_2 = 5;
const int32_t SLOT_RADAR_3 = 10;
const int32_t SLOT_RADAR_4 = 11;


// Constants
const int32_t DOUBLE_SLOT_WORK = 495;
const int32_t SYS_WORK_PAIR_TRAINER_ID = 263;

const int32_t ILLUMINATE_ABILITY = 35;
const int32_t ARENA_TRAP_ABILITY = 71;
const int32_t NO_GUARD_ABILITY = 99;
const int32_t STENCH_ABILITY = 1;
const int32_t WHITE_SMOKE_ABILITY = 73;
const int32_t QUICK_FEET_ABILITY = 95;
const int32_t INFILTRATOR_ABILITY = 151;
const int32_t SAND_VEIL_ABILITY = 8;
const int32_t SNOW_CLOAK_ABILITY = 81;

const int32_t SANDSTORM_WEATHER = 10;
const int32_t HAIL_WEATHER = 5;

const int32_t PURE_INCENSE_ITEM = 320;
const int32_t CLEANSE_TAG_ITEM = 224;

const int32_t SYS_FLAG_PAIR = 2;
const int32_t SYS_FLAG_SAFARI_MODE = 8;

const int32_t FV_R212AR0103_RICH = 1647;

const int32_t ENCOUNTER_TYPE_SINGLE = 0;
const int32_t ENCOUNTER_TYPE_DOUBLE = 1;
const int32_t ENCOUNTER_TYPE_SAFARI = 2;
const int32_t ENCOUNTER_TYPE_MOVEPOKE = 3;


void LogSlots(System::Array<MonsLv_o> *slots)
{
    socket_log_fmt("SLOTS DUMP\n");
    for (int i=0; i<slots->max_length; i++)
    {
        socket_log_fmt("Slot %d: MonsNo %d, Level %d-%d\n", i+1, slots->m_Items[i].fields.monsNo, slots->m_Items[i].fields.minlv, slots->m_Items[i].fields.maxlv);
    }
}

void ReplaceSlot(System::Array<MonsLv_o> *slots, int32_t slot, int32_t monsNo, int32_t minLv, int32_t maxLv)
{
    if (slots->max_length > slot)
    {
        slots->m_Items[slot].fields.monsNo = monsNo;
        slots->m_Items[slot].fields.minlv = minLv;
        slots->m_Items[slot].fields.maxlv = maxLv;
    }
}

void ReplaceSlot(System::Array<MonsLv_o> *slots, int32_t slot, int32_t monsNo)
{
    if (slots->max_length > slot)
    {
        slots->m_Items[slot].fields.monsNo = monsNo;
    }
}

void ReplaceSlot(System::Array<MonsLv_o> *slots, int32_t slot, MonsLv_o newSlot)
{
    ReplaceSlot(slots, slot, newSlot.fields.monsNo, newSlot.fields.minlv, newSlot.fields.maxlv);
}

void SetTimeOfDaySlots(System::Array<MonsLv_o> *slots, XLSXContent::FieldEncountTable::Sheettable_o *fieldEnc)
{
    int32_t periodOfDay = GameManager::get_currentPeriodOfDay(nullptr);
    switch (periodOfDay)
    {
        case 1:
        case 2:
            if (fieldEnc->fields.day->max_length > 0) ReplaceSlot(slots, SLOT_TIME_OF_DAY_1, fieldEnc->fields.day->m_Items[0]);
            if (fieldEnc->fields.day->max_length > 1) ReplaceSlot(slots, SLOT_TIME_OF_DAY_2, fieldEnc->fields.day->m_Items[1]);
            break;
        case 3:
        case 4:
            if (fieldEnc->fields.night->max_length > 0) ReplaceSlot(slots, SLOT_TIME_OF_DAY_1, fieldEnc->fields.night->m_Items[0]);
            if (fieldEnc->fields.night->max_length > 1) ReplaceSlot(slots, SLOT_TIME_OF_DAY_2, fieldEnc->fields.night->m_Items[1]);
            break;
    }
}

void SetSwarmSlots(System::Array<MonsLv_o> *slots, XLSXContent::FieldEncountTable::Sheettable_o *fieldEnc)
{
    int32_t zoneId = PlayerWork::get_zoneID(nullptr);
    int32_t swarmZoneId = ZoneWork::TairyouHassei_ZoneID(nullptr);
    if (swarmZoneId == zoneId)
    {
        if (fieldEnc->fields.tairyo->max_length > 0) ReplaceSlot(slots, SLOT_SWARM_1, fieldEnc->fields.tairyo->m_Items[0]);
        if (fieldEnc->fields.tairyo->max_length > 1) ReplaceSlot(slots, SLOT_SWARM_2, fieldEnc->fields.tairyo->m_Items[1]);
    }
}

void SetTrophyGardenSlots(System::Array<MonsLv_o> *slots, XLSXContent::FieldEncountTable::Sheettable_o *fieldEnc)
{
    bool talkedToBacklot = PlayerWork::GetBool(FV_R212AR0103_RICH, nullptr);
    if (talkedToBacklot)
    {
        int32_t trophyIndex1 = EncountDataWork::GetUrayamaIndex(0, nullptr);
        int32_t trophyMon1 = GameManager::GetUrayamaMonsNo(trophyIndex1, nullptr);
        int32_t trophyIndex2 = EncountDataWork::GetUrayamaIndex(1, nullptr);
        int32_t trophyMon2 = GameManager::GetUrayamaMonsNo(trophyIndex2, nullptr);

        ReplaceSlot(slots, SLOT_TROPHY_GARDEN_1, trophyMon1);
        ReplaceSlot(slots, SLOT_TROPHY_GARDEN_2, trophyMon2);
    }
}

void SetGBASlots(System::Array<MonsLv_o> *slots, XLSXContent::FieldEncountTable::Sheettable_o *fieldEnc)
{
    int32_t incenseSlot = PlayerWork::GetInt(DOUBLE_SLOT_WORK, nullptr);
    System::Array<MonsLv_o>* gbaDualSlot = nullptr;
    switch (incenseSlot)
    {
        case 1:
            gbaDualSlot = fieldEnc->fields.gbaRuby;
            break;
        case 2:
            gbaDualSlot = fieldEnc->fields.gbaSapp;
            break;
        case 3:
            gbaDualSlot = fieldEnc->fields.gbaEme;
            break;
        case 4:
            gbaDualSlot = fieldEnc->fields.gbaFire;
            break;
        case 5:
            gbaDualSlot = fieldEnc->fields.gbaLeaf;
            break;
    }
    if (gbaDualSlot != nullptr)
    {
        if (gbaDualSlot->max_length > 0) ReplaceSlot(slots, SLOT_DUALSLOT_1, gbaDualSlot->m_Items[0]);
        if (gbaDualSlot->max_length > 1) ReplaceSlot(slots, SLOT_DUALSLOT_2, gbaDualSlot->m_Items[1]);
    }
}

void SetWaterGBASlots(System::Array<MonsLv_o> *slots, XLSXContent::FieldEncountTable::Sheettable_o *fieldEnc)
{
    int32_t incenseSlot = PlayerWork::GetInt(DOUBLE_SLOT_WORK, nullptr);
    System::Array<MonsLv_o>* gbaDualSlot = nullptr;
    switch (incenseSlot)
    {
        case 1:
            gbaDualSlot = fieldEnc->fields.gbaRuby;
            break;
        case 2:
            gbaDualSlot = fieldEnc->fields.gbaSapp;
            break;
        case 3:
            gbaDualSlot = fieldEnc->fields.gbaEme;
            break;
        case 4:
            gbaDualSlot = fieldEnc->fields.gbaFire;
            break;
        case 5:
            gbaDualSlot = fieldEnc->fields.gbaLeaf;
            break;
    }
    if (gbaDualSlot != nullptr)
    {
        if (gbaDualSlot->max_length > 2) ReplaceSlot(slots, SLOT_DUALSLOT_WATER_1, gbaDualSlot->m_Items[2]);
    }
}

void SetSafariSlots(System::Array<MonsLv_o> *slots, XLSXContent::FieldEncountTable::Sheettable_o *fieldEnc)
{
    DPData::ENC_SV_DATA_o* encData = PlayerWork::get_Enc_SV_Data();
    int32_t zoneId = PlayerWork::get_zoneID(nullptr);
    bool zukanFlag = ZukanWork::GetZenkokuFlag(nullptr);

    int32_t safariPos = ZoneWork::SafariZonePosID(zoneId, nullptr);
    uint result = encData->fields.SafariRandSeed >> ((safariPos * 5) & 0x1fU);
    int32_t index = (result & 0x1f) | 0x20;
    if (!zukanFlag)
    {
        index = result & 0x1f;
    }

    int32_t monsno = GameManager::GetSafariMonsNo(index, nullptr);
    ReplaceSlot(slots, SLOT_SAFARI_1, monsno);
    ReplaceSlot(slots, SLOT_SAFARI_2, monsno);
}

void SetRadarSlots(System::Array<MonsLv_o> *slots, XLSXContent::FieldEncountTable::Sheettable_o *fieldEnc)
{
    socket_log_fmt("Setting Radar Slots\n");
    if (fieldEnc->fields.swayGrass->max_length > 0) ReplaceSlot(slots, SLOT_RADAR_1, fieldEnc->fields.swayGrass->m_Items[0]);
    if (fieldEnc->fields.swayGrass->max_length > 1) ReplaceSlot(slots, SLOT_RADAR_2, fieldEnc->fields.swayGrass->m_Items[1]);
    if (fieldEnc->fields.swayGrass->max_length > 2) ReplaceSlot(slots, SLOT_RADAR_3, fieldEnc->fields.swayGrass->m_Items[2]);
    if (fieldEnc->fields.swayGrass->max_length > 3) ReplaceSlot(slots, SLOT_RADAR_4, fieldEnc->fields.swayGrass->m_Items[3]);
}

int32_t GetRandomSafariMon(System::Array<MonsLv_o> *slots)
{
    if (slots->max_length > 6)
    {
        int32_t monsNo = slots->m_Items[SLOT_SAFARI_1].fields.monsNo & 0x0000FFFF;
        int32_t formNo = (slots->m_Items[SLOT_SAFARI_1].fields.monsNo & 0xFFFF0000) >> 16;
        return monsNo;
    }

    return 1;
}

Dpr::Field::EncountResult_o * ReturnEncounterSlots(bool randomWildEncounter, Dpr::Field::EncountResult_o **encounterHolder, Dpr::Field::FieldEncount::ENC_FLD_SPA_o *spa)
{
    if (!randomWildEncounter)
    {
        socket_log_fmt("Error setting encounter, returning no encounters\n");
        return nullptr;
    }

    Dpr::Field::FieldEncount_o::LastProc(encounterHolder, spa, nullptr);
    Dpr::Field::SwayGrass_o::StopSE(nullptr);

    return *encounterHolder;
}



Dpr::Field::EncountResult_o * FieldEncount_Check_EncounterSlots(FieldObjectEntity_o *entity, bool inGridmove, MethodInfo *method)
{
    socket_log_fmt("FieldEncount_Check Encounter Slot generation\n");
    system_load_typeinfo((void *)0x48c1);
    system_load_typeinfo((void *)0x6ae9);
    system_load_typeinfo((void *)0x48c9);
    system_load_typeinfo((void *)0x48c7);
    system_load_typeinfo((void *)0x48c6);

    Pml::PokeParty_o *party = PlayerWork::get_playerParty(nullptr);
    Pml::PokePara::CoreParam *firstPokemon = (Pml::PokePara::CoreParam *)party->GetMemberPointer(0, nullptr);

    if (party->fields.m_memberCount == 0)
    {
        socket_log_fmt("Empty party, returning no encounters\n");
        return nullptr;
    }

    UnityEngine_Vector2Int_o grid = entity->get_gridPosition(nullptr);

    int32_t code;
    int32_t stop;
    GameManager::GetAttribute(grid, &code, &stop, false, nullptr);
    XLSXContent::MapAttributeTable_SheetData_o *attributeTable = GameManager::GetAttributeTable(code, nullptr);

    if (!attributeTable->fields.Encount)
    {
        socket_log_fmt("Tile attribute does not give encounters, returning no encounters\n");
        return nullptr;
    }

    int32_t zoneId = PlayerWork::get_zoneID(nullptr);
    XLSXContent::FieldEncountTable::Sheettable_o *fieldEnc = GameManager::GetFieldEncountData(zoneId, nullptr);

    if (fieldEnc == nullptr)
    {
        socket_log_fmt("No encounters in zoneID, returning no encounters\n");
        return nullptr;
    }

    int32_t encounterRate;
    bool isWaterEncounter = AttributeID::MATR_IsWater(attributeTable->fields.Code, nullptr);
    if (isWaterEncounter)
    {
        encounterRate = fieldEnc->fields.encRate_wat;
    }
    else
    {
        encounterRate = fieldEnc->fields.encRate_gr;
    }

    if (encounterRate == 0)
    {
        socket_log_fmt("Encounter rate is 0, returning no encounters\n");
        return nullptr;
    }

    Dpr::Field::FieldEncount::ENC_FLD_SPA_o spaStruct; // local_e8 = 0x0, local_e0 = 0x8, etc. Total size 0x28
    Dpr::Field::FieldEncount_o::SetSpaStruct((Pml::PokePara::PokemonParam_o *)firstPokemon, fieldEnc, &spaStruct, nullptr);

    bool repelActive = EncountDataWork::EncDataSave_CanUseSpray(nullptr);
    uint32_t firstLevel;
    if (repelActive)
    {
        for (uint32_t i=0; i<party->fields.m_memberCount; i++)
        {
            Pml::PokePara::CoreParam *currentPoke = (Pml::PokePara::CoreParam *)party->GetMemberPointer(i, nullptr);
            if (!currentPoke->IsEgg(2, nullptr) && !currentPoke->IsHpZero(nullptr))
            {
                firstLevel = currentPoke->GetLevel(nullptr);
                break;
            }
        }
        firstLevel = 1;
        spaStruct.fields.SprayCheck = true; //part of local_e8
        spaStruct.fields.SpMyLv = firstLevel; //local_e0
    }

    if (!spaStruct.fields.Egg)
    {
        switch (spaStruct.fields.Spa)
        {
            // Double
            case ILLUMINATE_ABILITY:
            case ARENA_TRAP_ABILITY:
            case NO_GUARD_ABILITY:
                encounterRate = encounterRate << 1;
                break;
            // Half
            case STENCH_ABILITY:
            case WHITE_SMOKE_ABILITY:
            case QUICK_FEET_ABILITY:
            case INFILTRATOR_ABILITY:
                encounterRate = encounterRate >> 1;
                break;
            // Half if sandstorm
            case SAND_VEIL_ABILITY:
                encounterRate = encounterRate >> ((PlayerWork_c*) PlayerWork_TypeInfo)->static_fields->_FieldWeather_k__BackingField == SANDSTORM_WEATHER;
                break;
            // Half if hail
            case SNOW_CLOAK_ABILITY:
                encounterRate = encounterRate >> ((PlayerWork_c*) PlayerWork_TypeInfo)->static_fields->_FieldWeather_k__BackingField == HAIL_WEATHER;
                break;
        }

        if (encounterRate > 99)
        {
            encounterRate = 100;
        }
    }

    uint16_t item = firstPokemon->GetItem(nullptr);
    if (item == PURE_INCENSE_ITEM || item == CLEANSE_TAG_ITEM)
    {
        // 66%
        encounterRate = (encounterRate << 1) / 3;
    }

    bool rolledGrassEncounter = Dpr::Field::FieldEncount_o::MapEncountCheck(encounterRate, (attributeTable->fields).Code, inGridmove, nullptr);

    Dpr::Field::FieldEncount::SWAY_ENC_INFO_o swayInfo; // local_f0 = 0x0, Total size 0x8
    bool radarEncounter = Dpr::Field::SwayGrass_o::SwayGrass_CheckSpEncount(&swayInfo, &entity->fields.super.worldPosition, 0.48, nullptr);

    if (!rolledGrassEncounter && !radarEncounter)
    {
        return nullptr;
    }

    if (radarEncounter)
    {
        swayInfo.fields.Enc = true;
    }

    Dpr::Field::EncountResult_o *encounterHolder = (Dpr::Field::EncountResult_o *)il2cpp_object_new(Dpr::Field::EncountResult_TypeInfo);
    encounterHolder->ctor(nullptr);

    System::Array<MonsLv_o> *slots = (System::Array<MonsLv_o> *)system_array_new(MonsLv_Array_TypeInfo, 12); // local_100 = 0x0
    bool isSafariFlag = false;

    bool isPairedUp = PlayerWork::GetSytemFlag(SYS_FLAG_PAIR, nullptr);
    if (isPairedUp)
    {
        encounterHolder->fields.Type = ENCOUNTER_TYPE_DOUBLE;
        isSafariFlag = false;
    }
    else
    {
        int32_t moveZoneId = Dpr::Field::FieldEncount_o::CheckMovePokeEnc(nullptr);
        if (!swayInfo.fields.Enc && moveZoneId > -1)
        {
            socket_log_fmt("Found encounter! Let's check if repel saves you\n");
            DPData::MV_POKE_DATA_o mvPokeData; // local_120 = 0x0, local_118 = 0x8, etc. Total size 0x28 NOTE: ALIGNMENT IS WRONG IN GHIDRA
            EncountDataWork::GetMovePokeData(moveZoneId, &mvPokeData, nullptr);
            socket_log_fmt("mvPokeData EncountStatus %d\n", mvPokeData.fields.EncountStatus);
            socket_log_fmt("mvPokeData Hp %d\n", mvPokeData.fields.Hp);
            socket_log_fmt("mvPokeData Lv %d\n", mvPokeData.fields.Lv);
            socket_log_fmt("mvPokeData MonsNo %d\n", mvPokeData.fields.MonsNo);
            socket_log_fmt("mvPokeData RndSeed %d\n", mvPokeData.fields.RndSeed);
            socket_log_fmt("mvPokeData Sick %d\n", mvPokeData.fields.Sick);
            socket_log_fmt("mvPokeData ZoneIDIndex %d\n", mvPokeData.fields.ZoneIDIndex);
            if (spaStruct.fields.SprayCheck && mvPokeData.fields.Lv < spaStruct.fields.SpMyLv)
            {
                socket_log_fmt("Repel active and lead mon level higher than encounter, returning no encounters\n");
                return nullptr;
            }

            Dpr::Field::FieldEncount_o::EncountParamSet(mvPokeData.fields.MonsNo, mvPokeData.fields.Lv, 1, spaStruct, (Pml::PokePara::PokemonParam_o*)firstPokemon, &encounterHolder, nullptr);
            Dpr::Field::FieldEncount_o::LastProc(&encounterHolder, &spaStruct, nullptr);
            encounterHolder->fields.MP_SaveIndex = moveZoneId;
            encounterHolder->fields.Type = ENCOUNTER_TYPE_MOVEPOKE;
            return encounterHolder;
        }

        if (PlayerWork::GetSytemFlag(SYS_FLAG_SAFARI_MODE, nullptr))
        {
            encounterHolder->fields.Type = ENCOUNTER_TYPE_SAFARI;
            socket_log_fmt("Safari encounter\n");
            isSafariFlag = true;
        }
        else
        {
            encounterHolder->fields.Type = ENCOUNTER_TYPE_SINGLE;
            socket_log_fmt("Single encounter\n");
            isSafariFlag = false;
        }
    }

    if (isWaterEncounter)
    {
        XLSXContent::MapInfo_o *mapInfo = GameManager::get_mapInfo(nullptr);
        XLSXContent::MapInfo_SheetZoneData_o *zoneData = mapInfo->get_Item(zoneId, nullptr);
        if (zoneData->fields.BattleBg->max_length >= 2)
        {
            encounterHolder->fields.BattleBG = zoneData->fields.BattleBg->m_Items[1];
        }

        for (uint32_t i=0; i<slots->max_length && i<fieldEnc->fields.water_mons->max_length; i++)
        {
            slots->m_Items[i] = fieldEnc->fields.water_mons->m_Items[i];
        }

        SetWaterGBASlots(slots, fieldEnc);

        LogSlots(slots);
        bool randomWildEncounter = Dpr::Field::FieldEncount_o::SetEncountData((Pml::PokePara::PokemonParam_o*)firstPokemon, 0, spaStruct, slots, 1, 1, &encounterHolder, nullptr);
        return ReturnEncounterSlots(randomWildEncounter, &encounterHolder, &spaStruct);
    }

    XLSXContent::MapInfo_o *mapInfo = GameManager::get_mapInfo(nullptr);
    XLSXContent::MapInfo_SheetZoneData_o *zoneData = mapInfo->get_Item(zoneId, nullptr);
    if (zoneData->fields.BattleBg->max_length >= 1)
    {
        encounterHolder->fields.BattleBG = zoneData->fields.BattleBg->m_Items[0];
    }

    if (slots->max_length > 0)
    {
        for (uint32_t i=0; i<slots->max_length && i<fieldEnc->fields.ground_mons->max_length; i++)
        {
            slots->m_Items[i] = fieldEnc->fields.ground_mons->m_Items[i];
        }
    }

    SetTimeOfDaySlots(slots, fieldEnc);
    
    bool isSwarm = EncountDataWork::IsTairyouHassei(nullptr);
    if (isSwarm)
    {
        SetSwarmSlots(slots, fieldEnc);
    }

    bool isTrophyGardenZoneId = ZoneWork::IsHillBackZone(zoneId, nullptr);
    bool zukanFlag = ZukanWork::GetZenkokuFlag(nullptr);
    if (isTrophyGardenZoneId && zukanFlag)
    {
        SetTrophyGardenSlots(slots, fieldEnc);
    }

    SetGBASlots(slots, fieldEnc);

    if (isPairedUp)
    {
        int32_t partner = PlayerWork::GetInt(SYS_WORK_PAIR_TRAINER_ID, nullptr);
        encounterHolder->fields.Partner = partner;

        bool randomWildEncounter = Dpr::Field::FieldEncount_o::SetEncountData((Pml::PokePara::PokemonParam_o*)firstPokemon, 0, spaStruct, slots, 0, 1, &encounterHolder, nullptr);
        if (!randomWildEncounter)
        {
            socket_log_fmt("Error setting encounter, returning no encounters\n");
            return nullptr;
        }
        randomWildEncounter = Dpr::Field::FieldEncount_o::SetEncountData((Pml::PokePara::PokemonParam_o*)firstPokemon, 0, spaStruct, slots, 0, 3, &encounterHolder, nullptr);
        return ReturnEncounterSlots(randomWildEncounter, &encounterHolder, &spaStruct);
    }
    else
    {
        if (isSafariFlag)
        {
            SetSafariSlots(slots, fieldEnc);
        }

        if (swayInfo.fields.Enc)
        {
            SetRadarSlots(slots, fieldEnc);
        }
        
        LogSlots(slots);
        bool randomWildEncounter = Dpr::Field::FieldEncount_o::WildEncSingle((Pml::PokePara::PokemonParam_o*)firstPokemon, &encounterHolder, fieldEnc, slots, spaStruct, swayInfo, nullptr);
        return ReturnEncounterSlots(randomWildEncounter, &encounterHolder, &spaStruct);
    }
}

int32_t GetSafariScopeMonster_EncounterSlots(int32_t zoneId, MethodInfo *method)
{
    socket_log_fmt("GetSafariScopeMonster Encounter Slot generation\n");
    system_load_typeinfo((void *)0x48c3);

    System::Array<MonsLv_o> *slots = (System::Array<MonsLv_o> *)system_array_new(MonsLv_Array_TypeInfo, 12);
    XLSXContent::FieldEncountTable::Sheettable_o *fieldEnc = GameManager::GetFieldEncountData(zoneId, nullptr);

    if (slots->max_length > 0)
    {
        for (uint32_t i=0; i<slots->max_length && i<fieldEnc->fields.ground_mons->max_length; i++)
        {
            slots->m_Items[i] = fieldEnc->fields.ground_mons->m_Items[i];
        }
    }

    SetTimeOfDaySlots(slots, fieldEnc);
    SetGBASlots(slots, fieldEnc);
    SetSafariSlots(slots, fieldEnc);

    return GetRandomSafariMon(slots);
}

Dpr::Field::EncountResult_o * SetFishingEncount_EncounterSlots(int32_t inRodType, UnityEngine_Vector2Int_o position, MethodInfo *method)
{
    socket_log_fmt("SetFishingEncount Encounter Slot generation\n");
    system_load_typeinfo((void *)0x48c8);
    system_load_typeinfo((void *)0x6ae9);

    int32_t zoneId = PlayerWork::get_zoneID(nullptr);
    XLSXContent::FieldEncountTable::Sheettable_o *fieldEnc = GameManager::GetFieldEncountData(zoneId, nullptr);

    if (fieldEnc == nullptr)
    {
        socket_log_fmt("No encounters in zoneID, returning no encounters\n");
        return nullptr;
    }

    int32_t encounterRate;
    switch (inRodType)
    {
        case 1:
            encounterRate = fieldEnc->fields.encRate_turi_boro;
            break;
        case 2:
            encounterRate = fieldEnc->fields.encRate_turi_ii;
            break;
        case 3:
            encounterRate = fieldEnc->fields.encRate_sugoi;
            break;
        default:
            socket_log_fmt("Not a valid fishing rod, returning no encounters\n");
            return nullptr;
    }

    if (encounterRate == 0)
    {
        socket_log_fmt("Encounter rate is 0, returning no encounters\n");
        return nullptr;
    }

    Pml::PokeParty_o *party = PlayerWork::get_playerParty(nullptr);
    Pml::PokePara::CoreParam *firstPokemon = (Pml::PokePara::CoreParam *)party->GetMemberPointer(0, nullptr);

    Dpr::Field::FieldEncount::ENC_FLD_SPA_o spaStruct; // local_b0 = 0x0, local_a8 = 0x8, etc. Total size 0x28
    Dpr::Field::FieldEncount_o::SetSpaStruct((Pml::PokePara::PokemonParam_o *)firstPokemon, fieldEnc, &spaStruct, nullptr);

    if (!spaStruct.fields.Egg)
    {
        switch (spaStruct.fields.Spa)
        {
            // Double
            case ILLUMINATE_ABILITY:
            case ARENA_TRAP_ABILITY:
            case NO_GUARD_ABILITY:
                encounterRate = encounterRate << 1;
                break;
            // Half
            case STENCH_ABILITY:
            case WHITE_SMOKE_ABILITY:
            case QUICK_FEET_ABILITY:
            case INFILTRATOR_ABILITY:
                encounterRate = encounterRate >> 1;
                break;
            // Half if sandstorm
            case SAND_VEIL_ABILITY:
                encounterRate = encounterRate >> ((PlayerWork_c*) PlayerWork_TypeInfo)->static_fields->_FieldWeather_k__BackingField == SANDSTORM_WEATHER;
                break;
            // Half if hail
            case SNOW_CLOAK_ABILITY:
                encounterRate = encounterRate >> ((PlayerWork_c*) PlayerWork_TypeInfo)->static_fields->_FieldWeather_k__BackingField == HAIL_WEATHER;
                break;
        }

        if (encounterRate > 99)
        {
            encounterRate = 100;
        }
    }

    int32_t encounterRoll = RandomGroupWork::RandomValue(100, nullptr);
    if (encounterRate <= encounterRoll)
    {
        socket_log_fmt("Did not roll an encounter, returning no encounters\n");
        return nullptr;
    }

    return nullptr;
}
