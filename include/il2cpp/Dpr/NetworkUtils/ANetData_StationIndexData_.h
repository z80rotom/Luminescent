#pragma once

#include "il2cpp.h"

uint8_t Dpr_NetworkUtils_ANetData_StationIndexData___get_GetDataID (Dpr_NetworkUtils_ANetData_StationIndexData__o* __this, const MethodInfo_2AD3BD0* method);
void Dpr_NetworkUtils_ANetData_StationIndexData____ctor (Dpr_NetworkUtils_ANetData_StationIndexData__o* __this, const MethodInfo_2AD3C80* method);
void Dpr_NetworkUtils_ANetData_StationIndexData___CreateDataBuffer (Dpr_NetworkUtils_ANetData_StationIndexData__o* __this, const MethodInfo_2AD3CE0* method);
void Dpr_NetworkUtils_ANetData_StationIndexData____Debug_ChangeFromStarionIndex (Dpr_NetworkUtils_ANetData_StationIndexData__o* __this, int32_t idx, const MethodInfo_2AD3F60* method);
int32_t Dpr_NetworkUtils_ANetData_StationIndexData___get_FromStationIndex (Dpr_NetworkUtils_ANetData_StationIndexData__o* __this, const MethodInfo_2AD3F70* method);
int32_t Dpr_NetworkUtils_ANetData_StationIndexData___SendReliableData (Dpr_NetworkUtils_ANetData_StationIndexData__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo_2AD3F80* method);
int32_t Dpr_NetworkUtils_ANetData_StationIndexData___SendReliableDataToAll (Dpr_NetworkUtils_ANetData_StationIndexData__o* __this, int32_t transportType, const MethodInfo_2AD4030* method);
int32_t Dpr_NetworkUtils_ANetData_StationIndexData___SendUnReliableData (Dpr_NetworkUtils_ANetData_StationIndexData__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo_2AD40D0* method);
int32_t Dpr_NetworkUtils_ANetData_StationIndexData___SendUnReliableDataToAll (Dpr_NetworkUtils_ANetData_StationIndexData__o* __this, int32_t transportType, const MethodInfo_2AD4170* method);
INL1_PacketWriterRe_o* Dpr_NetworkUtils_ANetData_StationIndexData___CreateReliableData (Dpr_NetworkUtils_ANetData_StationIndexData__o* __this, const MethodInfo_2AD4200* method);
INL1_PacketWriter_o* Dpr_NetworkUtils_ANetData_StationIndexData___CreateUnReliableData (Dpr_NetworkUtils_ANetData_StationIndexData__o* __this, const MethodInfo_2AD42C0* method);
void Dpr_NetworkUtils_ANetData_StationIndexData___WriteSendData (Dpr_NetworkUtils_ANetData_StationIndexData__o* __this, INL1_PacketWriter_o* appendTarget, const MethodInfo_2AD4380* method);
System_Byte_array* Dpr_NetworkUtils_ANetData_StationIndexData___ConvertStructToBytes (Dpr_NetworkUtils_ANetData_StationIndexData__o* __this, const MethodInfo_2AD43D0* method);
void Dpr_NetworkUtils_ANetData_StationIndexData___ReceivePacket (Dpr_NetworkUtils_ANetData_StationIndexData__o* __this, INL1_PacketReader_o* pr, const MethodInfo_2AD4580* method);
void Dpr_NetworkUtils_ANetData_StationIndexData___ReadRecieveData (Dpr_NetworkUtils_ANetData_StationIndexData__o* __this, INL1_PacketReader_o* pr, const MethodInfo_2AD45D0* method);
Dpr_NetworkUtils_StationIndexData_o Dpr_NetworkUtils_ANetData_StationIndexData___ConvertBytesToStruct (Dpr_NetworkUtils_ANetData_StationIndexData__o* __this, INL1_PacketReader_o* pr, const MethodInfo_2AD4610* method);
void Dpr_NetworkUtils_ANetData_StationIndexData____cctor (const MethodInfo_2AD4900* method);