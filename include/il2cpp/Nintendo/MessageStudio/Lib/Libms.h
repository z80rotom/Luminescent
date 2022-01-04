#pragma once

#include "il2cpp.h"

void Nintendo_MessageStudio_Lib_Libms___cctor (const MethodInfo* method);
intptr_t Nintendo_MessageStudio_Lib_Libms__Alloc (int32_t size, const MethodInfo* method);
void Nintendo_MessageStudio_Lib_Libms__Free (intptr_t ptr, const MethodInfo* method);
void Nintendo_MessageStudio_Lib_Libms__LMS_SetMemFuncs (Nintendo_MessageStudio_Lib_Libms_LMSMallocPtr_o* pMalloc, Nintendo_MessageStudio_Lib_Libms_LMSFreePtr_o* pFree, const MethodInfo* method);
intptr_t Nintendo_MessageStudio_Lib_Libms__LMS_InitMessage (intptr_t pResource, const MethodInfo* method);
void Nintendo_MessageStudio_Lib_Libms__LMS_CloseMessage (intptr_t pFile, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_SearchMessageBlockByName (intptr_t pFile, System_String_o* pBlockName, const MethodInfo* method);
intptr_t Nintendo_MessageStudio_Lib_Libms__LMS_GetMessageBlockInfoByName (intptr_t pFile, System_String_o* pBlockName, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetTextNum (intptr_t pFile, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetTextIndexByLabel (intptr_t pFile, System_String_o* labelName, const MethodInfo* method);
intptr_t Nintendo_MessageStudio_Lib_Libms__LMS_GetText (intptr_t pFile, int32_t nTextIndex, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetTextSize (intptr_t pFile, int32_t nTextIndex, const MethodInfo* method);
intptr_t Nintendo_MessageStudio_Lib_Libms__LMS_GetTextByLabel (intptr_t pFile, System_String_o* labelName, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetLabelByTextIndex (intptr_t pFile, int32_t nTextIndex, System_Text_StringBuilder_o* labelName, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetTextStyle (intptr_t pFile, int32_t nTextIndex, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetTextStyleByLabel (intptr_t pFile, System_String_o* labelName, const MethodInfo* method);
uint32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetAttributeSize (intptr_t pFile, const MethodInfo* method);
intptr_t Nintendo_MessageStudio_Lib_Libms__LMS_GetAttribute (intptr_t pFile, int32_t index, const MethodInfo* method);
intptr_t Nintendo_MessageStudio_Lib_Libms__LMS_GetAttributeText (intptr_t pFile, uint32_t offset, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetAttrFilteredOffset (intptr_t pFile, int32_t nAttrIndex, const MethodInfo* method);
intptr_t Nintendo_MessageStudio_Lib_Libms__LMS_InitProject (intptr_t pResource, const MethodInfo* method);
void Nintendo_MessageStudio_Lib_Libms__LMS_CloseProject (intptr_t pFile, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_SearchProjectBlockByName (intptr_t pFile, System_String_o* pBlockName, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetColorIndexByName (intptr_t pFile, System_String_o* pName, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetColor (intptr_t pFile, int32_t nColorIndex, Nintendo_MessageStudio_Lib_LMSColor_o* pColor, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetColorByName (intptr_t pFile, System_String_o* pName, Nintendo_MessageStudio_Lib_LMSColor_o* pColor, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetColorNum (intptr_t pFile, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetContentsNum (intptr_t pFile, const MethodInfo* method);
intptr_t Nintendo_MessageStudio_Lib_Libms__LMS_GetContentPath (intptr_t pFile, int32_t nContentIndex, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetAttrInfoIndexByName (intptr_t pFile, System_String_o* pName, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetAttrType (intptr_t pFile, int32_t nAttrIndex, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetAttrOffset (intptr_t pFile, int32_t nAttrIndex, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetAttrTypeByName (intptr_t pFile, System_String_o* pName, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetAttrOffsetByName (intptr_t pFile, System_String_o* pName, const MethodInfo* method);
intptr_t Nintendo_MessageStudio_Lib_Libms__LMS_GetAttrListItemName (intptr_t pFile, int32_t nAttrIndex, int32_t nItemIndex, const MethodInfo* method);
intptr_t Nintendo_MessageStudio_Lib_Libms__LMS_GetAttrListItemNameByName (intptr_t pFile, System_String_o* pAttrName, int32_t nItemIndex, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetAttrNum (intptr_t pFile, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetAttrListItemNum (intptr_t pFile, int32_t nAttrIndex, const MethodInfo* method);
intptr_t Nintendo_MessageStudio_Lib_Libms__LMS_GetTagGroupName (intptr_t pFile, uint16_t nGroupId, const MethodInfo* method);
intptr_t Nintendo_MessageStudio_Lib_Libms__LMS_GetTagName (intptr_t pFile, uint16_t nGroupId, uint16_t nTagId, const MethodInfo* method);
intptr_t Nintendo_MessageStudio_Lib_Libms__LMS_GetTagParamName (intptr_t pFile, uint16_t nGroupId, uint16_t nTagId, uint16_t nParamIndex, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetTagParamType (intptr_t pFile, uint16_t nGroupId, uint16_t nTagId, uint16_t nParamIndex, const MethodInfo* method);
intptr_t Nintendo_MessageStudio_Lib_Libms__LMS_GetTagListItemName (intptr_t pFile, uint16_t nGroupId, uint16_t nTagId, uint16_t nParamIndex, uint16_t nItemIndex, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetTagGroupNum (intptr_t pFile, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetTagNum (intptr_t pFile, uint16_t nGroupId, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetTagParamNum (intptr_t pFile, uint16_t nGroupId, uint16_t nTagId, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetTagListItemNum (intptr_t pFile, uint16_t nGroupId, uint16_t nTagId, uint16_t nParamIndex, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetStyleIndexByName (intptr_t pFile, System_String_o* pStyleName, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetRegionWidth (intptr_t pFile, int32_t nStyleIndex, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetRegionWidthByName (intptr_t pFile, System_String_o* pStyleName, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetLineNum (intptr_t pFile, int32_t nStyleIndex, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetLineNumByName (intptr_t pFile, System_String_o* pStyleName, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetFontIndex (intptr_t pFile, int32_t nStyleIndex, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetFontIndexByName (intptr_t pFile, System_String_o* pStyleName, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetBaseColorIndex (intptr_t pFile, int32_t nStyleIndex, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetBaseColorIndexByName (intptr_t pFile, System_String_o* pStyleName, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetStyleNum (intptr_t pFile, const MethodInfo* method);
intptr_t Nintendo_MessageStudio_Lib_Libms__LMS_InitFlowchart (intptr_t pResource, const MethodInfo* method);
void Nintendo_MessageStudio_Lib_Libms__LMS_CloseFlowchart (intptr_t pFile, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetNodeNum (intptr_t pFile, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetEntryNodeIndex (intptr_t pFile, System_String_o* pLabel, const MethodInfo* method);
intptr_t Nintendo_MessageStudio_Lib_Libms__LMS_GetNodeDataPtr (intptr_t pFile, int32_t index, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_Libms__LMS_GetFlowNodeIndex (intptr_t pFile, intptr_t pNode, const MethodInfo* method);
intptr_t Nintendo_MessageStudio_Lib_Libms__LMS_GetCaseIndexesFromBranchNode (intptr_t pFile, int32_t index, const MethodInfo* method);
intptr_t Nintendo_MessageStudio_Lib_Libms__LMS_GetFlowParamText (intptr_t pFile, int32_t offset, const MethodInfo* method);
