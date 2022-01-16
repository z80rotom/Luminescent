#include "PlayerWork.hpp"
#include "Dpr/Nx/SaveSystem.hpp"

#include <cstdlib>
#include <cstdio>
#include "logger.hpp"
#include "Save.hpp"
#include "util.hpp"

const int32_t MAX_TRAINERS = 5656;
const int32_t MAX_TRAINER_STRUCTS = 1414;

extern "C"
{

struct TrBattleData
{
  bool IsWin1:1;
  bool IsBattleSearcher1:1;
  bool IsWin2:1;
  bool IsBattleSearcher2:1;
  bool IsWin3:1;
  bool IsBattleSearcher3:1;
  bool IsWin4:1;
  bool IsBattleSearcher4:1;
};

}

typedef void(*OnPreSaveMethodPointer)(PlayerWork *this_, const MethodInfo *method);

void TrainerWork_ReSetBattleSaercher(int32_t id)
{
  TrBattleData * tr_battleData;

  if (id != 0 && id < MAX_TRAINERS)
  {
    tr_battleData = (TrBattleData *) PlayerWork::get_tr_battleData()->m_Items; 

    switch (id % 4)
    {
      case 0:
        tr_battleData[id/4].IsBattleSearcher1 = false;
        break;
      case 1:
        tr_battleData[id/4].IsBattleSearcher2 = false;
        break;
      case 2:
        tr_battleData[id/4].IsBattleSearcher3 = false;
        break;
      case 3:
        tr_battleData[id/4].IsBattleSearcher4 = false;
        break;
    }
    
  }
  return;
}

void TrainerWork_ResetWinFlag(int32_t id)
{
  TrBattleData * tr_battleData;

  if (id != 0 && id < MAX_TRAINERS)
  {
    tr_battleData = (TrBattleData *) PlayerWork::get_tr_battleData()->m_Items; 
    switch (id % 4)
    {
      case 0:
        tr_battleData[id/4].IsWin1 = false;
        break;
      case 1:
        tr_battleData[id/4].IsWin2 = false;
        break;
      case 2:
        tr_battleData[id/4].IsWin3 = false;
        break;
      case 3:
        tr_battleData[id/4].IsWin4 = false;
        break;
    }
  }
  return;
}

bool TrainerWork_GetWinFlag(int32_t id)
{
  TrBattleData * tr_battleData;

  if (id != 0 && id < MAX_TRAINERS)
  {
    tr_battleData = (TrBattleData *) PlayerWork::get_tr_battleData()->m_Items; 
    switch (id % 4)
    {
      case 0:
        return tr_battleData[id/4].IsWin1;
      case 1:
        return tr_battleData[id/4].IsWin2;
      case 2:
        return tr_battleData[id/4].IsWin3;
      case 3:
        return tr_battleData[id/4].IsWin4;
    }
  }

  return false;
}

void TrainerWork_Reset()
{
  // TrBattleData * tr_battleData;
  // tr_battleData = (TrBattleData *) PlayerWork::get_tr_battleData()->m_Items;
  // for (int32_t i = 0; i < MAX_TRAINER_STRUCTS; i++)
  // {
  //   tr_battleData[i].IsWin1 = false;
  //   tr_battleData[i].IsBattleSearcher1 = false;
  //   tr_battleData[i].IsWin2 = false;
  //   tr_battleData[i].IsBattleSearcher2 = false;
  //   tr_battleData[i].IsWin3 = false;
  //   tr_battleData[i].IsBattleSearcher3 = false;
  //   tr_battleData[i].IsWin4 = false;
  //   tr_battleData[i].IsBattleSearcher4 = false;
  // }

  return;
}

void TrainerWork_AllResetBattleSaercher()
{
  TrBattleData * tr_battleData;
  tr_battleData = (TrBattleData *) PlayerWork::get_tr_battleData()->m_Items;
  for (int32_t i = 0; i < MAX_TRAINER_STRUCTS; i++)
  {
    tr_battleData[i].IsBattleSearcher1 = false;
    tr_battleData[i].IsBattleSearcher2 = false;
    tr_battleData[i].IsBattleSearcher3 = false;
    tr_battleData[i].IsBattleSearcher4 = false;
  }

  return;
}

bool TrainerWork_GetBattleSearcher(int32_t id)
{
  TrBattleData * tr_battleData;
  if (id != 0 && id < MAX_TRAINERS)
  {
    tr_battleData = (TrBattleData *) PlayerWork::get_tr_battleData()->m_Items; 
    switch (id % 4)
    {
      case 0:
        return tr_battleData[id/4].IsBattleSearcher1;
      case 1:
        return tr_battleData[id/4].IsBattleSearcher2;
      case 2:
        return tr_battleData[id/4].IsBattleSearcher3;
      case 3:
        return tr_battleData[id/4].IsBattleSearcher4;
    }
  }

  return false;
}

void TrainerWork_SetWinFlag(int32_t id)
{
  TrBattleData * tr_battleData;
  if (id != 0 && id < MAX_TRAINERS)
  {
    tr_battleData = (TrBattleData *) PlayerWork::get_tr_battleData()->m_Items; 
    switch (id % 4)
    {
      case 0:
        tr_battleData[id/4].IsWin1 = true;
        break;
      case 1:
        tr_battleData[id/4].IsWin2 = true;
        break;
      case 2:
        tr_battleData[id/4].IsWin3 = true;
        break;
      case 3:
        tr_battleData[id/4].IsWin4 = true;
        break;
    }
  }
  return;
}

void TrainerWork_SetBattleSaercher(int32_t id)
{
  TrBattleData * tr_battleData;
  if (id != 0 && id < MAX_TRAINERS)
  {
    tr_battleData = (TrBattleData *) PlayerWork::get_tr_battleData()->m_Items; 

    switch (id % 4)
    {
      case 0:
        tr_battleData[id/4].IsBattleSearcher1 = true;
        break;
      case 1:
        tr_battleData[id/4].IsBattleSearcher2 = true;
        break;
      case 2:
        tr_battleData[id/4].IsBattleSearcher3 = true;
        break;
      case 3:
        tr_battleData[id/4].IsBattleSearcher4 = true;
        break;
    }
    
  }
  return;
}
