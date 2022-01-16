#include "PlayerWork.hpp"
#include "Dpr/Nx/SaveSystem.hpp"

#include <cstdlib>
#include <cstdio>
#include "logger.hpp"
#include "Save.hpp"
#include "util.hpp"

#include "md5.h"

void segfault()
{
    *((int32_t *) NULL) = 12345;
}

const int32_t MAX_TRAINERS = 5656;
const int32_t MAX_TRAINER_STRUCTS = 1414;
const int SIZE_8BLOCK = 80; // 0x50
const int SIZE_8STORED = 8 + (4 * SIZE_8BLOCK); // 0x148
const int SIZE_8PARTY = SIZE_8STORED + 0x10; // 0x158

// TODO: Make everything in System part of a namespace
// 04e4aa20
extern void * System_Boolean_array_TypeInfo;

extern void * System_Byte_array_typeInfo;
// 04e4aae8
extern void * System_UInt16_array_TypeInfo;
// 04e4a9c8
extern void * System_UInt32_array_TypeInfo;
// 04e4a4e0
extern void * System_Int32_array_TypeInfo;
// 04e4cdf8
// TODO: Make UnityEngine a namespace
extern void * UnityEngine_Vector3_Array_TypeInfo;
// 04e4f720
extern void * RE_DENDOU_RECORD_Array_TypeInfo;
// 04b987a0
extern void ** PTR_RE_DENDOU_RECORD_Array_TypeInfo;
// 04e4f728
extern void * RE_DENDOU_POKEMON_DATA_INSIDE_Array_TypeInfo;

// 04b98798
extern void ** PTR_DAT_04b98798;
// 04b98788
extern void ** PTR_DAT_04b98788;
// 04ba0408
extern void ** PTR_DAT_04ba0408;
// 04ba03f0
extern void ** PTR_DAT_04ba03f0;
// 04bd2780
extern void ** PTR_DAT_04bd2780;



void System_RuntimeType_ctor(void * __this, MethodInfo *method);

bool deserializePlayerParty(uint8_t * buf, Pml::PokePara::SavePokeParty_Fields * fields)
{
  const int PARTY_SIZE = 6;

  size_t offset = 0;
  for (int i = 0; i < PARTY_SIZE; i++)
  {
    Pml::PokePara::SerializedPokemonFull_Fields * encountPoke = &fields->members->m_Items[i].fields;
    memcpy(&encountPoke->buffer->m_Items, &buf[offset],  0x158);
    offset += 0x158;
  }
  memcpy(&fields->memberCount, &buf[offset], sizeof(uint8_t));
  offset += sizeof(uint8_t);
  memcpy(&fields->markingIndex, &buf[offset], sizeof(uint8_t));
  offset += sizeof(uint8_t);

  return true;
}


bool deserializePlayerData(uint8_t * buf, DPData::PLAYER_DATA_Fields * fields)
{
  const int PHOTO_MAX = 5;
  memcpy(&fields->config, &buf[0x0], 0x040);
  fields->mystatus.fields.name = System::String::CtorCharPtr((uint16_t *) &buf[0x40]);
  socket_log_fmt("fields->mystatus.fields.name: %08X\n", fields->mystatus.fields.name);
  memcpy(&fields->mystatus.fields.id, &buf[0x5A], sizeof(DPData::MYSTATUS_Fields) - sizeof(struct System_String_o * ));
  memcpy(&fields->playtime, &buf[0x90], 0x004);
  
  socket_log_fmt("photoDatas: %08X\n", fields->contestdata.fields.photoDatas);
  for (int i = 0; i < PHOTO_MAX; i++)
  {
    DPData::CON_PHOTO_DATA_Fields * photoFields = &fields->contestdata.fields.photoDatas->m_Items[i].fields;
    const int SIZE_CONTEST_PHOTO = 0x16C;
    const int SIZE_FX_DATA = 0x28;
    size_t offset = 0x94 + (i * SIZE_CONTEST_PHOTO);
    memcpy(&photoFields->fxDatas->m_Items, &buf[offset], sizeof(DPData::CON_PHOTO_FX_DATA_Fields) * PHOTO_MAX);
    offset += (SIZE_FX_DATA * PHOTO_MAX);
    photoFields->nickname = System::String::CtorCharPtr((uint16_t *) &buf[offset]);
    offset += 0x1C;
    memcpy(&photoFields->camPositionX, &buf[offset], sizeof(DPData::CON_PHOTO_DATA_Fields) - sizeof(DPData::CON_PHOTO_FX_DATA_array *) - sizeof(System_String_o * ));
    // TODO: Fix serialization not updating offset correctly
    offset += sizeof(DPData::CON_PHOTO_DATA_Fields) - sizeof(DPData::CON_PHOTO_FX_DATA_array *) - sizeof(System_String_o * );
  }

  memcpy(&fields->contestdata.fields.contestRankPoint, &buf[0x7b0], sizeof(uint32_t));
  return true;
}

bool deserializeZukanWork(uint8_t * buf, DPData::ZUKAN_WORK_Fields * fields)
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

  memcpy(fields->get_status->m_Items, &buf[0x0000], sizeof(int32_t) * COUNT_SPECIES);
  memcpy(fields->male_color_flag->m_Items, &buf[0x07b4], sizeof(bool) * COUNT_SPECIES);
  memcpy(fields->female_color_flag->m_Items, &buf[0x0f68], sizeof(bool) * COUNT_SPECIES);
  memcpy(fields->male_flag->m_Items, &buf[0x171c], sizeof(bool) * COUNT_SPECIES);
  memcpy(fields->female_flag->m_Items, &buf[0x1ed0], sizeof(bool) * COUNT_SPECIES);
  memcpy(fields->UnknownTurn->m_Items, &buf[0x2684], sizeof(bool) * COUNT_UNOWN);
  memcpy(fields->UnknownColor->m_Items, &buf[0x26f4], sizeof(bool) * COUNT_UNOWN);
  memcpy(fields->PowarunTurn->m_Items, &buf[0x2764], sizeof(bool) * COUNT_CASTFORM);
  memcpy(fields->PowarunColor->m_Items, &buf[0x2774], sizeof(bool) * COUNT_CASTFORM);
  memcpy(fields->DeokisisuTurn->m_Items, &buf[0x2784], sizeof(bool) * COUNT_DEOXYS);
  memcpy(fields->DeokisisuColor->m_Items, &buf[0x2794], sizeof(bool) * COUNT_DEOXYS);
  memcpy(fields->MinomuttiTurn->m_Items, &buf[0x27a4], sizeof(bool) * COUNT_BURMY);
  memcpy(fields->MinomuttiColor->m_Items, &buf[0x27b0], sizeof(bool) * COUNT_BURMY);
  memcpy(fields->MinomadamTurn->m_Items, &buf[0x27bc], sizeof(bool) * COUNT_WORMADAM);
  memcpy(fields->MinomadamColor->m_Items, &buf[0x27c8], sizeof(bool) * COUNT_WORMADAM);
  memcpy(fields->GaameiruTurn->m_Items, &buf[0x27d4], sizeof(bool) * COUNT_MOTHIM);
  memcpy(fields->GaameiruColor->m_Items,&buf[0x27e0],  sizeof(bool) * COUNT_MOTHIM);
  memcpy(fields->TherimuTurn->m_Items, &buf[0x27ec], sizeof(bool) * COUNT_CHERRIM);
  memcpy(fields->TherimuColor->m_Items, &buf[0x27f4], sizeof(bool) * COUNT_CHERRIM);
  memcpy(fields->KaranakusiTurn->m_Items, &buf[0x27fc], sizeof(bool) * COUNT_SHELLOS);
  memcpy(fields->KaranakusiColor->m_Items,&buf[0x2804],  sizeof(bool) * COUNT_SHELLOS);
  memcpy(fields->ToritodonTurn->m_Items, &buf[0x280c], sizeof(bool) * COUNT_GASTRODON);
  memcpy(fields->ToritodonColor->m_Items, &buf[0x2814],  sizeof(bool) * COUNT_GASTRODON);
  memcpy(fields->RotomTurn->m_Items, &buf[0x281c], sizeof(bool) * COUNT_ROTOM);
  memcpy(fields->RotomColor->m_Items, &buf[0x2834], sizeof(bool) * COUNT_ROTOM);
  memcpy(fields->GirathinaTurn->m_Items, &buf[0x284c], sizeof(bool) * COUNT_GIRATINA);
  memcpy(fields->GirathinaColor->m_Items, &buf[0x2854], sizeof(bool) * COUNT_GIRATINA);
  memcpy(fields->SheimiTurn->m_Items, &buf[0x285c], sizeof(bool) * COUNT_SHAYMIN);
  memcpy(fields->SheimiColor->m_Items, &buf[0x2864], sizeof(bool) * COUNT_SHAYMIN);
  memcpy(fields->AruseusuTurn->m_Items, &buf[0x286c], sizeof(bool) * COUNT_ARCEUS);
  memcpy(fields->AruseusuColor->m_Items, &buf[0x28b4], sizeof(bool) * COUNT_ARCEUS);
  memcpy(fields->TextVersionUp->m_Items, &buf[0x28fc], sizeof(int32_t) * COUNT_SPECIES);
  memcpy(&fields->zukan_get, &buf[0x30b0], 0x2);

  return true;
}

