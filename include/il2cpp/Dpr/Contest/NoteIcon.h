#pragma once

#include "il2cpp.h"

Dpr_Contest_NotesDataModel_o* Dpr_Contest_NoteIcon__get_NoteData (Dpr_Contest_NoteIcon_o* __this, const MethodInfo* method);
int32_t Dpr_Contest_NoteIcon__get_NoteType (Dpr_Contest_NoteIcon_o* __this, const MethodInfo* method);
float Dpr_Contest_NoteIcon__get_arriveSec (Dpr_Contest_NoteIcon_o* __this, const MethodInfo* method);
int32_t Dpr_Contest_NoteIcon__get_StatusID (Dpr_Contest_NoteIcon_o* __this, const MethodInfo* method);
float Dpr_Contest_NoteIcon__get_LifeTime (Dpr_Contest_NoteIcon_o* __this, const MethodInfo* method);
float Dpr_Contest_NoteIcon__get_AbsLifeTime (Dpr_Contest_NoteIcon_o* __this, const MethodInfo* method);
bool Dpr_Contest_NoteIcon__IsActive (Dpr_Contest_NoteIcon_o* __this, const MethodInfo* method);
void Dpr_Contest_NoteIcon__Create (Dpr_Contest_NoteIcon_o* __this, Dpr_Contest_NotesDataModel_o* noteData, float elapsedTime, float moveSpeed, float validTapTimeRange, float fadeDuration, const MethodInfo* method);
void Dpr_Contest_NoteIcon__Deactive (Dpr_Contest_NoteIcon_o* __this, const MethodInfo* method);
void Dpr_Contest_NoteIcon__SetActive (Dpr_Contest_NoteIcon_o* __this, bool active, const MethodInfo* method);
void Dpr_Contest_NoteIcon__OnUpdate (Dpr_Contest_NoteIcon_o* __this, float elapsedTime, const MethodInfo* method);
void Dpr_Contest_NoteIcon__UpdateNormalNote (Dpr_Contest_NoteIcon_o* __this, const MethodInfo* method);
void Dpr_Contest_NoteIcon__UpdateLongStartNote (Dpr_Contest_NoteIcon_o* __this, const MethodInfo* method);
void Dpr_Contest_NoteIcon__UpdateLongEndNote (Dpr_Contest_NoteIcon_o* __this, const MethodInfo* method);
void Dpr_Contest_NoteIcon__MoveNote (Dpr_Contest_NoteIcon_o* __this, const MethodInfo* method);
void Dpr_Contest_NoteIcon__UpdatePosition (Dpr_Contest_NoteIcon_o* __this, float time, const MethodInfo* method);
void Dpr_Contest_NoteIcon__FadeOut (Dpr_Contest_NoteIcon_o* __this, const MethodInfo* method);
void Dpr_Contest_NoteIcon__UpdateColor (Dpr_Contest_NoteIcon_o* __this, float ratio, const MethodInfo* method);
bool Dpr_Contest_NoteIcon__get_CanTap (Dpr_Contest_NoteIcon_o* __this, const MethodInfo* method);
void Dpr_Contest_NoteIcon__OnTap (Dpr_Contest_NoteIcon_o* __this, const MethodInfo* method);
void Dpr_Contest_NoteIcon__SetTapEnabled (Dpr_Contest_NoteIcon_o* __this, bool enabled, const MethodInfo* method);
void Dpr_Contest_NoteIcon__ChangeStateMiss (Dpr_Contest_NoteIcon_o* __this, const MethodInfo* method);
void Dpr_Contest_NoteIcon___ctor (Dpr_Contest_NoteIcon_o* __this, const MethodInfo* method);
void Dpr_Contest_NoteIcon___cctor (const MethodInfo* method);
