#pragma once

#include "il2cpp.h"

void Dpr_NetworkUtils_NetworkHelper__InitNetworkData (const MethodInfo* method);
void Dpr_NetworkUtils_NetworkHelper__CheckOnlineAccountAsync (System_Action_bool__o* onComplete, const MethodInfo* method);
bool Dpr_NetworkUtils_NetworkHelper__IsFirstConnectInternet (const MethodInfo* method);
uint16_t Dpr_NetworkUtils_NetworkHelper__CheckPlayerNum (uint16_t playerNum, const MethodInfo* method);
uint16_t Dpr_NetworkUtils_NetworkHelper__CreateContestGameMode (int32_t matchingType, int32_t connectType, const MethodInfo* method);
uint16_t Dpr_NetworkUtils_NetworkHelper__CreateUnderGroundGameMode (int32_t matchingType, int32_t connectType, uint16_t UgMapGroupID, const MethodInfo* method);
uint16_t Dpr_NetworkUtils_NetworkHelper__CreateUnionGameMode (int32_t matchingType, int32_t connectType, const MethodInfo* method);
uint16_t Dpr_NetworkUtils_NetworkHelper__CreateBattleGameMode (int32_t matchingType, int32_t battleModeID, int32_t connectType, const MethodInfo* method);
uint16_t Dpr_NetworkUtils_NetworkHelper__GetMatchingBitByType (int32_t matchingType, const MethodInfo* method);
uint16_t Dpr_NetworkUtils_NetworkHelper__GetBattleModeBitByID (int32_t battleModeID, const MethodInfo* method);
void Dpr_NetworkUtils_NetworkHelper__EmitGameModeLog (uint16_t gamemode, const MethodInfo* method);
int32_t Dpr_NetworkUtils_NetworkHelper__ConvertIlcaNetUtilInternetGoResultToSessionErrorType (int32_t internetGoResult, const MethodInfo* method);
int32_t Dpr_NetworkUtils_NetworkHelper__ConvertIIlcaNetTransportErrorEnumToSessionErrorType (int32_t transportError, const MethodInfo* method);
void Dpr_NetworkUtils_NetworkHelper__EmitValidateError (INL1_IlcaNetServerValidate_CheckResponse_o* checkResponse, const MethodInfo* method);
void Dpr_NetworkUtils_NetworkHelper__EmitNetworkLog (System_String_o* log, int32_t logType, const MethodInfo* method);
