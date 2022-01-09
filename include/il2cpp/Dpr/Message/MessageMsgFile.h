#pragma once

#include "il2cpp.h"

void Dpr_Message_MessageMsgFile___ctor (Dpr_Message_MessageMsgFile_o* __this, Dpr_Message_MsbtDataModel_o* msbtDataModel, const MethodInfo* method_info);
int32_t Dpr_Message_MessageMsgFile__get_LanguageID (Dpr_Message_MessageMsgFile_o* __this, const MethodInfo* method_info);
void Dpr_Message_MessageMsgFile__ReplaceMsbtDataModel (Dpr_Message_MessageMsgFile_o* __this, Dpr_Message_MsbtDataModel_o* msbtDataModel, const MethodInfo* method_info);
bool Dpr_Message_MessageMsgFile__IsValidData (Dpr_Message_MessageMsgFile_o* __this, const MethodInfo* method_info);
Dpr_Message_LabelData_array* Dpr_Message_MessageMsgFile__GetAllLabelDataArray (Dpr_Message_MessageMsgFile_o* __this, const MethodInfo* method_info);
int32_t Dpr_Message_MessageMsgFile__GetLabelIndex (Dpr_Message_MessageMsgFile_o* __this, System_String_o* label, const MethodInfo* method_info);
System_String_o* Dpr_Message_MessageMsgFile__GetLabel (Dpr_Message_MessageMsgFile_o* __this, int32_t index, const MethodInfo* method_info);
System_String_o* Dpr_Message_MessageMsgFile__get_FileName (Dpr_Message_MessageMsgFile_o* __this, const MethodInfo* method_info);
int32_t Dpr_Message_MessageMsgFile__GetTotalTextNum (Dpr_Message_MessageMsgFile_o* __this, const MethodInfo* method_info);
bool Dpr_Message_MessageMsgFile__HasLabelByIndex (Dpr_Message_MessageMsgFile_o* __this, int32_t labelIndex, const MethodInfo* method_info);
System_String_o* Dpr_Message_MessageMsgFile__GetNameStr (Dpr_Message_MessageMsgFile_o* __this, System_String_o* label, const MethodInfo* method_info);
System_String_o* Dpr_Message_MessageMsgFile__GetNameStr (Dpr_Message_MessageMsgFile_o* __this, int32_t labelIndex, const MethodInfo* method_info);
Dpr_Message_MessageGlossaryParseDataModel_o* Dpr_Message_MessageMsgFile__GetNameDataModelByIndex (Dpr_Message_MessageMsgFile_o* __this, int32_t labelIndex, const MethodInfo* method_info);
Dpr_Message_MessageGlossaryParseDataModel_o* Dpr_Message_MessageMsgFile__GetNameDataModel (Dpr_Message_MessageMsgFile_o* __this, System_String_o* label, const MethodInfo* method_info);
System_String_o* Dpr_Message_MessageMsgFile__GetSimpleMessage (Dpr_Message_MessageMsgFile_o* __this, System_String_o* label, const MethodInfo* method_info);
System_String_o* Dpr_Message_MessageMsgFile__GetSimpleMessage (Dpr_Message_MessageMsgFile_o* __this, int32_t labelIndex, const MethodInfo* method_info);
System_String_o* Dpr_Message_MessageMsgFile__GetFormattedMessage (Dpr_Message_MessageMsgFile_o* __this, System_String_o* label, const MethodInfo* method_info);
System_String_o* Dpr_Message_MessageMsgFile__GetFormattedMessage (Dpr_Message_MessageMsgFile_o* __this, int32_t labelIndex, const MethodInfo* method_info);
Dpr_Message_MessageTextParseDataModel_o* Dpr_Message_MessageMsgFile__GetTextDataModel (Dpr_Message_MessageMsgFile_o* __this, System_String_o* label, const MethodInfo* method_info);
Dpr_Message_MessageTextParseDataModel_o* Dpr_Message_MessageMsgFile__GetTextDataModelByIndex (Dpr_Message_MessageMsgFile_o* __this, int32_t index, const MethodInfo* method_info);
void Dpr_Message_MessageMsgFile__ClearWordParam (Dpr_Message_MessageMsgFile_o* __this, const MethodInfo* method_info);
bool Dpr_Message_MessageMsgFile__IsSetWordParam (Dpr_Message_MessageMsgFile_o* __this, int32_t index, const MethodInfo* method_info);
