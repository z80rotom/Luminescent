#pragma once

#include "il2cpp.h"

int32_t System_Net_IPEndPoint__get_AddressFamily (System_Net_IPEndPoint_o* __this, const MethodInfo* method);
void System_Net_IPEndPoint___ctor (System_Net_IPEndPoint_o* __this, int64_t address, int32_t port, const MethodInfo* method);
void System_Net_IPEndPoint___ctor (System_Net_IPEndPoint_o* __this, System_Net_IPAddress_o* address, int32_t port, const MethodInfo* method);
System_Net_IPAddress_o* System_Net_IPEndPoint__get_Address (System_Net_IPEndPoint_o* __this, const MethodInfo* method);
int32_t System_Net_IPEndPoint__get_Port (System_Net_IPEndPoint_o* __this, const MethodInfo* method);
void System_Net_IPEndPoint__set_Port (System_Net_IPEndPoint_o* __this, int32_t value, const MethodInfo* method);
System_String_o* System_Net_IPEndPoint__ToString (System_Net_IPEndPoint_o* __this, const MethodInfo* method);
System_Net_SocketAddress_o* System_Net_IPEndPoint__Serialize (System_Net_IPEndPoint_o* __this, const MethodInfo* method);
System_Net_EndPoint_o* System_Net_IPEndPoint__Create (System_Net_IPEndPoint_o* __this, System_Net_SocketAddress_o* socketAddress, const MethodInfo* method);
bool System_Net_IPEndPoint__Equals (System_Net_IPEndPoint_o* __this, Il2CppObject* comparand, const MethodInfo* method);
int32_t System_Net_IPEndPoint__GetHashCode (System_Net_IPEndPoint_o* __this, const MethodInfo* method);
void System_Net_IPEndPoint___cctor (const MethodInfo* method);
