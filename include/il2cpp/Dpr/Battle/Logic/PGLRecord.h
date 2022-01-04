#pragma once

#include "il2cpp.h"

bool Dpr_Battle_Logic_PGLRecord__IsNeed (Dpr_Battle_Logic_MainModule_o* pMainModule, const MethodInfo* method);
void Dpr_Battle_Logic_PGLRecord__PokeIDtoRecordIdx (bool* pIsPlayerSide, uint8_t* pRecordIdx, Dpr_Battle_Logic_MainModule_o* pMainModule, uint8_t pokeID, const MethodInfo* method);
void Dpr_Battle_Logic_PGLRecord__Record (Dpr_Battle_Logic_BATTLE_PGL_RECORD_SET_o* pBuffer, Dpr_Battle_Logic_MainModule_o* pMainModule, Dpr_Battle_Logic_BTL_POKEPARAM_o* pDeadPoke, Dpr_Battle_Logic_PGLRecord_RecParam_o* pRecParam, const MethodInfo* method);
void Dpr_Battle_Logic_PGLRecord__Record (Dpr_Battle_Logic_BATTLE_PGL_RECORD_SET_o* pBuffer, Dpr_Battle_Logic_MainModule_o* pMainModule, Dpr_Battle_Logic_BattleEnv_o* pBattleEnv, const MethodInfo* method);
Dpr_Battle_Logic_BATTLE_PGL_RECORD_o* Dpr_Battle_Logic_PGLRecord__GetTargetRecord (Dpr_Battle_Logic_BATTLE_PGL_RECORD_SET_o* pBuffer, Dpr_Battle_Logic_MainModule_o* pMainModule, uint8_t pokeID, const MethodInfo* method);
