#pragma once

#include "il2cpp.h"

void INL1_IlcaNetPacket___ctor (INL1_IlcaNetPacket_o* __this, const MethodInfo* method_info);
void INL1_IlcaNetPacket__Finalize (INL1_IlcaNetPacket_o* __this, const MethodInfo* method_info);
void INL1_IlcaNetPacket__WriteBufferFast (INL1_IlcaNetPacket_o* __this, uint8_t a, const MethodInfo* method_info);
int32_t INL1_IlcaNetPacket__WriteRemaining (INL1_IlcaNetPacket_o* __this, const MethodInfo* method_info);
void INL1_IlcaNetPacket__ReadBufferFast (INL1_IlcaNetPacket_o* __this, uint8_t* a, const MethodInfo* method_info);
int32_t INL1_IlcaNetPacket__ReadRemaining (INL1_IlcaNetPacket_o* __this, uint64_t recvSize, const MethodInfo* method_info);
void INL1_IlcaNetPacket__Reset (INL1_IlcaNetPacket_o* __this, const MethodInfo* method_info);
uint32_t INL1_IlcaNetPacket__UserDataSizeNow (INL1_IlcaNetPacket_o* __this, const MethodInfo* method_info);
uint32_t INL1_IlcaNetPacket__UserDataSizeMax (INL1_IlcaNetPacket_o* __this, const MethodInfo* method_info);
void INL1_IlcaNetPacket__PayloadSerialize (INL1_IlcaNetPacket_o* __this, const MethodInfo* method_info);
void INL1_IlcaNetPacket__PayloadDeSerialize (INL1_IlcaNetPacket_o* __this, uint64_t recvByte, const MethodInfo* method_info);
System_Byte_array** INL1_IlcaNetPacket__UserDataBuffRef (INL1_IlcaNetPacket_o* __this, const MethodInfo* method_info);
System_Byte_array** INL1_IlcaNetPacket__PayloadBuffRef (INL1_IlcaNetPacket_o* __this, const MethodInfo* method_info);
uint32_t INL1_IlcaNetPacket__PayloadBuffSizeNow (INL1_IlcaNetPacket_o* __this, const MethodInfo* method_info);
void INL1_IlcaNetPacket__PacketTypeSet (INL1_IlcaNetPacket_o* __this, int32_t type, const MethodInfo* method_info);
int32_t INL1_IlcaNetPacket__PacketTypeGet (INL1_IlcaNetPacket_o* __this, const MethodInfo* method_info);
