#pragma once

#include "il2cpp.h"

uint8_t Dpr_NetworkUtils_ANetData_TransitionAfterData___get_GetDataID (Dpr_NetworkUtils_ANetData_TransitionAfterData__o* __this, const MethodInfo_26AF340* method);
void Dpr_NetworkUtils_ANetData_TransitionAfterData____ctor (Dpr_NetworkUtils_ANetData_TransitionAfterData__o* __this, const MethodInfo_26AF3F0* method);
void Dpr_NetworkUtils_ANetData_TransitionAfterData___CreateDataBuffer (Dpr_NetworkUtils_ANetData_TransitionAfterData__o* __this, const MethodInfo_26AF450* method);
void Dpr_NetworkUtils_ANetData_TransitionAfterData____Debug_ChangeFromStarionIndex (Dpr_NetworkUtils_ANetData_TransitionAfterData__o* __this, int32_t idx, const MethodInfo_26AF6D0* method);
int32_t Dpr_NetworkUtils_ANetData_TransitionAfterData___get_FromStationIndex (Dpr_NetworkUtils_ANetData_TransitionAfterData__o* __this, const MethodInfo_26AF6E0* method);
int32_t Dpr_NetworkUtils_ANetData_TransitionAfterData___SendReliableData (Dpr_NetworkUtils_ANetData_TransitionAfterData__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo_26AF6F0* method);
int32_t Dpr_NetworkUtils_ANetData_TransitionAfterData___SendReliableDataToAll (Dpr_NetworkUtils_ANetData_TransitionAfterData__o* __this, int32_t transportType, const MethodInfo_26AF7A0* method);
int32_t Dpr_NetworkUtils_ANetData_TransitionAfterData___SendUnReliableData (Dpr_NetworkUtils_ANetData_TransitionAfterData__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo_26AF840* method);
int32_t Dpr_NetworkUtils_ANetData_TransitionAfterData___SendUnReliableDataToAll (Dpr_NetworkUtils_ANetData_TransitionAfterData__o* __this, int32_t transportType, const MethodInfo_26AF8E0* method);
INL1_PacketWriterRe_o* Dpr_NetworkUtils_ANetData_TransitionAfterData___CreateReliableData (Dpr_NetworkUtils_ANetData_TransitionAfterData__o* __this, const MethodInfo_26AF970* method);
INL1_PacketWriter_o* Dpr_NetworkUtils_ANetData_TransitionAfterData___CreateUnReliableData (Dpr_NetworkUtils_ANetData_TransitionAfterData__o* __this, const MethodInfo_26AFA30* method);
void Dpr_NetworkUtils_ANetData_TransitionAfterData___WriteSendData (Dpr_NetworkUtils_ANetData_TransitionAfterData__o* __this, INL1_PacketWriter_o* appendTarget, const MethodInfo_26AFAF0* method);
System_Byte_array* Dpr_NetworkUtils_ANetData_TransitionAfterData___ConvertStructToBytes (Dpr_NetworkUtils_ANetData_TransitionAfterData__o* __this, const MethodInfo_26AFB40* method);
void Dpr_NetworkUtils_ANetData_TransitionAfterData___ReceivePacket (Dpr_NetworkUtils_ANetData_TransitionAfterData__o* __this, INL1_PacketReader_o* pr, const MethodInfo_26AFCF0* method);
void Dpr_NetworkUtils_ANetData_TransitionAfterData___ReadRecieveData (Dpr_NetworkUtils_ANetData_TransitionAfterData__o* __this, INL1_PacketReader_o* pr, const MethodInfo_26AFD40* method);
Dpr_NetworkUtils_TransitionAfterData_o Dpr_NetworkUtils_ANetData_TransitionAfterData___ConvertBytesToStruct (Dpr_NetworkUtils_ANetData_TransitionAfterData__o* __this, INL1_PacketReader_o* pr, const MethodInfo_26AFD80* method);
void Dpr_NetworkUtils_ANetData_TransitionAfterData____cctor (const MethodInfo_26B0070* method);