bool deserializeEncSvData(uint8_t * buf, DPData::ENC_SV_DATA_Fields * fields)
{
  memcpy(fields, &buf[0x000], 0xC);
  memcpy(&fields->HillBackData, &buf[0x00C], 0x8);
  // 21 honey trees
  memcpy(&fields->HoneyTree, &buf[0x014], 0x5);
  memcpy(&fields->HoneyTree.fields.HoneyData->m_Items, &buf[0x01C], sizeof(DPData::HONEY_DATA_Fields) * 21);
  memcpy(&fields->SwayGrassHist.fields.SwayGrassRec->m_Items, &buf[0x11C], sizeof(DPData::SWAY_GRASS_REC_Fields) * 3);
  memcpy(&fields->PlayerZoneHist, &buf[0x134], 0x8);
  memcpy(&fields->MovePokeData->m_Items, &buf[0x13C], sizeof(DPData::MV_POKE_DATA_Fields) * 2);
  memcpy(&fields->GenerateValid, &buf[0x17C], 0x7);

  return true;
}

bool deserializeBallDecoData(uint8_t * buf, Dpr::BallDeco::SaveBallDecoData_Fields * fields)
{
  const int COUNT_CAPSULE = 99;
  const int COUNT_SEAL = 20;

  const int AFFIX_SEAL_SIZE = 8;
  const int SEAL_CAPSULE_SIZE = 12 + (COUNT_SEAL * AFFIX_SEAL_SIZE);

  memcpy(&fields->CapsuleCount, &buf[0], sizeof(uint8_t));
  for (int i = 0; i < COUNT_CAPSULE; i++)
  {
    Dpr::BallDeco::CapsuleData_Fields * capsuleData = &fields->CapsuleDatas->m_Items[i].fields; 
    size_t offset = 4 + (i * SEAL_CAPSULE_SIZE);
    // Copy leading fields
    memcpy(capsuleData, &buf[offset], sizeof(Dpr::BallDeco::CapsuleData_Fields) - sizeof(Dpr::BallDeco::AffixSealData_array*));
    for (int j = 0; j < COUNT_SEAL; j++)
    {
      Dpr::BallDeco::AffixSealData_Fields * affixSealData = &capsuleData->AffixSealDatas->m_Items[j].fields;
      size_t offsetSeal = offset + 12 + (j * AFFIX_SEAL_SIZE);
      memcpy(affixSealData, &buf[offsetSeal], sizeof(Dpr::BallDeco::AffixSealData_Fields));
    }
  }

  return true;
}

bool deserializeSaveSeal(uint8_t * buf, Dpr::BallDeco::SaveSealData_o * saveSealArray)
{
  const int SealMaxCount = 99;
  memcpy(saveSealArray, &buf[0], SealMaxCount * sizeof(Dpr::BallDeco::SaveSealData_o));
  return true;
}

bool deserializeRandomGroup(uint8_t * buf, DPData::_RANDOM_GROUP_Fields * fields)
{
  const int COUNT_GROUP = 12;
  const int GROUP_NAME_SIZE = 16; // chars
  const int PERSON_NAME_SIZE = 32; // chars
  DPData::RANDOM_SEED_o * randomSeedArray = &fields->group->m_Items[0];

  for (int i = 0; i < COUNT_GROUP; i++)
  {
    DPData::RANDOM_SEED_Fields * randomSeed = &randomSeedArray[0].fields;
    size_t offset = (i * 0x84); // 0x84 size
    memcpy(&randomSeed->group_name->fields.m_firstChar, &buf[offset], GROUP_NAME_SIZE * 2);
    offset += GROUP_NAME_SIZE * 2;
    memcpy(&randomSeed->name->fields.m_firstChar, &buf[offset], PERSON_NAME_SIZE * 2);
    offset += PERSON_NAME_SIZE * 2;
    memcpy(&randomSeed->sex, &buf[offset], sizeof(DPData::RANDOM_SEED_o) - (sizeof(struct System_String_o*) * 2));
  }

  return true;
}

bool deserializeKinomiGrowSaveData(uint8_t * buf, DPData::KinomiGrowSaveData_Fields * fields)
{
  const int KinomiGrowsCount = 128;
  memcpy(&fields->kinomiGrows->m_Items, &buf[0x000], KinomiGrowsCount * sizeof(DPData::KinomiGrow_o));
  memcpy(&fields->LastUpdateMinutes, &buf[0x800], 0x8);

  return true;
}

// TODO: Fix serialization
bool deserializePoffinSaveData(uint8_t * buf, DPData::PoffinSaveData_Fields * fields)
{
  const int COUNT_POFFIN = 100;
  const int SIZE_POFFIN = 100;


  socket_log_fmt("&fields->Poffins->m_Items: %08X", &fields->Poffins->m_Items);
  for (int i = 0; i < COUNT_POFFIN; i++)
  {
    DPData::PoffinData_Fields * poffinData = &fields->Poffins->m_Items[i].fields;
    size_t offset = (i * SIZE_POFFIN);
    memcpy(poffinData, &buf[offset],  sizeof(DPData::PoffinData_Fields) - sizeof(System_Byte_array* ));
    System_Byte_array * Flavor = (System_Byte_array *) system_array_new(System_Byte_array_typeInfo, 5);
    poffinData->Flavor = Flavor;
    memcpy(&poffinData->Flavor->m_Items, &buf[offset+0x8], 0x5); // 5 Flavors
  }

  memcpy(&fields->CookingCount, &buf[0x640], sizeof(int32_t));
  return true;
}

bool deserializeBtlTowerSave(uint8_t * buf, DPData::BTLTOWER_SAVEWORK_Fields * fields)
{
  size_t offset = 0;
  memcpy(&fields->max_master_rank, &buf[offset], sizeof(uint32_t));
  offset += sizeof(uint32_t);
  memcpy(&fields->play_mode, &buf[offset], sizeof(int32_t));
  offset += sizeof(int32_t);
  memcpy(&fields->old_playmode, &buf[offset], sizeof(int32_t));
  offset += sizeof(int32_t); 
  memcpy(&fields->btl_point, &buf[offset], sizeof(uint32_t));
  offset += sizeof(uint32_t);
  memcpy(&fields->day_challeng_cnt, &buf[offset], sizeof(uint32_t));
  offset += sizeof(uint32_t);

  const int COUNT_CLASSDATA = 4;
  const int COUNT_TRAINER_RANDOM = 6;
  for (int i = 0; i < COUNT_CLASSDATA; i++)
  {
    DPData::BTLTOWER_CLASSDATA_Fields * classData = &fields->class_data->m_Items[i].fields;
    memcpy(&classData->clear_flag, &buf[offset], sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&classData->suspension_flag, &buf[offset], sizeof(bool));
    offset += sizeof(bool);
    memcpy(&classData->btl_play_rand_seed, &buf[offset], sizeof(uint64_t));
    offset += sizeof(uint64_t); 
    memcpy(&classData->rank, &buf[offset], sizeof(uint32_t));
    offset += sizeof(uint32_t);
    memcpy(&classData->rank_down_lose, &buf[offset], sizeof(uint32_t));
    offset += sizeof(uint32_t);
    memcpy(&classData->tower_round, &buf[offset], sizeof(int32_t));
    offset += sizeof(int32_t);
    
    memcpy(&classData->trainer_random->m_Items, &buf[offset], sizeof(uint64_t) * COUNT_TRAINER_RANDOM);
    offset += sizeof(uint64_t) * COUNT_TRAINER_RANDOM;
    
    memcpy(&classData->total_wins, &buf[offset], sizeof(uint32_t));
    offset += sizeof(int32_t);
    memcpy(&classData->total_wins_loop, &buf[offset], sizeof(uint32_t));
    offset += sizeof(int32_t); 
    memcpy(&classData->total_lose, &buf[offset], sizeof(uint32_t));
    offset += sizeof(uint32_t);
    memcpy(&classData->old_renshou_cnt, &buf[offset], sizeof(uint32_t));
    offset += sizeof(uint32_t);
    memcpy(&classData->renshou_cnt, &buf[offset], sizeof(uint32_t));
    offset += sizeof(uint32_t);
  }

  memcpy(&fields->challenge_cnt, &buf[offset], sizeof(uint32_t));
  offset += sizeof(uint32_t);

  return true;
}

