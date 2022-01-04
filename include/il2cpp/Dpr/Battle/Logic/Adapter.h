#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Adapter___ctor (Dpr_Battle_Logic_Adapter_o* __this, uint8_t clientID, bool isCommMode, Dpr_Battle_Logic_Net_Client_o* iPtrNetClient, const MethodInfo* method);
void Dpr_Battle_Logic_Adapter__Init (Dpr_Battle_Logic_Adapter_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_Adapter__ChangeToNonCommMode (Dpr_Battle_Logic_Adapter_o* __this, const MethodInfo* method);
bool Dpr_Battle_Logic_Adapter__IsWaitingClientReply (Dpr_Battle_Logic_Adapter_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_Adapter__SetCmd (Dpr_Battle_Logic_Adapter_o* __this, uint16_t serialNumber, uint8_t serverSeq, uint8_t serverReq, void* sendData, uint32_t sendDataSize, const MethodInfo* method);
bool Dpr_Battle_Logic_Adapter__WaitCmd (Dpr_Battle_Logic_Adapter_o* __this, const MethodInfo* method);
Dpr_Battle_Logic_SendData_o* Dpr_Battle_Logic_Adapter__GetReturnData (Dpr_Battle_Logic_Adapter_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_Adapter__ResetCmd (Dpr_Battle_Logic_Adapter_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_Adapter__ClearRecvData (Dpr_Battle_Logic_Adapter_o* __this, const MethodInfo* method);
bool Dpr_Battle_Logic_Adapter__startToReception (Dpr_Battle_Logic_Adapter_o* __this, const MethodInfo* method);
bool Dpr_Battle_Logic_Adapter__receptionClient (Dpr_Battle_Logic_Adapter_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_Adapter__ResetRecvBuffer (Dpr_Battle_Logic_Adapter_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_Adapter__RecvCmd (Dpr_Battle_Logic_Adapter_o* __this, uint8_t* serverReq, uint16_t* commandSerialNumber, uint8_t* serverSeq, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_Adapter__GetRecvData (Dpr_Battle_Logic_Adapter_o* __this, void** ppRecv, const MethodInfo* method);
bool Dpr_Battle_Logic_Adapter__ReturnCmd (Dpr_Battle_Logic_Adapter_o* __this, Dpr_Battle_Logic_SendData_o** returnData, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_Adapter__GetRaidAction (Dpr_Battle_Logic_Adapter_o* __this, int32_t clientID, const MethodInfo* method);
void Dpr_Battle_Logic_Adapter__SetRaidAction (Dpr_Battle_Logic_Adapter_o* __this, uint8_t action, const MethodInfo* method);
void Dpr_Battle_Logic_Adapter__ClearRaidAction (Dpr_Battle_Logic_Adapter_o* __this, const MethodInfo* method);
bool Dpr_Battle_Logic_Adapter__CheckTrainerActionRequest (Dpr_Battle_Logic_Adapter_o* __this, int32_t clientID, const MethodInfo* method);
void Dpr_Battle_Logic_Adapter__SetTrainerActionRequest (Dpr_Battle_Logic_Adapter_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_Adapter__ClearTrainerActionRequest (Dpr_Battle_Logic_Adapter_o* __this, const MethodInfo* method);
