#pragma once

#include "il2cpp.h"

uint8_t Dpr_NetworkUtils_ANetData_BattleMatchingBaseData___get_GetDataID (Dpr_NetworkUtils_ANetData_BattleMatchingBaseData__o* __this, const MethodInfo_25C1970* method);
void Dpr_NetworkUtils_ANetData_BattleMatchingBaseData____ctor (Dpr_NetworkUtils_ANetData_BattleMatchingBaseData__o* __this, const MethodInfo_25C1A20* method);
void Dpr_NetworkUtils_ANetData_BattleMatchingBaseData___CreateDataBuffer (Dpr_NetworkUtils_ANetData_BattleMatchingBaseData__o* __this, const MethodInfo_25C1A80* method);
void Dpr_NetworkUtils_ANetData_BattleMatchingBaseData____Debug_ChangeFromStarionIndex (Dpr_NetworkUtils_ANetData_BattleMatchingBaseData__o* __this, int32_t idx, const MethodInfo_25C1D00* method);
int32_t Dpr_NetworkUtils_ANetData_BattleMatchingBaseData___get_FromStationIndex (Dpr_NetworkUtils_ANetData_BattleMatchingBaseData__o* __this, const MethodInfo_25C1D10* method);
int32_t Dpr_NetworkUtils_ANetData_BattleMatchingBaseData___SendReliableData (Dpr_NetworkUtils_ANetData_BattleMatchingBaseData__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo_25C1D20* method);
int32_t Dpr_NetworkUtils_ANetData_BattleMatchingBaseData___SendReliableDataToAll (Dpr_NetworkUtils_ANetData_BattleMatchingBaseData__o* __this, int32_t transportType, const MethodInfo_25C1DD0* method);
int32_t Dpr_NetworkUtils_ANetData_BattleMatchingBaseData___SendUnReliableData (Dpr_NetworkUtils_ANetData_BattleMatchingBaseData__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo_25C1E70* method);
int32_t Dpr_NetworkUtils_ANetData_BattleMatchingBaseData___SendUnReliableDataToAll (Dpr_NetworkUtils_ANetData_BattleMatchingBaseData__o* __this, int32_t transportType, const MethodInfo_25C1F10* method);
INL1_PacketWriterRe_o* Dpr_NetworkUtils_ANetData_BattleMatchingBaseData___CreateReliableData (Dpr_NetworkUtils_ANetData_BattleMatchingBaseData__o* __this, const MethodInfo_25C1FA0* method);
INL1_PacketWriter_o* Dpr_NetworkUtils_ANetData_BattleMatchingBaseData___CreateUnReliableData (Dpr_NetworkUtils_ANetData_BattleMatchingBaseData__o* __this, const MethodInfo_25C2060* method);
void Dpr_NetworkUtils_ANetData_BattleMatchingBaseData___WriteSendData (Dpr_NetworkUtils_ANetData_BattleMatchingBaseData__o* __this, INL1_PacketWriter_o* appendTarget, const MethodInfo_25C2120* method);
System_Byte_array* Dpr_NetworkUtils_ANetData_BattleMatchingBaseData___ConvertStructToBytes (Dpr_NetworkUtils_ANetData_BattleMatchingBaseData__o* __this, const MethodInfo_25C2170* method);
void Dpr_NetworkUtils_ANetData_BattleMatchingBaseData___ReceivePacket (Dpr_NetworkUtils_ANetData_BattleMatchingBaseData__o* __this, INL1_PacketReader_o* pr, const MethodInfo_25C2320* method);
void Dpr_NetworkUtils_ANetData_BattleMatchingBaseData___ReadRecieveData (Dpr_NetworkUtils_ANetData_BattleMatchingBaseData__o* __this, INL1_PacketReader_o* pr, const MethodInfo_25C2370* method);
Dpr_NetworkUtils_BattleMatchingBaseData_o Dpr_NetworkUtils_ANetData_BattleMatchingBaseData___ConvertBytesToStruct (Dpr_NetworkUtils_ANetData_BattleMatchingBaseData__o* __this, INL1_PacketReader_o* pr, const MethodInfo_25C23B0* method);
void Dpr_NetworkUtils_ANetData_BattleMatchingBaseData____cctor (const MethodInfo_25C26A0* method);