bool deserializeBoxData(uint8_t * buf, Dpr::Box::SaveBoxData_Fields * fields)
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
    memcpy(&trayNameWrapper->str->fields.m_firstChar, &buf[offset], LongStringLength);
    offset += LongStringLength;
  }

  for (int i = 0; i < TeamCount; i++)
  {
    Dpr::Box::SaveBoxData__STR11_Fields * teamNameWrapper = &fields->teamName->m_Items[i].fields;
    memcpy(&teamNameWrapper->str->fields.m_firstChar, &buf[offset], TeamNameLength);
    offset += TeamNameLength;
  }

  memcpy(&fields->teamPos->m_Items, &buf[offset], (TeamCount * TeamSlotCount) * sizeof(uint16_t));
  offset += (TeamCount * TeamSlotCount) * sizeof(uint16_t);
  memcpy(&fields->teamLock, &buf[offset], sizeof(uint8_t));
  offset += sizeof(uint8_t);
  memcpy(&fields->trayMax, &buf[offset], sizeof(uint8_t));
  offset += sizeof(uint8_t);
  memcpy(&fields->currentTray, &buf[offset], sizeof(uint8_t));
  offset += sizeof(uint8_t);
  memcpy(&fields->isOpened, &buf[offset], sizeof(bool));
  offset += sizeof(bool);
  memcpy(&fields->wallPaper->m_Items, &buf[offset], (COUNT_BOX) * sizeof(uint8_t));
  offset += (COUNT_BOX) * sizeof(uint8_t);
  memcpy(&fields->statusPut, &buf[offset], sizeof(uint16_t));
  offset += sizeof(uint16_t);

  return true;
}

bool deserializeBoxTray(uint8_t * buf, Dpr::Box::SaveBoxTrayData_o * boxTray)
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
      memcpy(&boxPoke->buffer->m_Items, &buf[offset], 0x158);
      offset += 0x158;
    }
  }
  return true;
}

bool deserializeSystemData(uint8_t * buf, DPData::SYSTEMDATA_Fields * fields)
{
  size_t offset = 0;
  memcpy(&fields->StartTime, &buf[offset], sizeof(DPData::GMTIME_o) * 4);
  offset += (sizeof(DPData::GMTIME_o) * 4) + 4; // Not sure why the original adds an extra 4 bytes *shrug*
  fields->nxSnapshot = (System_Byte_array *) system_array_new(System_Byte_array_typeInfo, 0xD0);
  socket_log_fmt("fields->nxSnapshot: %08X", fields->nxSnapshot);
  memcpy(&fields->nxSnapshot->m_Items, &buf[offset], 0xD0);
  offset += 0xD0; 
  memcpy(&fields->fd_bgmEvnet, &buf[offset], sizeof(uint32_t));
  offset += sizeof(uint32_t);
  memcpy(&fields->reserved_long0, &buf[offset], sizeof(uint64_t) * 6);
  offset += sizeof(uint64_t) * 6;

  return true;
}

bool deserializePoketchData(uint8_t * buf, DPData::POKETCH_DATA_Fields * fields)
{
  const int APP_REGIST_MAX = 20; // bool array unlock flags
  const int POKETCH_MAP_MARK_MAX = 6; // mark_map_pos[6]
  const int POKETCH_DOTART_DATA_BYTESIZE = 192; // dotart data bytes
  const int POKETCH_POKE_HISTORY_COUNT_MAX = 12; // poke_history[12]
  const int POKETCH_PEDOMETER_MAX = 99999;
  const int POKETCH_CALENDER_MONTH_MAX = 12; // calendar markbit uint[12]

  size_t offset = 0;
  memcpy(&fields->get_flag, &buf[offset], sizeof(bool));
  offset += sizeof(bool);
  memcpy(&fields->pedometer_flag, &buf[offset], sizeof(bool));
  offset += sizeof(bool);
  memcpy(&fields->dotart_modified_flag, &buf[offset], sizeof(bool));
  offset += sizeof(bool); 
  memcpy(&fields->color_type, &buf[offset], sizeof(uint32_t));
  offset += sizeof(uint32_t);
  memcpy(&fields->app_count, &buf[offset], sizeof(int8_t));
  offset += sizeof(int8_t);
  memcpy(&fields->app_index, &buf[offset], sizeof(int8_t));
  offset += sizeof(int8_t);
  socket_log_fmt("fields->app_flag: %08X", fields->app_flag);
  memcpy(&fields->app_flag->m_Items, &buf[offset], sizeof(bool) * APP_REGIST_MAX);
  offset += sizeof(bool) * APP_REGIST_MAX;
  memcpy(&fields->pedometer, &buf[offset], sizeof(uint32_t));
  offset += sizeof(uint32_t);
  socket_log_fmt("fields->dotart_data: %08X", fields->dotart_data);
  memcpy(&fields->dotart_data->m_Items, &buf[offset], sizeof(uint8_t) * POKETCH_DOTART_DATA_BYTESIZE);
  offset += sizeof(uint8_t) * POKETCH_DOTART_DATA_BYTESIZE; 
  socket_log_fmt("fields->calendar_markbit: %08X", fields->calendar_markbit);
  memcpy(&fields->calendar_markbit->m_Items, &buf[offset], sizeof(uint32_t) * POKETCH_CALENDER_MONTH_MAX);
  offset += sizeof(uint32_t) * POKETCH_CALENDER_MONTH_MAX; 
  socket_log_fmt("fields->mark_map_pos: %08X", fields->mark_map_pos);
  memcpy(&fields->mark_map_pos->m_Items, &buf[offset], sizeof(DPData::MARK_MAP_POS_o) * POKETCH_MAP_MARK_MAX);
  offset += sizeof(DPData::MARK_MAP_POS_o) * POKETCH_MAP_MARK_MAX; 

  DPData::POKETCH_POKE_HISTORY_array * poke_history = (DPData::POKETCH_POKE_HISTORY_array *) system_array_new(DPData::POKETCH_POKE_HISTORY_Array_TypeInfo, POKETCH_POKE_HISTORY_COUNT_MAX);
  fields->poke_history = poke_history;
  socket_log_fmt("fields->poke_history: %08X", fields->poke_history);
  memcpy(&fields->poke_history->m_Items, &buf[offset], sizeof(DPData::POKETCH_POKE_HISTORY_o) * POKETCH_POKE_HISTORY_COUNT_MAX);
  offset += sizeof(DPData::POKETCH_POKE_HISTORY_o) * POKETCH_POKE_HISTORY_COUNT_MAX; 
  return true;
}

bool deserializeDaycare(uint8_t * buf, AzukariyaData_Fields * fields)
{
  Pml::PokePara::SerializedPokemonFull_array * pokemonParam = (Pml::PokePara::SerializedPokemonFull_array *) system_array_new(Pml::PokePara::SerializedPokemonFull_array_TypeInfo, 2); 
  fields->pokemonParam = pokemonParam;
  fields->pokemonParam->m_Items[0].fields.buffer = (System_Byte_array *) system_array_new(System_Byte_array_typeInfo, 0x158);
  fields->pokemonParam->m_Items[1].fields.buffer = (System_Byte_array *) system_array_new(System_Byte_array_typeInfo, 0x158);
  memcpy(&fields->pokemonParam->m_Items[0].fields.buffer->m_Items[0], &buf[0x000], SIZE_8PARTY); 
  memcpy(&fields->pokemonParam->m_Items[1].fields.buffer->m_Items[0], &buf[0x158], SIZE_8PARTY); 
  memcpy(&fields->eggExist, &buf[0x2b0], 0xD); 

  return true;
}

