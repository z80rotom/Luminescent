#pragma once

#include "il2cpp.h"

bool Dpr_Battle_View_Objects_BtlvSound__get_IsPlaying (Dpr_Battle_View_Objects_BtlvSound_o* __this, const MethodInfo* method);
void Dpr_Battle_View_Objects_BtlvSound__set_IsPlaying (Dpr_Battle_View_Objects_BtlvSound_o* __this, bool value, const MethodInfo* method);
void Dpr_Battle_View_Objects_BtlvSound___ctor (Dpr_Battle_View_Objects_BtlvSound_o* __this, System_String_o* name, const MethodInfo* method);
void Dpr_Battle_View_Objects_BtlvSound__Dispose (Dpr_Battle_View_Objects_BtlvSound_o* __this, const MethodInfo* method);
void Dpr_Battle_View_Objects_BtlvSound__CreateSound (Dpr_Battle_View_Objects_BtlvSound_o* __this, System_String_o* registerName, bool isVoice, const MethodInfo* method);
Dpr_Battle_View_Objects_BtlvSound_o* Dpr_Battle_View_Objects_BtlvSound__CreatePerpetuateSound (uint32_t playEventId, const MethodInfo* method);
void Dpr_Battle_View_Objects_BtlvSound__SetVoiceFlag (Dpr_Battle_View_Objects_BtlvSound_o* __this, const MethodInfo* method);
void Dpr_Battle_View_Objects_BtlvSound__SetSEFlag (Dpr_Battle_View_Objects_BtlvSound_o* __this, const MethodInfo* method);
bool Dpr_Battle_View_Objects_BtlvSound__Register (Dpr_Battle_View_Objects_BtlvSound_o* __this, System_String_o* name, bool isVoice, const MethodInfo* method);
bool Dpr_Battle_View_Objects_BtlvSound__Unregister (Dpr_Battle_View_Objects_BtlvSound_o* __this, const MethodInfo* method);
void Dpr_Battle_View_Objects_BtlvSound__SetRTPC (Dpr_Battle_View_Objects_BtlvSound_o* __this, uint32_t trpcName, float value, int32_t interpolationMs, const MethodInfo* method);
bool Dpr_Battle_View_Objects_BtlvSound__SetSwitch (Dpr_Battle_View_Objects_BtlvSound_o* __this, System_String_o* switchGroup, System_String_o* switchName, const MethodInfo* method);
bool Dpr_Battle_View_Objects_BtlvSound__SetSwitch (Dpr_Battle_View_Objects_BtlvSound_o* __this, uint32_t switchGroup, uint32_t switchName, const MethodInfo* method);
bool Dpr_Battle_View_Objects_BtlvSound__CheckAkResult (Dpr_Battle_View_Objects_BtlvSound_o* __this, int32_t result, const MethodInfo* method);
int32_t Dpr_Battle_View_Objects_BtlvSound__PostEvent (Dpr_Battle_View_Objects_BtlvSound_o* __this, uint32_t postEventId, System_Action_o* onComplete, const MethodInfo* method);
int32_t Dpr_Battle_View_Objects_BtlvSound__PostEvent (Dpr_Battle_View_Objects_BtlvSound_o* __this, System_String_o* eventName, System_Action_o* onComplete, const MethodInfo* method);
int32_t Dpr_Battle_View_Objects_BtlvSound__PostEvent (Dpr_Battle_View_Objects_BtlvSound_o* __this, System_Action_o* onComplete, const MethodInfo* method);
void Dpr_Battle_View_Objects_BtlvSound__OnPostEventComplete (Dpr_Battle_View_Objects_BtlvSound_o* __this, Il2CppObject* in_cookie, int32_t in_type, AkCallbackInfo_o* in_info, const MethodInfo* method);
void Dpr_Battle_View_Objects_BtlvSound__OnUpdatePostJob (Dpr_Battle_View_Objects_BtlvSound_o* __this, float deltaTime, const MethodInfo* method);
void Dpr_Battle_View_Objects_BtlvSound__UpdateSRT (Dpr_Battle_View_Objects_BtlvSound_o* __this, const MethodInfo* method);
bool Dpr_Battle_View_Objects_BtlvSound__IsActive (Dpr_Battle_View_Objects_BtlvSound_o* __this, const MethodInfo* method);
