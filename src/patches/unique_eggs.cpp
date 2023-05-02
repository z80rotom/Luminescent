#include "il2cpp.hpp"
#include "logger.hpp"
#include "util.hpp"

int32_t GameData_DataManager_GetUniqueID
                  (int32_t monsNo,int32_t formNo,uint8_t sex,bool isRare,bool isEgg,
                  MethodInfo *method)

{
  // temp just return manaphy egg for testing
  return 0x78;

  
  if (isEgg == 1) {
    // if is manaphy, return manaphy egg texture
    if (monsNo == 0x1ea) {return 0x78;}
    // if is egg, return egg texture
    else {return 0x14;}
  }
  // if is not egg, return normal texture
    return monsNo * 10000 + formNo * 100 + (uint)sex * 10 | (byte)isRare & 1;
  //   return (100000000 * isEgg) * (monsNo * 10000) + (formNo * 100) + (sex * 10) + rareType
}