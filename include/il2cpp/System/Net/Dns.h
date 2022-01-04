#pragma once

#include "il2cpp.h"

bool System_Net_Dns__GetHostByName_internal (System_String_o* host, System_String_o** h_name, System_String_array** h_aliases, System_String_array** h_addr_list, int32_t hint, const MethodInfo* method);
bool System_Net_Dns__GetHostByAddr_internal (System_String_o* addr, System_String_o** h_name, System_String_array** h_aliases, System_String_array** h_addr_list, int32_t hint, const MethodInfo* method);
void System_Net_Dns__Error_11001 (System_String_o* hostName, const MethodInfo* method);
System_Net_IPHostEntry_o* System_Net_Dns__hostent_to_IPHostEntry (System_String_o* originalHostName, System_String_o* h_name, System_String_array* h_aliases, System_String_array* h_addrlist, const MethodInfo* method);
System_Net_IPHostEntry_o* System_Net_Dns__GetHostByAddressFromString (System_String_o* address, bool parse, const MethodInfo* method);
System_Net_IPHostEntry_o* System_Net_Dns__GetHostEntry (System_String_o* hostNameOrAddress, const MethodInfo* method);
System_Net_IPHostEntry_o* System_Net_Dns__GetHostEntry (System_Net_IPAddress_o* address, const MethodInfo* method);
System_Net_IPAddress_array* System_Net_Dns__GetHostAddresses (System_String_o* hostNameOrAddress, const MethodInfo* method);
System_Net_IPHostEntry_o* System_Net_Dns__GetHostByName (System_String_o* hostName, const MethodInfo* method);
