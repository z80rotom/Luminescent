#pragma once

#include "il2cpp.h"

bool Dpr_Contest_LongTapNotesBg__IsActive (Dpr_Contest_LongTapNotesBg_o* __this, const MethodInfo* method_info);
int32_t Dpr_Contest_LongTapNotesBg__get_StartNoteID (Dpr_Contest_LongTapNotesBg_o* __this, const MethodInfo* method_info);
int32_t Dpr_Contest_LongTapNotesBg__get_EndNoteID (Dpr_Contest_LongTapNotesBg_o* __this, const MethodInfo* method_info);
void Dpr_Contest_LongTapNotesBg__Create (Dpr_Contest_LongTapNotesBg_o* __this, Dpr_Contest_NotesDataModel_o* startNoteData, Dpr_Contest_NotesDataModel_o* endNoteData, double elapsedTime, float moveSpeed, const MethodInfo* method_info);
void Dpr_Contest_LongTapNotesBg__Deactive (Dpr_Contest_LongTapNotesBg_o* __this, const MethodInfo* method_info);
void Dpr_Contest_LongTapNotesBg__SetActive (Dpr_Contest_LongTapNotesBg_o* __this, bool active, const MethodInfo* method_info);
void Dpr_Contest_LongTapNotesBg__CalcWidth (Dpr_Contest_LongTapNotesBg_o* __this, float startSecTime, float endSecTime, const MethodInfo* method_info);
void Dpr_Contest_LongTapNotesBg__OnStartHold (Dpr_Contest_LongTapNotesBg_o* __this, const MethodInfo* method_info);
void Dpr_Contest_LongTapNotesBg__OnUpdate (Dpr_Contest_LongTapNotesBg_o* __this, double elapsedTime, const MethodInfo* method_info);
void Dpr_Contest_LongTapNotesBg__UpdateMovePosition (Dpr_Contest_LongTapNotesBg_o* __this, float time, const MethodInfo* method_info);
void Dpr_Contest_LongTapNotesBg___ctor (Dpr_Contest_LongTapNotesBg_o* __this, const MethodInfo* method_info);
