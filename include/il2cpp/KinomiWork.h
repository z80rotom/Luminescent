#pragma once

#include "il2cpp.h"

XLSXContent_KinomiPlaceData_SheetSheet1_o* KinomiWork__GetPlaceData (int32_t placeIndex, const MethodInfo* method_info);
XLSXContent_KinomiPlaceData_SheetSheet1_array* KinomiWork__GetPlaceDataByAreaId (int32_t areaId, const MethodInfo* method_info);
int32_t KinomiWork__GetPlaceDataCount (const MethodInfo* method_info);
XLSXContent_KinomiData_SheetData_o* KinomiWork__GetKinomiData (int32_t tagNo, const MethodInfo* method_info);
int32_t KinomiWork__GetKinomiDataCount (const MethodInfo* method_info);
XLSXContent_KinomiData_SheetData_o* KinomiWork__FindKinomiDataByItemNo (uint16_t itemNo, const MethodInfo* method_info);
DPData_KinomiGrow_o KinomiWork__GetGrowByRawIndex (int32_t growIndex, const MethodInfo* method_info);
void KinomiWork__SetGrowByRawIndex (int32_t growIndex, DPData_KinomiGrow_o grow, const MethodInfo* method_info);
DPData_KinomiGrow_o KinomiWork__GetGrow (int32_t placeIndex, const MethodInfo* method_info);
void KinomiWork__SetGrow (int32_t placeIndex, DPData_KinomiGrow_o grow, const MethodInfo* method_info);
XLSXContent_KinomiData_SheetData_o* KinomiWork__GetKinomiDataByPlaceIndex (int32_t placeIndex, const MethodInfo* method_info);
void KinomiWork__UpdateGrowTime (const MethodInfo* method_info);
void KinomiWork__UpdateGrowTime (int32_t minute, const MethodInfo* method_info);
void KinomiWork__PlantKinomi (int32_t placeIndex, uint16_t itemNo, const MethodInfo* method_info);
void KinomiWork__HarvestKinomi (int32_t placeIndex, const MethodInfo* method_info);
void KinomiWork__GiveWater (int32_t placeIndex, const MethodInfo* method_info);
void KinomiWork__SetDefault (const MethodInfo* method_info);
int32_t KinomiWork__CalcGrowPhase (DPData_KinomiGrow_o kinomiGrow, const MethodInfo* method_info);
bool KinomiWork__CalcGrowCompleted (DPData_KinomiGrow_o kinomiGrow, const MethodInfo* method_info);
int32_t KinomiWork__CalcGrowCompletedTime (XLSXContent_KinomiData_SheetData_o* kinomiData, const MethodInfo* method_info);
int32_t KinomiWork__GrowIndexToPlaceIndex (int32_t growIndex, const MethodInfo* method_info);
int32_t KinomiWork__PlaceIndexToGrowIndex (int32_t placeIndex, const MethodInfo* method_info);
bool KinomiWork__IsKinomiContact (const MethodInfo* method_info);
FieldKinomiGrowEntity_o* KinomiWork__IsKinomiContactEntity (const MethodInfo* method_info);
FieldKinomiGrowEntity_o* KinomiWork__IsWaterContactEntity (const MethodInfo* method_info);
FieldKinomiGrowEntity_o* KinomiWork__IsKinomiContactEntityCommon (int32_t phase, const MethodInfo* method_info);
void KinomiWork___ctor (KinomiWork_o* __this, const MethodInfo* method_info);
void KinomiWork___cctor (const MethodInfo* method_info);
