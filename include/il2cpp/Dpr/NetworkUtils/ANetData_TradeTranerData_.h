#pragma once

#include "il2cpp.h"

uint8_t Dpr_NetworkUtils_ANetData_TradeTranerData___get_GetDataID (Dpr_NetworkUtils_ANetData_TradeTranerData__o* __this, const MethodInfo_26AD720* method);
void Dpr_NetworkUtils_ANetData_TradeTranerData____ctor (Dpr_NetworkUtils_ANetData_TradeTranerData__o* __this, const MethodInfo_26AD7D0* method);
void Dpr_NetworkUtils_ANetData_TradeTranerData___CreateDataBuffer (Dpr_NetworkUtils_ANetData_TradeTranerData__o* __this, const MethodInfo_26AD840* method);
void Dpr_NetworkUtils_ANetData_TradeTranerData____Debug_ChangeFromStarionIndex (Dpr_NetworkUtils_ANetData_TradeTranerData__o* __this, int32_t idx, const MethodInfo_26ADAD0* method);
int32_t Dpr_NetworkUtils_ANetData_TradeTranerData___get_FromStationIndex (Dpr_NetworkUtils_ANetData_TradeTranerData__o* __this, const MethodInfo_26ADAE0* method);
int32_t Dpr_NetworkUtils_ANetData_TradeTranerData___SendReliableData (Dpr_NetworkUtils_ANetData_TradeTranerData__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo_26ADAF0* method);
int32_t Dpr_NetworkUtils_ANetData_TradeTranerData___SendReliableDataToAll (Dpr_NetworkUtils_ANetData_TradeTranerData__o* __this, int32_t transportType, const MethodInfo_26ADBA0* method);
int32_t Dpr_NetworkUtils_ANetData_TradeTranerData___SendUnReliableData (Dpr_NetworkUtils_ANetData_TradeTranerData__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo_26ADC40* method);
int32_t Dpr_NetworkUtils_ANetData_TradeTranerData___SendUnReliableDataToAll (Dpr_NetworkUtils_ANetData_TradeTranerData__o* __this, int32_t transportType, const MethodInfo_26ADCE0* method);
INL1_PacketWriterRe_o* Dpr_NetworkUtils_ANetData_TradeTranerData___CreateReliableData (Dpr_NetworkUtils_ANetData_TradeTranerData__o* __this, const MethodInfo_26ADD70* method);
INL1_PacketWriter_o* Dpr_NetworkUtils_ANetData_TradeTranerData___CreateUnReliableData (Dpr_NetworkUtils_ANetData_TradeTranerData__o* __this, const MethodInfo_26ADE30* method);
void Dpr_NetworkUtils_ANetData_TradeTranerData___WriteSendData (Dpr_NetworkUtils_ANetData_TradeTranerData__o* __this, INL1_PacketWriter_o* appendTarget, const MethodInfo_26ADEF0* method);
System_Byte_array* Dpr_NetworkUtils_ANetData_TradeTranerData___ConvertStructToBytes (Dpr_NetworkUtils_ANetData_TradeTranerData__o* __this, const MethodInfo_26ADF40* method);
void Dpr_NetworkUtils_ANetData_TradeTranerData___ReceivePacket (Dpr_NetworkUtils_ANetData_TradeTranerData__o* __this, INL1_PacketReader_o* pr, const MethodInfo_26AE0F0* method);
void Dpr_NetworkUtils_ANetData_TradeTranerData___ReadRecieveData (Dpr_NetworkUtils_ANetData_TradeTranerData__o* __this, INL1_PacketReader_o* pr, const MethodInfo_26AE140* method);
Dpr_NetworkUtils_TradeTranerData_o Dpr_NetworkUtils_ANetData_TradeTranerData___ConvertBytesToStruct (Dpr_NetworkUtils_ANetData_TradeTranerData__o* __this, INL1_PacketReader_o* pr, const MethodInfo_26AE180* method);
void Dpr_NetworkUtils_ANetData_TradeTranerData____cctor (const MethodInfo_26AE470* method);