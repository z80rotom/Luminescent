#pragma once

#include "il2cpp.h"

UnityEngine_RectTransform_o* Dpr_UI_Townmap__get_cellRoot (Dpr_UI_Townmap_o* __this, const MethodInfo* method_info);
UnityEngine_Vector3_o Dpr_UI_Townmap__get_cursorPos (Dpr_UI_Townmap_o* __this, const MethodInfo* method_info);
void Dpr_UI_Townmap__Setup (Dpr_UI_Townmap_o* __this, int32_t type, XLSXContent_TownMapGuideTable_SheetGuide_o* guideData, UnityEngine_Events_UnityAction_Townmap_Cell__bool__o* onCellChanged, const MethodInfo* method_info);
void Dpr_UI_Townmap__OnDestroy (Dpr_UI_Townmap_o* __this, const MethodInfo* method_info);
XLSXContent_TownMapTable_SheetData_o* Dpr_UI_Townmap__GetMapDataByPlayer (Dpr_UI_Townmap_o* __this, const MethodInfo* method_info);
void Dpr_UI_Townmap__SetupDatas (Dpr_UI_Townmap_o* __this, const MethodInfo* method_info);
void Dpr_UI_Townmap__SetupSymbols (Dpr_UI_Townmap_o* __this, const MethodInfo* method_info);
void Dpr_UI_Townmap__SetupKinomis (Dpr_UI_Townmap_o* __this, const MethodInfo* method_info);
void Dpr_UI_Townmap__SetupHoneyTrees (Dpr_UI_Townmap_o* __this, const MethodInfo* method_info);
void Dpr_UI_Townmap__SetupHiddenMap (Dpr_UI_Townmap_o* __this, const MethodInfo* method_info);
bool Dpr_UI_Townmap__CanKinomiHarvest (Dpr_UI_Townmap_o* __this, XLSXContent_KinomiPlaceData_SheetSheet1_o* placeData, const MethodInfo* method_info);
int32_t Dpr_UI_Townmap__GetIndex (Dpr_UI_Townmap_o* __this, XLSXContent_TownMapTable_SheetData_o* data, UnityEngine_Vector2Int_o pos, const MethodInfo* method_info);
XLSXContent_TownMapTable_SheetData_o* Dpr_UI_Townmap__GetData (Dpr_UI_Townmap_o* __this, int32_t zoneId, UnityEngine_Vector2Int_o pos, const MethodInfo* method_info);
XLSXContent_TownMapTable_SheetData_o* Dpr_UI_Townmap__GetData (Dpr_UI_Townmap_o* __this, int32_t zoneId, int32_t index1, const MethodInfo* method_info);
Dpr_UI_Townmap_Cell_o* Dpr_UI_Townmap__GetCell (Dpr_UI_Townmap_o* __this, UnityEngine_Vector2_o cellPos, const MethodInfo* method_info);
void Dpr_UI_Townmap__SetCell (Dpr_UI_Townmap_o* __this, UnityEngine_Vector2_o cellPos, Dpr_UI_Townmap_Cell_o* cell, const MethodInfo* method_info);
Dpr_UI_Townmap_Cell_o* Dpr_UI_Townmap__GetCurrentCell (Dpr_UI_Townmap_o* __this, const MethodInfo* method_info);
UnityEngine_Vector3_o Dpr_UI_Townmap__ToCellIconPos (Dpr_UI_Townmap_o* __this, UnityEngine_Vector2_o cellPos, const MethodInfo* method_info);
UnityEngine_Vector2_o Dpr_UI_Townmap__ToCellPos (Dpr_UI_Townmap_o* __this, UnityEngine_Vector3_o iconPos, const MethodInfo* method_info);
void Dpr_UI_Townmap__SetPlayerPos (Dpr_UI_Townmap_o* __this, UnityEngine_Vector2_o cellPos, const MethodInfo* method_info);
void Dpr_UI_Townmap__SetCursorPos (Dpr_UI_Townmap_o* __this, UnityEngine_Vector2_o cellPos, const MethodInfo* method_info);
void Dpr_UI_Townmap__ResetCursorPos (Dpr_UI_Townmap_o* __this, bool isForce, const MethodInfo* method_info);
bool Dpr_UI_Townmap__OnUpdate (Dpr_UI_Townmap_o* __this, float deltaTime, Dpr_UI_UIInputController_o* input, const MethodInfo* method_info);
bool Dpr_UI_Townmap__UpdateMove (Dpr_UI_Townmap_o* __this, float deltaTime, Dpr_UI_UIInputController_o* input, const MethodInfo* method_info);
bool Dpr_UI_Townmap__UpdateDigitalMove (Dpr_UI_Townmap_o* __this, float deltaTime, Dpr_UI_UIInputController_o* input, const MethodInfo* method_info);
void Dpr_UI_Townmap__PlayCellChangeSe (Dpr_UI_Townmap_o* __this, Dpr_UI_Townmap_Cell_o* cell, const MethodInfo* method_info);
void Dpr_UI_Townmap__ClampCursorPos (Dpr_UI_Townmap_o* __this, const MethodInfo* method_info);
bool Dpr_UI_Townmap__UpdateAnalogMove (Dpr_UI_Townmap_o* __this, float deltaTime, Dpr_UI_UIInputController_o* input, const MethodInfo* method_info);
int32_t Dpr_UI_Townmap__GetAnalogStickIndex (UnityEngine_Vector2_o analogStick, const MethodInfo* method_info);
void Dpr_UI_Townmap__SetNoticeType (Dpr_UI_Townmap_o* __this, int32_t type, const MethodInfo* method_info);
void Dpr_UI_Townmap__CellChanged (Dpr_UI_Townmap_o* __this, Dpr_UI_Townmap_Cell_o* cell, bool isReset, bool isAnalogMoveing, const MethodInfo* method_info);
void Dpr_UI_Townmap___ctor (Dpr_UI_Townmap_o* __this, const MethodInfo* method_info);
void Dpr_UI_Townmap___cctor (const MethodInfo* method_info);
