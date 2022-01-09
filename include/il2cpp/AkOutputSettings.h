#pragma once

#include "il2cpp.h"

void AkOutputSettings___ctor (AkOutputSettings_o* __this, intptr_t cPtr, bool cMemoryOwn, const MethodInfo* method_info);
intptr_t AkOutputSettings__getCPtr (AkOutputSettings_o* obj, const MethodInfo* method_info);
void AkOutputSettings__setCPtr (AkOutputSettings_o* __this, intptr_t cPtr, const MethodInfo* method_info);
void AkOutputSettings__Finalize (AkOutputSettings_o* __this, const MethodInfo* method_info);
void AkOutputSettings__Dispose (AkOutputSettings_o* __this, const MethodInfo* method_info);
void AkOutputSettings___ctor (AkOutputSettings_o* __this, const MethodInfo* method_info);
void AkOutputSettings___ctor (AkOutputSettings_o* __this, System_String_o* in_szDeviceShareSet, uint32_t in_idDevice, AkChannelConfig_o* in_channelConfig, int32_t in_ePanning, const MethodInfo* method_info);
void AkOutputSettings___ctor (AkOutputSettings_o* __this, System_String_o* in_szDeviceShareSet, uint32_t in_idDevice, AkChannelConfig_o* in_channelConfig, const MethodInfo* method_info);
void AkOutputSettings___ctor (AkOutputSettings_o* __this, System_String_o* in_szDeviceShareSet, uint32_t in_idDevice, const MethodInfo* method_info);
void AkOutputSettings___ctor (AkOutputSettings_o* __this, System_String_o* in_szDeviceShareSet, const MethodInfo* method_info);
void AkOutputSettings__set_audioDeviceShareset (AkOutputSettings_o* __this, uint32_t value, const MethodInfo* method_info);
uint32_t AkOutputSettings__get_audioDeviceShareset (AkOutputSettings_o* __this, const MethodInfo* method_info);
void AkOutputSettings__set_idDevice (AkOutputSettings_o* __this, uint32_t value, const MethodInfo* method_info);
uint32_t AkOutputSettings__get_idDevice (AkOutputSettings_o* __this, const MethodInfo* method_info);
void AkOutputSettings__set_ePanningRule (AkOutputSettings_o* __this, int32_t value, const MethodInfo* method_info);
int32_t AkOutputSettings__get_ePanningRule (AkOutputSettings_o* __this, const MethodInfo* method_info);
void AkOutputSettings__set_channelConfig (AkOutputSettings_o* __this, AkChannelConfig_o* value, const MethodInfo* method_info);
AkChannelConfig_o* AkOutputSettings__get_channelConfig (AkOutputSettings_o* __this, const MethodInfo* method_info);
