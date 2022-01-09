#pragma once

#include "il2cpp.h"

void INL1_IlcaNetTransport___ctor (INL1_IlcaNetTransport_o* __this, const MethodInfo* method_info);
void INL1_IlcaNetTransport__Finalize (INL1_IlcaNetTransport_o* __this, const MethodInfo* method_info);
void INL1_IlcaNetTransport___cctor (const MethodInfo* method_info);
void INL1_IlcaNetTransport__DebugCountReset (const MethodInfo* method_info);
void INL1_IlcaNetTransport__DebugCountPrinf (const MethodInfo* method_info);
void INL1_IlcaNetTransport__AnalysisInterval (const MethodInfo* method_info);
void INL1_IlcaNetTransport__StationAndConstantIdClear (const MethodInfo* method_info);
void INL1_IlcaNetTransport__StationIndexSet (INL1_IlcaNetTransport_o* __this, int32_t host, const MethodInfo* method_info);
void INL1_IlcaNetTransport__ConstantIdSet (INL1_IlcaNetTransport_o* __this, uint64_t cid, const MethodInfo* method_info);
int32_t INL1_IlcaNetTransport__StationIndexGet (INL1_IlcaNetTransport_o* __this, int32_t host, const MethodInfo* method_info);
uint64_t INL1_IlcaNetTransport__ConstantIdGet (INL1_IlcaNetTransport_o* __this, uint64_t cid, const MethodInfo* method_info);
void INL1_IlcaNetTransport__HostStationSet (int32_t index, uint64_t constantID, const MethodInfo* method_info);
uint64_t INL1_IlcaNetTransport__HostStationConstantIDGet (const MethodInfo* method_info);
int32_t INL1_IlcaNetTransport__HostStationIndexGet (const MethodInfo* method_info);
void INL1_IlcaNetTransport__ThisStationSet (int32_t index, uint64_t constantID, const MethodInfo* method_info);
uint64_t INL1_IlcaNetTransport__ThisStationConstantIDGet (const MethodInfo* method_info);
int32_t INL1_IlcaNetTransport__ThisStationIndexGet (const MethodInfo* method_info);
void INL1_IlcaNetTransport__ValidityConstantIDSet (int32_t index, uint64_t constantId, const MethodInfo* method_info);
uint64_t INL1_IlcaNetTransport__ValidityConstantIDGet (int32_t index, const MethodInfo* method_info);
void INL1_IlcaNetTransport__MyPortSet (INL1_IlcaNetTransport_o* __this, uint16_t port, const MethodInfo* method_info);
int32_t INL1_IlcaNetTransport__Send (INL1_IlcaNetTransport_o* __this, INL1_PacketWriter_o* pw, int32_t type, const MethodInfo* method_info);
int32_t INL1_IlcaNetTransport__SendPeriodic (INL1_IlcaNetTransport_o* __this, INL1_PacketWriter_o* pw, const MethodInfo* method_info);
int32_t INL1_IlcaNetTransport__SendCore (INL1_IlcaNetTransport_o* __this, INL1_PacketWriter_o* pw, int32_t type, bool notStrict, const MethodInfo* method_info);
int32_t INL1_IlcaNetTransport__SendTo (INL1_IlcaNetTransport_o* __this, INL1_PacketWriter_o* pw, int32_t type, int32_t sendStationIndex, const MethodInfo* method_info);
int32_t INL1_IlcaNetTransport__Recv (INL1_IlcaNetTransport_o* __this, INL1_PacketReader_o** pr, const MethodInfo* method_info);
void INL1_IlcaNetTransport__NetworkBadEmulationSetting (int32_t level, const MethodInfo* method_info);
void INL1_IlcaNetTransport__InternetNatTraversalBadEmulationSetting (int32_t percent, const MethodInfo* method_info);