bool deserializeDendou(uint8_t * buf, DPData::_DENDOU_SAVEDATA_Fields * fields)
{
  size_t offset = 0;
  
  fields->record = (DPData::DENDOU_RECORD_array *) system_array_new(DPData::DENDOU_RECORD_Array_TypeInfo, 30);
  socket_log_fmt("fields->record: %08X\n", fields->record);
  socket_log_fmt("fields->record->max_length: %08X\n", fields->record->max_length);
  for (int i = 0; i < 30; i++)
  {
    DPData::DENDOU_RECORD_Fields * record = &fields->record->m_Items[i].fields;
    record->pokemon = (DPData::DENDOU_POKEMON_DATA_INSIDE_array *) system_array_new(DPData::DENDOU_POKEMON_DATA_INSIDE_Array_TypeInfo, 6);
    for (int j = 0; j < 6; j++)
    {
      DPData::DENDOU_POKEMON_DATA_INSIDE_Fields * inside = &record->pokemon->m_Items[j].fields;
      memcpy(&inside->monsno, &buf[offset], sizeof(uint32_t));
      offset += sizeof(uint32_t);
      memcpy(&inside->level, &buf[offset],  sizeof(uint8_t));
      offset += sizeof(uint8_t);
      memcpy(&inside->formNumber, &buf[offset], sizeof(uint16_t));
      offset += sizeof(uint16_t);
      memcpy(&inside->personalRandom, &buf[offset], sizeof(uint32_t));
      offset += sizeof(uint32_t);
      memcpy(&inside->idNumber, &buf[offset], sizeof(uint32_t));
      offset += sizeof(uint32_t);
      memcpy(&inside->sex, &buf[offset], sizeof(int32_t));
      offset += sizeof(int32_t);
      memcpy(&inside->rareType, &buf[offset], sizeof(int32_t));
      offset += sizeof(int32_t);
      inside->nickname = System::String::CtorCharPtr((uint16_t *) &buf[offset]);
      offset += 0x1A;
      inside->oyaname = System::String::CtorCharPtr((uint16_t *) &buf[offset]);
      offset += 0x1A;
      inside->waza = (System_UInt16_array *) system_array_new(System_UInt16_array_TypeInfo, 4);
      memcpy(&inside->waza->m_Items, &buf[offset], sizeof(uint16_t) * 4);
      offset += sizeof(uint16_t) * 4;
    }
    memcpy(&record->time, &buf[offset], sizeof(DPData::GMTIME_o));
    offset += sizeof(DPData::GMTIME_o);
  }

  return true;
}

bool deserializeUgSaveData(uint8_t * buf, DPData::UgSaveData_Fields * fields)
{
  const int COUNT_DIGPOINTS = 10;
  const int COUNT_ENCOUNTERS = 15;
  const int COUNT_FRIENDS = 100; // 100 total with Friends+Others, savedata ctor allocates 100 for FriendPlayerList
  const int COUNT_OTHERS = 0; // unused
  const int COUNT_TRAINERS = 100;

  size_t offset = 0;
  memcpy(&fields->ReturnZoneID, &buf[offset], sizeof(int32_t));
  offset += sizeof(int32_t);
  memcpy(&fields->ReturnGridPosX, &buf[offset], sizeof(int32_t));
  offset += sizeof(int32_t);  
  memcpy(&fields->ReturnPosY, &buf[offset], sizeof(int32_t));
  offset += sizeof(int32_t);  
  memcpy(&fields->ReturnGridPosZ, &buf[offset], sizeof(int32_t));
  offset += sizeof(int32_t);
  memcpy(&fields->ReturnZenmetsu_Ground, &buf[offset], sizeof(DPData::LOCATION_WORK_o));
  offset += sizeof(DPData::LOCATION_WORK_o);
  memcpy(&fields->DigPoints->m_Items, &buf[offset], sizeof(DPData::DigPos_o) * COUNT_DIGPOINTS);
  offset += sizeof(DPData::DigPos_o) * COUNT_DIGPOINTS;


  Pml::PokePara::SerializedPokemonFull_array * EncountPokes = (Pml::PokePara::SerializedPokemonFull_array *) system_array_new(Pml::PokePara::SerializedPokemonFull_array_TypeInfo, COUNT_ENCOUNTERS); 
  fields->EncountPokes = EncountPokes;
  for (int i = 0; i < COUNT_ENCOUNTERS; i++)
  {
    Pml::PokePara::SerializedPokemonFull_Fields * encountPoke = &fields->EncountPokes->m_Items[i].fields;
    encountPoke->buffer = (System_Byte_array *) system_array_new(System_Byte_array_typeInfo, 0x158);
    memcpy(&encountPoke->buffer->m_Items, &buf[offset], 0x158);
    offset += 0x158;
  }

  fields->EncountPokePositions = (UnityEngine_Vector3_array *) system_array_new(UnityEngine_Vector3_Array_TypeInfo, COUNT_ENCOUNTERS);
  socket_log_fmt("ugSaveData->EncountPokePositions: %08X\n", fields->EncountPokePositions);
  memcpy(&fields->EncountPokePositions->m_Items, &buf[offset], sizeof(UnityEngine_Vector3_o) * COUNT_ENCOUNTERS);
  offset += sizeof(UnityEngine_Vector3_o) * COUNT_ENCOUNTERS;
  socket_log_fmt("ugSaveData->ReturnUgZoneID\n");
  memcpy(&fields->ReturnUgZoneID, &buf[offset], sizeof(int32_t));
  offset += sizeof(int32_t);

  // ugRecord
  socket_log_fmt("ugSaveData->ugRecord\n");
  const int MAX_STONE_STATUE = 30;
  memcpy(&fields->ugRecord.fields.talkPlayerDataID, &buf[offset], sizeof(uint32_t));
  offset += sizeof(uint32_t);
  memcpy(&fields->ugRecord.fields.talkPlayerCount, &buf[offset], sizeof(uint32_t));
  offset += sizeof(uint32_t);
  // ugRecord.myBase (UgSecretBase)
  socket_log_fmt("ugSaveData->ugRecord.myBase\n");
  DPData::UgSecretBase_Fields * myBase = &fields->ugRecord.fields.myBase.fields;
  memcpy(&myBase->zoneID, &buf[offset], sizeof(int16_t));
  offset += sizeof(int16_t);
  memcpy(&myBase->posX, &buf[offset], sizeof(int16_t));
  offset += sizeof(int16_t);
  memcpy(&myBase->posY, &buf[offset], sizeof(int16_t));
  offset += sizeof(int16_t);
  memcpy(&myBase->direction, &buf[offset], sizeof(uint8_t));
  offset += sizeof(uint8_t);
  memcpy(&myBase->expansionStatus, &buf[offset], sizeof(uint8_t));
  offset += sizeof(uint8_t);
  memcpy(&myBase->goodCount, &buf[offset], sizeof(int32_t));
  offset += sizeof(int32_t);
  myBase->ugStoneStatue = (DPData::UgStoneStatue_array * ) system_array_new(DPData::UgStoneStatue_Array_TypeInfo, MAX_STONE_STATUE);
  memcpy(&myBase->ugStoneStatue->m_Items[0], &buf[offset], sizeof(DPData::UgStoneStatue_o) * MAX_STONE_STATUE);
  offset += sizeof(DPData::UgStoneStatue_o) * MAX_STONE_STATUE;
  memcpy(&myBase->isEnable, &buf[offset], sizeof(bool));
  offset += sizeof(bool);


  fields->FriendPlayerList = (DPData::UgPlayerInfo_array *) system_array_new(DPData::UgPlayerInfo_Array_TypeInfo, COUNT_FRIENDS);
  for (int i = 0; i < COUNT_FRIENDS; i++)
  {
    DPData::UgPlayerInfo_Fields * friendPlayer = &fields->FriendPlayerList->m_Items[i].fields;
    friendPlayer->name = System::String::CtorCharPtr((uint16_t * ) &buf[offset]);
    offset += sizeof(uint16_t) * 13;
    memcpy(&friendPlayer->id, &buf[offset], sizeof(int32_t));
    offset += sizeof(int32_t);
    memcpy(&friendPlayer->langID, &buf[offset], sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&friendPlayer->sex, &buf[offset], sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&friendPlayer->avatorID, &buf[offset], sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&friendPlayer->isPreset, &buf[offset], sizeof(bool));
    offset += sizeof(bool);
  }
  // OtherPlayerList = unused

  System_Byte_array * TalkedNPCsID = (System_Byte_array *) system_array_new(System_Byte_array_typeInfo, COUNT_TRAINERS);
  fields->TalkedNPCsID = TalkedNPCsID;
  socket_log_fmt("fields->TalkedNPCsID: %08X\n", fields->TalkedNPCsID);
  memcpy(&fields->TalkedNPCsID->m_Items, &buf[offset], sizeof(uint8_t) * COUNT_TRAINERS);
  offset += sizeof(uint8_t) * COUNT_TRAINERS;

  return true;
}

