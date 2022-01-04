#pragma once

#include "il2cpp.h"

bool Dpr_Message_MsbtDataModel__get_IsCreate (Dpr_Message_MsbtDataModel_o* __this, const MethodInfo* method);
bool Dpr_Message_MsbtDataModel__get_IsResident (Dpr_Message_MsbtDataModel_o* __this, const MethodInfo* method);
void Dpr_Message_MsbtDataModel___ctor (Dpr_Message_MsbtDataModel_o* __this, Dpr_Message_LabelData_array* labelDataArray, int32_t langID, int32_t hash, System_String_o* fileName, bool isResident, const MethodInfo* method);
void Dpr_Message_MsbtDataModel__ClearData (Dpr_Message_MsbtDataModel_o* __this, const MethodInfo* method);
void Dpr_Message_MsbtDataModel__CreateLabelTable (Dpr_Message_MsbtDataModel_o* __this, const MethodInfo* method);
Dpr_Message_LabelData_array* Dpr_Message_MsbtDataModel__get_LabelDataArray (Dpr_Message_MsbtDataModel_o* __this, const MethodInfo* method);
int32_t Dpr_Message_MsbtDataModel__GetTextNum (Dpr_Message_MsbtDataModel_o* __this, const MethodInfo* method);
Dpr_Message_LabelData_o* Dpr_Message_MsbtDataModel__GetLabelDataByName (Dpr_Message_MsbtDataModel_o* __this, System_String_o* labelName, const MethodInfo* method);
Dpr_Message_LabelData_o* Dpr_Message_MsbtDataModel__GetLabelDataByIndex (Dpr_Message_MsbtDataModel_o* __this, int32_t labelIndex, const MethodInfo* method);
