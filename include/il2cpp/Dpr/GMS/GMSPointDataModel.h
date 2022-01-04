#pragma once

#include "il2cpp.h"

void Dpr_GMS_GMSPointDataModel__CreateData (Dpr_GMS_GMSPointDataModel_o* __this, uint16_t index, System_String_o* pointTitle, UnityEngine_Vector3_o* point, const MethodInfo* method);
bool Dpr_GMS_GMSPointDataModel__get_HasData (Dpr_GMS_GMSPointDataModel_o* __this, const MethodInfo* method);
bool Dpr_GMS_GMSPointDataModel__get_IsMaxData (Dpr_GMS_GMSPointDataModel_o* __this, const MethodInfo* method);
int32_t Dpr_GMS_GMSPointDataModel__get_DataCount (Dpr_GMS_GMSPointDataModel_o* __this, const MethodInfo* method);
Dpr_GMS_PointHistoryDataModel_array* Dpr_GMS_GMSPointDataModel__get_HistoryDataArray (Dpr_GMS_GMSPointDataModel_o* __this, const MethodInfo* method);
Dpr_GMS_PointHistoryDataModel_o* Dpr_GMS_GMSPointDataModel__GetHistoryDataByIndex (Dpr_GMS_GMSPointDataModel_o* __this, int32_t index, const MethodInfo* method);
Dpr_GMS_PointHistoryDataModel_o* Dpr_GMS_GMSPointDataModel__GetFirstHistoryData (Dpr_GMS_GMSPointDataModel_o* __this, const MethodInfo* method);
void Dpr_GMS_GMSPointDataModel__SetHistoryData (Dpr_GMS_GMSPointDataModel_o* __this, int32_t index, Dpr_GMS_PointHistoryDataModel_o* newHistoryData, const MethodInfo* method);
void Dpr_GMS_GMSPointDataModel__AddHistoryData (Dpr_GMS_GMSPointDataModel_o* __this, Dpr_GMS_PointHistoryDataModel_o* newHistoryData, const MethodInfo* method);
void Dpr_GMS_GMSPointDataModel__ChangeMarkHistoryData (Dpr_GMS_GMSPointDataModel_o* __this, int32_t index, const MethodInfo* method);
void Dpr_GMS_GMSPointDataModel__DeleteHistoryData (Dpr_GMS_GMSPointDataModel_o* __this, int32_t index, const MethodInfo* method);
void Dpr_GMS_GMSPointDataModel__CheckHasHistoryData (Dpr_GMS_GMSPointDataModel_o* __this, const MethodInfo* method);
void Dpr_GMS_GMSPointDataModel__SortHistoryData (Dpr_GMS_GMSPointDataModel_o* __this, const MethodInfo* method);
UnityEngine_Sprite_o* Dpr_GMS_GMSPointDataModel__GetPointMarkIconSpr (Dpr_GMS_GMSPointDataModel_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o Dpr_GMS_GMSPointDataModel__get_Normal (Dpr_GMS_GMSPointDataModel_o* __this, const MethodInfo* method);
bool Dpr_GMS_GMSPointDataModel__get_IsView (Dpr_GMS_GMSPointDataModel_o* __this, const MethodInfo* method);
UnityEngine_Vector2_o Dpr_GMS_GMSPointDataModel__get_ScreenPos (Dpr_GMS_GMSPointDataModel_o* __this, const MethodInfo* method);
void Dpr_GMS_GMSPointDataModel__ChangeViewStatus (Dpr_GMS_GMSPointDataModel_o* __this, bool canView, const MethodInfo* method);
void Dpr_GMS_GMSPointDataModel__SetScreenPosition (Dpr_GMS_GMSPointDataModel_o* __this, UnityEngine_Vector2_o screenPos, const MethodInfo* method);
void Dpr_GMS_GMSPointDataModel___ctor (Dpr_GMS_GMSPointDataModel_o* __this, const MethodInfo* method);
