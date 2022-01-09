#pragma once

#include "il2cpp.h"

void Dpr_Movie_TitlePlayer__Initialize (Dpr_Movie_TitlePlayer_o* __this, Dpr_Movie_MoviePlayer_o* moviePlayer, bool diaVersion, int32_t lang, UnityEngine_UI_RawImage_o* fadeImage, System_Action_int__o* endCallback, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Movie_TitlePlayer__LoadAsset (Dpr_Movie_TitlePlayer_o* __this, const MethodInfo* method_info);
void Dpr_Movie_TitlePlayer__UnloadAsset (Dpr_Movie_TitlePlayer_o* __this, const MethodInfo* method_info);
void Dpr_Movie_TitlePlayer__Play (Dpr_Movie_TitlePlayer_o* __this, const MethodInfo* method_info);
void Dpr_Movie_TitlePlayer__OnUpdate (Dpr_Movie_TitlePlayer_o* __this, float deltaTime, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Movie_TitlePlayer__PlayOpening (Dpr_Movie_TitlePlayer_o* __this, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Movie_TitlePlayer__EndOpening (Dpr_Movie_TitlePlayer_o* __this, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Movie_TitlePlayer__PlayTitle (Dpr_Movie_TitlePlayer_o* __this, bool fadeIn, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Movie_TitlePlayer__EndTitle (Dpr_Movie_TitlePlayer_o* __this, const MethodInfo* method_info);
void Dpr_Movie_TitlePlayer__PlayMovie (Dpr_Movie_TitlePlayer_o* __this, int32_t type, bool loop, const MethodInfo* method_info);
void Dpr_Movie_TitlePlayer__EndMovie (Dpr_Movie_TitlePlayer_o* __this, const MethodInfo* method_info);
bool Dpr_Movie_TitlePlayer__IsPlayingMovie (Dpr_Movie_TitlePlayer_o* __this, const MethodInfo* method_info);
void Dpr_Movie_TitlePlayer__PlayOpeningBGM (Dpr_Movie_TitlePlayer_o* __this, const MethodInfo* method_info);
void Dpr_Movie_TitlePlayer__PlayTitleBGM (Dpr_Movie_TitlePlayer_o* __this, const MethodInfo* method_info);
void Dpr_Movie_TitlePlayer__StopBGM (Dpr_Movie_TitlePlayer_o* __this, const MethodInfo* method_info);
void Dpr_Movie_TitlePlayer__PlaySE (Dpr_Movie_TitlePlayer_o* __this, const MethodInfo* method_info);
System_String_o* Dpr_Movie_TitlePlayer__GetOpeningMoviePath (Dpr_Movie_TitlePlayer_o* __this, const MethodInfo* method_info);
System_String_o* Dpr_Movie_TitlePlayer__GetTitleMoviePath (Dpr_Movie_TitlePlayer_o* __this, const MethodInfo* method_info);
void Dpr_Movie_TitlePlayer__GetLogoPath (Dpr_Movie_TitlePlayer_o* __this, System_String_o** path, System_String_o** name, const MethodInfo* method_info);
void Dpr_Movie_TitlePlayer__GetPushTextImagePath (Dpr_Movie_TitlePlayer_o* __this, System_String_o** path, System_String_o** name, const MethodInfo* method_info);
void Dpr_Movie_TitlePlayer___ctor (Dpr_Movie_TitlePlayer_o* __this, const MethodInfo* method_info);
void Dpr_Movie_TitlePlayer___LoadAsset_b__25_0 (Dpr_Movie_TitlePlayer_o* __this, int32_t eventType, System_String_o* name, UnityEngine_Object_o* asset, const MethodInfo* method_info);
