#pragma once

#include "il2cpp.h"

void FieldPoketch__RegisterEvent (const MethodInfo* method);
void FieldPoketch__UnregisterEvent (const MethodInfo* method);
Dpr_UI_PoketchWindow_o* FieldPoketch__CreatePoketchWindow (const MethodInfo* method);
void FieldPoketch__CreanPoketchWindow (const MethodInfo* method);
void FieldPoketch__OnPushedHideButton (const MethodInfo* method);
void FieldPoketch__HidePoketch (bool doCallback, const MethodInfo* method);
void FieldPoketch__OnPushedAppearButton (const MethodInfo* method);
bool FieldPoketch__IsRejectPoketch (const MethodInfo* method);
bool FieldPoketch__IsCloseOncePoketch (const MethodInfo* method);
void FieldPoketch__RestorePoketchWindow (const MethodInfo* method);
void FieldPoketch__OpenPoketchWindow (const MethodInfo* method);
bool FieldPoketch__IsControlPoketch (const MethodInfo* method);
void FieldPoketch__CountPoketchPedometer (int32_t num, const MethodInfo* method);
void FieldPoketch__SetAvailablePoketchApp (int32_t appId, const MethodInfo* method);
bool FieldPoketch__IsAvailablePoketchApp (int32_t appId, const MethodInfo* method);
void FieldPoketch__AddPokemonHistory (Pml_PokePara_PokemonParam_o* pokeParam, const MethodInfo* method);
void FieldPoketch__AddPokemonHistory (int32_t monsno, int32_t form, const MethodInfo* method);
FieldPoketch_DowsingResult_o* FieldPoketch__Dowsing (UnityEngine_Vector2_o sonarCenterPos, const MethodInfo* method);
UnityEngine_Vector2Int_o FieldPoketch__DowsingScreenToGrid (UnityEngine_Vector2_o* position, UnityEngine_Vector2Int_o* gridOrigin, const MethodInfo* method);
UnityEngine_Vector2_o FieldPoketch__GridToDowsingScreen (UnityEngine_Vector2Int_o* grid, UnityEngine_Vector2Int_o* gridOrigin, const MethodInfo* method);
int32_t FieldPoketch__HitSonar (UnityEngine_Vector2Int_o* itemPos, UnityEngine_Vector2Int_o* sonarCenterGrid, UnityEngine_Vector2Int_o* gridLT, UnityEngine_Vector2Int_o* gridRB, const MethodInfo* method);
bool FieldPoketch__IsGetHidenWaza (int32_t hidenWazaType, const MethodInfo* method);
bool FieldPoketch__IsGetHidenWazaMachine (int32_t hidenWazaType, const MethodInfo* method);
int32_t FieldPoketch__AvailableHidenWaza (int32_t hidenWazaType, const MethodInfo* method);
bool FieldPoketch__AvailableHidenWazaCore (int32_t hidenWazaType, const MethodInfo* method);
void FieldPoketch__UseHidenWaza (int32_t hidenWazaType, const MethodInfo* method);
bool FieldPoketch__CanUseHidenWaza (int32_t hidenWazaType, const MethodInfo* method);
bool FieldPoketch__AvailableIwakudakiObject (FieldObjectEntity_o* obj, const MethodInfo* method);
bool FieldPoketch__AvailableIaigiriObject (FieldObjectEntity_o* obj, const MethodInfo* method);
bool FieldPoketch__AvailableRockclimbObject (FieldObjectEntity_o* obj, const MethodInfo* method);
bool FieldPoketch__AvailableKairikiObject (FieldObjectEntity_o* obj, const MethodInfo* method);
FieldObjectEntity_o* FieldPoketch__SearchCanHidenContactObject (System_Func_FieldObjectEntity__bool__o* CheckFunc, int32_t* outIndex, const MethodInfo* method);
bool FieldPoketch__CanHidenContact (System_Func_FieldObjectEntity__bool__o* CheckFunc, const MethodInfo* method);
void FieldPoketch__ContactHidenObject (int32_t index, FieldObjectEntity_o* entity, System_String_o* label, const MethodInfo* method);
void FieldPoketch__JumpHidenEvent (System_String_o* label, const MethodInfo* method);
void FieldPoketch___cctor (const MethodInfo* method);
