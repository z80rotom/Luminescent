#pragma once

#include "il2cpp.h"

uint8_t Dpr_NetworkUtils_ANetData_StationWaitFrameParam___get_GetDataID (Dpr_NetworkUtils_ANetData_StationWaitFrameParam__o* __this, const MethodInfo_2AD4910* method);
void Dpr_NetworkUtils_ANetData_StationWaitFrameParam____ctor (Dpr_NetworkUtils_ANetData_StationWaitFrameParam__o* __this, const MethodInfo_2AD49C0* method);
void Dpr_NetworkUtils_ANetData_StationWaitFrameParam___CreateDataBuffer (Dpr_NetworkUtils_ANetData_StationWaitFrameParam__o* __this, const MethodInfo_2AD4A20* method);
void Dpr_NetworkUtils_ANetData_StationWaitFrameParam____Debug_ChangeFromStarionIndex (Dpr_NetworkUtils_ANetData_StationWaitFrameParam__o* __this, int32_t idx, const MethodInfo_2AD4CA0* method);
int32_t Dpr_NetworkUtils_ANetData_StationWaitFrameParam___get_FromStationIndex (Dpr_NetworkUtils_ANetData_StationWaitFrameParam__o* __this, const MethodInfo_2AD4CB0* method);
int32_t Dpr_NetworkUtils_ANetData_StationWaitFrameParam___SendReliableData (Dpr_NetworkUtils_ANetData_StationWaitFrameParam__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo_2AD4CC0* method);
int32_t Dpr_NetworkUtils_ANetData_StationWaitFrameParam___SendReliableDataToAll (Dpr_NetworkUtils_ANetData_StationWaitFrameParam__o* __this, int32_t transportType, const MethodInfo_2AD4D70* method);
int32_t Dpr_NetworkUtils_ANetData_StationWaitFrameParam___SendUnReliableData (Dpr_NetworkUtils_ANetData_StationWaitFrameParam__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo_2AD4E10* method);
int32_t Dpr_NetworkUtils_ANetData_StationWaitFrameParam___SendUnReliableDataToAll (Dpr_NetworkUtils_ANetData_StationWaitFrameParam__o* __this, int32_t transportType, const MethodInfo_2AD4EB0* method);
INL1_PacketWriterRe_o* Dpr_NetworkUtils_ANetData_StationWaitFrameParam___CreateReliableData (Dpr_NetworkUtils_ANetData_StationWaitFrameParam__o* __this, const MethodInfo_2AD4F40* method);
INL1_PacketWriter_o* Dpr_NetworkUtils_ANetData_StationWaitFrameParam___CreateUnReliableData (Dpr_NetworkUtils_ANetData_StationWaitFrameParam__o* __this, const MethodInfo_2AD5000* method);
void Dpr_NetworkUtils_ANetData_StationWaitFrameParam___WriteSendData (Dpr_NetworkUtils_ANetData_StationWaitFrameParam__o* __this, INL1_PacketWriter_o* appendTarget, const MethodInfo_2AD50C0* method);
System_Byte_array* Dpr_NetworkUtils_ANetData_StationWaitFrameParam___ConvertStructToBytes (Dpr_NetworkUtils_ANetData_StationWaitFrameParam__o* __this, const MethodInfo_2AD5110* method);
void Dpr_NetworkUtils_ANetData_StationWaitFrameParam___ReceivePacket (Dpr_NetworkUtils_ANetData_StationWaitFrameParam__o* __this, INL1_PacketReader_o* pr, const MethodInfo_2AD52C0* method);
void Dpr_NetworkUtils_ANetData_StationWaitFrameParam___ReadRecieveData (Dpr_NetworkUtils_ANetData_StationWaitFrameParam__o* __this, INL1_PacketReader_o* pr, const MethodInfo_2AD5310* method);
Dpr_NetworkUtils_StationWaitFrameParam_o Dpr_NetworkUtils_ANetData_StationWaitFrameParam___ConvertBytesToStruct (Dpr_NetworkUtils_ANetData_StationWaitFrameParam__o* __this, INL1_PacketReader_o* pr, const MethodInfo_2AD5350* method);
void Dpr_NetworkUtils_ANetData_StationWaitFrameParam____cctor (const MethodInfo_2AD5640* method);