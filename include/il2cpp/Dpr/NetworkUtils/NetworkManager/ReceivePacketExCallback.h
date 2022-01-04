#pragma once

#include "il2cpp.h"

void Dpr_NetworkUtils_NetworkManager_ReceivePacketExCallback___ctor (Dpr_NetworkUtils_NetworkManager_ReceivePacketExCallback_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
void Dpr_NetworkUtils_NetworkManager_ReceivePacketExCallback__Invoke (Dpr_NetworkUtils_NetworkManager_ReceivePacketExCallback_o* __this, INL1_PacketReader_o* pr, int32_t transportType, int32_t receiveStationIndex, const MethodInfo* method);
System_IAsyncResult_o* Dpr_NetworkUtils_NetworkManager_ReceivePacketExCallback__BeginInvoke (Dpr_NetworkUtils_NetworkManager_ReceivePacketExCallback_o* __this, INL1_PacketReader_o* pr, int32_t transportType, int32_t receiveStationIndex, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
void Dpr_NetworkUtils_NetworkManager_ReceivePacketExCallback__EndInvoke (Dpr_NetworkUtils_NetworkManager_ReceivePacketExCallback_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