bool deserializeGmsdata(uint8_t * buf, DPData::GMS_DATA_Fields * fields)
{
  size_t offset = 0;
  fields->pointDatas = (DPData::GMS_POINT_DATA_array *) system_array_new(DPData::GMS_POINT_DATA_Array_TypeInfo, 650);
  socket_log_fmt("fields->pointDatas: %08X\n", fields->pointDatas);
  for (int i = 0; i < 650; i++)
  {
    DPData::GMS_POINT_DATA_Fields * pointData = &fields->pointDatas->m_Items[i].fields;
    pointData->historyDatas = (DPData::GMS_POINT_HISTORY_DATA_array *) system_array_new(DPData::GMS_POINT_HISTORY_DATA_Array_TypeInfo, 5);
    for (int j = 0; j < 5; j++)
    {
      DPData::GMS_POINT_HISTORY_DATA_Fields * pointHistory = &pointData->historyDatas->m_Items[j].fields;
      pointHistory->receiveMonsNickname = System::String::CtorCharPtr((uint16_t * ) &buf[offset]);
      offset += 0x1A;
      pointHistory->receiveParentName = System::String::CtorCharPtr((uint16_t * ) &buf[offset]);
      offset += 0x1A;
      memcpy(&pointHistory->sendMonsNo, &buf[offset], sizeof(uint16_t));
      offset += sizeof(uint16_t);
      memcpy(&pointHistory->receiveMonsNo, &buf[offset], sizeof(uint16_t));
      offset += sizeof(uint16_t);
      memcpy(&pointHistory->year, &buf[offset], sizeof(uint16_t));
      offset += sizeof(uint16_t);
      memcpy(&pointHistory->month, &buf[offset], sizeof(uint8_t));
      offset += sizeof(uint8_t);
      memcpy(&pointHistory->day, &buf[offset], sizeof(uint8_t));
      offset += sizeof(uint8_t);
      memcpy(&pointHistory->sendMonsFormNo, &buf[offset], sizeof(uint8_t));
      offset += sizeof(uint8_t);
      memcpy(&pointHistory->sendMonsSex, &buf[offset], sizeof(uint8_t));
      offset += sizeof(uint8_t);
      memcpy(&pointHistory->receiveMonsFormNo, &buf[offset], sizeof(uint8_t));
      offset += sizeof(uint8_t);
      memcpy(&pointHistory->receiveMonsSex, &buf[offset], sizeof(uint8_t));
      offset += sizeof(uint8_t);
      memcpy(&pointHistory->receiveMonsLanguage, &buf[offset], sizeof(uint8_t));
      offset += sizeof(uint8_t);
      memcpy(&pointHistory->receiveMonsParentLanguage, &buf[offset], sizeof(uint8_t));
      offset += sizeof(uint8_t);
    }
  }

  memcpy(&fields->tradeListIndex, &buf[offset], sizeof(uint16_t));
  offset += sizeof(uint16_t);
  memcpy(&fields->browsingListIndex, &buf[offset], sizeof(uint16_t));
  offset += sizeof(uint16_t);
  memcpy(&fields->achievementStep, &buf[offset], sizeof(uint8_t));
  offset += sizeof(uint8_t);

  return true;
}

bool deserializeNetworkdata(uint8_t * buf, DPData::PLAYER_NETWORK_DATA_Fields * fields)
{
  size_t offset = 0;
  // TODO: Add logging to the serialization to figure out correct length of arrays
  fields->publicKeyBASE64 = (System_Byte_array * ) system_array_new(System_Byte_array_typeInfo, 0x20);
  memcpy(&fields->publicKeyBASE64->m_Items, &buf[offset], sizeof(uint8_t) * 0x20);
  offset += sizeof(uint8_t) * 0x20;
  fields->bcatFlagArray = (System_Byte_array * ) system_array_new(System_Byte_array_typeInfo, 0x20);
  memcpy(&fields->bcatFlagArray->m_Items, &buf[offset], sizeof(uint8_t) * 0x514);
  offset += sizeof(uint8_t) * 0x514;
  memcpy(&fields->nexUniqueId, &buf[offset], sizeof(uint64_t));
  offset += sizeof(uint64_t);
  memcpy(&fields->nexUniqueIdPassword, &buf[offset], sizeof(uint64_t));
  offset += sizeof(uint64_t);
  memcpy(&fields->publicKeyversion, &buf[offset], sizeof(uint64_t));
  offset += sizeof(uint64_t);
  return true;
}

bool deserializeZukanPersonalRndData(uint8_t * buf, DPData::ZUKAN_PERSONAL_RND_DATA_Fields * fields)
{
  memcpy(&fields->PattiiruSeePersonalRnds->m_Items, &buf[0x0], 0x10);
  memcpy(&fields->PattiiruGetPersonalRnds->m_Items, &buf[0x10], 0x10);
  // Ignore reserved

  return true;
}

bool deserializeContestPhotoExtData(uint8_t * buf, DPData::CON_PHOTO_EXT_DATA_o * array)
{
  size_t offset = 0;
  socket_log_fmt("contestPhotoExtData: %08X\n", array);
  for (int i = 0; i < 5; i++)
  {
    array[i].fields.nickname = System::String::CtorCharPtr((uint16_t * ) &buf[offset]);
    offset += 0x1A;
    memcpy(&array[i].fields.reserved_ushort01, &buf[offset], sizeof(uint16_t));
    offset += sizeof(uint16_t);
    memcpy(&array[i].fields.reserved_int01, &buf[offset], sizeof(int32_t));
    offset += sizeof(int32_t);
  }
  return true;
}

bool deserializeGmsPointExtData(uint8_t * buf, DPData::GMS_POINT_HISTORY_EXT_DATA_o * array)
{
  size_t offset = 0;
  socket_log_fmt("GmsPointExtData: %08X\n", array);
  for (int i = 0; i < 5; i++)
  {
    array[i].fields.receiveMonsNickname = System::String::CtorCharPtr((uint16_t * ) &buf[offset]);
    offset += 0x1A;
    memcpy(&array[i].fields.reserved_ushort01, &buf[offset], sizeof(uint16_t));
    offset += sizeof(uint16_t);
    memcpy(&array[i].fields.reserved_int01, &buf[offset], sizeof(int32_t));
    offset += sizeof(int32_t);
  }
  return true;
}

bool deserializeReBuffNameData(uint8_t * buf, RE_DENDOU_RECORD_o * array)
{
  size_t offset = 0;
  socket_log_fmt("ReBuffNameData: %08X\n", array);
  socket_log_fmt("RE_DENDOU_POKEMON_DATA_INSIDE_Array_TypeInfo: %08X\n", RE_DENDOU_POKEMON_DATA_INSIDE_Array_TypeInfo);
  for (int i = 0; i < 30; i++)
  {
    array[i].fields.pokemon = (RE_DENDOU_POKEMON_DATA_INSIDE_array *) system_array_new(RE_DENDOU_POKEMON_DATA_INSIDE_Array_TypeInfo, 6);
    for (int j = 0; j < 6; j++)
    {
      RE_DENDOU_POKEMON_DATA_INSIDE_Fields * inside = &array[i].fields.pokemon->m_Items[j].fields;
      inside->nickname = System::String::CtorCharPtr((uint16_t * ) &buf[offset]);
      offset += 0x1A;
      memcpy(&inside->reserved_short01, &buf[offset], sizeof(int16_t));
      offset += sizeof(int16_t);
      memcpy(&inside->reserved_int01, &buf[offset], sizeof(int32_t));
      offset += sizeof(int32_t);
    }
  }
  return true;
}

bool deserializeRecordAddData(uint8_t * buf, DPData::RECORD_ADD_DATA_Fields * fields)
{
  const int COUNT_RECORD_ADD = 12;
  const int COUNT_RECORD_RANKING = 12;
  const int COUNT_RECORD_RANKING_FLAG = 32;

  socket_log_fmt("fields->head: %08X", fields->head);
  size_t offset = 0;
  for (int i = 0; i < COUNT_RECORD_ADD; i++)
  {
    DPData::RECORD_HEAD_Fields * recordHead = &fields->head->m_Items[i].fields;
    recordHead->username = System::String::CtorCharPtr((uint16_t * ) &buf[offset]);   
    offset += 0x1A;
    memcpy(&recordHead->reserved_byte1, &buf[offset], sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&recordHead->reserved_byte2, &buf[offset], sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&recordHead->language, &buf[offset], sizeof(int32_t));
    offset += sizeof(int32_t);
    memcpy(&recordHead->sex, &buf[offset], sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&recordHead->reserved_byte4, &buf[offset], sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&recordHead->reserved_byte5, &buf[offset], sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&recordHead->reserved_byte6, &buf[offset], sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&recordHead->body_type, &buf[offset], sizeof(int32_t));
    offset += sizeof(int32_t);
    memcpy(&recordHead->uniqueID, &buf[offset], sizeof(uint32_t));
    offset += sizeof(uint32_t);
    memcpy(&recordHead->reserved_int2, &buf[offset], sizeof(int32_t));
    offset += sizeof(int32_t);
  }
  
  socket_log_fmt("fields->rankingFlag: %08X", fields->rankingFlag);
  for (int i = 0; i < COUNT_RECORD_RANKING; i++)
  {
    System_Byte_array * activeFlag = (System_Byte_array *) system_array_new(System_Byte_array_typeInfo, 32);
    fields->rankingFlag->m_Items[i].fields.activeFlag = activeFlag;
    memcpy(&activeFlag->m_Items[0], &buf[offset], sizeof(uint8_t) * 32);
    offset += sizeof(uint8_t) * 32;
  }

  return true;
}

