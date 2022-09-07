#include "PlayerWork.hpp"
#include "Dpr/Nx/SaveSystem.hpp"

#include <cstdlib>
#include <cstdio>
#include "logger.hpp"
#include "Save.hpp"
#include "util.hpp"


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
  PlayerWork_SaveData_Fields save = save_obj->fields;

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

void importZukanSaveData(PlayerWork_SaveData_o * save_obj, System_Byte_array * buffer)
{
  PlayerWork_SaveData_Fields save = save_obj->fields;

  int32_t * srcStatus = (int32_t * ) malloc(sizeof(int32_t) * 0x1ed);
  bool * srcMaleColorFlag = (bool * ) malloc(sizeof(bool) * 0x1ed);
  bool * srcFemaleColorFlag = (bool * ) malloc(sizeof(bool) * 0x1ed);
  bool * srcMaleFlag = (bool * ) malloc(sizeof(bool) * 0x1ed);
  bool * srcFemaleFlag = (bool * ) malloc(sizeof(bool) * 0x1ed);

  memcpy(srcStatus, &save.zukanData.fields.get_status->m_Items, sizeof(int32_t) * 0x1ed);
  memcpy(srcMaleColorFlag, &save.zukanData.fields.male_color_flag->m_Items, sizeof(bool) * 0x1ed);
  memcpy(srcFemaleColorFlag, &save.zukanData.fields.female_color_flag->m_Items, sizeof(bool) * 0x1ed);
  memcpy(srcMaleFlag, &save.zukanData.fields.male_flag->m_Items, sizeof(bool) * 0x1ed);
  memcpy(srcFemaleFlag, &save.zukanData.fields.female_flag->m_Items, sizeof(bool) * 0x1ed);

  GetStatusBitfield * dstStatus = (GetStatusBitfield *) &save.zukanData.fields.get_status->m_Items;
  FlagBitfield * dstMaleColorFlag = (FlagBitfield * ) &save.zukanData.fields.male_color_flag->m_Items;
  FlagBitfield * dstFemaleColorFlag = (FlagBitfield * ) &save.zukanData.fields.female_color_flag->m_Items;
  FlagBitfield * dstMaleFlag = (FlagBitfield * ) &save.zukanData.fields.male_flag->m_Items;
  FlagBitfield * dstFemaleFlag = (FlagBitfield * ) &save.zukanData.fields.female_flag->m_Items;

  for (int id = 0; id < 0x1ed; id++)
  {
    switch (id % 8)
    {
      case 0:
        dstStatus[id/8].status1 = srcStatus[id];
        dstMaleColorFlag[id/8].flag1 = srcMaleColorFlag[id];
        dstFemaleColorFlag[id/8].flag1 = srcFemaleColorFlag[id];
        dstMaleFlag[id/8].flag1 = srcMaleFlag[id];
        dstFemaleFlag[id/8].flag1 = srcFemaleFlag[id];
        break;
      case 1:
        dstStatus[id/8].status2 = srcStatus[id];
        dstMaleColorFlag[id/8].flag2 = srcMaleColorFlag[id];
        dstFemaleColorFlag[id/8].flag2 = srcFemaleColorFlag[id];
        dstMaleFlag[id/8].flag2 = srcMaleFlag[id];
        dstFemaleFlag[id/8].flag2 = srcFemaleFlag[id];
        break;
      case 2:
        dstStatus[id/8].status3 = srcStatus[id];
        dstMaleColorFlag[id/8].flag3 = srcMaleColorFlag[id];
        dstFemaleColorFlag[id/8].flag3 = srcFemaleColorFlag[id];
        dstMaleFlag[id/8].flag3 = srcMaleFlag[id];
        dstFemaleFlag[id/8].flag3 = srcFemaleFlag[id];
        break;
      case 3:
        dstStatus[id/8].status4 = srcStatus[id];
        dstMaleColorFlag[id/8].flag4 = srcMaleColorFlag[id];
        dstFemaleColorFlag[id/8].flag4 = srcFemaleColorFlag[id];
        dstMaleFlag[id/8].flag4 = srcMaleFlag[id];
        dstFemaleFlag[id/8].flag4 = srcFemaleFlag[id];
        break;
      case 4:
        dstStatus[id/8].status5 = srcStatus[id];
        dstMaleColorFlag[id/8].flag5 = srcMaleColorFlag[id];
        dstFemaleColorFlag[id/8].flag5 = srcFemaleColorFlag[id];
        dstMaleFlag[id/8].flag5 = srcMaleFlag[id];
        dstFemaleFlag[id/8].flag5 = srcFemaleFlag[id];
        break;
      case 5:
        dstStatus[id/8].status6 = srcStatus[id];
        dstMaleColorFlag[id/8].flag6 = srcMaleColorFlag[id];
        dstFemaleColorFlag[id/8].flag6 = srcFemaleColorFlag[id];
        dstMaleFlag[id/8].flag6 = srcMaleFlag[id];
        dstFemaleFlag[id/8].flag6 = srcFemaleFlag[id];
        break;
      case 6:
        dstStatus[id/8].status7 = srcStatus[id];
        dstMaleColorFlag[id/8].flag7 = srcMaleColorFlag[id];
        dstFemaleColorFlag[id/8].flag7 = srcFemaleColorFlag[id];
        dstMaleFlag[id/8].flag7 = srcMaleFlag[id];
        dstFemaleFlag[id/8].flag7 = srcFemaleFlag[id];
        break;
      case 7:
        dstStatus[id/8].status8 = srcStatus[id];
        dstMaleColorFlag[id/8].flag8 = srcMaleColorFlag[id];
        dstFemaleColorFlag[id/8].flag8 = srcFemaleColorFlag[id];
        dstMaleFlag[id/8].flag8 = srcMaleFlag[id];
        dstFemaleFlag[id/8].flag8 = srcFemaleFlag[id];
        break;
    }
  }

  for (int id = 0x1ed; id < (0x1ed * 8); id++)
  {
    switch (id % 8)
    {
      case 0:
        dstStatus[id/8].status1 = 0;
        dstMaleColorFlag[id/8].flag1 = false;
        dstFemaleColorFlag[id/8].flag1 = false;
        dstMaleFlag[id/8].flag1 = false;
        dstFemaleFlag[id/8].flag1 = false;
        break;
      case 1:
        dstStatus[id/8].status2 = 0;
        dstMaleColorFlag[id/8].flag2 = false;
        dstFemaleColorFlag[id/8].flag2 = false;
        dstMaleFlag[id/8].flag2 = false;
        dstFemaleFlag[id/8].flag2 = false;
        break;
      case 2:
        dstStatus[id/8].status3 = 0;
        dstMaleColorFlag[id/8].flag3 = false;
        dstFemaleColorFlag[id/8].flag3 = false;
        dstMaleFlag[id/8].flag3 = false;
        dstFemaleFlag[id/8].flag3 = false;
        break;
      case 3:
        dstStatus[id/8].status4 = 0;
        dstMaleColorFlag[id/8].flag4 = false;
        dstFemaleColorFlag[id/8].flag4 = false;
        dstMaleFlag[id/8].flag4 = false;
        dstFemaleFlag[id/8].flag4 = false;
        break;
      case 4:
        dstStatus[id/8].status5 = 0;
        dstMaleColorFlag[id/8].flag5 = false;
        dstFemaleColorFlag[id/8].flag5 = false;
        dstMaleFlag[id/8].flag5 = false;
        dstFemaleFlag[id/8].flag5 = false;
        break;
      case 5:
        dstStatus[id/8].status6 = 0;
        dstMaleColorFlag[id/8].flag6 = false;
        dstFemaleColorFlag[id/8].flag6 = false;
        dstMaleFlag[id/8].flag6 = false;
        dstFemaleFlag[id/8].flag6 = false;
        break;
      case 6:
        dstStatus[id/8].status7 = 0;
        dstMaleColorFlag[id/8].flag7 = false;
        dstFemaleColorFlag[id/8].flag7 = false;
        dstMaleFlag[id/8].flag7 = false;
        dstFemaleFlag[id/8].flag7 = false;
        break;
      case 7:
        dstStatus[id/8].status8 = 0;
        dstMaleColorFlag[id/8].flag8 = false;
        dstFemaleColorFlag[id/8].flag8 = false;
        dstMaleFlag[id/8].flag8 = false;
        dstFemaleFlag[id/8].flag8 = false;
        break;
    }
  }

  free(srcStatus);
  free(srcMaleColorFlag);
  free(srcFemaleColorFlag);
  free(srcMaleFlag);
  free(srcFemaleFlag);
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
    socket_log_fmt("_loadResult: %08\n", this->fields._loadResult);
    socket_log_fmt("offsetof(PlayerWork_SaveData_Fields, tr_battleData)): %08X\n", offsetof(PlayerWork_SaveData_Fields, tr_battleData));
    socket_log_fmt("offsetof(PlayerWork_SaveData_Fields, saveSeal)): %08X\n", offsetof(PlayerWork_SaveData_Fields, saveSeal));
    socket_log_fmt("offsetof(PlayerWork_SaveData_Fields, kinomiGrowSaveData)): %08X\n", offsetof(PlayerWork_SaveData_Fields, kinomiGrowSaveData));
    socket_log_fmt("offsetof(PlayerWork_SaveData_Fields, btlTowerSave)): %08X\n", offsetof(PlayerWork_SaveData_Fields, btlTowerSave));
    socket_log_fmt("offsetof(PlayerWork_SaveData_Fields, systemData)): %08X\n", offsetof(PlayerWork_SaveData_Fields, systemData));
    socket_log_fmt("offsetof(PlayerWork_SaveData_Fields, poketchData)): %08X\n", offsetof(PlayerWork_SaveData_Fields, poketchData));
    socket_log_fmt("offsetof(PlayerWork_SaveData_Fields, azukariyaData)): %08X\n", offsetof(PlayerWork_SaveData_Fields, azukariyaData));
    socket_log_fmt("offsetof(PlayerWork_SaveData_Fields, dendoudata)): %08X\n", offsetof(PlayerWork_SaveData_Fields, dendoudata));
    socket_log_fmt("offsetof(PlayerWork_SaveData_Fields, tvDataOld)): %08X\n", offsetof(PlayerWork_SaveData_Fields, tvDataOld));
    socket_log_fmt("offsetof(PlayerWork_SaveData_Fields, tvData)): %08X\n", offsetof(PlayerWork_SaveData_Fields, tvData));
    socket_log_fmt("---------------------------------------------------\n");
    socket_log_fmt("offsetof(SYSTEMDATA_Fields, SaveTime)): %08X\n", offsetof(DPData::SYSTEMDATA_Fields, SaveTime));
    socket_log_fmt("offsetof(SYSTEMDATA_Fields, nxSnapshot)): %08X\n", offsetof(DPData::SYSTEMDATA_Fields, nxSnapshot));
    socket_log_fmt("offsetof(SYSTEMDATA_Fields, reserved_long5)): %08X\n", offsetof(DPData::SYSTEMDATA_Fields, reserved_long5));
    socket_log_fmt("---------------------------------------------------\n");
    socket_log_fmt("offsetof(PlayerWork_Fields, _saveData)): %08X\n", offsetof(PlayerWork_Fields, _saveData));
    socket_log_fmt("offsetof(PlayerWork_Fields, _loadResult)): %08X\n", offsetof(PlayerWork_Fields, _loadResult));
    socket_log_fmt("offsetof(PlayerWork, fields)): %08X\n", offsetof(PlayerWork, fields));
    const int32_t SUCCESS = 0;
    const int32_t NOT_EXIST = 1;
    const int32_t CORRUPTED = 2;
    const int32_t FAILED = 3;
    const int32_t CURRENT_VERSION = 0x2C;
    save_obj = &this->fields._saveData;

    // int32_t * _loadResult = (int32_t *) &this->fields._transitionLocation.fields.has_value;
    // bool * _isBackupSave = (bool *) &this->fields._evolveRequets;

    socket_log_fmt("isBackupSave: %04X\n", this->fields._isBackupSave);
    socket_log_fmt("Dpr::Nx::SaveSystem::Load: %08X\n", &Dpr::Nx::SaveSystem::Load);
    bool success = Dpr::Nx::SaveSystem::Load(this->fields._isBackupSave != 0, (MethodInfo *) nullptr);
    socket_log_fmt("Dpr::Nx::SaveSystem::Load\n");
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
      buffer = (System_Byte_array *) system_array_new(System_Byte_array_typeInfo, 0xEF0A4);
      // uint32_t version_newgame = 0xFFFF0000;
      // memcpy(&buffer[0], &version_newgame, sizeof(uint32_t));
      // this->Initialization((MethodInfo *) nullptr);
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
    bool natdexSave = false;
    if (version == 0x34)
    {
      // socket_log_fmt("Current version\n");
    } else if ((version & 0xFFFF0000) == 0xFFFF0000)
    {
      vanillaSave = false;
    }

    natdexSave = (version & 0x0100) == 0x0100;

    version = 0x34;
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

    if (natdexSave)
    {
      memcpy(&save.zukanData.fields.get_status->m_Items, &buf[0x7A328], 0x1ed * sizeof(int32_t));
      memcpy(&save.zukanData.fields.male_color_flag->m_Items, &buf[0x7aadc], 0x1ed); 
      memcpy(&save.zukanData.fields.female_color_flag->m_Items, &buf[0x7acc9], 0x1ed);
      memcpy(&save.zukanData.fields.male_flag->m_Items, &buf[0x7aeb6], 0x1ed); 
      memcpy(&save.zukanData.fields.female_flag->m_Items, &buf[0x7b0a3], 0x1ed);
    } else {
      importZukanSaveData(save_obj, buffer);
    }
    
    this->fields._loadResult = SUCCESS;
    this->fields._isBackupSave = false;
    socket_log_fmt("END CustomLoadAsyncOperation\n");
    return true;
}

