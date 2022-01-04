#pragma once

#include "il2cpp.h"

uint8_t Dpr_Battle_Logic_BattleRule__GetClientNum (int32_t rule, uint8_t multiMode, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_BattleRule__GetFriendClientNum (int32_t rule, uint8_t multiMode, int32_t myClientId, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_BattleRule__GetEnemyClientNum (int32_t rule, uint8_t multiMode, int32_t myClientId, const MethodInfo* method);
bool Dpr_Battle_Logic_BattleRule__IsClientExist (int32_t rule, uint8_t multiMode, int32_t clientId, const MethodInfo* method);
bool Dpr_Battle_Logic_BattleRule__IsClientAi (int32_t rule, uint8_t commMode, uint8_t multiMode, int32_t clientId, const MethodInfo* method);
bool Dpr_Battle_Logic_BattleRule__IsClientAi_Single (uint8_t commMode, int32_t clientId, const MethodInfo* method);
bool Dpr_Battle_Logic_BattleRule__IsClientAi_Double (uint8_t commMode, uint8_t multiMode, int32_t clientId, const MethodInfo* method);
bool Dpr_Battle_Logic_BattleRule__IsClientAi_Double_MultiMode_NONE (uint8_t commMode, int32_t clientId, const MethodInfo* method);
bool Dpr_Battle_Logic_BattleRule__IsClientAi_Double_MultiMode_PP_AA (uint8_t commMode, int32_t clientId, const MethodInfo* method);
bool Dpr_Battle_Logic_BattleRule__IsClientAi_Double_MultiMode_PA_AA (uint8_t commMode, int32_t clientId, const MethodInfo* method);
bool Dpr_Battle_Logic_BattleRule__IsClientAi_Double_MultiMode_P_AA (uint8_t commMode, int32_t clientId, const MethodInfo* method);
bool Dpr_Battle_Logic_BattleRule__IsClientAi_Double_MultiMode_PA_A (uint8_t commMode, int32_t clientId, const MethodInfo* method);
bool Dpr_Battle_Logic_BattleRule__IsClientAi_Raid (uint8_t commMode, uint8_t multiMode, int32_t clientId, const MethodInfo* method);
bool Dpr_Battle_Logic_BattleRule__IsFriendClient (int32_t rule, int32_t clientId_0, int32_t clientId_1, const MethodInfo* method);
bool Dpr_Battle_Logic_BattleRule__IsOpponentClient (int32_t rule, int32_t clientId_0, int32_t clientId_1, const MethodInfo* method);
int32_t Dpr_Battle_Logic_BattleRule__GetFriendClientId (int32_t rule, uint8_t multiMode, int32_t myClientID, uint8_t opponentIndex, const MethodInfo* method);
int32_t Dpr_Battle_Logic_BattleRule__GetOpponentClientId (int32_t rule, uint8_t multiMode, int32_t myClientID, uint8_t opponentIndex, const MethodInfo* method);
bool Dpr_Battle_Logic_BattleRule__IsResultStrictJudge (int32_t rule, int32_t competitor, const MethodInfo* method);
bool Dpr_Battle_Logic_BattleRule__IsDummyClientSwitchEnable (int32_t rule, const MethodInfo* method);
bool Dpr_Battle_Logic_BattleRule__IsSkipBattleAfterShowdown (int32_t rule, const MethodInfo* method);
bool Dpr_Battle_Logic_BattleRule__NeedPGLRecord (int32_t rule, const MethodInfo* method);
