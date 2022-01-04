#pragma once

#include "il2cpp.h"

void INL1_IlcaNetSidePort___cctor (const MethodInfo* method);
void INL1_IlcaNetSidePort__Start (const MethodInfo* method);
void INL1_IlcaNetSidePort__Start (uint32_t magic, const MethodInfo* method);
void INL1_IlcaNetSidePort__Start (uint32_t magic, int32_t my_port, const MethodInfo* method);
void INL1_IlcaNetSidePort__Start (uint32_t magic, int32_t my_port, System_String_o* servern, int32_t serverp, const MethodInfo* method);
void INL1_IlcaNetSidePort__MagicNumberSetAndRestart (uint32_t magic, const MethodInfo* method);
void INL1_IlcaNetSidePort__Stop (const MethodInfo* method);
void INL1_IlcaNetSidePort__SuspendON (const MethodInfo* method);
void INL1_IlcaNetSidePort__SuspendOFF (const MethodInfo* method);
bool INL1_IlcaNetSidePort__IsGo (const MethodInfo* method);
void INL1_IlcaNetSidePort__Init (const MethodInfo* method);
void INL1_IlcaNetSidePort__SocketInitWorkerTh (const MethodInfo* method);
void INL1_IlcaNetSidePort__InitRe (const MethodInfo* method);
void INL1_IlcaNetSidePort__Exit (const MethodInfo* method);
void INL1_IlcaNetSidePort__Final (const MethodInfo* method);
void INL1_IlcaNetSidePort__MagicNumberRefGet (uint32_t* magic, const MethodInfo* method);
void INL1_IlcaNetSidePort__SocketInit (const MethodInfo* method);
void INL1_IlcaNetSidePort__LocalIPAndServerAddresGet (const MethodInfo* method);
void INL1_IlcaNetSidePort__LocalIPAddresGet (const MethodInfo* method);
void INL1_IlcaNetSidePort__BindIP (System_Net_IPEndPoint_o** thisIP, const MethodInfo* method);
void INL1_IlcaNetSidePort__SendString (System_String_o* msg, bool Broadcast, const MethodInfo* method);
void INL1_IlcaNetSidePort__SendServerIPRequest (const MethodInfo* method);
System_Net_IPEndPoint_o* INL1_IlcaNetSidePort__BroadcastAddressGet (const MethodInfo* method);
void INL1_IlcaNetSidePort__SendServer (uint8_t id1, uint8_t id2, System_Byte_array* stream, System_Net_IPEndPoint_o* target, const MethodInfo* method);
void INL1_IlcaNetSidePort__SocketClose (const MethodInfo* method);
void INL1_IlcaNetSidePort__Update (const MethodInfo* method);
int32_t INL1_IlcaNetSidePort__CallbackFuncSet (int32_t id, INL1_IlcaNetSidePort_IlcaNetSidePortServiceCallback_o* callback, const MethodInfo* method);
bool INL1_IlcaNetSidePort__CallbackFuncCall (uint8_t id, System_Byte_array* stream, const MethodInfo* method);
void INL1_IlcaNetSidePort___ctor (INL1_IlcaNetSidePort_o* __this, const MethodInfo* method);