bool VerifySaveData(System_Byte_array * buffer, MethodInfo * method)
{
  return true;
}

void LoadBytes(PlayerWork * _this, System_Byte_array * buffer, PlayerWork_SaveData_o *save_obj, MethodInfo *method)
{
  socket_log_initialize();
  uint32_t version = 0;
  memcpy(&version, &buffer[0], sizeof(uint32_t));
  bool vanillaSave = true;
  if (version == 0x34)
  {
    // socket_log_fmt("Current version\n");
  } else if (version & 0xFFFF0000)
  {
    vanillaSave = false;
  }
  version = 0x34;
  memcpy(&buffer[0], &version, sizeof(uint32_t));
  _this->LoadBytes(buffer, save_obj, method);
  // deserializeSavedata(buffer, save_obj);
  PlayerWork_SaveData_Fields * save = &save_obj->fields;
  if (!vanillaSave)
  {
    socket_log_fmt("Existing Lumi save\n");
    memcpy(&save->tr_battleData->m_Items, &buffer[0x7D3E0], 0x586); // 0x1618
  } else {
    socket_log_fmt("Vanilla save\n");
    importTrainerSaveData(save_obj, buffer);
  }
}

bool PlayerWork_CustomLoadOperation(PlayerWork *this_, MethodInfo *method)
{
    return this_->CustomLoadAsyncOperation(method);
}

bool PlayerWork_CustomLoadAsyncOperation(PlayerWork *this_, MethodInfo *method)
{
  return this_->CustomLoadAsyncOperation(method);
}