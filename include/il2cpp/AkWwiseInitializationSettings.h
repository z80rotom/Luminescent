#pragma once

#include "il2cpp.h"

bool AkWwiseInitializationSettings__get_IsValid (AkWwiseInitializationSettings_o* __this, const MethodInfo* method_info);
int32_t AkWwiseInitializationSettings__get_Count (AkWwiseInitializationSettings_o* __this, const MethodInfo* method_info);
AkCommonUserSettings_o* AkWwiseInitializationSettings__GetUserSettings (AkWwiseInitializationSettings_o* __this, const MethodInfo* method_info);
AkCommonAdvancedSettings_o* AkWwiseInitializationSettings__GetAdvancedSettings (AkWwiseInitializationSettings_o* __this, const MethodInfo* method_info);
AkCommonCommSettings_o* AkWwiseInitializationSettings__GetCommsSettings (AkWwiseInitializationSettings_o* __this, const MethodInfo* method_info);
AkWwiseInitializationSettings_o* AkWwiseInitializationSettings__get_Instance (const MethodInfo* method_info);
AkBasePlatformSettings_o* AkWwiseInitializationSettings__GetPlatformSettings (System_String_o* platformName, const MethodInfo* method_info);
AkBasePlatformSettings_o* AkWwiseInitializationSettings__get_ActivePlatformSettings (const MethodInfo* method_info);
void AkWwiseInitializationSettings__OnEnable (AkWwiseInitializationSettings_o* __this, const MethodInfo* method_info);
bool AkWwiseInitializationSettings__InitializeSoundEngine (const MethodInfo* method_info);
bool AkWwiseInitializationSettings__ResetSoundEngine (bool isPlaying, const MethodInfo* method_info);
void AkWwiseInitializationSettings__TerminateSoundEngine (const MethodInfo* method_info);
void AkWwiseInitializationSettings__SleepForMilliseconds (double milliseconds, const MethodInfo* method_info);
void AkWwiseInitializationSettings___ctor (AkWwiseInitializationSettings_o* __this, const MethodInfo* method_info);
void AkWwiseInitializationSettings___cctor (const MethodInfo* method_info);
