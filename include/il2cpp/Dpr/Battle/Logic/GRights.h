#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_GRights___ctor (Dpr_Battle_Logic_GRights_o* __this, Dpr_Battle_Logic_MainModule_o* pMainModule, Dpr_Battle_Logic_BattleEnv_o* pBattleEnv, const MethodInfo* method_info);
void Dpr_Battle_Logic_GRights__Initialize (Dpr_Battle_Logic_GRights_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_GRights__CopyFrom (Dpr_Battle_Logic_GRights_o* __this, Dpr_Battle_Logic_GRights_o** src, const MethodInfo* method_info);
bool Dpr_Battle_Logic_GRights__IsGRightsRegulationExist (Dpr_Battle_Logic_GRights_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_GRights__AddClient (Dpr_Battle_Logic_GRights_o* __this, int32_t clientID, const MethodInfo* method_info);
void Dpr_Battle_Logic_GRights__InvalidateClient (Dpr_Battle_Logic_GRights_o* __this, int32_t clientID, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_GRights__GetClientNum (Dpr_Battle_Logic_GRights_o* __this, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_GRights__GetClientOrder (Dpr_Battle_Logic_GRights_o* __this, int32_t clientID, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_GRights__GetClientByOrder (Dpr_Battle_Logic_GRights_o* __this, uint8_t order, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_GRights__GetAssignedClient (Dpr_Battle_Logic_GRights_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_GRights__TransferRights (Dpr_Battle_Logic_GRights_o* __this, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_GRights__getNextAssignTarget (Dpr_Battle_Logic_GRights_o* __this, uint8_t currentIdx, const MethodInfo* method_info);
bool Dpr_Battle_Logic_GRights__isAssignEnable (Dpr_Battle_Logic_GRights_o* __this, Dpr_Battle_Logic_GRights_ClientInfo_o** clientInfo, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_GRights__GetPassedTurnCount (Dpr_Battle_Logic_GRights_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_GRights__IncPassedTurnCount (Dpr_Battle_Logic_GRights_o* __this, const MethodInfo* method_info);
