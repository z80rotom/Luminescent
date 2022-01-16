#include "PlayerWork.hpp"
#include "Dpr/Nx/SaveSystem.hpp"

#include <cstdlib>
#include <cstdio>
#include "logger.hpp"
#include "Save.hpp"
#include "util.hpp"

#include "md5.h"


const int32_t MAX_TRAINERS = 5656;
const int32_t MAX_TRAINER_STRUCTS = 1414;
const int SIZE_8BLOCK = 80; // 0x50
const int SIZE_8STORED = 8 + (4 * SIZE_8BLOCK); // 0x148
const int SIZE_8PARTY = SIZE_8STORED + 0x10; // 0x158

bool PlayerWork_CustomSaveOperation(PlayerWork *this_)
{
  // *((int32_t *) NULL) = 12345;
  return true;
}

uint64_t * PTR_QWORD_04bd27b0 = (uint64_t *) 0x04bd27b0;

// 
extern uint64_t * PTR_QWORD_04bd27b0;

System_Byte_array * System_Byte_array_new(size_t length)
{
  size_t mem_size = sizeof(Il2CppObject) + sizeof(Il2CppArrayBounds *) + sizeof(il2cpp_array_size_t) + (sizeof(uint8_t) * length);
  System_Byte_array * ret = (System_Byte_array *) malloc(mem_size);
  memset(ret, 0, mem_size);
  ret->max_length = length;
  return ret;
}

bool serializePlayerParty(uint8_t * buf, Pml::PokePara::SavePokeParty_Fields * fields)
{
  const int PARTY_SIZE = 6;

  size_t offset = 0;
  for (int i = 0; i < PARTY_SIZE; i++)
  {
    Pml::PokePara::SerializedPokemonFull_Fields * encountPoke = &fields->members->m_Items[i].fields;
    memcpy(&buf[offset], &encountPoke->buffer->m_Items, 0x158);
    offset += 0x158;
  }
  memcpy(&buf[offset], &fields->memberCount, sizeof(uint8_t));
  offset += sizeof(uint8_t);
  memcpy(&buf[offset], &fields->markingIndex, sizeof(uint8_t));
  offset += sizeof(uint8_t);

  return true;
}

bool serializeBoxData(uint8_t * buf, Dpr::Box::SaveBoxData_Fields * fields)
{
  const int COUNT_BOX = 40;
  const int TeamNameLength = 0x16;
  const int LongStringLength = 0x22;
  const int TeamCount = 6;
  const int TeamSlotCount = 6;

  size_t offset = 0;
 for (int i = 0; i < COUNT_BOX; i++)
  {
    Dpr::Box::SaveBoxData__STR17_Fields * trayNameWrapper = &fields->trayName->m_Items[i].fields;
    memcpy(&buf[offset], &trayNameWrapper->str->fields.m_firstChar, LongStringLength);
    offset += LongStringLength;
  }

  for (int i = 0; i < TeamCount; i++)
  {
    Dpr::Box::SaveBoxData__STR11_Fields * teamNameWrapper = &fields->teamName->m_Items[i].fields;
    memcpy(&buf[offset], &teamNameWrapper->str->fields.m_firstChar, TeamNameLength);
    offset += TeamNameLength;
  }

  memcpy(&buf[offset], &fields->teamPos->m_Items, (TeamCount * TeamSlotCount) * sizeof(uint16_t));
  offset += (TeamCount * TeamSlotCount) * sizeof(uint16_t);
  memcpy(&buf[offset], &fields->teamLock, sizeof(uint8_t));
  offset += sizeof(uint8_t);
  memcpy(&buf[offset], &fields->trayMax, sizeof(uint8_t));
  offset += sizeof(uint8_t);
  memcpy(&buf[offset], &fields->currentTray, sizeof(uint8_t));
  offset += sizeof(uint8_t);
  memcpy(&buf[offset], &fields->isOpened, sizeof(bool));
  offset += sizeof(bool);
  memcpy(&buf[offset], &fields->wallPaper->m_Items, (COUNT_BOX) * sizeof(uint8_t));
  offset += (COUNT_BOX) * sizeof(uint8_t);
  memcpy(&buf[offset], &fields->statusPut, sizeof(uint16_t));
  offset += sizeof(uint16_t);

  return true;
}

bool serializeBoxTray(uint8_t * buf, Dpr::Box::SaveBoxTrayData_o * boxTray)
{
  const int COUNT_BOX = 40;
  const int BOX_CAPACITY = 30;

  size_t offset = 0;
  for (int i = 0; i < COUNT_BOX; i++)
  {
    Dpr::Box::SaveBoxTrayData_Fields * boxData = &boxTray[i].fields;
    for (int j = 0; j < BOX_CAPACITY; j++)
    {
      Pml::PokePara::SerializedPokemonFull_Fields * boxPoke = &boxData->pokemonParam->m_Items[j].fields;
      memcpy(&buf[offset], &boxPoke->buffer->m_Items, 0x158);
      offset += 0x158;
    }
  }
  return true;
}

