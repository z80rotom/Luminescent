#pragma once

#include "il2cpp.h"

void Dpr_Message_MessageTextLineDataModel__Finalize (Dpr_Message_MessageTextLineDataModel_o* __this, const MethodInfo* method_info);
void Dpr_Message_MessageTextLineDataModel__Dispose (Dpr_Message_MessageTextLineDataModel_o* __this, const MethodInfo* method_info);
bool Dpr_Message_MessageTextLineDataModel__get_HasMessageData (Dpr_Message_MessageTextLineDataModel_o* __this, const MethodInfo* method_info);
System_Collections_Generic_List_WordDataModel__o* Dpr_Message_MessageTextLineDataModel__get_LineWordDataList (Dpr_Message_MessageTextLineDataModel_o* __this, const MethodInfo* method_info);
bool Dpr_Message_MessageTextLineDataModel__get_IsCenterMessage (Dpr_Message_MessageTextLineDataModel_o* __this, const MethodInfo* method_info);
int32_t Dpr_Message_MessageTextLineDataModel__get_TotalStringLength (Dpr_Message_MessageTextLineDataModel_o* __this, const MethodInfo* method_info);
int32_t Dpr_Message_MessageTextLineDataModel__GetLineEndEventId (Dpr_Message_MessageTextLineDataModel_o* __this, const MethodInfo* method_info);
int32_t Dpr_Message_MessageTextLineDataModel__get_NowEventId (Dpr_Message_MessageTextLineDataModel_o* __this, const MethodInfo* method_info);
bool Dpr_Message_MessageTextLineDataModel__get_IsViewComplete (Dpr_Message_MessageTextLineDataModel_o* __this, const MethodInfo* method_info);
float Dpr_Message_MessageTextLineDataModel__GetNowMessageDataValue (Dpr_Message_MessageTextLineDataModel_o* __this, const MethodInfo* method_info);
int32_t Dpr_Message_MessageTextLineDataModel__CalcLineWidth (Dpr_Message_MessageTextLineDataModel_o* __this, float textFontScale, const MethodInfo* method_info);
void Dpr_Message_MessageTextLineDataModel__ResetMessageData (Dpr_Message_MessageTextLineDataModel_o* __this, const MethodInfo* method_info);
System_String_o* Dpr_Message_MessageTextLineDataModel__GetText (Dpr_Message_MessageTextLineDataModel_o* __this, const MethodInfo* method_info);
System_String_o* Dpr_Message_MessageTextLineDataModel__GetTextUntilIndex (Dpr_Message_MessageTextLineDataModel_o* __this, int32_t index, const MethodInfo* method_info);
System_String_o* Dpr_Message_MessageTextLineDataModel__GetNextTextStr (Dpr_Message_MessageTextLineDataModel_o* __this, const MethodInfo* method_info);
bool Dpr_Message_MessageTextLineDataModel__HasShowMessageData (Dpr_Message_MessageTextLineDataModel_o* __this, const MethodInfo* method_info);
void Dpr_Message_MessageTextLineDataModel__AddTextData (Dpr_Message_MessageTextLineDataModel_o* __this, System_String_o* str, int32_t languageID, float strWidth, float tagValue, int32_t endEventId, const MethodInfo* method_info);
void Dpr_Message_MessageTextLineDataModel__AddNameTextData (Dpr_Message_MessageTextLineDataModel_o* __this, System_String_o* str, int32_t languageID, float strWidth, bool isNameWord, const MethodInfo* method_info);
void Dpr_Message_MessageTextLineDataModel__AddNickNameStrData (Dpr_Message_MessageTextLineDataModel_o* __this, System_String_o* str, int32_t languageID, float strWidth, const MethodInfo* method_info);
void Dpr_Message_MessageTextLineDataModel__AddFontTagData (Dpr_Message_MessageTextLineDataModel_o* __this, Dpr_Message_WordData_o* wordData, int32_t languageId, const MethodInfo* method_info);
void Dpr_Message_MessageTextLineDataModel__AddLineWordData (Dpr_Message_MessageTextLineDataModel_o* __this, Dpr_Message_WordDataModel_o* wordDataModel, const MethodInfo* method_info);
void Dpr_Message_MessageTextLineDataModel__FinishLineMessageData (Dpr_Message_MessageTextLineDataModel_o* __this, System_String_o* str, int32_t endEventId, int32_t languageID, float strWidth, const MethodInfo* method_info);
void Dpr_Message_MessageTextLineDataModel__SettingLineStringDataInfo (Dpr_Message_MessageTextLineDataModel_o* __this, const MethodInfo* method_info);
Dpr_Message_WordDataModel_o* Dpr_Message_MessageTextLineDataModel__CreateFontTagObj (Dpr_Message_MessageTextLineDataModel_o* __this, System_String_o* str, int32_t languageID, const MethodInfo* method_info);
void Dpr_Message_MessageTextLineDataModel___ctor (Dpr_Message_MessageTextLineDataModel_o* __this, const MethodInfo* method_info);
