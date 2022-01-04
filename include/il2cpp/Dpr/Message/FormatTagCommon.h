#pragma once

#include "il2cpp.h"

void Dpr_Message_FormatTagCommon__Initialize (Dpr_Message_FormatTagCommon_o* __this, const MethodInfo* method);
System_String_o* Dpr_Message_FormatTagCommon__FormatNameTag (Dpr_Message_FormatTagCommon_o* __this, Dpr_Message_MessageTagDataModel_o* tagDataModel, int32_t languageId, const MethodInfo* method);
System_String_o* Dpr_Message_FormatTagCommon__GetNameUpperCase (Dpr_Message_FormatTagCommon_o* __this, Dpr_Message_MessageTagDataModel_o* tagDataModel, int32_t languageId, const MethodInfo* method);
System_String_o* Dpr_Message_FormatTagCommon__FormatDigitTag (Dpr_Message_FormatTagCommon_o* __this, int32_t digitTagId, int32_t tagParameter, int32_t count, System_String_o* strValue, int32_t languageId, const MethodInfo* method);
System_String_o* Dpr_Message_FormatTagCommon__ConvertValueToString (Dpr_Message_FormatTagCommon_o* __this, int32_t count, const MethodInfo* method);
System_String_o* Dpr_Message_FormatTagCommon__ConvertValueToDigitGroupingStr (Dpr_Message_FormatTagCommon_o* __this, int32_t tagParameter, int32_t value, int32_t languageId, const MethodInfo* method);
System_String_o* Dpr_Message_FormatTagCommon__ConvertValueToStrByLanguage (Dpr_Message_FormatTagCommon_o* __this, int32_t value, int32_t languageId, const MethodInfo* method);
System_String_o* Dpr_Message_FormatTagCommon__GetNumStrGroupingByChar (Dpr_Message_FormatTagCommon_o* __this, uint16_t c, int32_t value, int32_t languageId, const MethodInfo* method);
bool Dpr_Message_FormatTagCommon__CheckIsFourDigitInESP (Dpr_Message_FormatTagCommon_o* __this, int32_t value, int32_t languageId, const MethodInfo* method);
System_String_o* Dpr_Message_FormatTagCommon__GetGenderStr (Dpr_Message_FormatTagCommon_o* __this, int32_t refValue, Dpr_Message_MessageTagDataModel_o* refTagData, System_String_array* words, const MethodInfo* method);
System_String_o* Dpr_Message_FormatTagCommon__GetQtyStr (Dpr_Message_FormatTagCommon_o* __this, Dpr_Message_MessageTagDataModel_o* refTagData, System_String_array* words, int32_t langID, const MethodInfo* method);
System_String_o* Dpr_Message_FormatTagCommon__GetGenderQty (Dpr_Message_FormatTagCommon_o* __this, Dpr_Message_MessageTagDataModel_o* refTagData, System_String_array* words, const MethodInfo* method);
System_String_o* Dpr_Message_FormatTagCommon__GetDEGenderQty (Dpr_Message_FormatTagCommon_o* __this, Dpr_Message_MessageTagDataModel_o* refTagData, System_String_array* words, const MethodInfo* method);
int32_t Dpr_Message_FormatTagCommon__GetDEGenderQtyId (Dpr_Message_FormatTagCommon_o* __this, int32_t genderId, int32_t qtyId, const MethodInfo* method);
System_String_o* Dpr_Message_FormatTagCommon__GetQtyZeroStr (Dpr_Message_FormatTagCommon_o* __this, Dpr_Message_MessageTagDataModel_o* refTagData, System_String_array* words, const MethodInfo* method);
void Dpr_Message_FormatTagCommon___ctor (Dpr_Message_FormatTagCommon_o* __this, const MethodInfo* method);