bool serializeZukanWork(uint8_t * buf, DPData::ZUKAN_WORK_Fields * fields)
{
  const int COUNT_SPECIES = 493;
  const int COUNT_UNOWN = 28;
  const int COUNT_CASTFORM = 4;
  const int COUNT_DEOXYS = 4;
  const int COUNT_BURMY = 3;
  const int COUNT_WORMADAM = 3;
  const int COUNT_MOTHIM = 3;
  const int COUNT_CHERRIM = 2;
  const int COUNT_SHELLOS = 2;
  const int COUNT_GASTRODON = 2;
  const int COUNT_ROTOM = 6;
  const int COUNT_GIRATINA = 2;
  const int COUNT_SHAYMIN = 2;
  const int COUNT_ARCEUS = 18;

  memcpy(&buf[0x0000], fields->get_status->m_Items, sizeof(int32_t) * COUNT_SPECIES);
  memcpy(&buf[0x07b4], fields->male_color_flag->m_Items, sizeof(bool) * COUNT_SPECIES);
  memcpy(&buf[0x0f68], fields->female_color_flag->m_Items, sizeof(bool) * COUNT_SPECIES);
  memcpy(&buf[0x171c], fields->male_flag->m_Items, sizeof(bool) * COUNT_SPECIES);
  memcpy(&buf[0x1ed0], fields->female_flag->m_Items, sizeof(bool) * COUNT_SPECIES);
  memcpy(&buf[0x2684], fields->UnknownTurn->m_Items, sizeof(bool) * COUNT_UNOWN);
  memcpy(&buf[0x26f4], fields->UnknownColor->m_Items, sizeof(bool) * COUNT_UNOWN);
  memcpy(&buf[0x2764], fields->PowarunTurn->m_Items, sizeof(bool) * COUNT_CASTFORM);
  memcpy(&buf[0x2774], fields->PowarunColor->m_Items, sizeof(bool) * COUNT_CASTFORM);
  memcpy(&buf[0x2784], fields->DeokisisuTurn->m_Items, sizeof(bool) * COUNT_DEOXYS);
  memcpy(&buf[0x2794], fields->DeokisisuColor->m_Items, sizeof(bool) * COUNT_DEOXYS);
  memcpy(&buf[0x27a4], fields->MinomuttiTurn->m_Items, sizeof(bool) * COUNT_BURMY);
  memcpy(&buf[0x27b0], fields->MinomuttiColor->m_Items, sizeof(bool) * COUNT_BURMY);
  memcpy(&buf[0x27bc], fields->MinomadamTurn->m_Items, sizeof(bool) * COUNT_WORMADAM);
  memcpy(&buf[0x27c8], fields->MinomadamColor->m_Items, sizeof(bool) * COUNT_WORMADAM);
  memcpy(&buf[0x27d4], fields->GaameiruTurn->m_Items, sizeof(bool) * COUNT_MOTHIM);
  memcpy(&buf[0x27e0], fields->GaameiruColor->m_Items, sizeof(bool) * COUNT_MOTHIM);
  memcpy(&buf[0x27ec], fields->TherimuTurn->m_Items, sizeof(bool) * COUNT_CHERRIM);
  memcpy(&buf[0x27f4], fields->TherimuColor->m_Items, sizeof(bool) * COUNT_CHERRIM);
  memcpy(&buf[0x27fc], fields->KaranakusiTurn->m_Items, sizeof(bool) * COUNT_SHELLOS);
  memcpy(&buf[0x2804], fields->KaranakusiColor->m_Items, sizeof(bool) * COUNT_SHELLOS);
  memcpy(&buf[0x280c], fields->ToritodonTurn->m_Items, sizeof(bool) * COUNT_GASTRODON);
  memcpy(&buf[0x2814], fields->ToritodonColor->m_Items, sizeof(bool) * COUNT_GASTRODON);
  memcpy(&buf[0x281c], fields->RotomTurn->m_Items, sizeof(bool) * COUNT_ROTOM);
  memcpy(&buf[0x2834], fields->RotomColor->m_Items, sizeof(bool) * COUNT_ROTOM);
  memcpy(&buf[0x284c], fields->GirathinaTurn->m_Items, sizeof(bool) * COUNT_GIRATINA);
  memcpy(&buf[0x2854], fields->GirathinaColor->m_Items, sizeof(bool) * COUNT_GIRATINA);
  memcpy(&buf[0x285c], fields->SheimiTurn->m_Items, sizeof(bool) * COUNT_SHAYMIN);
  memcpy(&buf[0x2864], fields->SheimiColor->m_Items, sizeof(bool) * COUNT_SHAYMIN);
  memcpy(&buf[0x286c], fields->AruseusuTurn->m_Items, sizeof(bool) * COUNT_ARCEUS);
  memcpy(&buf[0x28b4], fields->AruseusuColor->m_Items, sizeof(bool) * COUNT_ARCEUS);
  memcpy(&buf[0x28fc], fields->TextVersionUp->m_Items, sizeof(int32_t) * COUNT_SPECIES);
  memcpy(&buf[0x30b0], &fields->zukan_get, 0x2);

  return true;
}

bool serializeEncSvData(uint8_t * buf, DPData::ENC_SV_DATA_Fields * fields)
{
  memcpy(&buf[0x000], fields, 0xC);
  memcpy(&buf[0x00C], &fields->HillBackData, 0x8);
  // 21 honey trees
  memcpy(&buf[0x014], &fields->HoneyTree, 0x5);
  memcpy(&buf[0x01C], &fields->HoneyTree.fields.HoneyData->m_Items, sizeof(DPData::HONEY_DATA_Fields) * 21);
  memcpy(&buf[0x11C], &fields->SwayGrassHist.fields.SwayGrassRec->m_Items, sizeof(DPData::SWAY_GRASS_REC_Fields) * 3);
  memcpy(&buf[0x134], &fields->PlayerZoneHist, 0x8);
  memcpy(&buf[0x13C], &fields->MovePokeData->m_Items, sizeof(DPData::MV_POKE_DATA_Fields) * 2);
  memcpy(&buf[0x17C], &fields->GenerateValid, 0x7);

  return true;
}

bool serializeBallDecoData(uint8_t * buf, Dpr::BallDeco::SaveBallDecoData_Fields * fields)
{
  const int COUNT_CAPSULE = 99;
  const int COUNT_SEAL = 20;

  const int AFFIX_SEAL_SIZE = 8;
  const int SEAL_CAPSULE_SIZE = 12 + (COUNT_SEAL * AFFIX_SEAL_SIZE);

  memcpy(&buf[0], &fields->CapsuleCount, sizeof(uint8_t));
  for (int i = 0; i < COUNT_CAPSULE; i++)
  {
    Dpr::BallDeco::CapsuleData_Fields * capsuleData = &fields->CapsuleDatas->m_Items[i].fields; 
    size_t offset = 4 + (i * SEAL_CAPSULE_SIZE);
    // Copy leading fields
    memcpy(&buf[offset], capsuleData, sizeof(Dpr::BallDeco::CapsuleData_Fields) - sizeof(Dpr::BallDeco::AffixSealData_array*));
    for (int j = 0; j < COUNT_SEAL; j++)
    {
      Dpr::BallDeco::AffixSealData_Fields * affixSealData = &capsuleData->AffixSealDatas->m_Items[j].fields;
      size_t offsetSeal = offset + 12 + (j * AFFIX_SEAL_SIZE);
      memcpy(&buf[offsetSeal], affixSealData, sizeof(Dpr::BallDeco::AffixSealData_Fields));
    }
  }

  return true;
}

bool serializeSaveSeal(uint8_t * buf, Dpr::BallDeco::SaveSealData_o * saveSealArray)
{
  const int SealMaxCount = 99;
  memcpy(&buf[0], saveSealArray, SealMaxCount * sizeof(Dpr::BallDeco::SaveSealData_o));
  return true;
}

