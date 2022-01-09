#pragma once

#include "il2cpp.h"

void Dpr_Message_MessageFormatter__Initialize (Dpr_Message_MessageFormatter_o* __this, const MethodInfo* method_info);
void Dpr_Message_MessageFormatter__Dispose (Dpr_Message_MessageFormatter_o* __this, const MethodInfo* method_info);
System_String_o* Dpr_Message_MessageFormatter__FormatGlossary (Dpr_Message_MessageFormatter_o* __this, Dpr_Message_MessageGlossaryParseDataModel_o* parseDataModel, int32_t languageId, const MethodInfo* method_info);
System_String_o* Dpr_Message_MessageFormatter__FormatSimple (Dpr_Message_MessageFormatter_o* __this, Dpr_Message_MessageTextParseDataModel_o* parseDataModel, const MethodInfo* method_info);
Dpr_Message_MessageTextLineDataModel_array* Dpr_Message_MessageFormatter__Format (Dpr_Message_MessageFormatter_o* __this, Dpr_Message_MessageTextParseDataModel_o* parseDataModel, int32_t languageId, const MethodInfo* method_info);
void Dpr_Message_MessageFormatter__ApplyGlossaryName (Dpr_Message_MessageFormatter_o* __this, Dpr_Message_MessageTextParseDataModel_o* parseDataModel, const MethodInfo* method_info);
Dpr_Message_MessageGlossaryParseDataModel_o* Dpr_Message_MessageFormatter__GetParseDataModelByCount (Dpr_Message_MessageFormatter_o* __this, int32_t labelIndex, int32_t qtyId, System_String_o* singleMsbtName, System_String_o* pluralMsbtName, const MethodInfo* method_info);
Dpr_Message_MessageGlossaryParseDataModel_o* Dpr_Message_MessageFormatter__GetGlossaryDataModel (Dpr_Message_MessageFormatter_o* __this, System_String_o* msbtName, int32_t itemNumber, const MethodInfo* method_info);
Dpr_Message_MessageGlossaryParseDataModel_o* Dpr_Message_MessageFormatter__GetGlossaryDataModel (Dpr_Message_MessageFormatter_o* __this, System_String_o* msbtName, System_String_o* labelName, const MethodInfo* method_info);
void Dpr_Message_MessageFormatter__FormatMessage (Dpr_Message_MessageFormatter_o* __this, Dpr_Message_MessageTextParseDataModel_o* parseDataModel, int32_t languageId, const MethodInfo* method_info);
void Dpr_Message_MessageFormatter__AddStrData (Dpr_Message_MessageFormatter_o* __this, Dpr_Message_MessageTextLineDataModel_o* lineMessageData, int32_t languageId, float strWidth, float tagValue, int32_t endEventId, const MethodInfo* method_info);
void Dpr_Message_MessageFormatter__AddLineDataModel (Dpr_Message_MessageFormatter_o* __this, int32_t endEventId, Dpr_Message_MessageTextLineDataModel_o* lineMessageData, int32_t languageId, float strWidth, const MethodInfo* method_info);
void Dpr_Message_MessageFormatter__AddLineMessageDataList (Dpr_Message_MessageFormatter_o* __this, Dpr_Message_MessageTextLineDataModel_o* addData, const MethodInfo* method_info);
System_String_o* Dpr_Message_MessageFormatter__GetTagNameDataStr (Dpr_Message_MessageFormatter_o* __this, Dpr_Message_MessageTagDataModel_o* tagDataModel, int32_t languageId, const MethodInfo* method_info);
System_String_o* Dpr_Message_MessageFormatter__FormatNameTagProcess (Dpr_Message_MessageFormatter_o* __this, Dpr_Message_MessageTagDataModel_o* tagDataModel, int32_t languageId, const MethodInfo* method_info);
System_String_o* Dpr_Message_MessageFormatter__FormatDigitTagProcess (Dpr_Message_MessageFormatter_o* __this, Dpr_Message_MessageTagDataModel_o* tagDataModel, int32_t languageId, const MethodInfo* method_info);
System_String_o* Dpr_Message_MessageFormatter__FormatENTagProcess (Dpr_Message_MessageFormatter_o* __this, Dpr_Message_MessageTagDataModel_o* tagDataModel, int32_t langID, const MethodInfo* method_info);
System_String_o* Dpr_Message_MessageFormatter__FormatFRTagProcess (Dpr_Message_MessageFormatter_o* __this, Dpr_Message_MessageTagDataModel_o* tagDataModel, int32_t langID, const MethodInfo* method_info);
System_String_o* Dpr_Message_MessageFormatter__FormatITTagProcess (Dpr_Message_MessageFormatter_o* __this, Dpr_Message_MessageTagDataModel_o* tagDataModel, int32_t langID, const MethodInfo* method_info);
System_String_o* Dpr_Message_MessageFormatter__FormatDETagProcess (Dpr_Message_MessageFormatter_o* __this, Dpr_Message_MessageTagDataModel_o* tagDataModel, int32_t langID, const MethodInfo* method_info);
System_String_o* Dpr_Message_MessageFormatter__FormatESTagProcess (Dpr_Message_MessageFormatter_o* __this, Dpr_Message_MessageTagDataModel_o* tagDataModel, int32_t langID, const MethodInfo* method_info);
System_String_o* Dpr_Message_MessageFormatter__FormatKorTagProcess (Dpr_Message_MessageFormatter_o* __this, Dpr_Message_MessageTagDataModel_o* tagDataModel, int32_t langID, const MethodInfo* method_info);
System_String_o* Dpr_Message_MessageFormatter__FormatSCTagProcess (Dpr_Message_MessageFormatter_o* __this, Dpr_Message_MessageTagDataModel_o* tagDataModel, const MethodInfo* method_info);
void Dpr_Message_MessageFormatter___ctor (Dpr_Message_MessageFormatter_o* __this, const MethodInfo* method_info);
