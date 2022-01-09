#pragma once

#include "il2cpp.h"

void Dpr_Message_LabelParseProcessor__Initialize (Dpr_Message_LabelParseProcessor_o* __this, const MethodInfo* method_info);
Dpr_Message_LabelParseDataModel_o* Dpr_Message_LabelParseProcessor__CreateParseDataModel (Dpr_Message_LabelParseProcessor_o* __this, const MethodInfo* method_info);
void Dpr_Message_LabelParseProcessor__Reset (Dpr_Message_LabelParseProcessor_o* __this, const MethodInfo* method_info);
void Dpr_Message_LabelParseProcessor__ProcessChar (Dpr_Message_LabelParseProcessor_o* __this, uint16_t c, const MethodInfo* method_info);
void Dpr_Message_LabelParseProcessor__ProcessEnd (Dpr_Message_LabelParseProcessor_o* __this, const MethodInfo* method_info);
bool Dpr_Message_LabelParseProcessor__IsExcludeChar (Dpr_Message_LabelParseProcessor_o* __this, uint16_t c, const MethodInfo* method_info);
bool Dpr_Message_LabelParseProcessor__IsNewLineChar (Dpr_Message_LabelParseProcessor_o* __this, uint16_t c, const MethodInfo* method_info);
bool Dpr_Message_LabelParseProcessor__IsReplaceCharacter (Dpr_Message_LabelParseProcessor_o* __this, uint16_t c, uint16_t* afterChar, const MethodInfo* method_info);
void Dpr_Message_LabelParseProcessor__AddCurrentMessage (Dpr_Message_LabelParseProcessor_o* __this, const MethodInfo* method_info);
void Dpr_Message_LabelParseProcessor__AddNewLineCharMark (Dpr_Message_LabelParseProcessor_o* __this, uint16_t c, const MethodInfo* method_info);
void Dpr_Message_LabelParseProcessor__ProcessCustomTag (Dpr_Message_LabelParseProcessor_o* __this, Nintendo_MessageStudio_Lib_CustomTagInfo_o* tagInfo, const MethodInfo* method_info);
void Dpr_Message_LabelParseProcessor__ProcessColorTag (Dpr_Message_LabelParseProcessor_o* __this, Nintendo_MessageStudio_Lib_ColorTagInfo_o* colorTagInfo, const MethodInfo* method_info);
void Dpr_Message_LabelParseProcessor__ProcessFontTag (Dpr_Message_LabelParseProcessor_o* __this, Nintendo_MessageStudio_Lib_FontTagInfo_o* fontTagInfo, const MethodInfo* method_info);
void Dpr_Message_LabelParseProcessor__ProcessPageBreakTag (Dpr_Message_LabelParseProcessor_o* __this, Nintendo_MessageStudio_Lib_PageBreakTagInfo_o* pageBreakTagInfo, const MethodInfo* method_info);
void Dpr_Message_LabelParseProcessor__ProcessRubyTag (Dpr_Message_LabelParseProcessor_o* __this, Nintendo_MessageStudio_Lib_RubyTagInfo_o* rubyTagInfo, const MethodInfo* method_info);
void Dpr_Message_LabelParseProcessor__ProcessSizeTag (Dpr_Message_LabelParseProcessor_o* __this, Nintendo_MessageStudio_Lib_SizeTagInfo_o* sizeTagInfo, const MethodInfo* method_info);
void Dpr_Message_LabelParseProcessor___ctor (Dpr_Message_LabelParseProcessor_o* __this, const MethodInfo* method_info);