bool serializeBtlTowerSave(uint8_t * buf, DPData::BTLTOWER_SAVEWORK_Fields * fields)
{
  size_t offset = 0;
  memcpy(&buf[offset], &fields->max_master_rank, sizeof(uint32_t));
  offset += sizeof(uint32_t);
  memcpy(&buf[offset], &fields->play_mode, sizeof(int32_t));
  offset += sizeof(int32_t);
  memcpy(&buf[offset], &fields->old_playmode, sizeof(int32_t));
  offset += sizeof(int32_t); 
  memcpy(&buf[offset], &fields->btl_point, sizeof(uint32_t));
  offset += sizeof(uint32_t);
  memcpy(&buf[offset], &fields->day_challeng_cnt, sizeof(uint32_t));
  offset += sizeof(uint32_t);

  const int COUNT_CLASSDATA = 4;
  const int COUNT_TRAINER_RANDOM = 6;
  for (int i = 0; i < COUNT_CLASSDATA; i++)
  {
    DPData::BTLTOWER_CLASSDATA_Fields * classData = &fields->class_data->m_Items[i].fields;
    memcpy(&buf[offset], &classData->clear_flag, sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&buf[offset], &classData->suspension_flag, sizeof(bool));
    offset += sizeof(bool);
    memcpy(&buf[offset], &classData->btl_play_rand_seed, sizeof(uint64_t));
    offset += sizeof(uint64_t); 
    memcpy(&buf[offset], &classData->rank, sizeof(uint32_t));
    offset += sizeof(uint32_t);
    memcpy(&buf[offset], &classData->rank_down_lose, sizeof(uint32_t));
    offset += sizeof(uint32_t);
    memcpy(&buf[offset], &classData->tower_round, sizeof(int32_t));
    offset += sizeof(int32_t);
    
    memcpy(&buf[offset], &classData->trainer_random->m_Items, sizeof(uint64_t) * COUNT_TRAINER_RANDOM);
    offset += sizeof(uint64_t) * COUNT_TRAINER_RANDOM;
    
    memcpy(&buf[offset], &classData->total_wins, sizeof(uint32_t));
    offset += sizeof(int32_t);
    memcpy(&buf[offset], &classData->total_wins_loop, sizeof(uint32_t));
    offset += sizeof(int32_t); 
    memcpy(&buf[offset], &classData->total_lose, sizeof(uint32_t));
    offset += sizeof(uint32_t);
    memcpy(&buf[offset], &classData->old_renshou_cnt, sizeof(uint32_t));
    offset += sizeof(uint32_t);
    memcpy(&buf[offset], &classData->renshou_cnt, sizeof(uint32_t));
    offset += sizeof(uint32_t);
  }

  memcpy(&buf[offset], &fields->challenge_cnt, sizeof(uint32_t));
  offset += sizeof(uint32_t);

  return true;
}

bool serializeSystemData(uint8_t * buf, DPData::SYSTEMDATA_Fields * fields)
{
  size_t offset = 0;
  memcpy(&buf[offset], &fields->StartTime, sizeof(DPData::GMTIME_o) * 4);
  offset += (sizeof(DPData::GMTIME_o) * 4) + 4; // Not sure why the original adds an extra 4 bytes *shrug*
  memcpy(&buf[offset], &fields->nxSnapshot->m_Items, 0xD0);
  offset += 0xD0; 
  memcpy(&buf[offset], &fields->fd_bgmEvnet, sizeof(uint32_t));
  offset += sizeof(uint32_t);
  memcpy(&buf[offset], &fields->reserved_long0, sizeof(uint64_t) * 6);

  return true;
}

bool serializePoketchData(uint8_t * buf, DPData::POKETCH_DATA_Fields * fields)
{
  const int APP_REGIST_MAX = 20; // bool array unlock flags
  const int POKETCH_MAP_MARK_MAX = 6; // mark_map_pos[6]
  const int POKETCH_DOTART_DATA_BYTESIZE = 192; // dotart data bytes
  const int POKETCH_POKE_HISTORY_COUNT_MAX = 12; // poke_history[12]
  const int POKETCH_PEDOMETER_MAX = 99999;
  const int POKETCH_CALENDER_MONTH_MAX = 12; // calendar markbit uint[12]

  size_t offset = 0;
  memcpy(&buf[offset], &fields->get_flag, sizeof(bool));
  offset += sizeof(bool);
  memcpy(&buf[offset], &fields->pedometer_flag, sizeof(bool));
  offset += sizeof(bool);
  memcpy(&buf[offset], &fields->dotart_modified_flag, sizeof(bool));
  offset += sizeof(bool); 
  memcpy(&buf[offset], &fields->color_type, sizeof(uint32_t));
  offset += sizeof(uint32_t);
  memcpy(&buf[offset], &fields->app_count, sizeof(int8_t));
  offset += sizeof(int8_t);
  memcpy(&buf[offset], &fields->app_index, sizeof(int8_t));
  offset += sizeof(int8_t);
  memcpy(&buf[offset], &fields->app_flag->m_Items, sizeof(bool) * APP_REGIST_MAX);
  offset += sizeof(bool) * APP_REGIST_MAX;
  memcpy(&buf[offset], &fields->pedometer, sizeof(uint32_t));
  offset += sizeof(uint32_t);
  memcpy(&buf[offset], &fields->dotart_data->m_Items, sizeof(uint8_t) * POKETCH_DOTART_DATA_BYTESIZE);
  offset += sizeof(uint8_t) * POKETCH_DOTART_DATA_BYTESIZE; 
  memcpy(&buf[offset], &fields->calendar_markbit->m_Items, sizeof(uint32_t) * POKETCH_CALENDER_MONTH_MAX);
  offset += sizeof(uint32_t) * POKETCH_CALENDER_MONTH_MAX; 
  memcpy(&buf[offset], &fields->mark_map_pos->m_Items, sizeof(DPData::MARK_MAP_POS_o) * POKETCH_MAP_MARK_MAX);
  offset += sizeof(DPData::MARK_MAP_POS_o) * POKETCH_MAP_MARK_MAX; 
  memcpy(&buf[offset], &fields->poke_history->m_Items, sizeof(DPData::POKETCH_POKE_HISTORY_o) * POKETCH_POKE_HISTORY_COUNT_MAX);
  offset += sizeof(DPData::POKETCH_POKE_HISTORY_o) * POKETCH_POKE_HISTORY_COUNT_MAX; 
  return true;
}

bool serializeDaycare(uint8_t * buf, AzukariyaData_Fields * fields)
{
  memcpy(&buf[0x000], &fields->pokemonParam->m_Items[0].fields.buffer->m_Items, SIZE_8PARTY); 
  memcpy(&buf[0x158], &fields->pokemonParam->m_Items[1].fields.buffer->m_Items, SIZE_8PARTY); 
  memcpy(&buf[0x2b0], &fields->eggExist, 0xD); 

  return true;
}

