#pragma once

#include "il2cpp.h"

uint8_t Dpr_NetworkUtils_ANetData_JoinData___get_GetDataID (Dpr_NetworkUtils_ANetData_JoinData__o* __this, const MethodInfo_2AC6610* method);
void Dpr_NetworkUtils_ANetData_JoinData____ctor (Dpr_NetworkUtils_ANetData_JoinData__o* __this, const MethodInfo_2AC66C0* method);
void Dpr_NetworkUtils_ANetData_JoinData___CreateDataBuffer (Dpr_NetworkUtils_ANetData_JoinData__o* __this, const MethodInfo_2AC6740* method);
void Dpr_NetworkUtils_ANetData_JoinData____Debug_ChangeFromStarionIndex (Dpr_NetworkUtils_ANetData_JoinData__o* __this, int32_t idx, const MethodInfo_2AC69E0* method);
int32_t Dpr_NetworkUtils_ANetData_JoinData___get_FromStationIndex (Dpr_NetworkUtils_ANetData_JoinData__o* __this, const MethodInfo_2AC69F0* method);
int32_t Dpr_NetworkUtils_ANetData_JoinData___SendReliableData (Dpr_NetworkUtils_ANetData_JoinData__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo_2AC6A00* method);
int32_t Dpr_NetworkUtils_ANetData_JoinData___SendReliableDataToAll (Dpr_NetworkUtils_ANetData_JoinData__o* __this, int32_t transportType, const MethodInfo_2AC6AB0* method);
int32_t Dpr_NetworkUtils_ANetData_JoinData___SendUnReliableData (Dpr_NetworkUtils_ANetData_JoinData__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo_2AC6B50* method);
int32_t Dpr_NetworkUtils_ANetData_JoinData___SendUnReliableDataToAll (Dpr_NetworkUtils_ANetData_JoinData__o* __this, int32_t transportType, const MethodInfo_2AC6BF0* method);
INL1_PacketWriterRe_o* Dpr_NetworkUtils_ANetData_JoinData___CreateReliableData (Dpr_NetworkUtils_ANetData_JoinData__o* __this, const MethodInfo_2AC6C80* method);
INL1_PacketWriter_o* Dpr_NetworkUtils_ANetData_JoinData___CreateUnReliableData (Dpr_NetworkUtils_ANetData_JoinData__o* __this, const MethodInfo_2AC6D40* method);
void Dpr_NetworkUtils_ANetData_JoinData___WriteSendData (Dpr_NetworkUtils_ANetData_JoinData__o* __this, INL1_PacketWriter_o* appendTarget, const MethodInfo_2AC6E00* method);
System_Byte_array* Dpr_NetworkUtils_ANetData_JoinData___ConvertStructToBytes (Dpr_NetworkUtils_ANetData_JoinData__o* __this, const MethodInfo_2AC6E50* method);
void Dpr_NetworkUtils_ANetData_JoinData___ReceivePacket (Dpr_NetworkUtils_ANetData_JoinData__o* __this, INL1_PacketReader_o* pr, const MethodInfo_2AC7030* method);
void Dpr_NetworkUtils_ANetData_JoinData___ReadRecieveData (Dpr_NetworkUtils_ANetData_JoinData__o* __this, INL1_PacketReader_o* pr, const MethodInfo_2AC7080* method);
Dpr_NetworkUtils_JoinData_o Dpr_NetworkUtils_ANetData_JoinData___ConvertBytesToStruct (Dpr_NetworkUtils_ANetData_JoinData__o* __this, INL1_PacketReader_o* pr, const MethodInfo_2AC70D0* method);
void Dpr_NetworkUtils_ANetData_JoinData____cctor (const MethodInfo_2AC73D0* method);
