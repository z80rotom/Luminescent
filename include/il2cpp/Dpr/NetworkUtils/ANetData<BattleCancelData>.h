#pragma once

#include "il2cpp.h"

uint8_t Dpr_NetworkUtils_ANetData_BattleCancelData___get_GetDataID (Dpr_NetworkUtils_ANetData_BattleCancelData__o* __this, const MethodInfo_25C0C30* method);
void Dpr_NetworkUtils_ANetData_BattleCancelData____ctor (Dpr_NetworkUtils_ANetData_BattleCancelData__o* __this, const MethodInfo_25C0CE0* method);
void Dpr_NetworkUtils_ANetData_BattleCancelData___CreateDataBuffer (Dpr_NetworkUtils_ANetData_BattleCancelData__o* __this, const MethodInfo_25C0D40* method);
void Dpr_NetworkUtils_ANetData_BattleCancelData____Debug_ChangeFromStarionIndex (Dpr_NetworkUtils_ANetData_BattleCancelData__o* __this, int32_t idx, const MethodInfo_25C0FC0* method);
int32_t Dpr_NetworkUtils_ANetData_BattleCancelData___get_FromStationIndex (Dpr_NetworkUtils_ANetData_BattleCancelData__o* __this, const MethodInfo_25C0FD0* method);
int32_t Dpr_NetworkUtils_ANetData_BattleCancelData___SendReliableData (Dpr_NetworkUtils_ANetData_BattleCancelData__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo_25C0FE0* method);
int32_t Dpr_NetworkUtils_ANetData_BattleCancelData___SendReliableDataToAll (Dpr_NetworkUtils_ANetData_BattleCancelData__o* __this, int32_t transportType, const MethodInfo_25C1090* method);
int32_t Dpr_NetworkUtils_ANetData_BattleCancelData___SendUnReliableData (Dpr_NetworkUtils_ANetData_BattleCancelData__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo_25C1130* method);
int32_t Dpr_NetworkUtils_ANetData_BattleCancelData___SendUnReliableDataToAll (Dpr_NetworkUtils_ANetData_BattleCancelData__o* __this, int32_t transportType, const MethodInfo_25C11D0* method);
INL1_PacketWriterRe_o* Dpr_NetworkUtils_ANetData_BattleCancelData___CreateReliableData (Dpr_NetworkUtils_ANetData_BattleCancelData__o* __this, const MethodInfo_25C1260* method);
INL1_PacketWriter_o* Dpr_NetworkUtils_ANetData_BattleCancelData___CreateUnReliableData (Dpr_NetworkUtils_ANetData_BattleCancelData__o* __this, const MethodInfo_25C1320* method);
void Dpr_NetworkUtils_ANetData_BattleCancelData___WriteSendData (Dpr_NetworkUtils_ANetData_BattleCancelData__o* __this, INL1_PacketWriter_o* appendTarget, const MethodInfo_25C13E0* method);
System_Byte_array* Dpr_NetworkUtils_ANetData_BattleCancelData___ConvertStructToBytes (Dpr_NetworkUtils_ANetData_BattleCancelData__o* __this, const MethodInfo_25C1430* method);
void Dpr_NetworkUtils_ANetData_BattleCancelData___ReceivePacket (Dpr_NetworkUtils_ANetData_BattleCancelData__o* __this, INL1_PacketReader_o* pr, const MethodInfo_25C15E0* method);
void Dpr_NetworkUtils_ANetData_BattleCancelData___ReadRecieveData (Dpr_NetworkUtils_ANetData_BattleCancelData__o* __this, INL1_PacketReader_o* pr, const MethodInfo_25C1630* method);
Dpr_NetworkUtils_BattleCancelData_o Dpr_NetworkUtils_ANetData_BattleCancelData___ConvertBytesToStruct (Dpr_NetworkUtils_ANetData_BattleCancelData__o* __this, INL1_PacketReader_o* pr, const MethodInfo_25C1670* method);
void Dpr_NetworkUtils_ANetData_BattleCancelData____cctor (const MethodInfo_25C1960* method);