bool serializeDendou(uint8_t * buf, DPData::_DENDOU_SAVEDATA_Fields * fields)
{
  size_t offset = 0;
  for (int i = 0; i < 30; i++)
  {
    DPData::DENDOU_RECORD_Fields * record = &fields->record->m_Items[i].fields;
    for (int j = 0; j < 6; j++)
    {
      DPData::DENDOU_POKEMON_DATA_INSIDE_Fields * inside = &record->pokemon->m_Items[j].fields;
      memcpy(&buf[offset], &inside->monsno, sizeof(uint32_t));
      offset += sizeof(uint32_t);
      memcpy(&buf[offset], &inside->level, sizeof(uint8_t));
      offset += sizeof(uint8_t);
      memcpy(&buf[offset], &inside->formNumber, sizeof(uint16_t));
      offset += sizeof(uint16_t);
      memcpy(&buf[offset], &inside->personalRandom, sizeof(uint32_t));
      offset += sizeof(uint32_t);
      memcpy(&buf[offset], &inside->idNumber, sizeof(uint32_t));
      offset += sizeof(uint32_t);
      memcpy(&buf[offset], &inside->sex, sizeof(int32_t));
      offset += sizeof(int32_t);
      memcpy(&buf[offset], &inside->rareType, sizeof(int32_t));
      offset += sizeof(int32_t);
      memcpy(&buf[offset], &inside->nickname->fields.m_firstChar, 0x1A);
      offset += 0x1A;
      memcpy(&buf[offset], &inside->oyaname->fields.m_firstChar, 0x1A);
      offset += 0x1A;
      memcpy(&buf[offset], &inside->waza->m_Items, sizeof(uint16_t) * 4);
      offset += sizeof(uint16_t) * 4;
    }
    memcpy(&buf[offset], &record->time, sizeof(DPData::GMTIME_o));
    offset += sizeof(DPData::GMTIME_o);
  }

  return true;
}

bool serializeUgSaveData(uint8_t * buf, DPData::UgSaveData_Fields * fields)
{
  const int COUNT_DIGPOINTS = 10;
  const int COUNT_ENCOUNTERS = 15;
  const int COUNT_FRIENDS = 100; // 100 total with Friends+Others, savedata ctor allocates 100 for FriendPlayerList
  const int COUNT_OTHERS = 0; // unused
  const int COUNT_TRAINERS = 100;

  size_t offset = 0;
  memcpy(&buf[offset], &fields->ReturnZoneID, sizeof(int32_t));
  offset += sizeof(int32_t);
  memcpy(&buf[offset], &fields->ReturnGridPosX, sizeof(int32_t));
  offset += sizeof(int32_t);  
  memcpy(&buf[offset], &fields->ReturnPosY, sizeof(int32_t));
  offset += sizeof(int32_t);  
  memcpy(&buf[offset], &fields->ReturnGridPosZ, sizeof(int32_t));
  offset += sizeof(int32_t);
  memcpy(&buf[offset], &fields->ReturnZenmetsu_Ground, sizeof(DPData::LOCATION_WORK_o));
  offset += sizeof(DPData::LOCATION_WORK_o);
  memcpy(&buf[offset], &fields->DigPoints->m_Items, sizeof(DPData::DigPos_o) * COUNT_DIGPOINTS);
  offset += sizeof(DPData::DigPos_o) * COUNT_DIGPOINTS;

  for (int i = 0; i < COUNT_ENCOUNTERS; i++)
  {
    Pml::PokePara::SerializedPokemonFull_Fields * encountPoke = &fields->EncountPokes->m_Items[i].fields;
    memcpy(&buf[offset], &encountPoke->buffer->m_Items, 0x158);
    offset += 0x158;
  }

  memcpy(&buf[offset], &fields->EncountPokePositions->m_Items, sizeof(UnityEngine_Vector3_o) * COUNT_ENCOUNTERS);
  offset += sizeof(UnityEngine_Vector3_o) * COUNT_ENCOUNTERS;
  memcpy(&buf[offset], &fields->ReturnUgZoneID, sizeof(int32_t));
  offset += sizeof(int32_t);

  // ugRecord
  const int MAX_STONE_STATUE = 30;
  memcpy(&buf[offset], &fields->ugRecord.fields.talkPlayerDataID, sizeof(uint32_t));
  offset += sizeof(uint32_t);
  memcpy(&buf[offset], &fields->ugRecord.fields.talkPlayerCount, sizeof(uint32_t));
  offset += sizeof(uint32_t);
  // ugRecord.myBase (UgSecretBase)
  DPData::UgSecretBase_Fields * myBase = &fields->ugRecord.fields.myBase.fields;
  memcpy(&buf[offset], &myBase->zoneID, sizeof(int16_t));
  offset += sizeof(int16_t);
  memcpy(&buf[offset], &myBase->posX, sizeof(int16_t));
  offset += sizeof(int16_t);
  memcpy(&buf[offset], &myBase->posY, sizeof(int16_t));
  offset += sizeof(int16_t);
  memcpy(&buf[offset], &myBase->direction, sizeof(uint8_t));
  offset += sizeof(uint8_t);
  memcpy(&buf[offset], &myBase->expansionStatus, sizeof(uint8_t));
  offset += sizeof(uint8_t);
  memcpy(&buf[offset], &myBase->goodCount, sizeof(int32_t));
  offset += sizeof(int32_t);
  memcpy(&buf[offset], &myBase->ugStoneStatue->m_Items, sizeof(DPData::UgStoneStatue_o) * MAX_STONE_STATUE);
  offset += sizeof(DPData::UgStoneStatue_o) * MAX_STONE_STATUE;
  memcpy(&buf[offset], &myBase->isEnable, sizeof(bool));
  offset += sizeof(bool);

  for (int i = 0; i < COUNT_FRIENDS; i++)
  {
    DPData::UgPlayerInfo_Fields * friendPlayer = &fields->FriendPlayerList->m_Items[i].fields;
    memcpy(&buf[offset], &friendPlayer->name->fields.m_firstChar, sizeof(uint16_t) * 13);
    offset += sizeof(uint16_t) * 13;
    memcpy(&buf[offset], &friendPlayer->id, sizeof(int32_t));
    offset += sizeof(int32_t);
    memcpy(&buf[offset], &friendPlayer->langID, sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&buf[offset], &friendPlayer->sex, sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&buf[offset], &friendPlayer->avatorID, sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&buf[offset], &friendPlayer->isPreset, sizeof(bool));
    offset += sizeof(bool);
  }
  // OtherPlayerList = unused

  memcpy(&buf[offset], &fields->TalkedNPCsID->m_Items, sizeof(uint8_t) * COUNT_TRAINERS);
  offset += sizeof(uint8_t) * COUNT_TRAINERS;

  return true;
}

