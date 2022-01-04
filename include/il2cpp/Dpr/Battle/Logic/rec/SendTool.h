#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_rec_SendTool___ctor (Dpr_Battle_Logic_rec_SendTool_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_rec_SendTool__Init (Dpr_Battle_Logic_rec_SendTool_o* __this, bool fChapter, const MethodInfo* method);
uint8_t* Dpr_Battle_Logic_rec_SendTool__PutBtlInTiming (Dpr_Battle_Logic_rec_SendTool_o* __this, uint32_t* dataSize, const MethodInfo* method);
uint8_t* Dpr_Battle_Logic_rec_SendTool__PutBtlInChapter (Dpr_Battle_Logic_rec_SendTool_o* __this, uint32_t* dataSize, bool fChapter, const MethodInfo* method);
void Dpr_Battle_Logic_rec_SendTool__PutSelActionData (Dpr_Battle_Logic_rec_SendTool_o* __this, uint8_t clientID, Dpr_Battle_Logic_BTL_ACTION_PARAM_o* action, uint8_t numAction, const MethodInfo* method);
uint8_t* Dpr_Battle_Logic_rec_SendTool__FixSelActionData (Dpr_Battle_Logic_rec_SendTool_o* __this, int32_t timingCode, uint32_t* dataSize, const MethodInfo* method);
uint8_t* Dpr_Battle_Logic_rec_SendTool__PutTimeOverData (Dpr_Battle_Logic_rec_SendTool_o* __this, uint32_t* dataSize, const MethodInfo* method);
void Dpr_Battle_Logic_rec_SendTool__RestoreStart (Dpr_Battle_Logic_rec_SendTool_o* __this, void* data, uint32_t dataSize, const MethodInfo* method);
bool Dpr_Battle_Logic_rec_SendTool__RestoreFwd (Dpr_Battle_Logic_rec_SendTool_o* __this, uint32_t* rp, uint8_t* clientID, uint8_t* numAction, Dpr_Battle_Logic_BTL_ACTION_PARAM_o* action, const MethodInfo* method);
void Dpr_Battle_Logic_rec_SendTool___cctor (const MethodInfo* method);
