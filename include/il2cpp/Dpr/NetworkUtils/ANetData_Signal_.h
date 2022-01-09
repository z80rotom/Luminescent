#pragma once

#include "il2cpp.h"

uint8_t Dpr_NetworkUtils_ANetData_Signal___get_GetDataID (Dpr_NetworkUtils_ANetData_Signal__o* __this, const MethodInfo* method_info);
void Dpr_NetworkUtils_ANetData_Signal____ctor (Dpr_NetworkUtils_ANetData_Signal__o* __this, const MethodInfo* method_info);
void Dpr_NetworkUtils_ANetData_Signal___CreateDataBuffer (Dpr_NetworkUtils_ANetData_Signal__o* __this, const MethodInfo* method_info);
void Dpr_NetworkUtils_ANetData_Signal____Debug_ChangeFromStarionIndex (Dpr_NetworkUtils_ANetData_Signal__o* __this, int32_t idx, const MethodInfo* method_info);
int32_t Dpr_NetworkUtils_ANetData_Signal___get_FromStationIndex (Dpr_NetworkUtils_ANetData_Signal__o* __this, const MethodInfo* method_info);
int32_t Dpr_NetworkUtils_ANetData_Signal___SendReliableData (Dpr_NetworkUtils_ANetData_Signal__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo* method_info);
int32_t Dpr_NetworkUtils_ANetData_Signal___SendReliableDataToAll (Dpr_NetworkUtils_ANetData_Signal__o* __this, int32_t transportType, const MethodInfo* method_info);
int32_t Dpr_NetworkUtils_ANetData_Signal___SendUnReliableData (Dpr_NetworkUtils_ANetData_Signal__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo* method_info);
int32_t Dpr_NetworkUtils_ANetData_Signal___SendUnReliableDataToAll (Dpr_NetworkUtils_ANetData_Signal__o* __this, int32_t transportType, const MethodInfo* method_info);
INL1_PacketWriterRe_o* Dpr_NetworkUtils_ANetData_Signal___CreateReliableData (Dpr_NetworkUtils_ANetData_Signal__o* __this, const MethodInfo* method_info);
INL1_PacketWriter_o* Dpr_NetworkUtils_ANetData_Signal___CreateUnReliableData (Dpr_NetworkUtils_ANetData_Signal__o* __this, const MethodInfo* method_info);
void Dpr_NetworkUtils_ANetData_Signal___WriteSendData (Dpr_NetworkUtils_ANetData_Signal__o* __this, INL1_PacketWriter_o* appendTarget, const MethodInfo* method_info);
System_Byte_array* Dpr_NetworkUtils_ANetData_Signal___ConvertStructToBytes (Dpr_NetworkUtils_ANetData_Signal__o* __this, const MethodInfo* method_info);
void Dpr_NetworkUtils_ANetData_Signal___ReceivePacket (Dpr_NetworkUtils_ANetData_Signal__o* __this, INL1_PacketReader_o* pr, const MethodInfo* method_info);
void Dpr_NetworkUtils_ANetData_Signal___ReadRecieveData (Dpr_NetworkUtils_ANetData_Signal__o* __this, INL1_PacketReader_o* pr, const MethodInfo* method_info);
Dpr_Battle_Logic_Net_Data_Signal_o Dpr_NetworkUtils_ANetData_Signal___ConvertBytesToStruct (Dpr_NetworkUtils_ANetData_Signal__o* __this, INL1_PacketReader_o* pr, const MethodInfo* method_info);
void Dpr_NetworkUtils_ANetData_Signal____cctor (const MethodInfo* method_info);