bool serializeGmsdata(uint8_t * buf, DPData::GMS_DATA_Fields * fields)
{
  size_t offset = 0;
  for (int i = 0; i < 650; i++)
  {
    DPData::GMS_POINT_DATA_Fields * pointData = &fields->pointDatas->m_Items[i].fields;
    for (int j = 0; j < 5; j++)
    {
      DPData::GMS_POINT_HISTORY_DATA_Fields * pointHistory = &pointData->historyDatas->m_Items[j].fields;
      memcpy(&buf[offset], &pointHistory->receiveMonsNickname->fields.m_firstChar, 0x1A);
      offset += 0x1A;
      memcpy(&buf[offset], &pointHistory->receiveParentName->fields.m_firstChar, 0x1A);
      offset += 0x1A;
      memcpy(&buf[offset], &pointHistory->sendMonsNo, sizeof(uint16_t));
      offset += sizeof(uint16_t);
      memcpy(&buf[offset], &pointHistory->receiveMonsNo, sizeof(uint16_t));
      offset += sizeof(uint16_t);
      memcpy(&buf[offset], &pointHistory->year, sizeof(uint16_t));
      offset += sizeof(uint16_t);
      memcpy(&buf[offset], &pointHistory->month, sizeof(uint8_t));
      offset += sizeof(uint8_t);
      memcpy(&buf[offset], &pointHistory->day, sizeof(uint8_t));
      offset += sizeof(uint8_t);
      memcpy(&buf[offset], &pointHistory->sendMonsFormNo, sizeof(uint8_t));
      offset += sizeof(uint8_t);
      memcpy(&buf[offset], &pointHistory->sendMonsSex, sizeof(uint8_t));
      offset += sizeof(uint8_t);
      memcpy(&buf[offset], &pointHistory->receiveMonsFormNo, sizeof(uint8_t));
      offset += sizeof(uint8_t);
      memcpy(&buf[offset], &pointHistory->receiveMonsSex, sizeof(uint8_t));
      offset += sizeof(uint8_t);
      memcpy(&buf[offset], &pointHistory->receiveMonsLanguage, sizeof(uint8_t));
      offset += sizeof(uint8_t);
      memcpy(&buf[offset], &pointHistory->receiveMonsParentLanguage, sizeof(uint8_t));
      offset += sizeof(uint8_t);
    }
  }

  memcpy(&buf[offset], &fields->tradeListIndex, sizeof(uint16_t));
  offset += sizeof(uint16_t);
  memcpy(&buf[offset], &fields->browsingListIndex, sizeof(uint16_t));
  offset += sizeof(uint16_t);
  memcpy(&buf[offset], &fields->achievementStep, sizeof(uint8_t));
  offset += sizeof(uint8_t);

  return true;
}

bool serializeNetworkdata(uint8_t * buf, DPData::PLAYER_NETWORK_DATA_Fields * fields)
{
  size_t offset = 0;
  memcpy(&buf[offset], &fields->publicKeyBASE64->m_Items, sizeof(uint8_t) * 0x20);
  offset += sizeof(uint8_t) * 0x20;
  memcpy(&buf[offset], &fields->bcatFlagArray->m_Items, sizeof(uint8_t) * 0x514);
  offset += sizeof(uint8_t) * 0x514;
  memcpy(&buf[offset], &fields->nexUniqueId, sizeof(uint64_t));
  offset += sizeof(uint64_t);
  memcpy(&buf[offset], &fields->nexUniqueIdPassword, sizeof(uint64_t));
  offset += sizeof(uint64_t);
  memcpy(&buf[offset], &fields->publicKeyversion, sizeof(uint64_t));
  offset += sizeof(uint64_t);
  return true;
}

bool serializeZukanPersonalRndData(uint8_t * buf, DPData::ZUKAN_PERSONAL_RND_DATA_Fields * fields)
{
  memcpy(&buf[0x0], &fields->PattiiruSeePersonalRnds->m_Items, 0x10);
  memcpy(&buf[0x10], &fields->PattiiruGetPersonalRnds->m_Items, 0x10);
  // Ignore reserved

  return true;
}

bool serializeContestPhotoExtData(uint8_t * buf, DPData::CON_PHOTO_EXT_DATA_o * array)
{
  size_t offset = 0;
  for (int i = 0; i < 5; i++)
  {
    memcpy(&buf[offset], &array[i].fields.nickname->fields.m_firstChar, 0x1A);
    offset += 0x1A;
    memcpy(&buf[offset], &array[i].fields.reserved_ushort01, sizeof(uint16_t));
    offset += sizeof(uint16_t);
    memcpy(&buf[offset], &array[i].fields.reserved_int01, sizeof(int32_t));
    offset += sizeof(int32_t);
  }
  return true;
}

bool serializeGmsPointExtData(uint8_t * buf, DPData::GMS_POINT_HISTORY_EXT_DATA_o * array)
{
  size_t offset = 0;
  for (int i = 0; i < 5; i++)
  {
    memcpy(&buf[offset], &array[i].fields.receiveMonsNickname->fields.m_firstChar, 0x1A);
    offset += 0x1A;
    memcpy(&buf[offset], &array[i].fields.reserved_ushort01, sizeof(uint16_t));
    offset += sizeof(uint16_t);
    memcpy(&buf[offset], &array[i].fields.reserved_int01, sizeof(int32_t));
    offset += sizeof(int32_t);
  }
  return true;
}

bool serializeReBuffNameData(uint8_t * buf, RE_DENDOU_RECORD_o * array)
{
  size_t offset = 0;
  for (int i = 0; i < 30; i++)
  {
    for (int j = 0; j < 6; j++)
    {
      RE_DENDOU_POKEMON_DATA_INSIDE_Fields * inside = &array[i].fields.pokemon->m_Items[j].fields;
      memcpy(&buf[offset], &inside->nickname->fields.m_firstChar, 0x1A);
      offset += 0x1A;
      memcpy(&buf[offset], &inside->reserved_short01, sizeof(int16_t));
      offset += sizeof(int16_t);
      memcpy(&buf[offset], &inside->reserved_int01, sizeof(int32_t));
      offset += sizeof(int32_t);
    }
  }
  return true;
}

