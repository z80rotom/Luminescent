#pragma once

#include "il2cpp.h"

intptr_t Nintendo_MessageStudio_Lib_BinPrjFile__InitObject (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, intptr_t resourcePtr, const MethodInfo* method);
void Nintendo_MessageStudio_Lib_BinPrjFile__CloseObject (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, intptr_t objectPtr, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_BinPrjFile__SearchProjectBlock (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, System_String_o* name, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_BinPrjFile__GetColorIndex (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, System_String_o* name, const MethodInfo* method);
Nintendo_MessageStudio_Lib_LMSColor_o Nintendo_MessageStudio_Lib_BinPrjFile__GetColor (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, int32_t index, const MethodInfo* method);
Nintendo_MessageStudio_Lib_LMSColor_o Nintendo_MessageStudio_Lib_BinPrjFile__GetColor (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, System_String_o* name, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_BinPrjFile__GetColorNum (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_BinPrjFile__GetContentsNum (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, const MethodInfo* method);
System_String_o* Nintendo_MessageStudio_Lib_BinPrjFile__GetContentPath (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, int32_t index, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_BinPrjFile__GetAttrInfoIndex (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, System_String_o* name, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_BinPrjFile__GetAttrType (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, int32_t index, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_BinPrjFile__GetAttrType (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, System_String_o* name, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_BinPrjFile__GetAttrOffset (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, int32_t index, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_BinPrjFile__GetAttrOffset (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, System_String_o* name, const MethodInfo* method);
System_String_o* Nintendo_MessageStudio_Lib_BinPrjFile__GetAttrListItemName (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, int32_t attrIndex, int32_t itemIndex, const MethodInfo* method);
System_String_o* Nintendo_MessageStudio_Lib_BinPrjFile__GetAttrListItemName (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, System_String_o* attrName, int32_t itemIndex, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_BinPrjFile__GetAttrNum (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_BinPrjFile__GetAttrListItemNum (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, int32_t attrIndex, const MethodInfo* method);
System_String_o* Nintendo_MessageStudio_Lib_BinPrjFile__GetTagGroupName (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, uint16_t groupId, const MethodInfo* method);
System_String_o* Nintendo_MessageStudio_Lib_BinPrjFile__GetTagName (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, uint16_t groupId, uint16_t tagId, const MethodInfo* method);
System_String_o* Nintendo_MessageStudio_Lib_BinPrjFile__GetTagParamName (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, uint16_t groupId, uint16_t tagId, uint16_t paramId, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_BinPrjFile__GetTagParamType (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, uint16_t groupId, uint16_t tagId, uint16_t paramId, const MethodInfo* method);
System_String_o* Nintendo_MessageStudio_Lib_BinPrjFile__GetTagListItemName (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, uint16_t groupId, uint16_t tagId, uint16_t paramId, uint16_t itemIndex, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_BinPrjFile__GetTagGroupNum (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_BinPrjFile__GetTagNum (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, uint16_t groupId, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_BinPrjFile__GetTagParamNum (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, uint16_t groupId, uint16_t tagId, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_BinPrjFile__GetTagListItemNum (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, uint16_t groupId, uint16_t tagId, uint16_t paramId, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_BinPrjFile__GetStyleIndex (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, System_String_o* name, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_BinPrjFile__GetRegionWidth (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, int32_t index, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_BinPrjFile__GetRegionWidth (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, System_String_o* name, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_BinPrjFile__GetLineNum (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, int32_t index, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_BinPrjFile__GetLineNum (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, System_String_o* name, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_BinPrjFile__GetFontIndex (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, int32_t index, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_BinPrjFile__GetFontIndex (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, System_String_o* name, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_BinPrjFile__GetBaseColorIndex (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, int32_t index, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_BinPrjFile__GetBaseColorIndex (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, System_String_o* name, const MethodInfo* method);
int32_t Nintendo_MessageStudio_Lib_BinPrjFile__GetStyleNum (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, const MethodInfo* method);
void Nintendo_MessageStudio_Lib_BinPrjFile___ctor (Nintendo_MessageStudio_Lib_BinPrjFile_o* __this, const MethodInfo* method);
