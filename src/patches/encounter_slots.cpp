#include "il2cpp.hpp"
#include "il2cpp-api.h"

#include "AttributeID.hpp"
#include "DpData.hpp"
#include "Dpr/Field/EncountResult.hpp"
#include "Dpr/Field/FieldEncount.hpp"
#include "Dpr/Field/FieldEncount/ENC_FLD_SPA.hpp"
#include "Dpr/Field/SpFishing.hpp"
#include "Dpr/Field/SwayGrass.hpp"
#include "EncountDataWork.hpp"
#include "EntityManager.hpp"
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
const int32_t SLOT_SWARM_1 = 0;
const int32_t SLOT_RADAR_1 = 1;
const int32_t SLOT_TIME_OF_DAY_1 = 2;
const int32_t SLOT_TIME_OF_DAY_2 = 3;
const int32_t SLOT_DUALSLOT_1 = 4;
const int32_t SLOT_DUALSLOT_2 = 5;
const int32_t SLOT_SAFARI_1 = 6;
const int32_t SLOT_SAFARI_2 = 7;
const int32_t SLOT_TROPHY_GARDEN_1 = 6;
const int32_t SLOT_TROPHY_GARDEN_2 = 7;

const int32_t SLOT_DUALSLOT_WATER_1 = 1;

const int32_t SLOT_RADAR_BUMP_1 = 9;
const int32_t SLOT_DUALSLOT_BUMP_1 = 10;
const int32_t SLOT_DUALSLOT_BUMP_2 = 11;


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
const int32_t SUCTION_CUPS_ABILITY = 21;
const int32_t STICKY_HOLD_ABILITY = 60;

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

const int32_t FEEBAS_MONSNO = 349;


// Logs the given encounter slots.
void LogSlots(System::Array<MonsLv_o> *slots)
{
    socket_log_fmt("SLOTS DUMP\n");
    for (int i=0; i<slots->max_length; i++)
    {
        socket_log_fmt("Slot %d: MonsNo %d, Level %d-%d\n", i+1, slots->m_Items[i].fields.monsNo, slots->m_Items[i].fields.minlv, slots->m_Items[i].fields.maxlv);
    }
}

// Replaces a slot in the slot list.
void ReplaceSlot(System::Array<MonsLv_o> *slots, int32_t slot, int32_t monsNo, int32_t minLv, int32_t maxLv)
{
    if (slots->max_length > slot)
    {
        slots->m_Items[slot].fields.monsNo = monsNo;
        slots->m_Items[slot].fields.minlv = minLv;
        slots->m_Items[slot].fields.maxlv = maxLv;
    }
}

// Replaces a slot in the slot list.
void ReplaceSlot(System::Array<MonsLv_o> *slots, int32_t slot, int32_t monsNo)
{
    if (slots->max_length > slot)
    {
        slots->m_Items[slot].fields.monsNo = monsNo;
    }
}

// Replaces a slot in the slot list.
void ReplaceSlot(System::Array<MonsLv_o> *slots, int32_t slot, MonsLv_o newSlot)
{
    ReplaceSlot(slots, slot, newSlot.fields.monsNo, newSlot.fields.minlv, newSlot.fields.maxlv);
}

// Gets the encounter list for the zone ID the player is currently in.
XLSXContent::FieldEncountTable::Sheettable_o * GetFieldEncountersOfCurrentZoneID()
{
    int32_t zoneId = PlayerWork::get_zoneID(nullptr);
    return GameManager::GetFieldEncountData(zoneId, nullptr);
}

// Initializes the slot list to contain all the base ground encounters.
void SetBaseGroundSlots(Dpr::Field::EncountResult_o **encounterHolder, System::Array<MonsLv_o> *slots)
{
    int32_t zoneId = PlayerWork::get_zoneID(nullptr);
    XLSXContent::FieldEncountTable::Sheettable_o * fieldEnc = GetFieldEncountersOfCurrentZoneID();

    XLSXContent::MapInfo_o *mapInfo = GameManager::get_mapInfo(nullptr);
    XLSXContent::MapInfo_SheetZoneData_o *zoneData = mapInfo->get_Item(zoneId, nullptr);
    if (zoneData->fields.BattleBg->max_length >= 1)
    {
        (*encounterHolder)->fields.BattleBG = zoneData->fields.BattleBg->m_Items[0];
    }

    if (slots->max_length > 0)
    {
        for (uint32_t i=0; i<slots->max_length && i<fieldEnc->fields.ground_mons->max_length; i++)
        {
            slots->m_Items[i] = fieldEnc->fields.ground_mons->m_Items[i];
        }
    }
}

