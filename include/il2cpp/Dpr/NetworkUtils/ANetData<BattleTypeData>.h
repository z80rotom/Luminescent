#pragma once

#include "il2cpp.h"

uint8_t Dpr_NetworkUtils_ANetData_BattleTypeData___get_GetDataID (Dpr_NetworkUtils_ANetData_BattleTypeData__o* __this, const MethodInfo_2ABABF0* method);
void Dpr_NetworkUtils_ANetData_BattleTypeData____ctor (Dpr_NetworkUtils_ANetData_BattleTypeData__o* __this, const MethodInfo_2ABACA0* method);
void Dpr_NetworkUtils_ANetData_BattleTypeData___CreateDataBuffer (Dpr_NetworkUtils_ANetData_BattleTypeData__o* __this, const MethodInfo_2ABAD00* method);
void Dpr_NetworkUtils_ANetData_BattleTypeData____Debug_ChangeFromStarionIndex (Dpr_NetworkUtils_ANetData_BattleTypeData__o* __this, int32_t idx, const MethodInfo_2ABAF80* method);
int32_t Dpr_NetworkUtils_ANetData_BattleTypeData___get_FromStationIndex (Dpr_NetworkUtils_ANetData_BattleTypeData__o* __this, const MethodInfo_2ABAF90* method);
int32_t Dpr_NetworkUtils_ANetData_BattleTypeData___SendReliableData (Dpr_NetworkUtils_ANetData_BattleTypeData__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo_2ABAFA0* method);
int32_t Dpr_NetworkUtils_ANetData_BattleTypeData___SendReliableDataToAll (Dpr_NetworkUtils_ANetData_BattleTypeData__o* __this, int32_t transportType, const MethodInfo_2ABB050* method);
int32_t Dpr_NetworkUtils_ANetData_BattleTypeData___SendUnReliableData (Dpr_NetworkUtils_ANetData_BattleTypeData__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo_2ABB0F0* method);
int32_t Dpr_NetworkUtils_ANetData_BattleTypeData___SendUnReliableDataToAll (Dpr_NetworkUtils_ANetData_BattleTypeData__o* __this, int32_t transportType, const MethodInfo_2ABB190* method);
INL1_PacketWriterRe_o* Dpr_NetworkUtils_ANetData_BattleTypeData___CreateReliableData (Dpr_NetworkUtils_ANetData_BattleTypeData__o* __this, const MethodInfo_2ABB220* method);
INL1_PacketWriter_o* Dpr_NetworkUtils_ANetData_BattleTypeData___CreateUnReliableData (Dpr_NetworkUtils_ANetData_BattleTypeData__o* __this, const MethodInfo_2ABB2E0* method);
void Dpr_NetworkUtils_ANetData_BattleTypeData___WriteSendData (Dpr_NetworkUtils_ANetData_BattleTypeData__o* __this, INL1_PacketWriter_o* appendTarget, const MethodInfo_2ABB3A0* method);
System_Byte_array* Dpr_NetworkUtils_ANetData_BattleTypeData___ConvertStructToBytes (Dpr_NetworkUtils_ANetData_BattleTypeData__o* __this, const MethodInfo_2ABB3F0* method);
void Dpr_NetworkUtils_ANetData_BattleTypeData___ReceivePacket (Dpr_NetworkUtils_ANetData_BattleTypeData__o* __this, INL1_PacketReader_o* pr, const MethodInfo_2ABB5A0* method);
void Dpr_NetworkUtils_ANetData_BattleTypeData___ReadRecieveData (Dpr_NetworkUtils_ANetData_BattleTypeData__o* __this, INL1_PacketReader_o* pr, const MethodInfo_2ABB5F0* method);
Dpr_NetworkUtils_BattleTypeData_o Dpr_NetworkUtils_ANetData_BattleTypeData___ConvertBytesToStruct (Dpr_NetworkUtils_ANetData_BattleTypeData__o* __this, INL1_PacketReader_o* pr, const MethodInfo_2ABB630* method);
void Dpr_NetworkUtils_ANetData_BattleTypeData____cctor (const MethodInfo_2ABB920* method);