bool serializeRecordAddData(uint8_t * buf, DPData::RECORD_ADD_DATA_Fields * fields)
{
  const int COUNT_RECORD_ADD = 12;
  const int COUNT_RECORD_RANKING = 12;
  const int COUNT_RECORD_RANKING_FLAG = 32;

  size_t offset = 0;
  for (int i = 0; i < COUNT_RECORD_ADD; i++)
  {
    DPData::RECORD_HEAD_Fields * recordHead = &fields->head->m_Items[i].fields;
    memcpy(&buf[offset], &recordHead->username->fields.m_firstChar, 0x1A);
    offset += 0x1A;
    memcpy(&buf[offset], &recordHead->reserved_byte1, sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&buf[offset], &recordHead->reserved_byte2, sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&buf[offset], &recordHead->language, sizeof(int32_t));
    offset += sizeof(int32_t);
    memcpy(&buf[offset], &recordHead->sex, sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&buf[offset], &recordHead->reserved_byte4, sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&buf[offset], &recordHead->reserved_byte5, sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&buf[offset], &recordHead->reserved_byte6, sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&buf[offset], &recordHead->body_type, sizeof(int32_t));
    offset += sizeof(int32_t);
    memcpy(&buf[offset], &recordHead->uniqueID, sizeof(uint32_t));
    offset += sizeof(uint32_t);
    memcpy(&buf[offset], &recordHead->reserved_int2, sizeof(int32_t));
    offset += sizeof(int32_t);
  }
  
  for (int i = 0; i < COUNT_RECORD_RANKING; i++)
  {
    System_Byte_array * activeFlag = fields->rankingFlag->m_Items[i].fields.activeFlag;
    memcpy(&buf[offset], &activeFlag->m_Items[0], sizeof(uint8_t) * 32);
    offset += sizeof(uint8_t) * 32;
  }

  return true;
}

bool serializeMysteryGiftSaveData(uint8_t * buf, DPData::MysteryGiftSaveData_Fields * fields)
{
  const int RecvDataMax = 50;
  const int OneDayMax = 10;
  const int SerialDataNoMax = 895;
  const int ReserveSize = 66;
  const int FlagSize = 0x100;

  size_t offset = 0;
  for (int i = 0; i < RecvDataMax; i++)
  {
    DPData::MysteryGift_RecvData_Fields * recvData = &fields->recvDatas->m_Items[i].fields;
    memcpy(&buf[offset], &recvData->timestamp, sizeof(int64_t));
    offset += sizeof(int64_t);
    memcpy(&buf[offset], &recvData->deliveryId, sizeof(uint16_t));
    offset += sizeof(uint16_t);
    memcpy(&buf[offset], &recvData->textId, sizeof(uint16_t));
    offset += sizeof(uint16_t);
    memcpy(&buf[offset], &recvData->dataType, sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&buf[offset], &recvData->reserved_byte01, sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&buf[offset], &recvData->reserved_short01, sizeof(int16_t));
    offset += sizeof(int16_t);
    // monsData
    memcpy(&buf[offset], &recvData->monsData.fields.no, sizeof(uint16_t));
    offset += sizeof(uint16_t);
    memcpy(&buf[offset], &recvData->monsData.fields.form, sizeof(uint16_t));
    offset += sizeof(uint16_t);
    memcpy(&buf[offset], &recvData->monsData.fields.itemId, sizeof(uint16_t));
    offset += sizeof(uint16_t);
    
    memcpy(&buf[offset], &recvData->monsData.fields.wazaNos->m_Items, sizeof(uint16_t) * 4);
    offset += sizeof(uint16_t) * 4;
    memcpy(&buf[offset], &recvData->monsData.fields.parentName->fields.m_firstChar, 0x1A);
    offset += 0x1A;

    memcpy(&buf[offset], &recvData->monsData.fields.parentSex, sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&buf[offset], &recvData->monsData.fields.isEgg, sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&buf[offset], &recvData->monsData.fields.itemId, sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&buf[offset], &recvData->monsData.fields.twoRibbonId, sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&buf[offset], &recvData->monsData.fields.sex, sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&buf[offset], &recvData->monsData.fields.pokemonLangId, sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&buf[offset], &recvData->monsData.fields.reserved_byte01, sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&buf[offset], &recvData->monsData.fields.reserved_byte02, sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&buf[offset], &recvData->monsData.fields.reserved_byte03, sizeof(uint8_t));
    offset += sizeof(uint8_t);
    // end monsData

    memcpy(&buf[offset], &recvData->itemDatas->m_Items, sizeof(DPData::MysteryGift_ItemInfo_o) * 7);
    offset += sizeof(DPData::MysteryGift_ItemInfo_o) * 7;
    memcpy(&buf[offset], &recvData->dressIds->m_Items, sizeof(uint32_t) * 7);
    offset += sizeof(uint32_t) * 7;

    memcpy(&buf[offset], &recvData->moneyData, sizeof(uint32_t));
    offset += sizeof(uint32_t);
    memcpy(&buf[offset], &recvData->reserved_int01, sizeof(int32_t));
    offset += sizeof(int32_t);
    memcpy(&buf[offset], &recvData->reserved_int02, sizeof(int32_t));
    offset += sizeof(int32_t);
    memcpy(&buf[offset], &recvData->reserved_int03, sizeof(int32_t));
    offset += sizeof(int32_t);
    memcpy(&buf[offset], &recvData->reserved_int04, sizeof(int32_t));
    offset += sizeof(int32_t);
  }

  memcpy(&buf[offset], &fields->receiveFlag->m_Items, FlagSize * sizeof(uint8_t));
  offset += FlagSize * sizeof(uint8_t);
  memcpy(&buf[offset], &fields->oneDayDatas->m_Items, OneDayMax * sizeof(DPData::MysteryGift_OneDayData_o));
  offset += OneDayMax * sizeof(DPData::MysteryGift_OneDayData_o);
  memcpy(&buf[offset], &fields->serialLockTimestamp, sizeof(int64_t));
  offset += sizeof(int64_t);
  // ignore ngFlag
  // ignore ngCounter
  // ignore reserved_ushorts
  // ignore reserve
  return true;
}

bool serializeDendouSaveAdd(uint8_t * buf, DPData::DENDOU_SAVE_ADD_Fields * fields)
{
  const int ADD_POKE_MEMBER = 30;
  const int ADD_POKE = 6;

  size_t offset = 0;
  for (int i = 0; i < ADD_POKE_MEMBER; i++)
  {
    DPData::DENDOU_SAVE_ADD_POKE_MEMBER_Fields * addPokeMember = &fields->data->m_Items[i].fields;
    memcpy(&buf[offset], &addPokeMember->member->m_Items, sizeof(DPData::DENDOU_SAVE_ADD_POKE_o) * ADD_POKE);
    offset += sizeof(DPData::DENDOU_SAVE_ADD_POKE_o) * ADD_POKE;
  }

  return true;  
}

