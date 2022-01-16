#include "PlayerWork.hpp"
#include "Dpr/Nx/SaveSystem.hpp"

#include <cstdlib>
#include <cstdio>
#include "logger.hpp"
#include "Save.hpp"
#include "util.hpp"

int32_t PlayerWork::get_defaultPokeNo(MethodInfo *method)
{
  socket_log_initialize();
  int32_t defaultPokeNo = PlayerWork::GetInt(499, (MethodInfo *) nullptr);
  // socket_log_fmt("get_defaultPokeNo: %08X\n", defaultPokeNo);
  return defaultPokeNo;
}

int32_t PlayerWork::get_rivalPokeNo(MethodInfo *method)
{
  socket_log_initialize();
  int32_t defaultPokeNo = PlayerWork::GetInt(499, (MethodInfo *) nullptr);
  int32_t rivalPokeNo = 187;
  switch (defaultPokeNo)
  {
    case 387:
      rivalPokeNo = 390;
      break;
    case 390:
      rivalPokeNo = 393;
      break;
    case 393:
    default:
      rivalPokeNo = 387;
      break;
  }
  socket_log_fmt("get_defaultPokeNo: %08X\n", defaultPokeNo);
  socket_log_fmt("get_rivalPokeNo: %08X\n", rivalPokeNo);

  return rivalPokeNo;
}

int32_t PlayerWork::get_supportPokeNo(MethodInfo *method)
{
  socket_log_initialize();
  int32_t defaultPokeNo = PlayerWork::GetInt(499, (MethodInfo *) nullptr);
  int32_t supportPokeNo = 187;
  switch (defaultPokeNo)
  {
    case 387:
      supportPokeNo = 393;
      break;
    case 390:
      supportPokeNo = 387;
      break;
    case 393:
    default:
      supportPokeNo = 390;
      break;
  }
  socket_log_fmt("get_defaultPokeNo: %08X\n", defaultPokeNo);
  socket_log_fmt("get_supportPokeNo: %08X\n", supportPokeNo);

  return supportPokeNo;
}

int32_t PlayerWork::get_rivalPokeType(MethodInfo *method)
{
  const int FIRE = 0x9;
  const int WATER = 0xa;
  const int GRASS = 0xb;

  socket_log_initialize();
  int32_t defaultPokeNo = PlayerWork::GetInt(499, (MethodInfo *) nullptr);
  int32_t rivalType = 0;
  switch (defaultPokeNo)
  {
    case 387:
      rivalType = FIRE;
      break;
    case 390:
      rivalType = WATER;
      break;
    case 393:
    default:
      rivalType = GRASS;
      break;
  }
  socket_log_fmt("get_defaultPokeNo: %08X\n", defaultPokeNo);
  socket_log_fmt("get_rivalPokeType: %08X\n", rivalType);

  return rivalType;
}

int32_t PlayerWork_get_defaultPokeNo(MethodInfo *method)
{
  return PlayerWork::get_defaultPokeNo(method);
}

int32_t PlayerWork_get_rivalPokeNo(MethodInfo *method)
{
  return PlayerWork::get_rivalPokeNo(method);
}

int32_t PlayerWork_get_supportPokeNo(MethodInfo *method)
{
  return PlayerWork::get_supportPokeNo(method);
}

int32_t PlayerWork_get_rivalPokeType(MethodInfo *method)
{
  return PlayerWork::get_rivalPokeType(method);
}