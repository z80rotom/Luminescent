#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_ServerRequestGenerator___ctor (Dpr_Battle_Logic_ServerRequestGenerator_o* __this, Dpr_Battle_Logic_ServerRequestGenerator_SetupParam_o** setupParam, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_ServerRequestGenerator__GetInterruptCode (Dpr_Battle_Logic_ServerRequestGenerator_o* __this, const MethodInfo* method);
bool Dpr_Battle_Logic_ServerRequestGenerator__IsEscapeSucceededOnChangeOrEscape (Dpr_Battle_Logic_ServerRequestGenerator_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_ServerRequestGenerator__SetSendData_ConfirmCounterPokeChange (Dpr_Battle_Logic_ServerRequestGenerator_o* __this, uint8_t enemyPutPokeID, const MethodInfo* method);
void Dpr_Battle_Logic_ServerRequestGenerator__SetSendData_RaidBossCaptureResult (Dpr_Battle_Logic_ServerRequestGenerator_o* __this, Dpr_Battle_Logic_ServerSendData_RAIDBOSS_CAPTURE_RESULT_o* data, const MethodInfo* method);
void Dpr_Battle_Logic_ServerRequestGenerator__GenerateSendData (Dpr_Battle_Logic_ServerRequestGenerator_o* __this, void** data, uint32_t* dataSize, uint8_t serverReq, uint32_t serialNo, const MethodInfo* method);
void Dpr_Battle_Logic_ServerRequestGenerator__calcSendData (Dpr_Battle_Logic_ServerRequestGenerator_o* __this, void** data, uint32_t* dataSize, uint8_t serverReq, const MethodInfo* method);
void Dpr_Battle_Logic_ServerRequestGenerator__calcSendData_SELECT_COVER_POKE (Dpr_Battle_Logic_ServerRequestGenerator_o* __this, void** data, uint32_t* dataSize, const MethodInfo* method);
void Dpr_Battle_Logic_ServerRequestGenerator__calcSendData_CONFIRM_COUNTER_POKECHANGE (Dpr_Battle_Logic_ServerRequestGenerator_o* __this, void** data, uint32_t* dataSize, const MethodInfo* method);
void Dpr_Battle_Logic_ServerRequestGenerator__calcSendData_SERVER_CMD_AFTER_COVER_POKE_SELECT (Dpr_Battle_Logic_ServerRequestGenerator_o* __this, void** data, uint32_t* dataSize, const MethodInfo* method);
void Dpr_Battle_Logic_ServerRequestGenerator__calcSendData_SELECT_CHANGE_POKE (Dpr_Battle_Logic_ServerRequestGenerator_o* __this, void** data, uint32_t* dataSize, const MethodInfo* method);
void Dpr_Battle_Logic_ServerRequestGenerator__calcSendData_SERVER_CMD_FIRST_BATTLE_IN (Dpr_Battle_Logic_ServerRequestGenerator_o* __this, void** data, uint32_t* dataSize, const MethodInfo* method);
void Dpr_Battle_Logic_ServerRequestGenerator__calcSendData_SERVER_CMD_AFTER_ACTION_SELECT (Dpr_Battle_Logic_ServerRequestGenerator_o* __this, void** data, uint32_t* dataSize, const MethodInfo* method);
void Dpr_Battle_Logic_ServerRequestGenerator__calcSendData_SERVER_CMD_ESCAPE_BY_CHANGE_OR_ESCAPE (Dpr_Battle_Logic_ServerRequestGenerator_o* __this, void** data, uint32_t* dataSize, const MethodInfo* method);
void Dpr_Battle_Logic_ServerRequestGenerator__calcSendData_SERVER_CMD_AFTER_INTERRUPT_POKECHANGE (Dpr_Battle_Logic_ServerRequestGenerator_o* __this, void** data, uint32_t* dataSize, const MethodInfo* method);
void Dpr_Battle_Logic_ServerRequestGenerator__calcSendData_SERVER_CMD_POKECHANGE_AFTERFIRSTPOKEIN (Dpr_Battle_Logic_ServerRequestGenerator_o* __this, void** data, uint32_t* dataSize, const MethodInfo* method);
void Dpr_Battle_Logic_ServerRequestGenerator__calcSendData_RECORD_BATTLE_START_TIMING (Dpr_Battle_Logic_ServerRequestGenerator_o* __this, void** data, uint32_t* dataSize, const MethodInfo* method);
void Dpr_Battle_Logic_ServerRequestGenerator__calcSendData_RECORD_BATTLE_START_CHAPTER (Dpr_Battle_Logic_ServerRequestGenerator_o* __this, void** data, uint32_t* dataSize, const MethodInfo* method);
void Dpr_Battle_Logic_ServerRequestGenerator__calcSendData_RECORD_ACTION (Dpr_Battle_Logic_ServerRequestGenerator_o* __this, void** data, uint32_t* dataSize, int32_t timingCode, bool fChapter, const MethodInfo* method);
void Dpr_Battle_Logic_ServerRequestGenerator__calcSendData_RECORD_TIMEUP_CHAPTER (Dpr_Battle_Logic_ServerRequestGenerator_o* __this, void** data, uint32_t* dataSize, const MethodInfo* method);
void Dpr_Battle_Logic_ServerRequestGenerator__calcSendData_EXIT_WILD_WIN (Dpr_Battle_Logic_ServerRequestGenerator_o* __this, void** data, uint32_t* dataSize, const MethodInfo* method);
void Dpr_Battle_Logic_ServerRequestGenerator__calcSendData_EXIT_WILD_LOSE (Dpr_Battle_Logic_ServerRequestGenerator_o* __this, void** data, uint32_t* dataSize, const MethodInfo* method);
void Dpr_Battle_Logic_ServerRequestGenerator__calcSendData_EXIT_WILD_FORCE (Dpr_Battle_Logic_ServerRequestGenerator_o* __this, void** data, uint32_t* dataSize, const MethodInfo* method);
void Dpr_Battle_Logic_ServerRequestGenerator__calcSendData_EXIT_CAPTURE (Dpr_Battle_Logic_ServerRequestGenerator_o* __this, void** data, uint32_t* dataSize, const MethodInfo* method);
void Dpr_Battle_Logic_ServerRequestGenerator__calcSendData_EXIT_COMM (Dpr_Battle_Logic_ServerRequestGenerator_o* __this, void** data, uint32_t* dataSize, const MethodInfo* method);
void Dpr_Battle_Logic_ServerRequestGenerator__calcSendData_EXIT_NPC (Dpr_Battle_Logic_ServerRequestGenerator_o* __this, void** data, uint32_t* dataSize, const MethodInfo* method);
void Dpr_Battle_Logic_ServerRequestGenerator__calcSendData_EXIT_BATTLE_SPOT_TRAINER (Dpr_Battle_Logic_ServerRequestGenerator_o* __this, void** data, uint32_t* dataSize, const MethodInfo* method);
void Dpr_Battle_Logic_ServerRequestGenerator__calcSendData_SYNC_CLIENT_LIMIT_TIME (Dpr_Battle_Logic_ServerRequestGenerator_o* __this, void** data, uint32_t* dataSize, const MethodInfo* method);
void Dpr_Battle_Logic_ServerRequestGenerator__calcSendData_RAID_CAPTURE_RESULT (Dpr_Battle_Logic_ServerRequestGenerator_o* __this, void** data, uint32_t* dataSize, const MethodInfo* method);
void Dpr_Battle_Logic_ServerRequestGenerator__calcSendData_RAID_SCMD_RESULT (Dpr_Battle_Logic_ServerRequestGenerator_o* __this, void** data, uint32_t* dataSize, const MethodInfo* method);
void Dpr_Battle_Logic_ServerRequestGenerator__calcSendData_RAID_EXIT_LOSE (Dpr_Battle_Logic_ServerRequestGenerator_o* __this, void** data, uint32_t* dataSize, const MethodInfo* method);
