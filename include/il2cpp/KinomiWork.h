#pragma once

#include "il2cpp.h"

XLSXContent_KinomiPlaceData_SheetSheet1_o* KinomiWork__GetPlaceData (int32_t placeIndex, const MethodInfo* method);
XLSXContent_KinomiPlaceData_SheetSheet1_array* KinomiWork__GetPlaceDataByAreaId (int32_t areaId, const MethodInfo* method);
int32_t KinomiWork__GetPlaceDataCount (const MethodInfo* method);
XLSXContent_KinomiData_SheetData_o* KinomiWork__GetKinomiData (int32_t tagNo, const MethodInfo* method);
int32_t KinomiWork__GetKinomiDataCount (const MethodInfo* method);
XLSXContent_KinomiData_SheetData_o* KinomiWork__FindKinomiDataByItemNo (uint16_t itemNo, const MethodInfo* method);
DPData_KinomiGrow_o KinomiWork__GetGrowByRawIndex (int32_t growIndex, const MethodInfo* method);
void KinomiWork__SetGrowByRawIndex (int32_t growIndex, DPData_KinomiGrow_o grow, const MethodInfo* method);
DPData_KinomiGrow_o KinomiWork__GetGrow (int32_t placeIndex, const MethodInfo* method);
void KinomiWork__SetGrow (int32_t placeIndex, DPData_KinomiGrow_o grow, const MethodInfo* method);
XLSXContent_KinomiData_SheetData_o* KinomiWork__GetKinomiDataByPlaceIndex (int32_t placeIndex, const MethodInfo* method);
void KinomiWork__UpdateGrowTime (const MethodInfo* method);
void KinomiWork__UpdateGrowTime (int32_t minute, const MethodInfo* method);
void KinomiWork__PlantKinomi (int32_t placeIndex, uint16_t itemNo, const MethodInfo* method);
void KinomiWork__HarvestKinomi (int32_t placeIndex, const MethodInfo* method);
void KinomiWork__GiveWater (int32_t placeIndex, const MethodInfo* method);
void KinomiWork__SetDefault (const MethodInfo* method);
int32_t KinomiWork__CalcGrowPhase (DPData_KinomiGrow_o kinomiGrow, const MethodInfo* method);
bool KinomiWork__CalcGrowCompleted (DPData_KinomiGrow_o kinomiGrow, const MethodInfo* method);
int32_t KinomiWork__CalcGrowCompletedTime (XLSXContent_KinomiData_SheetData_o* kinomiData, const MethodInfo* method);
int32_t KinomiWork__GrowIndexToPlaceIndex (int32_t growIndex, const MethodInfo* method);
int32_t KinomiWork__PlaceIndexToGrowIndex (int32_t placeIndex, const MethodInfo* method);
bool KinomiWork__IsKinomiContact (const MethodInfo* method);
FieldKinomiGrowEntity_o* KinomiWork__IsKinomiContactEntity (const MethodInfo* method);
FieldKinomiGrowEntity_o* KinomiWork__IsWaterContactEntity (const MethodInfo* method);
FieldKinomiGrowEntity_o* KinomiWork__IsKinomiContactEntityCommon (int32_t phase, const MethodInfo* method);
void KinomiWork___ctor (KinomiWork_o* __this, const MethodInfo* method);
void KinomiWork___cctor (const MethodInfo* method);
