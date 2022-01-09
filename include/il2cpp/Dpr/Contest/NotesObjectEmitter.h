#pragma once

#include "il2cpp.h"

void Dpr_Contest_NotesObjectEmitter__Initialize (Dpr_Contest_NotesObjectEmitter_o* __this, Dpr_Contest_NoteIcon_o* noteComponent, UnityEngine_Transform_o* noteParent, Dpr_Contest_LongTapNotesBg_o* bgComponent, UnityEngine_Transform_o* bgContent, const MethodInfo* method_info);
void Dpr_Contest_NotesObjectEmitter__SetupParam (Dpr_Contest_NotesObjectEmitter_o* __this, float moveSpeed, float noteFadeDuration, const MethodInfo* method_info);
void Dpr_Contest_NotesObjectEmitter__OnFinalize (Dpr_Contest_NotesObjectEmitter_o* __this, const MethodInfo* method_info);
bool Dpr_Contest_NotesObjectEmitter__get_CanCreateNoteIcon (Dpr_Contest_NotesObjectEmitter_o* __this, const MethodInfo* method_info);
Dpr_Contest_NoteIcon_o* Dpr_Contest_NotesObjectEmitter__CreateNextNoteIcon (Dpr_Contest_NotesObjectEmitter_o* __this, float elapsedTime, Dpr_Contest_NotesDataModel_o* noteData, float validTapTimeRange, const MethodInfo* method_info);
void Dpr_Contest_NotesObjectEmitter__DecCreateIconNum (Dpr_Contest_NotesObjectEmitter_o* __this, const MethodInfo* method_info);
Dpr_Contest_LongTapNotesBg_o* Dpr_Contest_NotesObjectEmitter__CreateNotesBg (Dpr_Contest_NotesObjectEmitter_o* __this, Dpr_Contest_NotesDataModel_o* startNote, Dpr_Contest_NotesDataModel_o* endNote, double elapsedTime, const MethodInfo* method_info);
void Dpr_Contest_NotesObjectEmitter___ctor (Dpr_Contest_NotesObjectEmitter_o* __this, const MethodInfo* method_info);
