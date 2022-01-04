#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_SEND_DATA_BUFFER__Clear (Dpr_Battle_Logic_SEND_DATA_BUFFER_o* buf, const MethodInfo* method);
void Dpr_Battle_Logic_SEND_DATA_BUFFER__Copy (Dpr_Battle_Logic_SEND_DATA_BUFFER_o* dest, Dpr_Battle_Logic_SEND_DATA_BUFFER_o** src, const MethodInfo* method);
void Dpr_Battle_Logic_SEND_DATA_BUFFER__Store (Dpr_Battle_Logic_SEND_DATA_BUFFER_o* buf, uint16_t serialNumber, uint8_t serverSeq, uint8_t serverReq, void* data, uint32_t dataSize, const MethodInfo* method);
uint16_t Dpr_Battle_Logic_SEND_DATA_BUFFER__GetSerialNumber (Dpr_Battle_Logic_SEND_DATA_BUFFER_o** buf, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_SEND_DATA_BUFFER__GetServerSequence (Dpr_Battle_Logic_SEND_DATA_BUFFER_o** buf, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_SEND_DATA_BUFFER__GetServerRequest (Dpr_Battle_Logic_SEND_DATA_BUFFER_o** buf, const MethodInfo* method);
void* Dpr_Battle_Logic_SEND_DATA_BUFFER__GetData (Dpr_Battle_Logic_SEND_DATA_BUFFER_o* buf, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_SEND_DATA_BUFFER__GetDataSize (Dpr_Battle_Logic_SEND_DATA_BUFFER_o** buf, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_SEND_DATA_BUFFER__GetTotalSize (Dpr_Battle_Logic_SEND_DATA_BUFFER_o** buf, const MethodInfo* method);
System_String_o* Dpr_Battle_Logic_SEND_DATA_BUFFER__GetString (Dpr_Battle_Logic_SEND_DATA_BUFFER_o** buf, const MethodInfo* method);
System_String_o* Dpr_Battle_Logic_SEND_DATA_BUFFER__GetString (void* inData, uint32_t size, const MethodInfo* method);
