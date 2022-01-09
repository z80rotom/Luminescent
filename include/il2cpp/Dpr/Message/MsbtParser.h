#pragma once

#include "il2cpp.h"

void Dpr_Message_MsbtParser__Initialize (Dpr_Message_MsbtParser_o* __this, const MethodInfo* method_info);
Dpr_Message_LabelData_array* Dpr_Message_MsbtParser__ParseMsbtBinData (Dpr_Message_MsbtParser_o* __this, System_Byte_array* binDataArray, int32_t langID, int32_t patchVersion, const MethodInfo* method_info);
Dpr_Message_MsbtParser_MsbtFileData_o* Dpr_Message_MsbtParser__ParseMsbtFileData (Dpr_Message_MsbtParser_o* __this, System_Byte_array* msbtByteDataArray, const MethodInfo* method_info);
Dpr_Message_LabelData_array* Dpr_Message_MsbtParser__ConvertParseTextDataToFormatMsbtData (Dpr_Message_MsbtParser_o* __this, Dpr_Message_MsbtParser_MsbtFileData_o* dataModel, int32_t patchVersion, const MethodInfo* method_info);
Dpr_Message_StyleInfo_o* Dpr_Message_MsbtParser__CreateStyleInfo (Dpr_Message_MsbtParser_o* __this, int32_t styleIndex, int32_t controlID, const MethodInfo* method_info);
System_Int32_array* Dpr_Message_MsbtParser__CreateAttributeInfo (Dpr_Message_MsbtParser_o* __this, Dpr_Message_MessageAttributeDataModel_o* attributeDataModel, const MethodInfo* method_info);
Dpr_Message_TagData_array* Dpr_Message_MsbtParser__CreateTagDataArray (Dpr_Message_MsbtParser_o* __this, Dpr_Message_MsbtParser_LabelDataModel_o* dataModel, const MethodInfo* method_info);
void Dpr_Message_MsbtParser__SetForceTagReference (Dpr_Message_MsbtParser_o* __this, System_Collections_Generic_List_LabelTagDataModel__o* tagDataList, const MethodInfo* method_info);
void Dpr_Message_MsbtParser__GrmTagReference (Dpr_Message_MsbtParser_o* __this, int32_t listIndex, int32_t tagId, System_Collections_Generic_List_LabelTagDataModel__o* tagDataList, const MethodInfo* method_info);
void Dpr_Message_MsbtParser__ENTagReference (Dpr_Message_MsbtParser_o* __this, int32_t listIndex, Dpr_Message_LabelTagDataModel_o* tagData, System_Collections_Generic_List_LabelTagDataModel__o* tagDataList, const MethodInfo* method_info);
void Dpr_Message_MsbtParser__FRTagReference (Dpr_Message_MsbtParser_o* __this, int32_t listIndex, Dpr_Message_LabelTagDataModel_o* tagData, System_Collections_Generic_List_LabelTagDataModel__o* tagDataList, const MethodInfo* method_info);
void Dpr_Message_MsbtParser__ITTagReference (Dpr_Message_MsbtParser_o* __this, int32_t listIndex, Dpr_Message_LabelTagDataModel_o* tagData, System_Collections_Generic_List_LabelTagDataModel__o* tagDataList, const MethodInfo* method_info);
void Dpr_Message_MsbtParser__DETagReference (Dpr_Message_MsbtParser_o* __this, int32_t listIndex, Dpr_Message_LabelTagDataModel_o* tagData, System_Collections_Generic_List_LabelTagDataModel__o* tagDataList, const MethodInfo* method_info);
void Dpr_Message_MsbtParser__ESTagReference (Dpr_Message_MsbtParser_o* __this, int32_t listIndex, Dpr_Message_LabelTagDataModel_o* tagData, System_Collections_Generic_List_LabelTagDataModel__o* tagDataList, const MethodInfo* method_info);
void Dpr_Message_MsbtParser__SetForceGrmId (Dpr_Message_MsbtParser_o* __this, int32_t listIndex, System_Collections_Generic_List_LabelTagDataModel__o* tagDataList, int32_t forceGrmId, const MethodInfo* method_info);
Dpr_Message_WordData_array* Dpr_Message_MsbtParser__CreateWordDataArray (Dpr_Message_MsbtParser_o* __this, Dpr_Message_LabelParseDataModel_o* parseDataModel, System_String_o** errorMsg, const MethodInfo* method_info);
Dpr_Message_MsbtParser_MsgEventData_o* Dpr_Message_MsbtParser__CreateEventDataByCtrl2ID (Dpr_Message_MsbtParser_o* __this, int32_t tagId, float tagParameter, const MethodInfo* method_info);
void Dpr_Message_MsbtParser__AddStrWordData (Dpr_Message_MsbtParser_o* __this, System_String_o* str, const MethodInfo* method_info);
void Dpr_Message_MsbtParser__AddNewLineWordData (Dpr_Message_MsbtParser_o* __this, int32_t eventID, System_String_o* str, const MethodInfo* method_info);
void Dpr_Message_MsbtParser__SetFontAsset (Dpr_Message_MsbtParser_o* __this, int32_t langID, const MethodInfo* method_info);
float Dpr_Message_MsbtParser__CalcStrWidth (Dpr_Message_MsbtParser_o* __this, System_String_o* str, const MethodInfo* method_info);
void Dpr_Message_MsbtParser___ctor (Dpr_Message_MsbtParser_o* __this, const MethodInfo* method_info);
