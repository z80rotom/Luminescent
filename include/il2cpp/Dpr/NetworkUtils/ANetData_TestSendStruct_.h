#pragma once

#include "il2cpp.h"

uint8_t Dpr_NetworkUtils_ANetData_TestSendStruct___get_GetDataID (Dpr_NetworkUtils_ANetData_TestSendStruct__o* __this, const MethodInfo_25BF180* method);
void Dpr_NetworkUtils_ANetData_TestSendStruct____ctor (Dpr_NetworkUtils_ANetData_TestSendStruct__o* __this, const MethodInfo_25BF230* method);
void Dpr_NetworkUtils_ANetData_TestSendStruct___CreateDataBuffer (Dpr_NetworkUtils_ANetData_TestSendStruct__o* __this, const MethodInfo_25BF290* method);
void Dpr_NetworkUtils_ANetData_TestSendStruct____Debug_ChangeFromStarionIndex (Dpr_NetworkUtils_ANetData_TestSendStruct__o* __this, int32_t idx, const MethodInfo_25BF520* method);
int32_t Dpr_NetworkUtils_ANetData_TestSendStruct___get_FromStationIndex (Dpr_NetworkUtils_ANetData_TestSendStruct__o* __this, const MethodInfo_25BF530* method);
int32_t Dpr_NetworkUtils_ANetData_TestSendStruct___SendReliableData (Dpr_NetworkUtils_ANetData_TestSendStruct__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo_25BF540* method);
int32_t Dpr_NetworkUtils_ANetData_TestSendStruct___SendReliableDataToAll (Dpr_NetworkUtils_ANetData_TestSendStruct__o* __this, int32_t transportType, const MethodInfo_25BF5F0* method);
int32_t Dpr_NetworkUtils_ANetData_TestSendStruct___SendUnReliableData (Dpr_NetworkUtils_ANetData_TestSendStruct__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo_25BF690* method);
int32_t Dpr_NetworkUtils_ANetData_TestSendStruct___SendUnReliableDataToAll (Dpr_NetworkUtils_ANetData_TestSendStruct__o* __this, int32_t transportType, const MethodInfo_25BF730* method);
INL1_PacketWriterRe_o* Dpr_NetworkUtils_ANetData_TestSendStruct___CreateReliableData (Dpr_NetworkUtils_ANetData_TestSendStruct__o* __this, const MethodInfo_25BF7C0* method);
INL1_PacketWriter_o* Dpr_NetworkUtils_ANetData_TestSendStruct___CreateUnReliableData (Dpr_NetworkUtils_ANetData_TestSendStruct__o* __this, const MethodInfo_25BF880* method);
void Dpr_NetworkUtils_ANetData_TestSendStruct___WriteSendData (Dpr_NetworkUtils_ANetData_TestSendStruct__o* __this, INL1_PacketWriter_o* appendTarget, const MethodInfo_25BF940* method);
System_Byte_array* Dpr_NetworkUtils_ANetData_TestSendStruct___ConvertStructToBytes (Dpr_NetworkUtils_ANetData_TestSendStruct__o* __this, const MethodInfo_25BF990* method);
void Dpr_NetworkUtils_ANetData_TestSendStruct___ReceivePacket (Dpr_NetworkUtils_ANetData_TestSendStruct__o* __this, INL1_PacketReader_o* pr, const MethodInfo_25BFB40* method);
void Dpr_NetworkUtils_ANetData_TestSendStruct___ReadRecieveData (Dpr_NetworkUtils_ANetData_TestSendStruct__o* __this, INL1_PacketReader_o* pr, const MethodInfo_25BFB90* method);
Dpr_NetworkDbg_TestSendStruct_o Dpr_NetworkUtils_ANetData_TestSendStruct___ConvertBytesToStruct (Dpr_NetworkUtils_ANetData_TestSendStruct__o* __this, INL1_PacketReader_o* pr, const MethodInfo_25BFBD0* method);
void Dpr_NetworkUtils_ANetData_TestSendStruct____cctor (const MethodInfo_25BFEC0* method);