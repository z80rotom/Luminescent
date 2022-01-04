#pragma once

#include "il2cpp.h"

uint8_t Dpr_NetworkUtils_ANetData_Dummy___get_GetDataID (Dpr_NetworkUtils_ANetData_Dummy__o* __this, const MethodInfo_2AC3E50* method);
void Dpr_NetworkUtils_ANetData_Dummy____ctor (Dpr_NetworkUtils_ANetData_Dummy__o* __this, const MethodInfo_2AC3F00* method);
void Dpr_NetworkUtils_ANetData_Dummy___CreateDataBuffer (Dpr_NetworkUtils_ANetData_Dummy__o* __this, const MethodInfo_2AC3F60* method);
void Dpr_NetworkUtils_ANetData_Dummy____Debug_ChangeFromStarionIndex (Dpr_NetworkUtils_ANetData_Dummy__o* __this, int32_t idx, const MethodInfo_2AC41E0* method);
int32_t Dpr_NetworkUtils_ANetData_Dummy___get_FromStationIndex (Dpr_NetworkUtils_ANetData_Dummy__o* __this, const MethodInfo_2AC41F0* method);
int32_t Dpr_NetworkUtils_ANetData_Dummy___SendReliableData (Dpr_NetworkUtils_ANetData_Dummy__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo_2AC4200* method);
int32_t Dpr_NetworkUtils_ANetData_Dummy___SendReliableDataToAll (Dpr_NetworkUtils_ANetData_Dummy__o* __this, int32_t transportType, const MethodInfo_2AC42B0* method);
int32_t Dpr_NetworkUtils_ANetData_Dummy___SendUnReliableData (Dpr_NetworkUtils_ANetData_Dummy__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo_2AC4350* method);
int32_t Dpr_NetworkUtils_ANetData_Dummy___SendUnReliableDataToAll (Dpr_NetworkUtils_ANetData_Dummy__o* __this, int32_t transportType, const MethodInfo_2AC43F0* method);
INL1_PacketWriterRe_o* Dpr_NetworkUtils_ANetData_Dummy___CreateReliableData (Dpr_NetworkUtils_ANetData_Dummy__o* __this, const MethodInfo_2AC4480* method);
INL1_PacketWriter_o* Dpr_NetworkUtils_ANetData_Dummy___CreateUnReliableData (Dpr_NetworkUtils_ANetData_Dummy__o* __this, const MethodInfo_2AC4540* method);
void Dpr_NetworkUtils_ANetData_Dummy___WriteSendData (Dpr_NetworkUtils_ANetData_Dummy__o* __this, INL1_PacketWriter_o* appendTarget, const MethodInfo_2AC4600* method);
System_Byte_array* Dpr_NetworkUtils_ANetData_Dummy___ConvertStructToBytes (Dpr_NetworkUtils_ANetData_Dummy__o* __this, const MethodInfo_2AC4650* method);
void Dpr_NetworkUtils_ANetData_Dummy___ReceivePacket (Dpr_NetworkUtils_ANetData_Dummy__o* __this, INL1_PacketReader_o* pr, const MethodInfo_2AC4800* method);
void Dpr_NetworkUtils_ANetData_Dummy___ReadRecieveData (Dpr_NetworkUtils_ANetData_Dummy__o* __this, INL1_PacketReader_o* pr, const MethodInfo_2AC4850* method);
Dpr_NetworkUtils_Dummy_o Dpr_NetworkUtils_ANetData_Dummy___ConvertBytesToStruct (Dpr_NetworkUtils_ANetData_Dummy__o* __this, INL1_PacketReader_o* pr, const MethodInfo_2AC4890* method);
void Dpr_NetworkUtils_ANetData_Dummy____cctor (const MethodInfo_2AC4B80* method);