bool deserializeMysteryGiftSaveData(uint8_t * buf, DPData::MysteryGiftSaveData_Fields * fields)
{
  const int RecvDataMax = 50;
  const int OneDayMax = 10;
  const int SerialDataNoMax = 895;
  const int ReserveSize = 66;
  const int FlagSize = 0x100;

  fields->recvDatas = (DPData::MysteryGift_RecvData_array *) system_array_new(DPData::MysteryGift_RecvData_Array_TypeInfo, RecvDataMax);
  socket_log_fmt("fields->recvDatas: %08X\n", fields->recvDatas);
  socket_log_fmt("fields->recvDatas->max_length: %08X\n", fields->recvDatas->max_length);
  size_t offset = 0;
  for (int i = 0; i < RecvDataMax; i++)
  {
    DPData::MysteryGift_RecvData_Fields * recvData = &fields->recvDatas->m_Items[i].fields;
    memcpy(&recvData->timestamp, &buf[offset], sizeof(int64_t));
    offset += sizeof(int64_t);
    memcpy(&recvData->deliveryId, &buf[offset], sizeof(uint16_t));
    offset += sizeof(uint16_t);
    memcpy(&recvData->textId, &buf[offset], sizeof(uint16_t));
    offset += sizeof(uint16_t);
    memcpy(&recvData->dataType, &buf[offset], sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&recvData->reserved_byte01, &buf[offset], sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&recvData->reserved_short01, &buf[offset], sizeof(int16_t));
    offset += sizeof(int16_t);
    // monsData
    memcpy(&recvData->monsData.fields.no, &buf[offset], sizeof(uint16_t));
    offset += sizeof(uint16_t);
    memcpy(&recvData->monsData.fields.form, &buf[offset], sizeof(uint16_t));
    offset += sizeof(uint16_t);
    memcpy(&recvData->monsData.fields.itemId, &buf[offset], sizeof(uint16_t));
    offset += sizeof(uint16_t);
    recvData->monsData.fields.wazaNos = (System_UInt16_array *) system_array_new(System_UInt16_array_TypeInfo, 4);
    memcpy(&recvData->monsData.fields.wazaNos->m_Items, &buf[offset], sizeof(uint16_t) * 4);
    offset += sizeof(uint16_t) * 4;
    recvData->monsData.fields.parentName = System::String::CtorCharPtr((uint16_t * ) &buf[offset]);   
    offset += 0x1A;

    memcpy(&recvData->monsData.fields.parentSex, &buf[offset], sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&recvData->monsData.fields.isEgg, &buf[offset], sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&recvData->monsData.fields.itemId, &buf[offset], sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&recvData->monsData.fields.twoRibbonId, &buf[offset], sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&recvData->monsData.fields.sex, &buf[offset], sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&recvData->monsData.fields.pokemonLangId, &buf[offset], sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&recvData->monsData.fields.reserved_byte01, &buf[offset], sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&recvData->monsData.fields.reserved_byte02, &buf[offset], sizeof(uint8_t));
    offset += sizeof(uint8_t);
    memcpy(&recvData->monsData.fields.reserved_byte03, &buf[offset], sizeof(uint8_t));
    offset += sizeof(uint8_t);
    // end monsDaRecvDataMaxta

    recvData->itemDatas = (DPData::MysteryGift_ItemInfo_array *) system_array_new(DPData::MysteryGift_ItemInfo_Array_TypeInfo, 7);
    memcpy(&recvData->itemDatas->m_Items, &buf[offset], sizeof(DPData::MysteryGift_ItemInfo_o) * 7);
    offset += sizeof(DPData::MysteryGift_ItemInfo_o) * 7;
    recvData->dressIds = (System_UInt32_array *) system_array_new(System_UInt32_array_TypeInfo, 7);
    memcpy(&recvData->dressIds->m_Items, &buf[offset], sizeof(uint32_t) * 7);
    offset += sizeof(uint32_t) * 7;

    memcpy(&recvData->moneyData, &buf[offset], sizeof(uint32_t));
    offset += sizeof(uint32_t);
    memcpy(&recvData->reserved_int01, &buf[offset], sizeof(int32_t));
    offset += sizeof(int32_t);
    memcpy(&recvData->reserved_int02, &buf[offset], sizeof(int32_t));
    offset += sizeof(int32_t);
    memcpy(&recvData->reserved_int03, &buf[offset], sizeof(int32_t));
    offset += sizeof(int32_t);
    memcpy(&recvData->reserved_int04, &buf[offset], sizeof(int32_t));
    offset += sizeof(int32_t);
  }

  System_Byte_array * receiveFlag = (System_Byte_array *) system_array_new(System_Byte_array_typeInfo, FlagSize);
  fields->receiveFlag = receiveFlag;
  socket_log_fmt("fields->receiveFlag: %08X\n", fields->receiveFlag);
  memcpy(&fields->receiveFlag->m_Items, &buf[offset], FlagSize * sizeof(uint8_t));
  offset += FlagSize * sizeof(uint8_t);
  fields->oneDayDatas = (DPData::MysteryGift_OneDayData_array *) system_array_new(DPData::MysteryGift_OneDayData_Array_TypeInfo, 7);
  socket_log_fmt("fields->oneDayDatas: %08X\n", fields->oneDayDatas);
  memcpy(&fields->oneDayDatas->m_Items, &buf[offset], OneDayMax * sizeof(DPData::MysteryGift_OneDayData_o));
  offset += OneDayMax * sizeof(DPData::MysteryGift_OneDayData_o);
  memcpy(&fields->serialLockTimestamp, &buf[offset], sizeof(int64_t));
  offset += sizeof(int64_t);
  // ignore ngFlag
  // ignore ngCounter
  // ignore reserved_ushorts
  // ignore reserve
  return true;
}

bool deserializeDendouSaveAdd(uint8_t * buf, DPData::DENDOU_SAVE_ADD_Fields * fields)
{
  const int ADD_POKE_MEMBER = 30;
  const int ADD_POKE = 6;

  size_t offset = 0;
  
  fields->data = (DPData::DENDOU_SAVE_ADD_POKE_MEMBER_array * ) system_array_new(DPData::DENDOU_SAVE_ADD_POKE_MEMBER_Array_TypeInfo, ADD_POKE_MEMBER);
  socket_log_fmt("fields->data: %08X\n", fields->data);
  for (int i = 0; i < ADD_POKE_MEMBER; i++)
  {
    DPData::DENDOU_SAVE_ADD_POKE_MEMBER_Fields * addPokeMember = &fields->data->m_Items[i].fields;
    addPokeMember->member = (DPData::DENDOU_SAVE_ADD_POKE_array *) system_array_new(DPData::DENDOU_SAVE_ADD_POKE_Array_TypeInfo, ADD_POKE);
    memcpy(&addPokeMember->member->m_Items, &buf[offset], sizeof(DPData::DENDOU_SAVE_ADD_POKE_o) * ADD_POKE);
    offset += sizeof(DPData::DENDOU_SAVE_ADD_POKE_o) * ADD_POKE;
  }

  return true;  
}

