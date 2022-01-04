#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_rec_Reader__ResetError (Dpr_Battle_Logic_rec_Reader_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_rec_Reader__SetDataSize (Dpr_Battle_Logic_rec_Reader_o* __this, uint32_t size, const MethodInfo* method);
void Dpr_Battle_Logic_rec_Reader___ctor (Dpr_Battle_Logic_rec_Reader_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_rec_Reader__Init (Dpr_Battle_Logic_rec_Reader_o* __this, void* recordData, uint32_t dataSize, const MethodInfo* method);
void Dpr_Battle_Logic_rec_Reader__Reset (Dpr_Battle_Logic_rec_Reader_o* __this, const MethodInfo* method);
bool Dpr_Battle_Logic_rec_Reader__CheckBtlInCmd (Dpr_Battle_Logic_rec_Reader_o* __this, uint8_t clientID, const MethodInfo* method);
Dpr_Battle_Logic_BTL_ACTION_PARAM_o* Dpr_Battle_Logic_rec_Reader__ReadAction (Dpr_Battle_Logic_rec_Reader_o* __this, uint8_t clientID, uint8_t* numAction, bool* fChapter, bool* isBtlInCmd, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_rec_Reader__GetTurnCount (Dpr_Battle_Logic_rec_Reader_o* __this, const MethodInfo* method);
bool Dpr_Battle_Logic_rec_Reader__IsReadComplete (Dpr_Battle_Logic_rec_Reader_o* __this, uint8_t clientID, const MethodInfo* method);