// Initializes the slot list to contain all the base fishing encounters, based on the rod type.
void SetBaseFishingSlots(Dpr::Field::EncountResult_o **encounterHolder, System::Array<MonsLv_o> *slots, int32_t inRodType)
{
    int32_t zoneId = PlayerWork::get_zoneID(nullptr);
    XLSXContent::FieldEncountTable::Sheettable_o * fieldEnc = GetFieldEncountersOfCurrentZoneID();

    XLSXContent::MapInfo_o *mapInfo = GameManager::get_mapInfo(nullptr);
    XLSXContent::MapInfo_SheetZoneData_o *zoneData = mapInfo->get_Item(zoneId, nullptr);
    if (zoneData->fields.BattleBg->max_length >= 2)
    {
        (*encounterHolder)->fields.BattleBG = zoneData->fields.BattleBg->m_Items[1];
    }

    switch (inRodType)
    {
        case 1:
            for (uint32_t i=0; i<slots->max_length && i<fieldEnc->fields.boro_mons->max_length; i++)
            {
                slots->m_Items[i] = fieldEnc->fields.boro_mons->m_Items[i];
            }
            break;
        case 2:
            for (uint32_t i=0; i<slots->max_length && i<fieldEnc->fields.ii_mons->max_length; i++)
            {
                slots->m_Items[i] = fieldEnc->fields.ii_mons->m_Items[i];
            }
            break;
        case 3:
            for (uint32_t i=0; i<slots->max_length && i<fieldEnc->fields.sugoi_mons->max_length; i++)
            {
                slots->m_Items[i] = fieldEnc->fields.sugoi_mons->m_Items[i];
            }
            break;
    }
}

// Sets the time of day slots.
void SetTimeOfDaySlots(System::Array<MonsLv_o> *slots)
{
    XLSXContent::FieldEncountTable::Sheettable_o * fieldEnc = GetFieldEncountersOfCurrentZoneID();

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

// Sets the swarm slots.
void SetSwarmSlots(System::Array<MonsLv_o> *slots)
{
    XLSXContent::FieldEncountTable::Sheettable_o * fieldEnc = GetFieldEncountersOfCurrentZoneID();

    int32_t zoneId = PlayerWork::get_zoneID(nullptr);
    int32_t swarmZoneId = ZoneWork::TairyouHassei_ZoneID(nullptr);
    if (swarmZoneId == zoneId)
    {
        if (fieldEnc->fields.tairyo->max_length > 0) ReplaceSlot(slots, SLOT_SWARM_1, fieldEnc->fields.tairyo->m_Items[0]);
    }
}

// Sets the Trophy Garden slots.
void SetTrophyGardenSlots(System::Array<MonsLv_o> *slots)
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

// Sets the dual-slot slots.
void SetGBASlots(System::Array<MonsLv_o> *slots)
{
    XLSXContent::FieldEncountTable::Sheettable_o * fieldEnc = GetFieldEncountersOfCurrentZoneID();

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
        if (slots->max_length > SLOT_DUALSLOT_1) ReplaceSlot(slots, SLOT_DUALSLOT_BUMP_1, slots->m_Items[SLOT_DUALSLOT_1]);
        if (slots->max_length > SLOT_DUALSLOT_2) ReplaceSlot(slots, SLOT_DUALSLOT_BUMP_2, slots->m_Items[SLOT_DUALSLOT_2]);
        if (gbaDualSlot->max_length > 0) ReplaceSlot(slots, SLOT_DUALSLOT_1, gbaDualSlot->m_Items[0]);
        if (gbaDualSlot->max_length > 1) ReplaceSlot(slots, SLOT_DUALSLOT_2, gbaDualSlot->m_Items[1]);
    }
}

