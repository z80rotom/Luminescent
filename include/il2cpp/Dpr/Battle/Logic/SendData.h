#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_SendData___ctor (Dpr_Battle_Logic_SendData_o* __this, int32_t allocator, const MethodInfo* method);
void Dpr_Battle_Logic_SendData__Dispose (Dpr_Battle_Logic_SendData_o* __this, const MethodInfo* method);
Dpr_Battle_Logic_SEND_DATA_BUFFER_o* Dpr_Battle_Logic_SendData__GetBuffer (Dpr_Battle_Logic_SendData_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_SendData__Clear (Dpr_Battle_Logic_SendData_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_SendData__CopyFrom (Dpr_Battle_Logic_SendData_o* __this, Dpr_Battle_Logic_SendData_o** src, const MethodInfo* method);
void Dpr_Battle_Logic_SendData__Store (Dpr_Battle_Logic_SendData_o* __this, uint16_t serialNumber, uint8_t serverSeq, uint8_t serverReq, void* data, uint32_t dataSize, const MethodInfo* method);
void Dpr_Battle_Logic_SendData__Store (Dpr_Battle_Logic_SendData_o* __this, Dpr_Battle_Logic_SEND_DATA_BUFFER_o** buffer, const MethodInfo* method);
uint16_t Dpr_Battle_Logic_SendData__GetSerialNumber (Dpr_Battle_Logic_SendData_o* __this, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_SendData__GetServerSequence (Dpr_Battle_Logic_SendData_o* __this, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_SendData__GetServerRequest (Dpr_Battle_Logic_SendData_o* __this, const MethodInfo* method);
void* Dpr_Battle_Logic_SendData__GetData (Dpr_Battle_Logic_SendData_o* __this, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_SendData__GetDataSize (Dpr_Battle_Logic_SendData_o* __this, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_SendData__GetTotalSize (Dpr_Battle_Logic_SendData_o* __this, const MethodInfo* method);
System_String_o* Dpr_Battle_Logic_SendData__GetString (Dpr_Battle_Logic_SendData_o* __this, const MethodInfo* method);
