#pragma once

#include "il2cpp.h"

uint8_t Dpr_NetworkUtils_ANetData_DigAttackData___get_GetDataID (Dpr_NetworkUtils_ANetData_DigAttackData__o* __this, const MethodInfo_2AC08B0* method);
void Dpr_NetworkUtils_ANetData_DigAttackData____ctor (Dpr_NetworkUtils_ANetData_DigAttackData__o* __this, const MethodInfo_2AC0960* method);
void Dpr_NetworkUtils_ANetData_DigAttackData___CreateDataBuffer (Dpr_NetworkUtils_ANetData_DigAttackData__o* __this, const MethodInfo_2AC09C0* method);
void Dpr_NetworkUtils_ANetData_DigAttackData____Debug_ChangeFromStarionIndex (Dpr_NetworkUtils_ANetData_DigAttackData__o* __this, int32_t idx, const MethodInfo_2AC0C50* method);
int32_t Dpr_NetworkUtils_ANetData_DigAttackData___get_FromStationIndex (Dpr_NetworkUtils_ANetData_DigAttackData__o* __this, const MethodInfo_2AC0C60* method);
int32_t Dpr_NetworkUtils_ANetData_DigAttackData___SendReliableData (Dpr_NetworkUtils_ANetData_DigAttackData__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo_2AC0C70* method);
int32_t Dpr_NetworkUtils_ANetData_DigAttackData___SendReliableDataToAll (Dpr_NetworkUtils_ANetData_DigAttackData__o* __this, int32_t transportType, const MethodInfo_2AC0D20* method);
int32_t Dpr_NetworkUtils_ANetData_DigAttackData___SendUnReliableData (Dpr_NetworkUtils_ANetData_DigAttackData__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo_2AC0DC0* method);
int32_t Dpr_NetworkUtils_ANetData_DigAttackData___SendUnReliableDataToAll (Dpr_NetworkUtils_ANetData_DigAttackData__o* __this, int32_t transportType, const MethodInfo_2AC0E60* method);
INL1_PacketWriterRe_o* Dpr_NetworkUtils_ANetData_DigAttackData___CreateReliableData (Dpr_NetworkUtils_ANetData_DigAttackData__o* __this, const MethodInfo_2AC0EF0* method);
INL1_PacketWriter_o* Dpr_NetworkUtils_ANetData_DigAttackData___CreateUnReliableData (Dpr_NetworkUtils_ANetData_DigAttackData__o* __this, const MethodInfo_2AC0FB0* method);
void Dpr_NetworkUtils_ANetData_DigAttackData___WriteSendData (Dpr_NetworkUtils_ANetData_DigAttackData__o* __this, INL1_PacketWriter_o* appendTarget, const MethodInfo_2AC1070* method);
System_Byte_array* Dpr_NetworkUtils_ANetData_DigAttackData___ConvertStructToBytes (Dpr_NetworkUtils_ANetData_DigAttackData__o* __this, const MethodInfo_2AC10C0* method);
void Dpr_NetworkUtils_ANetData_DigAttackData___ReceivePacket (Dpr_NetworkUtils_ANetData_DigAttackData__o* __this, INL1_PacketReader_o* pr, const MethodInfo_2AC1270* method);
void Dpr_NetworkUtils_ANetData_DigAttackData___ReadRecieveData (Dpr_NetworkUtils_ANetData_DigAttackData__o* __this, INL1_PacketReader_o* pr, const MethodInfo_2AC12C0* method);
Dpr_NetworkUtils_DigAttackData_o Dpr_NetworkUtils_ANetData_DigAttackData___ConvertBytesToStruct (Dpr_NetworkUtils_ANetData_DigAttackData__o* __this, INL1_PacketReader_o* pr, const MethodInfo_2AC1300* method);
void Dpr_NetworkUtils_ANetData_DigAttackData____cctor (const MethodInfo_2AC15F0* method);
