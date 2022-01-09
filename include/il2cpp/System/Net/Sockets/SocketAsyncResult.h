#pragma once

#include "il2cpp.h"

intptr_t System_Net_Sockets_SocketAsyncResult__get_Handle (System_Net_Sockets_SocketAsyncResult_o* __this, const MethodInfo* method_info);
int32_t System_Net_Sockets_SocketAsyncResult__get_ErrorCode (System_Net_Sockets_SocketAsyncResult_o* __this, const MethodInfo* method_info);
void System_Net_Sockets_SocketAsyncResult__CheckIfThrowDelayedException (System_Net_Sockets_SocketAsyncResult_o* __this, const MethodInfo* method_info);
void System_Net_Sockets_SocketAsyncResult__Complete (System_Net_Sockets_SocketAsyncResult_o* __this, const MethodInfo* method_info);
void System_Net_Sockets_SocketAsyncResult__Complete (System_Net_Sockets_SocketAsyncResult_o* __this, bool synch, const MethodInfo* method_info);
void System_Net_Sockets_SocketAsyncResult__Complete (System_Net_Sockets_SocketAsyncResult_o* __this, int32_t total, const MethodInfo* method_info);
void System_Net_Sockets_SocketAsyncResult__Complete (System_Net_Sockets_SocketAsyncResult_o* __this, System_Exception_o* e, bool synch, const MethodInfo* method_info);
void System_Net_Sockets_SocketAsyncResult__Complete (System_Net_Sockets_SocketAsyncResult_o* __this, System_Exception_o* e, const MethodInfo* method_info);
void System_Net_Sockets_SocketAsyncResult__Complete (System_Net_Sockets_SocketAsyncResult_o* __this, System_Net_Sockets_Socket_o* s, const MethodInfo* method_info);
void System_Net_Sockets_SocketAsyncResult__Complete (System_Net_Sockets_SocketAsyncResult_o* __this, System_Net_Sockets_Socket_o* s, int32_t total, const MethodInfo* method_info);