void deserializeTvData(uint8_t * buf, DPData::TV_DATA_Fields * fields)
{
  const char * filler = "\0\0";

  fields->UseRecord.fields.int_data = (System_Int32_array *) system_array_new(System_Int32_array_TypeInfo, 48);
  fields->UseRecord.fields.str_data = (DPData::TV_STR_DATA_array*) system_array_new(DPData::TV_STR_DATA_Array_TypeInfo, 42);
  for (int i = 0; i < 42; i++)
  {
    fields->UseRecord.fields.str_data->m_Items[i].fields.value = System::String::CtorCharPtr((uint16_t *) filler);
  }

  fields->MyRecord.fields.int_data = (System_Int32_array *) system_array_new(System_Int32_array_TypeInfo, 48);
  fields->MyRecord.fields.str_data = (DPData::TV_STR_DATA_array*) system_array_new(DPData::TV_STR_DATA_Array_TypeInfo, 42);
  for (int i = 0; i < 42; i++)
  {
    fields->MyRecord.fields.str_data->m_Items[i].fields.value = System::String::CtorCharPtr((uint16_t *) filler);
  }

  fields->UseTopic.fields.int_data = (System_Int32_array *) system_array_new(System_Int32_array_TypeInfo, 37);
  fields->UseTopic.fields.view_flag = (System_Boolean_array *) system_array_new(System_Boolean_array_TypeInfo, 37);

  fields->MyTopic.fields.int_data = (System_Int32_array *) system_array_new(System_Int32_array_TypeInfo, 37);
  fields->MyTopic.fields.view_flag = (System_Boolean_array *) system_array_new(System_Boolean_array_TypeInfo, 37);

  fields->InterviewerData.fields.program_data = (System_Int32_array *) system_array_new(System_Int32_array_TypeInfo, 8);
  fields->InterviewerData.fields.int_data = (System_Int32_array *) system_array_new(System_Int32_array_TypeInfo, 8);
  fields->InterviewerData.fields.str_data = (DPData::TV_STR_DATA_array*) system_array_new(DPData::TV_STR_DATA_Array_TypeInfo, 10);
  for (int i = 0; i < 10; i++)
  {
    fields->InterviewerData.fields.str_data->m_Items[i].fields.value = System::String::CtorCharPtr((uint16_t *) filler);
  }

  // TvWatchCount
  fields->TvWatchCount = 0;
}

// TODO: Move this out somewhere else
namespace il2cpp
{
  namespace vm
  {
    class MetadataCache
    {
    public:
      // 00050078
      static void IntializeMethodMetadataRange(int start,uint count,void **param_3,uint param_4);
    };
  }
}

// 04c348a0
extern void * s_GlobalMetadata;
// 04c348a8
extern void * s_GlobalMetadataHeader;
void mass_load_typeinfo(void * typeInfoData, uint count)
{
  uint64_t param_1 = (uint64_t) typeInfoData;
  int * puVar1;
  void *local_38;
  // uint64_t uStack48;
  // uint64_t local_28;
  
  // local_28 = 0;
  puVar1 = (int *)
           (s_GlobalMetadata + *(int *)(s_GlobalMetadataHeader + 0xb8) + ((param_1 & 0xffffffff) *  8))
  ;
  socket_log_fmt("puVar1: %08X", puVar1);
  socket_log_fmt("*puVar1: %08X", *puVar1);
  socket_log_fmt("puVar[1]: %08X", puVar1[1]);
  socket_log_fmt("il2cpp::vm::MetadataCache::IntializeMethodMetadataRange: %08X", &il2cpp::vm::MetadataCache::IntializeMethodMetadataRange);
  // local_38 = (void *)0x0;
  // uStack48 = 0;
  il2cpp::vm::MetadataCache::IntializeMethodMetadataRange(*puVar1, count, &local_38,1);
  // free(0);
  return;
}

// PTR_DAT_04b98798
bool deserializeSavedata(System_Byte_array * in, PlayerWork_SaveData_o * save_obj)
{
  // if ((DAT_04eb6b4e & 1) == 0) {
  system_load_typeinfo(*PTR_DAT_04b98798); // RE_DENDOU_RECORD[]_TypeInfo allocation
  //   DAT_04eb6b4e = 1;
  // }
  system_load_typeinfo(*PTR_DAT_04b98788); // RE_DENDOU_POKEMON_DATA_INSIDE[]_TypeInfo
  system_load_typeinfo(*PTR_DAT_04ba0408);
  system_load_typeinfo(*PTR_DAT_04ba03f0); // DPData::UgPlayerInfo[]_TypeInfo
  // mass_load_typeinfo(*PTR_DAT_04ba0408, 10); 

  PlayerWork_SaveData_Fields save = save_obj->fields;
  uint8_t * buf = (uint8_t *) &in->m_Items;
  // Looks to be preallocated!
  socket_log_fmt("Byte Array length: %08X\n", in->max_length);
  socket_log_fmt("save.version\n");
  memcpy(&save.version, &buf[0x00000],               0x004);
  socket_log_fmt("save.intValues\n");
  socket_log_fmt("save.intValues->m_Items: %08X\n", &save.intValues->m_Items);
  memcpy(&save.intValues->m_Items, &buf[0x00004],    0x7d0); // 500 * sizeof(int32_t)
  socket_log_fmt("save.boolValues\n");
  memcpy(&save.boolValues->m_Items, &buf[0x007d4],   0xfa0); // 4000 * sizeof(bool)
  socket_log_fmt("save.systemFlags\n");
  memcpy(&save.systemFlags->m_Items, &buf[0x04654],  0x3e8); // 1000 * sizeof(bool)
  save.rivalName = System::String::CtorCharPtr((uint16_t * ) &buf[0x055f4]);   
  socket_log_fmt("save.zoneID\n");
  memcpy(&save.zoneID, &buf[0x05634], 0x004); // sizeof(int32_t)
  socket_log_fmt("save.timeScale\n");
  memcpy(&save.timeScale, &buf[0x05638], 0x004); // sizeof(float)
  socket_log_fmt("save.saveItem\n");
  memcpy(&save.saveItem->m_Items, &buf[0x0563C], 0xBB8 * sizeof(Dpr::Item::SaveItem_o));
  socket_log_fmt("save.saveUgItem\n");
  memcpy(&save.saveUgItem->m_Items, &buf[0x111BC], 0x3E7 * sizeof(Dpr::Item::SaveUgItem_o));
  socket_log_fmt("save.saveItemShortcut\n");
  memcpy(&save.saveItemShortcut->m_Items, &buf[0x14090], 0x008);
  socket_log_fmt("deserializePlayerParty\n");
  deserializePlayerParty(&buf[0x14098], &save.playerParty.fields);
  socket_log_fmt("deserializeBoxData\n");
  deserializeBoxData(&buf[0x148AA], &save.boxData.fields);
  socket_log_fmt("deserializeBoxTray\n");
  deserializeBoxTray(&buf[0x14EF4], &save.boxTray->m_Items[0]);
  // TODO: Debug
  socket_log_fmt("deserializePlayerData\n");
  deserializePlayerData(&buf[0x79B74], &save.playerData.fields);
  socket_log_fmt("deserializeZukanWork\n");
  deserializeZukanWork(&buf[0x7A328], &save.zukanData.fields);
  socket_log_fmt("save.tr_battleData\n");
  memcpy(&save.tr_battleData->m_Items, &buf[0x7D3E0], 0x586); // 0x1618
  socket_log_fmt("save.topMenuData\n");
  memcpy(&save.topMenuData.fields.items->m_Items, &buf[0x7E9F8], 0x40);
  memcpy(&save.topMenuData.fields.selectType, &buf[0x7E9FC],  0x04);
  socket_log_fmt("save.fieldObj_Save\n");
  memcpy(&save.fieldObj_Save.fields.fldobj_sv->m_Items, &buf[0x7EA3C], 0x109A0); // (1000 * 0x44)
  socket_log_fmt("save.record\n");
  memcpy(&save.record.fields.records->m_Items, &buf[0x8F3DC], 0x5a0); // 0x78 * 12
  socket_log_fmt("deserializeEncSvData\n");
  deserializeEncSvData(&buf[0x8F97C], &save.enc_sv_data.fields);
  socket_log_fmt("save.player_save_data\n");
  memcpy(&save.player_save_data, &buf[0x8FB04], sizeof(DPData::PLAYER_SAVE_DATA_o));
  socket_log_fmt("deserializeBallDecoData\n");
  deserializeBallDecoData(&buf[0x8FB84], &save.ballDecoData.fields);
  socket_log_fmt("deserializeSaveSeal\n");
  deserializeSaveSeal(&buf[0x93E0C], (Dpr::BallDeco::SaveSealData_o *) &save.saveSeal->m_Items[0]);
  socket_log_fmt("deserializeRandomGroup\n");
  deserializeRandomGroup(&buf[0x9476C], &save.randomGroup.fields);
  socket_log_fmt("save.fieldGimmickSaveData\n");
  memcpy(&save.fieldGimmickSaveData.fields.GearRotate->m_Items, &buf[0x94D9C], 0xC);
  socket_log_fmt("deserializeKinomiGrowSaveData\n");
  deserializeKinomiGrowSaveData(&buf[0x94DA8], &save.kinomiGrowSaveData.fields);
  socket_log_fmt("deserializePoffinSaveData\n");
  deserializePoffinSaveData(&buf[0x955B0], &save.poffinSaveData.fields);
  socket_log_fmt("deserializeBtlTowerSave\n");
  deserializeBtlTowerSave(&buf[0x95BF4], &save.btlTowerSave.fields);
  socket_log_fmt("deserializeSystemData\n");
  deserializeSystemData(&buf[0x95DAC], &save.systemData.fields);
  socket_log_fmt("deserializePoketchData\n");
  deserializePoketchData(&buf[0x95EE4], &save.poketchData.fields);
  socket_log_fmt("deserializeDaycare\n");
  deserializeDaycare(&buf[0x96080], &save.azukariyaData.fields);
  socket_log_fmt("deserializeDendou\n");
  deserializeDendou(&buf[0x96340], &save.dendoudata.fields);
  save.badgeSaveData.fields.CleanValues = (System_Byte_array *) system_array_new(System_Byte_array_typeInfo, 8);
  save.boukenNote.fields.VanishNew = (System_Byte_array *) system_array_new(System_Byte_array_typeInfo, 24);
  socket_log_fmt("deserializeTvData\n");
  deserializeTvData(&buf[0x0], &save.tvData.fields);
  socket_log_fmt("deserializeUgSaveData\n");
  deserializeUgSaveData(&buf[0x9A89C], &save.ugSaveData.fields);
  socket_log_fmt("deserializeGmsdata\n");
  deserializeGmsdata(&buf[0x9D03C], &save.gmsdata.fields);
  socket_log_fmt("deserializeNetworkdata\n");
  deserializeNetworkdata(&buf[0xCE340], &save.networkdata.fields);
  socket_log_fmt("save.unionSaveData\n");
  memcpy(&save.unionSaveData, &buf[0xCEA10], sizeof(DPData::UnionSaveData_o));
  socket_log_fmt("save.contstPhotoLangData\n");
  memcpy(&save.contstPhotoLangData, &buf[0xCEA1C], sizeof(DPData::CON_PHOTO_LANG_DATA_o));
  socket_log_fmt("deserializeZukanPersonalRndData\n");
  deserializeZukanPersonalRndData(&buf[0xCEA34], &save.zukanPersonalRndData.fields);
  save.contestPhotoExtData = (DPData::CON_PHOTO_EXT_DATA_array*) system_array_new(DPData::CON_PHOTO_EXT_DATA_Array_TypeInfo, 5);
  socket_log_fmt("deserializeContestPhotoExtData: %08X\n", save.contestPhotoExtData);
  deserializeContestPhotoExtData(&buf[0xcea98], &save.contestPhotoExtData->m_Items[0]);
  save.gmsPointExtData = (DPData::GMS_POINT_HISTORY_EXT_DATA_array*) system_array_new(DPData::GMS_POINT_HISTORY_EXT_DATA_Array_TypeInfo, 5);
  socket_log_fmt("deserializeGmsPointExtData: %08X\n", save.gmsPointExtData);
  deserializeGmsPointExtData(&buf[0xceb38], &save.gmsPointExtData->m_Items[0]);
  save.reBuffNameData.fields.DENDOU_RECORD_record = (RE_DENDOU_RECORD_array *) system_array_new(RE_DENDOU_RECORD_Array_TypeInfo, 30);
  socket_log_fmt("deserializeReBuffNameData: %08X\n", save.reBuffNameData);
  deserializeReBuffNameData(&buf[0xE8198], &save.reBuffNameData.fields.DENDOU_RECORD_record->m_Items[0]);
  memcpy(&save.ugCountRecord, &buf[0xE8178], sizeof(DPData::UgCountRecord_o));

  socket_log_fmt("v1.1\n");
  deserializeRecordAddData(&buf[0xE9828], &save.recodeAddData.fields);
  deserializeMysteryGiftSaveData(&buf[0xE9BE8], &save.mysteryGiftSaveData.fields);
  save.poketoreCountArray.fields.data = (DPData::POKETCH_POKETORE_COUNT_array *) system_array_new(DPData::POKETCH_POKETORE_COUNT_Array_TypeInfo, 3);
  socket_log_fmt("save.poketoreCountArray.fields.data: %08X\n", save.poketoreCountArray.fields.data);
  memcpy(&save.poketoreCountArray.fields.data->m_Items, &buf[0xe9fa8], sizeof(DPData::POKETCH_POKETORE_COUNT_o) * 3);
  memcpy(&save.playReportData, &buf[0xe9fb8], sizeof(PLAYREPORT_DATA_o));
  System_Byte_array* mtDataBuffer = (System_Byte_array* ) system_array_new(System_Byte_array_typeInfo, 0x400);
  save.mtData.fields.buffer = mtDataBuffer;
  socket_log_fmt("save.mtData.fields.buffer: %08X\n", save.mtData.fields.buffer);
  memcpy(&save.mtData.fields.buffer->m_Items, &buf[0xea0b0], 0x400);
  deserializeDendouSaveAdd(&buf[0xea4b0], &save.dendouSaveAdd.fields);
  socket_log_fmt("END deserializeSavedata\n");

  return true;
}

