#include "PlayerWork.hpp"
#include "Dpr/Nx/SaveSystem.hpp"

#include <cstdlib>
#include <cstdio>
#include "logger.hpp"
#include "Save.hpp"
#include "util.hpp"

bool PlayerWork_CustomSaveAsyncOperation_Reroute(PlayerWork *this_, MethodInfo *method)
{
  this_->CustomSaveOperation((MethodInfo *) nullptr);
  return true;
}

void PlayerWork_CustomSaveAsyncOperation_NewHook(PlayerWork *this_, System_Byte_array ** ptr_buf, MethodInfo * method)
{
  socket_log("PlayerWork_CustomSaveAsyncOperation_NewHook\n");
  socket_log_fmt("this_: %08X\n", this_);
  DPData::ZUKAN_WORK_o zukanWork = PlayerWork::get_zukan(nullptr, nullptr);
  System_Byte_array *data = * ptr_buf;
  uint8_t * buf = (uint8_t *) &data->m_Items;
  void * ptr = PlayerWork::get_tr_battleData()->m_Items;
  socket_log_fmt("ptr: %08X\n", ptr);
  uint32_t version = 0xFFFF0000 | 0x0100 | 0x34; // Rev 1 Lumi Save
  memcpy(&buf[0], &version, sizeof(uint32_t));
  memcpy(&buf[0x7D3E0], ptr, 0x586); // 0x1618
  // Pokedex Save Data
  memcpy(&buf[0x7A328], &zukanWork.fields.get_status->m_Items, 0x1ed * sizeof(int32_t));
  memcpy(&buf[0x7aadc], &zukanWork.fields.male_color_flag->m_Items, 0x1ed); 
  memcpy(&buf[0x7acc9], &zukanWork.fields.female_color_flag->m_Items, 0x1ed);
  memcpy(&buf[0x7aeb6], &zukanWork.fields.male_flag->m_Items, 0x1ed); 
  memcpy(&buf[0x7b0a3], &zukanWork.fields.female_flag->m_Items, 0x1ed);
  return;
}