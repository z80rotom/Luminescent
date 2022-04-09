#include "PlayerWork.hpp"
#include "Dpr/Nx/SaveSystem.hpp"

#include <cstdlib>
#include <cstdio>
#include "logger.hpp"
#include "Save.hpp"
#include "util.hpp"

#include "md5.h"

// #include "switch.h"
// #include <curl/curl.h>

void segfault()
{
    *((int32_t *) NULL) = 12345;
}

const int32_t MAX_TRAINERS = 5656;
const int32_t MAX_TRAINER_STRUCTS = 1414;
const int SIZE_8BLOCK = 80; // 0x50
const int SIZE_8STORED = 8 + (4 * SIZE_8BLOCK); // 0x148
const int SIZE_8PARTY = SIZE_8STORED + 0x10; // 0x158

extern void ** PTR_DAT_04c2df00;
extern void * System_Byte_array_typeInfo;

void System_RuntimeType_ctor(void * __this, MethodInfo *method);

extern MethodInfo ** PTR_Method_PlayerWork_LoadBytes;

void importTrainerSaveData(PlayerWork_SaveData_o * save_obj, System_Byte_array * buffer)
{
  // socket_log_fmt("importTrainerSaveData");
  // uint8_t * buf = (uint8_t *) &buffer->m_Items;
  PlayerWork_SaveData_Fields save = save_obj->fields;

  // DPData::TR_BATTLE_DATA * src = (DPData::TR_BATTLE_DATA *) buf[0x7D3E0];
  DPData::TR_BATTLE_DATA * src = (DPData::TR_BATTLE_DATA * ) malloc(sizeof(DPData::TR_BATTLE_DATA) * 707);
  memcpy(src, &save.tr_battleData->m_Items, sizeof(DPData::TR_BATTLE_DATA) * 707);
  TrBattleData * dst = (TrBattleData *) &save.tr_battleData->m_Items;

  for (int id = 0; id < 707; id++)
  {
    switch (id % 4)
    {
      case 0:
        dst[id/4].IsWin1 = src[id].IsWin & 0x1;
        dst[id/4].IsBattleSearcher1 = src[id].IsBattleSearcher & 0x1;
        break;
      case 1:
        dst[id/4].IsWin2 = src[id].IsWin & 0x1;
        dst[id/4].IsBattleSearcher2 = src[id].IsBattleSearcher & 0x1;
        break;
      case 2:
        dst[id/4].IsWin3 = src[id].IsWin & 0x1;
        dst[id/4].IsBattleSearcher3 = src[id].IsBattleSearcher & 0x1;
        break;
      case 3:
        dst[id/4].IsWin4 = src[id].IsWin & 0x1;
        dst[id/4].IsBattleSearcher4 = src[id].IsBattleSearcher & 0x1;
        break;
    }
  }

  for (int id = 707; id < 5656; id++)
  {
    switch (id % 4)
    {
      case 0:
        dst[id/4].IsWin1 = false;
        dst[id/4].IsBattleSearcher1 = false;
        break;
      case 1:
        dst[id/4].IsWin2 = false;
        dst[id/4].IsBattleSearcher2  = false;
        break;
      case 2:
        dst[id/4].IsWin3  = false;
        dst[id/4].IsBattleSearcher3  = false;
        break;
      case 3:
        dst[id/4].IsWin4 = false;
        dst[id/4].IsBattleSearcher4 = false;
        break;
    }
  }

  free(src);
}


bool PlayerWork::CustomLoadAsyncOperation(MethodInfo *method)
{
    PlayerWork_SaveData_o * save_obj;
    System_Byte_array * buffer;
    socket_log_initialize();
    system_load_typeinfo(*PTR_DAT_04c2df00);
    il2cpp_runtime_class_init(Dpr::Nx::SaveSystem_TypeInfo);
    il2cpp_runtime_class_init(PlayerWork_TypeInfo);

    socket_log_fmt("CustomLoadAsyncOperation\n");
    const int32_t SUCCESS = 0;
    const int32_t NOT_EXIST = 1;
    const int32_t CORRUPTED = 2;
    const int32_t FAILED = 3;
    const int32_t CURRENT_VERSION = 0x2C;
    save_obj = &this->fields._saveData;

    socket_log_fmt("isBackupSave: %04X\n", this->fields._isBackupSave);
    socket_log_fmt("Dpr::Nx::SaveSystem::Load: %08X\n", &Dpr::Nx::SaveSystem::Load);
    // A3C2270???
    bool success = Dpr::Nx::SaveSystem::Load(this->fields._isBackupSave != 0, (MethodInfo *) nullptr);
    socket_log_fmt("Dpr::Nx::SaveSystem::Load\n");
    if ((success & 1) == 0) {
      socket_log_fmt("No save data\n");
      bool saveExists = Dpr::Nx::SaveSystem::SaveDataExists((MethodInfo *) nullptr);
      if ((saveExists & 1) == 0) {
        // socket_log_fmt("Save does not exist\n");
        // this->fields._loadResult = NOT_EXIST;
      } else {
          // socket_log_fmt("Save load failed\n");
        // this->fields._loadResult = FAILED;
      }
      buffer = (System_Byte_array *) system_array_new(System_Byte_array_typeInfo, 0xEDC20);
      this->LoadBytes(buffer, save_obj, *((MethodInfo **) PTR_Method_PlayerWork_LoadBytes));
      this->fields._loadResult = SUCCESS;
      this->fields._isBackupSave = false;
      return true;
    } else {
      socket_log_fmt("Save data found\n");
      buffer = Dpr::Nx::SaveSystem::GetLoadedData((MethodInfo *) nullptr);
    }
    // else {
    //     // socket_log_fmt("Save data\n");
    //     bool saveExists = Dpr::Nx::SaveSystem::SaveDataExists((MethodInfo *) nullptr);
    //     if ((saveExists & 1) == 0)
    //     {
    //       // socket_log_fmt("Save does not exist\n");
    //       this->fields._loadResult = NOT_EXIST;
    //     } else {
    //       // socket_log_fmt("Save load failed\n");
    //       this->fields._loadResult = FAILED;
    //     }
    //     this->fields._isBackupSave = false;
    //     return true;
    // }


    
    uint8_t * buf = (uint8_t *) &buffer->m_Items;

    // socket_log_fmt("LoadBytes\n");
    uint32_t version = 0;
    memcpy(&version, &buf[0], sizeof(uint32_t));
    bool vanillaSave = true;
    if (version == 0x2C)
    {
      // socket_log_fmt("Current version\n");
    } else if (version == 0xFFFF0000)
    {
      vanillaSave = false;
    }
    version = 0x2C;
    memcpy(&buf[0], &version, sizeof(uint32_t));
    this->LoadBytes(buffer, save_obj, *((MethodInfo **) PTR_Method_PlayerWork_LoadBytes));
    // deserializeSavedata(buffer, save_obj);
    PlayerWork_SaveData_Fields save = save_obj->fields;
    if (!vanillaSave)
    {
      socket_log_fmt("Existing Lumi save\n");
      memcpy(&save.tr_battleData->m_Items, &buf[0x7D3E0], 0x586); // 0x1618
    } else {
      socket_log_fmt("Vanilla save\n");
      importTrainerSaveData(save_obj, buffer);
    }
    
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