extern MethodInfo * Method_PlayerWork_LoadBytes;
extern MethodInfo ** PTR_Method_PlayerWork_LoadBytes;

bool PlayerWork::CustomLoadAsyncOperation(MethodInfo *method)
{
    socket_log_initialize();
    socket_log_fmt("Dpr::Nx::SaveSystem_TypeInfo: %08X\n", Dpr::Nx::SaveSystem_TypeInfo);
    socket_log_fmt("PlayerWork_TypeInfo: %08X\n", PlayerWork_TypeInfo);
    system_load_typeinfo(*PTR_DAT_04bd2780);
    il2cpp_runtime_class_init(Dpr::Nx::SaveSystem_TypeInfo);
    il2cpp_runtime_class_init(PlayerWork_TypeInfo);
    const int32_t SUCCESS = 0;
    const int32_t NOT_EXIST = 1;
    const int32_t CORRUPTED = 2;
    const int32_t FAILED = 3;
    
    System_Byte_array * buffer;

    bool success = Dpr::Nx::SaveSystem::Load(this->fields._isBackupSave != 0, (MethodInfo *) nullptr);
    if ((success & 1) == 0) {
      socket_log_fmt("No save data\n");
      bool saveExists = Dpr::Nx::SaveSystem::SaveDataExists((MethodInfo *) nullptr);
      if ((saveExists & 1) == 0) {
        socket_log_fmt("Save does not exist\n");
        // this->fields._loadResult = NOT_EXIST;
      } else {
          socket_log_fmt("Save load failed\n");
        // this->fields._loadResult = FAILED;
      }
      buffer = (System_Byte_array *) system_array_new(System_Byte_array_typeInfo, 0xEDC20);
      // this->fields._isBackupSave = false;
      // return true;
    } else {
      buffer = Dpr::Nx::SaveSystem::GetLoadedData((MethodInfo *) nullptr);
    }
    // else {
    //     socket_log_fmt("Save data\n");
    //     bool saveExists = Dpr::Nx::SaveSystem::SaveDataExists((MethodInfo *) nullptr);
    //     if ((saveExists & 1) == 0)
    //     {
    //       socket_log_fmt("Save does not exist\n");
    //       this->fields._loadResult = NOT_EXIST;
    //     } else {
    //       socket_log_fmt("Save load failed\n");
    //       this->fields._loadResult = FAILED;
    //     }
    //     this->fields._isBackupSave = false;
    //     return true;
    // }


    
    PlayerWork_SaveData_o * save_obj = &this->fields._saveData;

    socket_log_fmt("LoadBytes\n");
    this->LoadBytes(buffer, save_obj, *((MethodInfo **) PTR_Method_PlayerWork_LoadBytes));
    // deserializeSavedata(buffer, save_obj);
    PlayerWork_SaveData_Fields save = save_obj->fields;
    uint8_t * buf = (uint8_t *) &buffer->m_Items;
    memcpy(&save.tr_battleData->m_Items, &buf[0x7D3E0], 0x586); // 0x1618
    this->fields._loadResult = SUCCESS;
    this->fields._isBackupSave = false;
    socket_log_fmt("END CustomLoadAsyncOperation\n");
    return true;
}

bool PlayerWork_CustomLoadOperation(PlayerWork *this_, MethodInfo *method)
{
    return this_->CustomLoadAsyncOperation(method);
}

bool PlayerWork_CustomLoadAsyncOperation(PlayerWork *this_, MethodInfo *method)
{
  return this_->CustomLoadAsyncOperation(method);
}

// 02377d80:
//     b PlayerWork_CustomLoadAsyncOperation
//     ret