bool serializeRandomGroup(uint8_t * buf, DPData::_RANDOM_GROUP_Fields * fields)
{
  const int COUNT_GROUP = 12;
  const int GROUP_NAME_SIZE = 16; // chars
  const int PERSON_NAME_SIZE = 32; // chars
  DPData::RANDOM_SEED_o * randomSeedArray = &fields->group->m_Items[0];

  for (int i = 0; i < COUNT_GROUP; i++)
  {
    DPData::RANDOM_SEED_Fields * randomSeed = &randomSeedArray[0].fields;
    size_t offset = (i * 0x84); // 0x84 size
    memcpy(&buf[offset], &randomSeed->group_name->fields.m_firstChar, GROUP_NAME_SIZE * 2);
    offset += GROUP_NAME_SIZE * 2;
    memcpy(&buf[offset], &randomSeed->name->fields.m_firstChar, PERSON_NAME_SIZE * 2);
    offset += PERSON_NAME_SIZE * 2;
    memcpy(&buf[offset], &randomSeed->sex, sizeof(DPData::RANDOM_SEED_o) - (sizeof(struct System_String_o*) * 2));
  }

  return true;
}

bool serializeKinomiGrowSaveData(uint8_t * buf, DPData::KinomiGrowSaveData_Fields * fields)
{
  const int KinomiGrowsCount = 128;
  memcpy(&buf[0x000], &fields->kinomiGrows->m_Items, KinomiGrowsCount * sizeof(DPData::KinomiGrow_o));
  memcpy(&buf[0x800], &fields->LastUpdateMinutes, 0x8);

  return true;
}

bool serializePoffinSaveData(uint8_t * buf, DPData::PoffinSaveData_Fields * fields)
{
  const int COUNT_POFFIN = 100;
  const int SIZE_POFFIN = 100;

  for (int i = 0; i < COUNT_POFFIN; i++)
  {
    DPData::PoffinData_Fields * poffinData = &fields->Poffins->m_Items[0].fields;
    size_t offset = (i * SIZE_POFFIN);
    memcpy(&buf[offset], poffinData, sizeof(DPData::PoffinData_Fields) - sizeof(System_Byte_array* ));
    memcpy(&buf[offset+0x8], &poffinData->Flavor->m_Items, 0x5); // 5 Flavors
  }

  memcpy(&buf[0x640], &fields->CookingCount, sizeof(int32_t));
  return true;
}

// Not to be confused with PlayerSaveData
bool serializePlayerData(uint8_t * buf, DPData::PLAYER_DATA_Fields * fields)
{
  const int PHOTO_MAX = 5;
  memcpy(&buf[0x0], &fields->config, 0x040);
  memcpy(&buf[0x40], &fields->mystatus.fields.name->fields.m_firstChar, 0x01A);
  memcpy(&buf[0x5A], &fields->mystatus.fields.id, sizeof(DPData::MYSTATUS_Fields) - sizeof(struct System_String_o * ));
  memcpy(&buf[0x90], &fields->playtime, 0x004);
  
  for (int i = 0; i < PHOTO_MAX; i++)
  {
    DPData::CON_PHOTO_DATA_Fields * photoFields = &fields->contestdata.fields.photoDatas->m_Items[i].fields;
    const int SIZE_CONTEST_PHOTO = 0x16C;
    const int SIZE_FX_DATA = 0x28;
    size_t offset = 0x94 + (i * SIZE_CONTEST_PHOTO);
    memcpy(&buf[offset], &photoFields->fxDatas->m_Items, sizeof(DPData::CON_PHOTO_FX_DATA_Fields) * PHOTO_MAX);
    offset += (SIZE_FX_DATA * PHOTO_MAX);
    // TODO: Add a serialize function for System_String_o
    memcpy(&buf[offset], &photoFields->nickname->fields.m_firstChar, 0x1C);
    offset += 0x1C;
    memcpy(&buf[offset], &photoFields->camPositionX, sizeof(DPData::CON_PHOTO_DATA_Fields) - sizeof(DPData::CON_PHOTO_FX_DATA_array *) - sizeof(System_String_o * ));
  }

  memcpy(&buf[0x7b0], &fields->contestdata.fields.contestRankPoint, sizeof(uint32_t));
  return true;
}

bool makeSaveDataHash(uint8_t * buf)
{
  uint8_t digest[MD5_DIGEST_LENGTH];
  // struct md5 * ctx = (struct md5 *) malloc(sizeof(struct md5));
  struct md5 ctx;
  md5_init(&ctx);
  md5_update(&ctx, buf, 0xE9818);
  md5_sum(&ctx, digest);

  memcpy(&buf[0xE9818], &digest[0], 0x10);
  
  return true;
}

bool verifySaveDataHash(uint8_t * buf)
{
  uint8_t digest[MD5_DIGEST_LENGTH];
  // struct md5 * ctx = (struct md5 *) malloc(sizeof(struct md5));
  struct md5 ctx;
  md5_init(&ctx);
  md5_update(&ctx, buf, 0xE9818);
  md5_sum(&ctx, digest);

  for (int i = 0; i < MD5_DIGEST_LENGTH; i++)
  {
    if (digest[i] != buf[0xE9818+i])
    {
      return false;
    }
  }

  return true;
}