// Sets the water dual-slot slots.
void SetWaterGBASlots(System::Array<MonsLv_o> *slots)
{
    XLSXContent::FieldEncountTable::Sheettable_o * fieldEnc = GetFieldEncountersOfCurrentZoneID();

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

// Sets the safari slots.
void SetSafariSlots(System::Array<MonsLv_o> *slots)
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

// Sets the radar slots.
void SetRadarSlots(System::Array<MonsLv_o> *slots)
{
    XLSXContent::FieldEncountTable::Sheettable_o * fieldEnc = GetFieldEncountersOfCurrentZoneID();

    if (slots->max_length > SLOT_RADAR_1) ReplaceSlot(slots, SLOT_RADAR_BUMP_1, slots->m_Items[SLOT_RADAR_1]);
    if (fieldEnc->fields.swayGrass->max_length > 3) ReplaceSlot(slots, SLOT_RADAR_1, fieldEnc->fields.swayGrass->m_Items[3]);
}

// Gets the Pokémon in the first Safari slot.
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

// Calls a few methods and finalizes the encounter.
Dpr::Field::EncountResult_o * ReturnEncounterSlots(bool randomWildEncounter, Dpr::Field::EncountResult_o **encounterHolder, Dpr::Field::FieldEncount::ENC_FLD_SPA_o *spa, System::Array<MonsLv_o> *slots, bool stopRadarSE, bool resetWalkEncountCount)
{
    LogSlots(slots);
    if (!randomWildEncounter)
    {
        return nullptr;
    }

    Dpr::Field::FieldEncount_o::LastProc(encounterHolder, spa, nullptr);
    if (stopRadarSE) Dpr::Field::SwayGrass_o::StopSE(nullptr);
    if (resetWalkEncountCount) PlayerWork::set_WalkEncountCount(0, nullptr);

    return *encounterHolder;
}

// Checks if the player's party is empty.
bool IsPartyEmpty()
{
    Pml::PokeParty_o *party = PlayerWork::get_playerParty(nullptr);

    if (party->fields.m_memberCount == 0)
    {
        return true;
    }

    return false;
}

// Returns the attributes of the given tile.
XLSXContent::MapAttributeTable_SheetData_o * GetAttributeOfTile(UnityEngine_Vector2Int_o tile)
{
    int32_t code;
    int32_t stop;
    GameManager::GetAttribute(tile, &code, &stop, false, nullptr);
    return GameManager::GetAttributeTable(code, nullptr);
}

// Checks if the given tile can give an encounter.
bool DoesTileGiveEncounters(UnityEngine_Vector2Int_o tile)
{
    XLSXContent::MapAttributeTable_SheetData_o * attribute = GetAttributeOfTile(tile);

    if (!attribute->fields.Encount)
    {
        return false;
    }

    return true;
}

// Checks if the zone the player is currently in has any encounters.
bool DoesCurrentZoneIDHaveEncounters()
{
    XLSXContent::FieldEncountTable::Sheettable_o * fieldEnc = GetFieldEncountersOfCurrentZoneID();

    if (fieldEnc == nullptr)
    {
        return false;
    }

    return true;
}

// Checks if the given tile is a water tile.
bool IsTileAWaterTile(UnityEngine_Vector2Int_o tile)
{
    XLSXContent::MapAttributeTable_SheetData_o * attribute = GetAttributeOfTile(tile);
    return AttributeID::MATR_IsWater(attribute->fields.Code, nullptr);
}

// Returns the base encounter rate for the given tile in the zone the player is currently in.
int32_t GetBaseEncounterRate(UnityEngine_Vector2Int_o tile)
{
    XLSXContent::FieldEncountTable::Sheettable_o * fieldEnc = GetFieldEncountersOfCurrentZoneID();

    if (IsTileAWaterTile(tile))
    {
        return fieldEnc->fields.encRate_wat;
    }
    else
    {
        return fieldEnc->fields.encRate_gr;
    }
}

// Returns the base fishing encounter rate for the given rod in the zone the player is currently in.
int32_t GetBaseFishingEncounterRate(int32_t inRodType)
{
    XLSXContent::FieldEncountTable::Sheettable_o * fieldEnc = GetFieldEncountersOfCurrentZoneID();

    switch (inRodType)
    {
        case 1:
            return fieldEnc->fields.encRate_turi_boro;
            break;
        case 2:
            return fieldEnc->fields.encRate_turi_ii;
            break;
        case 3:
            return fieldEnc->fields.encRate_sugoi;
            break;
    }
    return 0;
}

// Sets values relating to repels in the SPA struct.
void CheckRepel(Dpr::Field::FieldEncount::ENC_FLD_SPA_o *spaStruct)
{
    Pml::PokeParty_o *party = PlayerWork::get_playerParty(nullptr);
    bool repelActive = EncountDataWork::EncDataSave_CanUseSpray(nullptr);
    uint32_t firstLevel;
    if (repelActive)
    {
        firstLevel = 1;
        for (uint32_t i=0; i<party->fields.m_memberCount; i++)
        {
            Pml::PokePara::CoreParam *currentPoke = (Pml::PokePara::CoreParam *)party->GetMemberPointer(i, nullptr);
            if (!currentPoke->IsEgg(2, nullptr) && !currentPoke->IsHpZero(nullptr))
            {
                firstLevel = currentPoke->GetLevel(nullptr);
                break;
            }
        }
        spaStruct->fields.SprayCheck = true; //part of local_e8
        spaStruct->fields.SpMyLv = firstLevel; //local_e0
    }
}

// Applies ability effects to the encounter rate.
int32_t ApplyAbilityToEncounterRate(Dpr::Field::FieldEncount::ENC_FLD_SPA_o *spaStruct, int32_t baseEncounterRate)
{
    int32_t encounterRate = baseEncounterRate;
    if (!spaStruct->fields.Egg)
    {
        switch (spaStruct->fields.Spa)
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

    return encounterRate;
}

// Applies fishing ability effects to the encounter rate.
int32_t ApplyFishingAbilityToEncounterRate(Dpr::Field::FieldEncount::ENC_FLD_SPA_o *spaStruct, int32_t baseEncounterRate)
{
    int32_t encounterRate = baseEncounterRate;
    if (!spaStruct->fields.Egg)
    {
        switch (spaStruct->fields.Spa)
        {
            // Double
            case STICKY_HOLD_ABILITY:
            case SUCTION_CUPS_ABILITY:
                encounterRate = encounterRate << 1;
                break;
        }

        if (encounterRate > 99)
        {
            encounterRate = 100;
        }
    }

    return encounterRate;
}

// Applies held item effects to the encounter rate.
int32_t ApplyLeadItemToEncounterRate(int32_t baseEncounterRate)
{
    Pml::PokeParty_o *party = PlayerWork::get_playerParty(nullptr);
    Pml::PokePara::CoreParam *firstPokemon = (Pml::PokePara::CoreParam *)party->GetMemberPointer(0, nullptr);

    int32_t encounterRate = baseEncounterRate;
    uint16_t item = firstPokemon->GetItem(nullptr);
    if (item == PURE_INCENSE_ITEM || item == CLEANSE_TAG_ITEM)
    {
        // 66%
        encounterRate = (encounterRate << 1) / 3;
    }

    return encounterRate;
}

// Determines the encounter type and sets it in the encounter result.
void SetEncounterType(Dpr::Field::EncountResult_o **encounterHolder, Dpr::Field::FieldEncount::ENC_FLD_SPA_o *spaStruct, Dpr::Field::FieldEncount::SWAY_ENC_INFO_o *swayInfo, bool *isSafariFlag)
{
    if (PlayerWork::GetSytemFlag(SYS_FLAG_PAIR, nullptr))
    {
        (*encounterHolder)->fields.Type = ENCOUNTER_TYPE_DOUBLE;
        *isSafariFlag = false;
    }
    else
    {
        int32_t moveZoneId = Dpr::Field::FieldEncount_o::CheckMovePokeEnc(nullptr);
        if ((swayInfo == nullptr || !swayInfo->fields.Enc) && moveZoneId > -1)
        {
            (*encounterHolder)->fields.MP_SaveIndex = moveZoneId;
            (*encounterHolder)->fields.Type = ENCOUNTER_TYPE_MOVEPOKE;
        }
        else if (PlayerWork::GetSytemFlag(SYS_FLAG_SAFARI_MODE, nullptr))
        {
            (*encounterHolder)->fields.Type = ENCOUNTER_TYPE_SAFARI;
            *isSafariFlag = true;
        }
        else
        {
            (*encounterHolder)->fields.Type = ENCOUNTER_TYPE_SINGLE;
            *isSafariFlag = false;
        }
    }
}

// Performs repel checks and triggers an encounter with the romaing Pokémon in the current route if it fails.
Dpr::Field::EncountResult_o * ReturnRoamingPokemonEncounter(Dpr::Field::EncountResult_o **encounterHolder, Dpr::Field::FieldEncount::ENC_FLD_SPA_o *spaStruct)
{
    Pml::PokeParty_o *party = PlayerWork::get_playerParty(nullptr);
    Pml::PokePara::CoreParam *firstPokemon = (Pml::PokePara::CoreParam *)party->GetMemberPointer(0, nullptr);

    int32_t moveZoneId = Dpr::Field::FieldEncount_o::CheckMovePokeEnc(nullptr);
    DPData::MV_POKE_DATA_o mvPokeData; // local_120 = 0x0, local_118 = 0x8, etc. Total size 0x28 NOTE: ALIGNMENT IS WRONG IN GHIDRA
    EncountDataWork::GetMovePokeData(moveZoneId, &mvPokeData, nullptr);
    if (spaStruct->fields.SprayCheck && mvPokeData.fields.Lv < spaStruct->fields.SpMyLv)
    {
        return nullptr;
    }

    Dpr::Field::FieldEncount_o::EncountParamSet(mvPokeData.fields.MonsNo, mvPokeData.fields.Lv, 1, *spaStruct, (Pml::PokePara::PokemonParam_o*)firstPokemon, encounterHolder, nullptr);
    Dpr::Field::FieldEncount_o::LastProc(encounterHolder, spaStruct, nullptr);
    return *encounterHolder;
}

// Prepares the water encounter slots and triggers a water encounter.
Dpr::Field::EncountResult_o * ReturnWaterEncounter(Dpr::Field::EncountResult_o **encounterHolder, Dpr::Field::FieldEncount::ENC_FLD_SPA_o *spaStruct, System::Array<MonsLv_o> *slots, bool resetWalkEncountCount)
{
    Pml::PokeParty_o *party = PlayerWork::get_playerParty(nullptr);
    Pml::PokePara::CoreParam *firstPokemon = (Pml::PokePara::CoreParam *)party->GetMemberPointer(0, nullptr);

    XLSXContent::FieldEncountTable::Sheettable_o * fieldEnc = GetFieldEncountersOfCurrentZoneID();

    int32_t zoneId = PlayerWork::get_zoneID(nullptr);
    XLSXContent::MapInfo_o *mapInfo = GameManager::get_mapInfo(nullptr);
    XLSXContent::MapInfo_SheetZoneData_o *zoneData = mapInfo->get_Item(zoneId, nullptr);
    if (zoneData->fields.BattleBg->max_length >= 2)
    {
        (*encounterHolder)->fields.BattleBG = zoneData->fields.BattleBg->m_Items[1];
    }

    for (uint32_t i=0; i<slots->max_length && i<fieldEnc->fields.water_mons->max_length; i++)
    {
        slots->m_Items[i] = fieldEnc->fields.water_mons->m_Items[i];
    }

    SetWaterGBASlots(slots);

    bool randomWildEncounter = Dpr::Field::FieldEncount_o::SetEncountData((Pml::PokePara::PokemonParam_o*)firstPokemon, 0, *spaStruct, slots, 1, 1, encounterHolder, nullptr);
    return ReturnEncounterSlots(randomWildEncounter, encounterHolder, spaStruct, slots, false, resetWalkEncountCount);
}

// Replaces all the fishing slots with Feebas if fishing on a Feebas tile.
void CheckFeebasTiles(System::Array<MonsLv_o> *slots, UnityEngine_Vector2Int_o tile)
{
    int32_t zoneId = PlayerWork::get_zoneID(nullptr);
    bool isFeebasZone = ZoneWork::IsSpFishingZone(zoneId, nullptr);
    if (isFeebasZone)
    {
        bool isFeebasTile = Dpr::Field::SpFishing::CheckPoint(&tile, nullptr);
        if (isFeebasTile)
        {
            for (uint32_t i=0; i<slots->max_length; i++)
            {
                slots->m_Items[i].fields.monsNo = FEEBAS_MONSNO;
            }
        }
    }
}

///////////////////////////////////////////////////////////

// REGULAR ENCOUNTER GENERATION
Dpr::Field::EncountResult_o * FieldEncount_Check_EncounterSlots(FieldObjectEntity_o *entity, bool inGridmove, MethodInfo *method)
{
    system_load_typeinfo((void *)0x48c1);
    system_load_typeinfo((void *)0x6ae9);
    system_load_typeinfo((void *)0x48c9);
    system_load_typeinfo((void *)0x48c7);
    system_load_typeinfo((void *)0x48c6);

    // No encounters if party is empty
    if (IsPartyEmpty())
    {
        return nullptr;
    }

    // No encounters if current tile does not give encounters
    if (!DoesTileGiveEncounters(entity->get_gridPosition(nullptr)))
    {
        return nullptr;
    }

    // No encounters if current zone does not have encounters
    if (!DoesCurrentZoneIDHaveEncounters())
    {
        return nullptr;
    }

    // Get base encounter rate (ground or water)
    // No encounters if encounter rate is 0
    int32_t encounterRate = GetBaseEncounterRate(entity->get_gridPosition(nullptr));
    if (encounterRate == 0)
    {
        return nullptr;
    }

    XLSXContent::FieldEncountTable::Sheettable_o * fieldEnc = GetFieldEncountersOfCurrentZoneID();
    Pml::PokeParty_o *party = PlayerWork::get_playerParty(nullptr);
    Pml::PokePara::CoreParam *firstPokemon = (Pml::PokePara::CoreParam *)party->GetMemberPointer(0, nullptr);
    Dpr::Field::FieldEncount::ENC_FLD_SPA_o spaStruct; // local_e8 = 0x0, local_e0 = 0x8, etc. Total size 0x28
    Dpr::Field::FieldEncount_o::SetSpaStruct((Pml::PokePara::PokemonParam_o *)firstPokemon, fieldEnc, &spaStruct, nullptr);

    // Sets repel-related values in spaStruct
    CheckRepel(&spaStruct);

    // Applies ability and item effects to the encounter rate
    encounterRate = ApplyAbilityToEncounterRate(&spaStruct, encounterRate);
    encounterRate = ApplyLeadItemToEncounterRate(encounterRate);

    // Roll for a grass encounter / Check if radar patch entered
    XLSXContent::MapAttributeTable_SheetData_o * attribute = GetAttributeOfTile(entity->get_gridPosition(nullptr));
    bool rolledGrassEncounter = Dpr::Field::FieldEncount_o::MapEncountCheck(encounterRate, (attribute->fields).Code, inGridmove, nullptr);
    Dpr::Field::FieldEncount::SWAY_ENC_INFO_o swayInfo; // local_f0 = 0x0, Total size 0x8
    bool radarEncounter = Dpr::Field::SwayGrass_o::SwayGrass_CheckSpEncount(&swayInfo, &entity->fields.super.worldPosition, 0.48, nullptr);
    if (!radarEncounter)
    {
        if (!rolledGrassEncounter)
        {
            return nullptr;
        }
    }
    else
    {
        swayInfo.fields.Enc = true;
    }

    Dpr::Field::EncountResult_o *encounterHolder = (Dpr::Field::EncountResult_o *)il2cpp_object_new(Dpr::Field::EncountResult_TypeInfo);
    encounterHolder->ctor(nullptr);
    System::Array<MonsLv_o> *slots = (System::Array<MonsLv_o> *)system_array_new(MonsLv_Array_TypeInfo, 12); // local_100 = 0x0
    bool isSafariFlag = false;

    // Handle Roaming and water encounters
    SetEncounterType(&encounterHolder, &spaStruct, &swayInfo, &isSafariFlag);
    if (encounterHolder->fields.Type == ENCOUNTER_TYPE_MOVEPOKE)
    {
        return ReturnRoamingPokemonEncounter(&encounterHolder, &spaStruct);
    }
    if (IsTileAWaterTile(entity->get_gridPosition(nullptr)))
    {
        return ReturnWaterEncounter(&encounterHolder, &spaStruct, slots, false);
    }

    // Set slots
    SetBaseGroundSlots(&encounterHolder, slots);
    SetTimeOfDaySlots(slots);
    bool isSwarm = EncountDataWork::IsTairyouHassei(nullptr);
    if (isSwarm)
    {
        SetSwarmSlots(slots);
    }
    int32_t zoneId = PlayerWork::get_zoneID(nullptr);
    bool isTrophyGardenZoneId = ZoneWork::IsHillBackZone(zoneId, nullptr);
    bool zukanFlag = ZukanWork::GetZenkokuFlag(nullptr);
    if (isTrophyGardenZoneId && zukanFlag)
    {
        SetTrophyGardenSlots(slots);
    }
    SetGBASlots(slots);

    if (PlayerWork::GetSytemFlag(SYS_FLAG_PAIR, nullptr))
    {
        // Handle double wild encounter with partner
        int32_t partner = PlayerWork::GetInt(SYS_WORK_PAIR_TRAINER_ID, nullptr);
        encounterHolder->fields.Partner = partner;

        bool randomWildEncounter = Dpr::Field::FieldEncount_o::SetEncountData((Pml::PokePara::PokemonParam_o*)firstPokemon, 0, spaStruct, slots, 0, 1, &encounterHolder, nullptr);
        if (!randomWildEncounter)
        {
            return nullptr;
        }

        randomWildEncounter = Dpr::Field::FieldEncount_o::SetEncountData((Pml::PokePara::PokemonParam_o*)firstPokemon, 0, spaStruct, slots, 0, 3, &encounterHolder, nullptr);
        return ReturnEncounterSlots(randomWildEncounter, &encounterHolder, &spaStruct, slots, true, false);
    }
    else
    {
        // Handle single wild encounter

        // Set single wild specific slots
        if (isSafariFlag)
        {
            SetSafariSlots(slots);
        }
        if (swayInfo.fields.Enc)
        {
            SetRadarSlots(slots);
        }
        
        bool randomWildEncounter = Dpr::Field::FieldEncount_o::WildEncSingle((Pml::PokePara::PokemonParam_o*)firstPokemon, &encounterHolder, fieldEnc, slots, spaStruct, swayInfo, nullptr);
        return ReturnEncounterSlots(randomWildEncounter, &encounterHolder, &spaStruct, slots, true, false);
    }
}

// SAFARI BINOCULARS ENCOUNTER GENERATION
int32_t GetSafariScopeMonster_EncounterSlots(int32_t zoneId, MethodInfo *method)
{
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

    SetTimeOfDaySlots(slots);
    SetGBASlots(slots);
    SetSafariSlots(slots);

    return GetRandomSafariMon(slots);
}

// FISHING ENCOUNTER GENERATION
Dpr::Field::EncountResult_o * SetFishingEncount_EncounterSlots(int32_t inRodType, UnityEngine_Vector2Int_o position, MethodInfo *method)
{
    system_load_typeinfo((void *)0x48c8);
    system_load_typeinfo((void *)0x6ae9);

    // No encounters if current zone does not have encounters
    if (!DoesCurrentZoneIDHaveEncounters())
    {
        return nullptr;
    }

    // Get base encounter rate (fishing rod)
    // No encounters if encounter rate is 0
    int32_t encounterRate = GetBaseFishingEncounterRate(inRodType);
    if (encounterRate == 0)
    {
        return nullptr;
    }

    XLSXContent::FieldEncountTable::Sheettable_o * fieldEnc = GetFieldEncountersOfCurrentZoneID();
    Pml::PokeParty_o *party = PlayerWork::get_playerParty(nullptr);
    Pml::PokePara::CoreParam *firstPokemon = (Pml::PokePara::CoreParam *)party->GetMemberPointer(0, nullptr);
    Dpr::Field::FieldEncount::ENC_FLD_SPA_o spaStruct; // local_b0 = 0x0, local_a8 = 0x8, etc. Total size 0x28
    Dpr::Field::FieldEncount_o::SetSpaStruct((Pml::PokePara::PokemonParam_o *)firstPokemon, fieldEnc, &spaStruct, nullptr);

    // Applies ability effects to the encounter rate
    encounterRate = ApplyAbilityToEncounterRate(&spaStruct, encounterRate);
    encounterRate = ApplyFishingAbilityToEncounterRate(&spaStruct, encounterRate);

    // Roll if we get a hooked Pokémon
    int32_t encounterRoll = RandomGroupWork::RandomValue(100, nullptr);
    if (encounterRate <= encounterRoll)
    {
        return nullptr;
    }

    Dpr::Field::EncountResult_o *encounterHolder = (Dpr::Field::EncountResult_o *)il2cpp_object_new(Dpr::Field::EncountResult_TypeInfo);
    encounterHolder->ctor(nullptr);
    System::Array<MonsLv_o> *slots = (System::Array<MonsLv_o> *)system_array_new(MonsLv_Array_TypeInfo, 5);

    // Set slots
    SetBaseFishingSlots(&encounterHolder, slots, inRodType);

    // Replace all slots with Feebas if fishing in a feebas tile
    CheckFeebasTiles(slots, position);

    // Set encounter type
    if (PlayerWork::GetSytemFlag(SYS_FLAG_SAFARI_MODE, nullptr))
    {
        encounterHolder->fields.Type = ENCOUNTER_TYPE_SAFARI;
    }
    else
    {
        encounterHolder->fields.Type = ENCOUNTER_TYPE_SINGLE;
    }

    // Handle wild encounter
    bool randomWildEncounter = Dpr::Field::FieldEncount_o::SetEncountData((Pml::PokePara::PokemonParam_o*)firstPokemon, inRodType, spaStruct, slots, 2, 1, &encounterHolder, nullptr);
    return ReturnEncounterSlots(randomWildEncounter, &encounterHolder, &spaStruct, slots, false, false);
}

// SWEET SCENT ENCOUNTER GENERATION
Dpr::Field::EncountResult_o * SetSweetEncount_EncounterSlots(MethodInfo *method)
{
    system_load_typeinfo((void *)0x48cc);
    system_load_typeinfo((void *)0x3f80);
    system_load_typeinfo((void *)0x48c4);

    // No encounters if party is empty
    if (IsPartyEmpty())
    {
        return nullptr;
    }

    // No encounters if current tile does not give encounters
    FieldObjectEntity_o *entity = (FieldObjectEntity_o *)EntityManager_TypeInfo->static_fields->_activeFieldPlayer_k__BackingField;
    if (!DoesTileGiveEncounters(entity->get_gridPosition(nullptr)))
    {
        return nullptr;
    }

    // No encounters if current zone does not have encounters
    if (!DoesCurrentZoneIDHaveEncounters())
    {
        return nullptr;
    }

    // Get base encounter rate (ground or water)
    // No encounters if encounter rate is 0
    int32_t encounterRate = GetBaseEncounterRate(entity->get_gridPosition(nullptr));
    if (encounterRate == 0)
    {
        return nullptr;
    }

    XLSXContent::FieldEncountTable::Sheettable_o * fieldEnc = GetFieldEncountersOfCurrentZoneID();
    Pml::PokeParty_o *party = PlayerWork::get_playerParty(nullptr);
    Pml::PokePara::CoreParam *firstPokemon = (Pml::PokePara::CoreParam *)party->GetMemberPointer(0, nullptr);
    Dpr::Field::FieldEncount::ENC_FLD_SPA_o spaStruct; // local_e0 = 0x0, local_d8 = 0x8, etc. Total size 0x28
    Dpr::Field::FieldEncount_o::SetSpaStruct((Pml::PokePara::PokemonParam_o *)firstPokemon, fieldEnc, &spaStruct, nullptr);

    Dpr::Field::EncountResult_o *encounterHolder = (Dpr::Field::EncountResult_o *)il2cpp_object_new(Dpr::Field::EncountResult_TypeInfo); // local_f0 = 0x0
    encounterHolder->ctor(nullptr);
    System::Array<MonsLv_o> *slots = (System::Array<MonsLv_o> *)system_array_new(MonsLv_Array_TypeInfo, 12); // local_100 = 0x0
    bool isSafariFlag = false;

    // Handle Roaming and water encounters
    SetEncounterType(&encounterHolder, &spaStruct, nullptr, &isSafariFlag);
    if (encounterHolder->fields.Type == ENCOUNTER_TYPE_MOVEPOKE)
    {
        return ReturnRoamingPokemonEncounter(&encounterHolder, &spaStruct);
    }
    if (IsTileAWaterTile(entity->get_gridPosition(nullptr)))
    {
        return ReturnWaterEncounter(&encounterHolder, &spaStruct, slots, true);
    }

    // Set slots
    SetBaseGroundSlots(&encounterHolder, slots);
    SetTimeOfDaySlots(slots);
    bool isSwarm = EncountDataWork::IsTairyouHassei(nullptr);
    if (isSwarm)
    {
        SetSwarmSlots(slots);
    }
    int32_t zoneId = PlayerWork::get_zoneID(nullptr);
    bool isTrophyGardenZoneId = ZoneWork::IsHillBackZone(zoneId, nullptr);
    bool zukanFlag = ZukanWork::GetZenkokuFlag(nullptr);
    if (isTrophyGardenZoneId && zukanFlag)
    {
        SetTrophyGardenSlots(slots);
    }
    SetGBASlots(slots);

    if (PlayerWork::GetSytemFlag(SYS_FLAG_PAIR, nullptr))
    {
        // Handle double wild encounter with partner
        int32_t partner = PlayerWork::GetInt(SYS_WORK_PAIR_TRAINER_ID, nullptr);
        encounterHolder->fields.Partner = partner;

        bool randomWildEncounter = Dpr::Field::FieldEncount_o::SetEncountData((Pml::PokePara::PokemonParam_o*)firstPokemon, 0, spaStruct, slots, 0, 1, &encounterHolder, nullptr);
        if (!randomWildEncounter)
        {
            return nullptr;
        }

        randomWildEncounter = Dpr::Field::FieldEncount_o::SetEncountData((Pml::PokePara::PokemonParam_o*)firstPokemon, 0, spaStruct, slots, 0, 3, &encounterHolder, nullptr);
        return ReturnEncounterSlots(randomWildEncounter, &encounterHolder, &spaStruct, slots, true, true);
    }
    else
    {
        // Handle single wild encounter

        // Set single wild specific slots
        if (isSafariFlag)
        {
            SetSafariSlots(slots);
        }
        
        Dpr::Field::FieldEncount::SWAY_ENC_INFO_o swayInfo;
        bool randomWildEncounter = Dpr::Field::FieldEncount_o::WildEncSingle((Pml::PokePara::PokemonParam_o*)firstPokemon, &encounterHolder, fieldEnc, slots, spaStruct, swayInfo, nullptr);
        return ReturnEncounterSlots(randomWildEncounter, &encounterHolder, &spaStruct, slots, true, true);
    }
}
