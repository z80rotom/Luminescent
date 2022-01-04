#pragma once

#include "il2cpp.h"

bool AkWwiseInitializationSettings__get_IsValid (AkWwiseInitializationSettings_o* __this, const MethodInfo* method);
int32_t AkWwiseInitializationSettings__get_Count (AkWwiseInitializationSettings_o* __this, const MethodInfo* method);
AkCommonUserSettings_o* AkWwiseInitializationSettings__GetUserSettings (AkWwiseInitializationSettings_o* __this, const MethodInfo* method);
AkCommonAdvancedSettings_o* AkWwiseInitializationSettings__GetAdvancedSettings (AkWwiseInitializationSettings_o* __this, const MethodInfo* method);
AkCommonCommSettings_o* AkWwiseInitializationSettings__GetCommsSettings (AkWwiseInitializationSettings_o* __this, const MethodInfo* method);
AkWwiseInitializationSettings_o* AkWwiseInitializationSettings__get_Instance (const MethodInfo* method);
AkBasePlatformSettings_o* AkWwiseInitializationSettings__GetPlatformSettings (System_String_o* platformName, const MethodInfo* method);
AkBasePlatformSettings_o* AkWwiseInitializationSettings__get_ActivePlatformSettings (const MethodInfo* method);
void AkWwiseInitializationSettings__OnEnable (AkWwiseInitializationSettings_o* __this, const MethodInfo* method);
bool AkWwiseInitializationSettings__InitializeSoundEngine (const MethodInfo* method);
bool AkWwiseInitializationSettings__ResetSoundEngine (bool isPlaying, const MethodInfo* method);
void AkWwiseInitializationSettings__TerminateSoundEngine (const MethodInfo* method);
void AkWwiseInitializationSettings__SleepForMilliseconds (double milliseconds, const MethodInfo* method);
void AkWwiseInitializationSettings___ctor (AkWwiseInitializationSettings_o* __this, const MethodInfo* method);
void AkWwiseInitializationSettings___cctor (const MethodInfo* method);
