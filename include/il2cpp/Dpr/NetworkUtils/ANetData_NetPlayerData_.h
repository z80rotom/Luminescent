#pragma once

#include "il2cpp.h"

uint8_t Dpr_NetworkUtils_ANetData_NetPlayerData___get_GetDataID (Dpr_NetworkUtils_ANetData_NetPlayerData__o* __this, const MethodInfo_25BAE80* method);
void Dpr_NetworkUtils_ANetData_NetPlayerData____ctor (Dpr_NetworkUtils_ANetData_NetPlayerData__o* __this, const MethodInfo_25BAF30* method);
void Dpr_NetworkUtils_ANetData_NetPlayerData___CreateDataBuffer (Dpr_NetworkUtils_ANetData_NetPlayerData__o* __this, const MethodInfo_25BAFB0* method);
void Dpr_NetworkUtils_ANetData_NetPlayerData____Debug_ChangeFromStarionIndex (Dpr_NetworkUtils_ANetData_NetPlayerData__o* __this, int32_t idx, const MethodInfo_25BB250* method);
int32_t Dpr_NetworkUtils_ANetData_NetPlayerData___get_FromStationIndex (Dpr_NetworkUtils_ANetData_NetPlayerData__o* __this, const MethodInfo_25BB260* method);
int32_t Dpr_NetworkUtils_ANetData_NetPlayerData___SendReliableData (Dpr_NetworkUtils_ANetData_NetPlayerData__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo_25BB270* method);
int32_t Dpr_NetworkUtils_ANetData_NetPlayerData___SendReliableDataToAll (Dpr_NetworkUtils_ANetData_NetPlayerData__o* __this, int32_t transportType, const MethodInfo_25BB320* method);
int32_t Dpr_NetworkUtils_ANetData_NetPlayerData___SendUnReliableData (Dpr_NetworkUtils_ANetData_NetPlayerData__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo_25BB3C0* method);
int32_t Dpr_NetworkUtils_ANetData_NetPlayerData___SendUnReliableDataToAll (Dpr_NetworkUtils_ANetData_NetPlayerData__o* __this, int32_t transportType, const MethodInfo_25BB460* method);
INL1_PacketWriterRe_o* Dpr_NetworkUtils_ANetData_NetPlayerData___CreateReliableData (Dpr_NetworkUtils_ANetData_NetPlayerData__o* __this, const MethodInfo_25BB4F0* method);
INL1_PacketWriter_o* Dpr_NetworkUtils_ANetData_NetPlayerData___CreateUnReliableData (Dpr_NetworkUtils_ANetData_NetPlayerData__o* __this, const MethodInfo_25BB5B0* method);
void Dpr_NetworkUtils_ANetData_NetPlayerData___WriteSendData (Dpr_NetworkUtils_ANetData_NetPlayerData__o* __this, INL1_PacketWriter_o* appendTarget, const MethodInfo_25BB670* method);
System_Byte_array* Dpr_NetworkUtils_ANetData_NetPlayerData___ConvertStructToBytes (Dpr_NetworkUtils_ANetData_NetPlayerData__o* __this, const MethodInfo_25BB6C0* method);
void Dpr_NetworkUtils_ANetData_NetPlayerData___ReceivePacket (Dpr_NetworkUtils_ANetData_NetPlayerData__o* __this, INL1_PacketReader_o* pr, const MethodInfo_25BB8A0* method);
void Dpr_NetworkUtils_ANetData_NetPlayerData___ReadRecieveData (Dpr_NetworkUtils_ANetData_NetPlayerData__o* __this, INL1_PacketReader_o* pr, const MethodInfo_25BB8F0* method);
Dpr_Contest_NetPlayerData_o Dpr_NetworkUtils_ANetData_NetPlayerData___ConvertBytesToStruct (Dpr_NetworkUtils_ANetData_NetPlayerData__o* __this, INL1_PacketReader_o* pr, const MethodInfo_25BB950* method);
void Dpr_NetworkUtils_ANetData_NetPlayerData____cctor (const MethodInfo_25BBC50* method);