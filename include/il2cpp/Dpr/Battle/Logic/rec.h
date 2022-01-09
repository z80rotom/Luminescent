#pragma once

#include "il2cpp.h"

uint8_t Dpr_Battle_Logic_rec__MakeRecFieldTag (int32_t type, uint8_t numClient, bool fChapter, const MethodInfo* method_info);
void Dpr_Battle_Logic_rec__ReadRecFieldTag (uint8_t tagCode, int32_t* type, uint8_t* numClient, bool* fChapter, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_rec__MakeClientActionTag (uint8_t clientID, uint8_t numAction, const MethodInfo* method_info);
void Dpr_Battle_Logic_rec__ReadClientActionTag (uint8_t tagCode, uint8_t* clientID, uint8_t* numAction, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_rec__MakeRecTimingCode (int32_t timing, bool isRecordTargetData, const MethodInfo* method_info);
void Dpr_Battle_Logic_rec__ReadRecTimingCode (uint8_t timingCode, int32_t* timing, bool* isRecordTargetData, const MethodInfo* method_info);
