#pragma once

#include "il2cpp.h"

uint8_t Dpr_NetworkUtils_ANetData_ServerParam___get_GetDataID (Dpr_NetworkUtils_ANetData_ServerParam__o* __this, const MethodInfo_25B2860* method);
void Dpr_NetworkUtils_ANetData_ServerParam____ctor (Dpr_NetworkUtils_ANetData_ServerParam__o* __this, const MethodInfo_25B2910* method);
void Dpr_NetworkUtils_ANetData_ServerParam___CreateDataBuffer (Dpr_NetworkUtils_ANetData_ServerParam__o* __this, const MethodInfo_25B2990* method);
void Dpr_NetworkUtils_ANetData_ServerParam____Debug_ChangeFromStarionIndex (Dpr_NetworkUtils_ANetData_ServerParam__o* __this, int32_t idx, const MethodInfo_25B2C30* method);
int32_t Dpr_NetworkUtils_ANetData_ServerParam___get_FromStationIndex (Dpr_NetworkUtils_ANetData_ServerParam__o* __this, const MethodInfo_25B2C40* method);
int32_t Dpr_NetworkUtils_ANetData_ServerParam___SendReliableData (Dpr_NetworkUtils_ANetData_ServerParam__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo_25B2C50* method);
int32_t Dpr_NetworkUtils_ANetData_ServerParam___SendReliableDataToAll (Dpr_NetworkUtils_ANetData_ServerParam__o* __this, int32_t transportType, const MethodInfo_25B2D00* method);
int32_t Dpr_NetworkUtils_ANetData_ServerParam___SendUnReliableData (Dpr_NetworkUtils_ANetData_ServerParam__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo_25B2DA0* method);
int32_t Dpr_NetworkUtils_ANetData_ServerParam___SendUnReliableDataToAll (Dpr_NetworkUtils_ANetData_ServerParam__o* __this, int32_t transportType, const MethodInfo_25B2E40* method);
INL1_PacketWriterRe_o* Dpr_NetworkUtils_ANetData_ServerParam___CreateReliableData (Dpr_NetworkUtils_ANetData_ServerParam__o* __this, const MethodInfo_25B2ED0* method);
INL1_PacketWriter_o* Dpr_NetworkUtils_ANetData_ServerParam___CreateUnReliableData (Dpr_NetworkUtils_ANetData_ServerParam__o* __this, const MethodInfo_25B2F90* method);
void Dpr_NetworkUtils_ANetData_ServerParam___WriteSendData (Dpr_NetworkUtils_ANetData_ServerParam__o* __this, INL1_PacketWriter_o* appendTarget, const MethodInfo_25B3050* method);
System_Byte_array* Dpr_NetworkUtils_ANetData_ServerParam___ConvertStructToBytes (Dpr_NetworkUtils_ANetData_ServerParam__o* __this, const MethodInfo_25B30A0* method);
void Dpr_NetworkUtils_ANetData_ServerParam___ReceivePacket (Dpr_NetworkUtils_ANetData_ServerParam__o* __this, INL1_PacketReader_o* pr, const MethodInfo_25B3280* method);
void Dpr_NetworkUtils_ANetData_ServerParam___ReadRecieveData (Dpr_NetworkUtils_ANetData_ServerParam__o* __this, INL1_PacketReader_o* pr, const MethodInfo_25B32D0* method);
Dpr_Battle_Logic_Net_Data_ServerParam_o Dpr_NetworkUtils_ANetData_ServerParam___ConvertBytesToStruct (Dpr_NetworkUtils_ANetData_ServerParam__o* __this, INL1_PacketReader_o* pr, const MethodInfo_25B3320* method);
void Dpr_NetworkUtils_ANetData_ServerParam____cctor (const MethodInfo_25B3620* method);