bool serializeSavedata(System_Byte_array * out, PlayerWork_SaveData_o * save_obj)
{
  PlayerWork_SaveData_Fields save = save_obj->fields;
  uint8_t * buf = (uint8_t *) &out->m_Items;
  memcpy(&buf[0x00000], &save.version,              0x004);
  memcpy(&buf[0x00004], &save.intValues->m_Items,   0x7d0); // 500 * sizeof(int32_t)
  memcpy(&buf[0x007d4], &save.boolValues->m_Items,  0xfa0); // 4000 * sizeof(bool)
  memcpy(&buf[0x04654], &save.systemFlags->m_Items, 0x3e8); // 1000 * sizeof(bool)
  memcpy(&buf[0x055f4], &save.rivalName->fields.m_firstChar,               0x040); // sizeof(int32_t)
  memcpy(&buf[0x05634], &save.zoneID,               0x004); // sizeof(int32_t)
  memcpy(&buf[0x05638], &save.timeScale,            0x004); // sizeof(float)
  memcpy(&buf[0x0563C], &save.saveItem->m_Items, 0xBB8 * sizeof(Dpr::Item::SaveItem_o));
  memcpy(&buf[0x111BC], &save.saveUgItem->m_Items, 0x3E7 * sizeof(Dpr::Item::SaveUgItem_o));
  memcpy(&buf[0x14090], &save.saveItemShortcut->m_Items, 0x008);
  serializePlayerParty(&buf[0x14098], &save.playerParty.fields);
  serializeBoxData(&buf[0x148AA], &save.boxData.fields);
  serializeBoxTray(&buf[0x14EF4], &save.boxTray->m_Items[0]);
  serializePlayerData(&buf[0x79B74], &save.playerData.fields);
  serializeZukanWork(&buf[0x7A328], &save.zukanData.fields);
  memcpy(&buf[0x7D3E0], &save.tr_battleData->m_Items, 0x586); // 0x1618
  memcpy(&buf[0x7E9F8], &save.topMenuData.fields.items->m_Items, 0x40);
  memcpy(&buf[0x7E9FC], &save.topMenuData.fields.selectType, 0x04);
  memcpy(&buf[0x7EA3C], &save.fieldObj_Save.fields.fldobj_sv->m_Items, 0x109A0); // (1000 * 0x44)
  memcpy(&buf[0x8F3DC], &save.record.fields.records->m_Items, 0x5a0); // 0x78 * 12
  serializeEncSvData(&buf[0x8F97C], &save.enc_sv_data.fields);
  memcpy(&buf[0x8FB04], &save.player_save_data, sizeof(DPData::PLAYER_SAVE_DATA_o));
  serializeBallDecoData(&buf[0x8FB84], &save.ballDecoData.fields);
  serializeSaveSeal(&buf[0x93E0C], (Dpr::BallDeco::SaveSealData_o *) &save.saveSeal->m_Items[0]);
  serializeRandomGroup(&buf[0x9476C], &save.randomGroup.fields);
  memcpy(&buf[0x94D9C], &save.fieldGimmickSaveData.fields.GearRotate->m_Items, 0xC);
  serializeKinomiGrowSaveData(&buf[0x94DA8], &save.kinomiGrowSaveData.fields);
  serializePoffinSaveData(&buf[0x955B0], &save.poffinSaveData.fields);
  serializeBtlTowerSave(&buf[0x95BF4], &save.btlTowerSave.fields);
  serializeSystemData(&buf[0x95DAC], &save.systemData.fields);
  serializePoketchData(&buf[0x95EE4], &save.poketchData.fields);
  serializeDaycare(&buf[0x96080], &save.azukariyaData.fields);
  serializeDendou(&buf[0x96340], &save.dendoudata.fields);
  // 0x99CF1

  serializeUgSaveData(&buf[0x9A89C], &save.ugSaveData.fields);
  serializeGmsdata(&buf[0x9D03C], &save.gmsdata.fields);
  serializeNetworkdata(&buf[0xCE340], &save.networkdata.fields);
  memcpy(&buf[0xCEA10], &save.unionSaveData, sizeof(DPData::UnionSaveData_o));
  memcpy(&buf[0xCEA1C], &save.contstPhotoLangData, sizeof(DPData::CON_PHOTO_LANG_DATA_o));
  serializeZukanPersonalRndData(&buf[0xCEA34], &save.zukanPersonalRndData.fields);
  serializeContestPhotoExtData(&buf[0xcea98], &save.contestPhotoExtData->m_Items[0]);
  serializeGmsPointExtData(&buf[0xceb38], &save.gmsPointExtData->m_Items[0]);
  serializeReBuffNameData(&buf[0xE8198], &save.reBuffNameData.fields.DENDOU_RECORD_record->m_Items[0]);
  memcpy(&buf[0xE8178], &save.ugCountRecord, sizeof(DPData::UgCountRecord_o));

  makeSaveDataHash(buf);

  serializeRecordAddData(&buf[0xE9828], &save.recodeAddData.fields);
  serializeMysteryGiftSaveData(&buf[0xE9BE8], &save.mysteryGiftSaveData.fields);
  memcpy(&buf[0xe9fa8], &save.poketoreCountArray.fields.data->m_Items, sizeof(DPData::POKETCH_POKETORE_COUNT_o) * 3);
  memcpy(&buf[0xe9fb8], &save.playReportData, sizeof(PLAYREPORT_DATA_o));
  memcpy(&buf[0xea0b0], &save.mtData.fields.buffer->m_Items, 0x400);
  serializeDendouSaveAdd(&buf[0xea4b0], &save.dendouSaveAdd.fields);

  return true;
}

bool PlayerWork::CustomSaveAsyncOperation(MethodInfo *method)
{
  uint8_t auStack2016[1952];
  this->OnPreSave((MethodInfo *) nullptr);
  System_Byte_array *data = System_Byte_array_new(0xEDC20);
  PlayerWork_SaveData_o * save_obj = &this->fields._saveData;
  serializeSavedata(data, save_obj);
  // System_Byte_array ** buf = &this->fields._writeSrcBuffer;
  // thunk_FUN_05040018(auStack2016,&(__this->fields)._saveData,0x7a0);
  // this->ToBytes(save_obj);

  // Fuck Async, all my homies hate Async
  return Dpr::Nx::SaveSystem::Save(data, true, false, (MethodInfo *) nullptr);
}

// bool PlayerWork_CustomSaveAsyncOperation(PlayerWork *this_, MethodInfo *method)
// {
//   return this_->CustomSaveAsyncOperation(method);
// }
bool PlayerWork_CustomSaveAsyncOperation_Reroute(PlayerWork *this_, MethodInfo *method)
{
  this_->CustomSaveOperation((MethodInfo *) nullptr);
  return true;
}

void PlayerWork_CustomSaveAsyncOperation_NewHook(PlayerWork *this_, System_Byte_array ** ptr_buf, MethodInfo * method)
{
  socket_log("PlayerWork_CustomSaveAsyncOperation_NewHook\n");
  // socket_log_fmt("this_: %08X\n", this_);
  // socket_log_fmt("ptr_buf: %08X\n", ptr_buf);
  // socket_log_fmt("*ptr_buf: %08X\n", *ptr_buf);
  // PlayerWork_SaveData_o * save_obj = &this_->fields._saveData;
  // System_Byte_array *data = this_->fields._writeSrcBuffer;
  System_Byte_array *data = * ptr_buf;
  uint8_t * buf = (uint8_t *) &data->m_Items;
  void * ptr = PlayerWork::get_tr_battleData()->m_Items;
  socket_log_fmt("ptr: %08X\n", ptr);
  memcpy(&buf[0x7D3E0], ptr, 0x586); // 0x1618
  // socket_log_fmt("data: %08X\n", data);
  // this_->makeSaveDataHash(ptr_buf, (MethodInfo * )nullptr);
  // System_Byte_array * array = *ptr_buf;
  // uint8_t * buf = (uint8_t *) &array->m_Items[0];
  // socket_log_fmt("data->max_length: %08X\n", data->max_length);
  // memcpy(&buf[0x7D3E0], save_obj->fields.tr_battleData->m_Items, 0x586); // 0x1618
  // System_Byte_array * data = this_->fields._writeSrcBuffer
  // Dpr::Nx::SaveSystem::Save(data, true, false, (MethodInfo *) nullptr);
  return;
}