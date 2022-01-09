#pragma once

#include "il2cpp.h"

bool NexPlugin_SmartDeviceVoiceChat__ShowAppPageAsync (uint32_t* asyncId, NexPlugin_SmartDeviceVoiceChatShowAppPageParam_o* param, NexPlugin_SmartDeviceVoiceChat_ShowAppPageCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_SmartDeviceVoiceChat__ChangeVoiceChatChannelAsync (uint32_t* asyncId, NexPlugin_SmartDeviceVoiceChatChangeVoiceChatChannelParam_o* param, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_SmartDeviceVoiceChat__GetAvailabilityAsync (uint32_t* asyncId, int32_t timeOut, NexPlugin_SmartDeviceVoiceChat_GetAvailabilityCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_SmartDeviceVoiceChat__JoinRoomAsync (uint32_t* asyncId, NexPlugin_SmartDeviceVoiceChatJoinRoomParam_o* param, int32_t timeOut, NexPlugin_SmartDeviceVoiceChat_JoinRoomCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_SmartDeviceVoiceChat__LeaveRoomAsync (uint32_t* asyncId, NexPlugin_SmartDeviceVoiceChatLeaveRoomParam_o* param, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_SmartDeviceVoiceChat__LeaveRoom (NexPlugin_SmartDeviceVoiceChatLeaveRoomParam_o* param, const MethodInfo* method_info);
bool NexPlugin_SmartDeviceVoiceChat__GetLastAccountNnResult (nn_Result_o* result, const MethodInfo* method_info);
bool NexPlugin_SmartDeviceVoiceChat__GetHttpThreadPriority (uint32_t* priority, const MethodInfo* method_info);
bool NexPlugin_SmartDeviceVoiceChat__SetHttpThreadPriority (uint32_t httpThreadPriority, const MethodInfo* method_info);
bool NexPlugin_SmartDeviceVoiceChat__SetUserHandle (nn_account_UserHandle_o userHandle, const MethodInfo* method_info);
