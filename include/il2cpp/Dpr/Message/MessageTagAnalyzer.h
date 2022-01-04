#pragma once

#include "il2cpp.h"

Dpr_Message_LabelTagDataModel_o* Dpr_Message_MessageTagAnalyzer__CustomTagAnalysis (Dpr_Message_MessageTagAnalyzer_o* __this, uint16_t tagGroup, uint16_t tag, System_Byte_array* tagParams, const MethodInfo* method);
void Dpr_Message_MessageTagAnalyzer__NameTagProcess (Dpr_Message_MessageTagAnalyzer_o* __this, Dpr_Message_LabelTagDataModel_o* tagDataModel, System_Byte_array* tagParams, const MethodInfo* method);
void Dpr_Message_MessageTagAnalyzer__DigitTagProcess (Dpr_Message_MessageTagAnalyzer_o* __this, Dpr_Message_LabelTagDataModel_o* tagDataModel, System_Byte_array* tagParams, const MethodInfo* method);
void Dpr_Message_MessageTagAnalyzer__GrmTagProcess (Dpr_Message_MessageTagAnalyzer_o* __this, Dpr_Message_LabelTagDataModel_o* tagDataModel, const MethodInfo* method);
void Dpr_Message_MessageTagAnalyzer__ENTagProcess (Dpr_Message_MessageTagAnalyzer_o* __this, Dpr_Message_LabelTagDataModel_o* tagDataModel, System_Byte_array* tagParams, const MethodInfo* method);
void Dpr_Message_MessageTagAnalyzer__FRTagProcess (Dpr_Message_MessageTagAnalyzer_o* __this, Dpr_Message_LabelTagDataModel_o* tagDataModel, System_Byte_array* tagParams, const MethodInfo* method);
void Dpr_Message_MessageTagAnalyzer__ITTagProcess (Dpr_Message_MessageTagAnalyzer_o* __this, Dpr_Message_LabelTagDataModel_o* tagDataModel, System_Byte_array* tagParams, const MethodInfo* method);
void Dpr_Message_MessageTagAnalyzer__DETagProcess (Dpr_Message_MessageTagAnalyzer_o* __this, Dpr_Message_LabelTagDataModel_o* tagDataModel, System_Byte_array* tagParams, const MethodInfo* method);
void Dpr_Message_MessageTagAnalyzer__ESTagProcess (Dpr_Message_MessageTagAnalyzer_o* __this, Dpr_Message_LabelTagDataModel_o* tagDataModel, System_Byte_array* tagParams, const MethodInfo* method);
void Dpr_Message_MessageTagAnalyzer__KorTagProcess (Dpr_Message_MessageTagAnalyzer_o* __this, Dpr_Message_LabelTagDataModel_o* tagDataModel, System_Byte_array* tagParams, const MethodInfo* method);
void Dpr_Message_MessageTagAnalyzer__SCTagProcess (Dpr_Message_MessageTagAnalyzer_o* __this, Dpr_Message_LabelTagDataModel_o* tagDataModel, System_Byte_array* tagParams, const MethodInfo* method);
void Dpr_Message_MessageTagAnalyzer__Character1TagProcess (Dpr_Message_MessageTagAnalyzer_o* __this, Dpr_Message_LabelTagDataModel_o* tagDataModel, const MethodInfo* method);
void Dpr_Message_MessageTagAnalyzer__Character2TagProcess (Dpr_Message_MessageTagAnalyzer_o* __this, Dpr_Message_LabelTagDataModel_o* tagDataModel, const MethodInfo* method);
void Dpr_Message_MessageTagAnalyzer__Ctrl1TagProcess (Dpr_Message_MessageTagAnalyzer_o* __this, Dpr_Message_LabelTagDataModel_o* tagDataModel, System_Byte_array* tagParams, const MethodInfo* method);
System_String_o* Dpr_Message_MessageTagAnalyzer__ConvertCtrl1TagToRichText (Dpr_Message_MessageTagAnalyzer_o* __this, int32_t ctrl1ID, float value, const MethodInfo* method);
void Dpr_Message_MessageTagAnalyzer__Ctrl2TagProcess (Dpr_Message_MessageTagAnalyzer_o* __this, Dpr_Message_LabelTagDataModel_o* tagDataModel, System_Byte_array* tagParams, const MethodInfo* method);
void Dpr_Message_MessageTagAnalyzer__EmitErrorLog (Dpr_Message_MessageTagAnalyzer_o* __this, int32_t groupTagId, const MethodInfo* method);
Dpr_Message_LabelTagDataModel_o* Dpr_Message_MessageTagAnalyzer__ColorTagAnalysis (Dpr_Message_MessageTagAnalyzer_o* __this, Nintendo_MessageStudio_Lib_ColorTagInfo_o* colorTagInfo, const MethodInfo* method);
Dpr_Message_LabelTagDataModel_o* Dpr_Message_MessageTagAnalyzer__FontTagAnalysis (Dpr_Message_MessageTagAnalyzer_o* __this, Nintendo_MessageStudio_Lib_FontTagInfo_o* fontTagInfo, const MethodInfo* method);
System_String_o* Dpr_Message_MessageTagAnalyzer__GetFontFileName (Dpr_Message_MessageTagAnalyzer_o* __this, int32_t fontFileIndex, const MethodInfo* method);
Dpr_Message_LabelTagDataModel_o* Dpr_Message_MessageTagAnalyzer__SizeTagAnalysis (Dpr_Message_MessageTagAnalyzer_o* __this, Nintendo_MessageStudio_Lib_SizeTagInfo_o* sizeTagInfo, const MethodInfo* method);
System_String_array* Dpr_Message_MessageTagAnalyzer__ExtractGrmWords (Dpr_Message_MessageTagAnalyzer_o* __this, System_Byte_array* tagParams, const MethodInfo* method);
int32_t Dpr_Message_MessageTagAnalyzer__GetWordByteLength (Dpr_Message_MessageTagAnalyzer_o* __this, System_Byte_array* tagParams, int32_t startIndex, const MethodInfo* method);
void Dpr_Message_MessageTagAnalyzer___ctor (Dpr_Message_MessageTagAnalyzer_o* __this, const MethodInfo* method);
