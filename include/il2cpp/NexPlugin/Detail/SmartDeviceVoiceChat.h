#pragma once

#include "il2cpp.h"

bool NexPlugin_Detail_SmartDeviceVoiceChat__SmartDeviceVoiceChat_ShowAppPageAsync (uint32_t asyncId, NexPlugin_Detail_SmartDeviceVoiceChat_SmartDeviceVoiceChatShowAppPageParamInt_o* pParam, const MethodInfo* method);
bool NexPlugin_Detail_SmartDeviceVoiceChat__ShowAppPageAsync (uint32_t* asyncId, NexPlugin_SmartDeviceVoiceChatShowAppPageParam_o* param, NexPlugin_SmartDeviceVoiceChat_ShowAppPageCB_o* callback, const MethodInfo* method);
bool NexPlugin_Detail_SmartDeviceVoiceChat__SmartDeviceVoiceChat_ChangeVoiceChatChannelAsync (uint32_t asyncId, NexPlugin_Detail_SmartDeviceVoiceChat_SmartDeviceVoiceChatChangeVoiceChatChannelParamInt_o* pParam, int32_t timeOut, const MethodInfo* method);
bool NexPlugin_Detail_SmartDeviceVoiceChat__ChangeVoiceChatChannelAsync (uint32_t* asyncId, NexPlugin_SmartDeviceVoiceChatChangeVoiceChatChannelParam_o* param, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method);
bool NexPlugin_Detail_SmartDeviceVoiceChat__SmartDeviceVoiceChat_GetAvailabilityAsync (uint32_t asyncId, int32_t timeOut, const MethodInfo* method);
bool NexPlugin_Detail_SmartDeviceVoiceChat__GetAvailabilityAsync (uint32_t* asyncId, int32_t timeOut, NexPlugin_SmartDeviceVoiceChat_GetAvailabilityCB_o* callback, const MethodInfo* method);
bool NexPlugin_Detail_SmartDeviceVoiceChat__SmartDeviceVoiceChat_JoinRoomAsync (uint32_t asyncId, NexPlugin_Detail_SmartDeviceVoiceChat_SmartDeviceVoiceChatJoinRoomParamInt_o* pParam, int32_t timeOut, const MethodInfo* method);
bool NexPlugin_Detail_SmartDeviceVoiceChat__JoinRoomAsync (uint32_t* asyncId, NexPlugin_SmartDeviceVoiceChatJoinRoomParam_o* param, int32_t timeOut, NexPlugin_SmartDeviceVoiceChat_JoinRoomCB_o* callback, const MethodInfo* method);
bool NexPlugin_Detail_SmartDeviceVoiceChat__SmartDeviceVoiceChat_LeaveRoomAsync (uint32_t asyncId, NexPlugin_Detail_SmartDeviceVoiceChat_SmartDeviceVoiceChatLeaveRoomParamInt_o* pParam, int32_t timeOut, const MethodInfo* method);
bool NexPlugin_Detail_SmartDeviceVoiceChat__LeaveRoomAsync (uint32_t* asyncId, NexPlugin_SmartDeviceVoiceChatLeaveRoomParam_o* param, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method);
bool NexPlugin_Detail_SmartDeviceVoiceChat__SmartDeviceVoiceChat_LeaveRoom (NexPlugin_Detail_SmartDeviceVoiceChat_SmartDeviceVoiceChatLeaveRoomParamInt_o* pParam, const MethodInfo* method);
bool NexPlugin_Detail_SmartDeviceVoiceChat__LeaveRoom (NexPlugin_SmartDeviceVoiceChatLeaveRoomParam_o* param, const MethodInfo* method);
void NexPlugin_Detail_SmartDeviceVoiceChat__SmartDeviceVoiceChat_GetAvailabilityResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method);
void NexPlugin_Detail_SmartDeviceVoiceChat__SmartDeviceVoiceChat_JoinRoomResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method);
void NexPlugin_Detail_SmartDeviceVoiceChat__SmartDeviceVoiceChat_ShowAppPageResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method);
void NexPlugin_Detail_SmartDeviceVoiceChat__Callback (NexPlugin_Detail_AsyncResultInt_o res, Il2CppObject* callback, const MethodInfo* method);
