#pragma once

#include "il2cpp.h"

void INL1_IlcaNetGamer___ctor (INL1_IlcaNetGamer_o* __this, const MethodInfo* method_info);
void INL1_IlcaNetGamer__Finalize (INL1_IlcaNetGamer_o* __this, const MethodInfo* method_info);
void INL1_IlcaNetGamer__Init (INL1_IlcaNetGamer_o* __this, const MethodInfo* method_info);
void INL1_IlcaNetGamer__Final (INL1_IlcaNetGamer_o* __this, const MethodInfo* method_info);
void INL1_IlcaNetGamer__CleanUp (INL1_IlcaNetGamer_o* __this, const MethodInfo* method_info);
void INL1_IlcaNetGamer__CopyTo (INL1_IlcaNetGamer_o* __this, INL1_IlcaNetGamer_o** dst, const MethodInfo* method_info);
bool INL1_IlcaNetGamer__IsActive (INL1_IlcaNetGamer_o* __this, const MethodInfo* method_info);
void INL1_IlcaNetGamer__ActiveON (INL1_IlcaNetGamer_o* __this, const MethodInfo* method_info);
void INL1_IlcaNetGamer__ActiveOFF (INL1_IlcaNetGamer_o* __this, const MethodInfo* method_info);
bool INL1_IlcaNetGamer__IsHomeGamer (INL1_IlcaNetGamer_o* __this, const MethodInfo* method_info);
void INL1_IlcaNetGamer__HomeGamerON (INL1_IlcaNetGamer_o* __this, const MethodInfo* method_info);
void INL1_IlcaNetGamer__HomeGamerOFF (INL1_IlcaNetGamer_o* __this, const MethodInfo* method_info);
void INL1_IlcaNetGamer__LocalIndexSet (INL1_IlcaNetGamer_o* __this, int32_t localindex, int32_t portOffset, const MethodInfo* method_info);
void INL1_IlcaNetGamer__GlobalIndexSet (INL1_IlcaNetGamer_o* __this, int32_t globalindex, const MethodInfo* method_info);
int32_t INL1_IlcaNetGamer__Send (INL1_IlcaNetGamer_o* __this, INL1_PacketWriter_o* pw, int32_t type, const MethodInfo* method_info);
int32_t INL1_IlcaNetGamer__SendTo (INL1_IlcaNetGamer_o* __this, INL1_PacketWriter_o* pw, int32_t type, int32_t stationIndex, const MethodInfo* method_info);
int32_t INL1_IlcaNetGamer__Recv (INL1_IlcaNetGamer_o* __this, INL1_PacketReader_o** pr, const MethodInfo* method_info);
