#pragma once

#include "il2cpp.h"

void Dpr_Movie_EndingPlayer__Initialize (Dpr_Movie_EndingPlayer_o* __this, Dpr_Movie_MoviePlayer_o* moviePlayer, bool diaVersion, int32_t lang, bool male, int32_t bodyType, UnityEngine_UI_RawImage_o* fadeImage, UnityEngine_Events_UnityAction_o* endCallback, Dpr_Movie_StaffrollPlayer_o* staffrollPlayer, const MethodInfo* method);
System_Collections_IEnumerator_o* Dpr_Movie_EndingPlayer__LoadAssets (Dpr_Movie_EndingPlayer_o* __this, const MethodInfo* method);
void Dpr_Movie_EndingPlayer__UnloadAssets (Dpr_Movie_EndingPlayer_o* __this, const MethodInfo* method);
void Dpr_Movie_EndingPlayer__Play (Dpr_Movie_EndingPlayer_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* Dpr_Movie_EndingPlayer__PlayEnding (Dpr_Movie_EndingPlayer_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* Dpr_Movie_EndingPlayer__EndEnding (Dpr_Movie_EndingPlayer_o* __this, const MethodInfo* method);
void Dpr_Movie_EndingPlayer__OnUpdate (Dpr_Movie_EndingPlayer_o* __this, float deltaTime, const MethodInfo* method);
System_String_o* Dpr_Movie_EndingPlayer__GetMoviePath (Dpr_Movie_EndingPlayer_o* __this, const MethodInfo* method);
void Dpr_Movie_EndingPlayer__GetLogoPath (Dpr_Movie_EndingPlayer_o* __this, System_String_o** path, System_String_o** name, const MethodInfo* method);
void Dpr_Movie_EndingPlayer__GetEndTextPath (Dpr_Movie_EndingPlayer_o* __this, System_String_o** path, System_String_o** name, const MethodInfo* method);
void Dpr_Movie_EndingPlayer__PlayBGM (Dpr_Movie_EndingPlayer_o* __this, const MethodInfo* method);
void Dpr_Movie_EndingPlayer__StopBGM (Dpr_Movie_EndingPlayer_o* __this, const MethodInfo* method);
void Dpr_Movie_EndingPlayer___ctor (Dpr_Movie_EndingPlayer_o* __this, const MethodInfo* method);
