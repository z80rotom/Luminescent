#pragma once

#include "il2cpp.h"

bool Dpr_Battle_Logic_BTL_SICK__MakeDefaultCureMsg (int32_t sickID, Dpr_Battle_Logic_BTL_SICKCONT_o* oldCont, Dpr_Battle_Logic_BTL_POKEPARAM_o* bpp, uint16_t itemID, Dpr_Battle_Logic_StrParam_o* str, const MethodInfo* method_info);
void Dpr_Battle_Logic_BTL_SICK__MakeDefaultMsg (int32_t sickID, Dpr_Battle_Logic_BTL_SICKCONT_o* cont, Dpr_Battle_Logic_BTL_POKEPARAM_o* bpp, Dpr_Battle_Logic_StrParam_o* str, const MethodInfo* method_info);
bool Dpr_Battle_Logic_BTL_SICK__CheckBatonTouchInherit (int32_t sick, Dpr_Battle_Logic_BTL_POKEPARAM_o* bpp, const MethodInfo* method_info);
bool Dpr_Battle_Logic_BTL_SICK__MakeSickDamageMsg (Dpr_Battle_Logic_StrParam_o* strParam, Dpr_Battle_Logic_BTL_POKEPARAM_o* bpp, int32_t sickID, const MethodInfo* method_info);
int16_t Dpr_Battle_Logic_BTL_SICK__GetSpecificSickFailStrID (int32_t sickID, const MethodInfo* method_info);
