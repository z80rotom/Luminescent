#pragma once

#include "il2cpp.h"

UnityEngine_Vector3_o Dpr_Contest_NotesLane__get_TapIconCenterPos (Dpr_Contest_NotesLane_o* __this, const MethodInfo* method_info);
void Dpr_Contest_NotesLane__Initialize (Dpr_Contest_NotesLane_o* __this, System_Action_NoteTypeID__o* onFailedTap, System_Action_NoteIcon__o* onDeactiveNote, System_Action_o* onStopHoldFx, const MethodInfo* method_info);
void Dpr_Contest_NotesLane__GenerateTimingGradePool (Dpr_Contest_NotesLane_o* __this, const MethodInfo* method_info);
void Dpr_Contest_NotesLane__CreateTapGradeSpr (Dpr_Contest_NotesLane_o* __this, const MethodInfo* method_info);
System_String_o* Dpr_Contest_NotesLane__GetBestTapGradeTexName (Dpr_Contest_NotesLane_o* __this, const MethodInfo* method_info);
bool Dpr_Contest_NotesLane__IsReady (Dpr_Contest_NotesLane_o* __this, const MethodInfo* method_info);
void Dpr_Contest_NotesLane__Setup (Dpr_Contest_NotesLane_o* __this, float validTimeSpan, float moveSpeed, float beatSec, float noteFadeDuration, int32_t bgmSigunature, int32_t lineNum, const MethodInfo* method_info);
void Dpr_Contest_NotesLane__CreateBarLine (Dpr_Contest_NotesLane_o* __this, float moveSpeed, float beatSec, int32_t bgmSigunature, int32_t lineNum, const MethodInfo* method_info);
void Dpr_Contest_NotesLane__LoadFx (Dpr_Contest_NotesLane_o* __this, const MethodInfo* method_info);
void Dpr_Contest_NotesLane__LoadTapGradeFx (Dpr_Contest_NotesLane_o* __this, const MethodInfo* method_info);
void Dpr_Contest_NotesLane__LoadLongTapFx (Dpr_Contest_NotesLane_o* __this, const MethodInfo* method_info);
void Dpr_Contest_NotesLane__ResetParam (Dpr_Contest_NotesLane_o* __this, float beatSec, int32_t bgmSigunature, const MethodInfo* method_info);
void Dpr_Contest_NotesLane__OnFinalize (Dpr_Contest_NotesLane_o* __this, const MethodInfo* method_info);
bool Dpr_Contest_NotesLane__get_CanCreateNote (Dpr_Contest_NotesLane_o* __this, const MethodInfo* method_info);
void Dpr_Contest_NotesLane__CreateNote (Dpr_Contest_NotesLane_o* __this, float elapsedTime, Dpr_Contest_NotesDataModel_o* nextNoteData, const MethodInfo* method_info);
void Dpr_Contest_NotesLane__CreateLongTapNotesBG (Dpr_Contest_NotesLane_o* __this, float elapsedTime, Dpr_Contest_NotesDataModel_o* startNoteData, Dpr_Contest_NotesDataModel_o* endNoteData, const MethodInfo* method_info);
void Dpr_Contest_NotesLane__OnUpdate (Dpr_Contest_NotesLane_o* __this, float elapsedTime, const MethodInfo* method_info);
void Dpr_Contest_NotesLane__UpdateNotes (Dpr_Contest_NotesLane_o* __this, float elapsedTime, const MethodInfo* method_info);
int32_t Dpr_Contest_NotesLane__FailedNote (Dpr_Contest_NotesLane_o* __this, int32_t noteIndex, Dpr_Contest_NoteIcon_o* note, const MethodInfo* method_info);
void Dpr_Contest_NotesLane__RemoveNote (Dpr_Contest_NotesLane_o* __this, int32_t listIndex, Dpr_Contest_NoteIcon_o* target, const MethodInfo* method_info);
void Dpr_Contest_NotesLane__UpdateNoteUI (Dpr_Contest_NotesLane_o* __this, float elapsedTime, const MethodInfo* method_info);
void Dpr_Contest_NotesLane__UpdateBarLine (Dpr_Contest_NotesLane_o* __this, float elapsedTime, const MethodInfo* method_info);
void Dpr_Contest_NotesLane__UpdateFx (Dpr_Contest_NotesLane_o* __this, const MethodInfo* method_info);
Dpr_Contest_NoteIcon_o* Dpr_Contest_NotesLane__OnInputDecideButton (Dpr_Contest_NotesLane_o* __this, const MethodInfo* method_info);
Dpr_Contest_NoteIcon_o* Dpr_Contest_NotesLane__FindNearTapTimingNote (Dpr_Contest_NotesLane_o* __this, const MethodInfo* method_info);
bool Dpr_Contest_NotesLane__IsValidNormalTap (Dpr_Contest_NotesLane_o* __this, float noteLifeTime, const MethodInfo* method_info);
void Dpr_Contest_NotesLane__TapNormalNote (Dpr_Contest_NotesLane_o* __this, Dpr_Contest_NoteIcon_o* targetNote, const MethodInfo* method_info);
void Dpr_Contest_NotesLane__TapLongStartNote (Dpr_Contest_NotesLane_o* __this, Dpr_Contest_NoteIcon_o* targetNote, const MethodInfo* method_info);
void Dpr_Contest_NotesLane__OnStartLongTap (Dpr_Contest_NotesLane_o* __this, int32_t startNoteID, const MethodInfo* method_info);
Dpr_Contest_NoteIcon_o* Dpr_Contest_NotesLane__FindNoteByID (Dpr_Contest_NotesLane_o* __this, int32_t targetId, const MethodInfo* method_info);
float Dpr_Contest_NotesLane__OnReleaseHold (Dpr_Contest_NotesLane_o* __this, const MethodInfo* method_info);
void Dpr_Contest_NotesLane__DeactiveHoldFx (Dpr_Contest_NotesLane_o* __this, const MethodInfo* method_info);
void Dpr_Contest_NotesLane__FailedTapLongStart (Dpr_Contest_NotesLane_o* __this, const MethodInfo* method_info);
void Dpr_Contest_NotesLane__HideNotesUntilTime (Dpr_Contest_NotesLane_o* __this, float elaspedTimeRange, const MethodInfo* method_info);
void Dpr_Contest_NotesLane__DeactiveNotesBg (Dpr_Contest_NotesLane_o* __this, int32_t endNoteId, const MethodInfo* method_info);
void Dpr_Contest_NotesLane__SetHeartGaugeRatio (Dpr_Contest_NotesLane_o* __this, float ratio, const MethodInfo* method_info);
void Dpr_Contest_NotesLane__ShowTimingGrade (Dpr_Contest_NotesLane_o* __this, int32_t timingID, const MethodInfo* method_info);
Dpr_Contest_UITimingGrade_o* Dpr_Contest_NotesLane__FindInactiveTimingGradeObj (Dpr_Contest_NotesLane_o* __this, const MethodInfo* method_info);
int32_t Dpr_Contest_NotesLane__ConvertTimingIDToEffectID (Dpr_Contest_NotesLane_o* __this, int32_t timingID, const MethodInfo* method_info);
void Dpr_Contest_NotesLane__DoPlayUIFadeTween (Dpr_Contest_NotesLane_o* __this, bool forward, const MethodInfo* method_info);
void Dpr_Contest_NotesLane___ctor (Dpr_Contest_NotesLane_o* __this, const MethodInfo* method_info);
void Dpr_Contest_NotesLane___LoadLongTapFx_b__36_0 (Dpr_Contest_NotesLane_o* __this, const MethodInfo* method_info);
