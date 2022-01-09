#pragma once

#include "il2cpp.h"

int32_t System_Net_Sockets_SocketException__WSAGetLastError_internal (const MethodInfo* method_info);
void System_Net_Sockets_SocketException___ctor (System_Net_Sockets_SocketException_o* __this, const MethodInfo* method_info);
void System_Net_Sockets_SocketException___ctor (System_Net_Sockets_SocketException_o* __this, int32_t error, System_String_o* message, const MethodInfo* method_info);
void System_Net_Sockets_SocketException___ctor (System_Net_Sockets_SocketException_o* __this, int32_t errorCode, const MethodInfo* method_info);
void System_Net_Sockets_SocketException___ctor (System_Net_Sockets_SocketException_o* __this, int32_t socketError, const MethodInfo* method_info);
void System_Net_Sockets_SocketException___ctor (System_Net_Sockets_SocketException_o* __this, System_Runtime_Serialization_SerializationInfo_o* serializationInfo, System_Runtime_Serialization_StreamingContext_o streamingContext, const MethodInfo* method_info);
System_String_o* System_Net_Sockets_SocketException__get_Message (System_Net_Sockets_SocketException_o* __this, const MethodInfo* method_info);
int32_t System_Net_Sockets_SocketException__get_SocketErrorCode (System_Net_Sockets_SocketException_o* __this, const MethodInfo* method_info);
