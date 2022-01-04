#pragma once

#include "il2cpp.h"

bool Dpr_Message_MessageDataModel__get_Initialized (Dpr_Message_MessageDataModel_o* __this, const MethodInfo* method);
bool Dpr_Message_MessageDataModel__get_IsCalledInitialize (Dpr_Message_MessageDataModel_o* __this, const MethodInfo* method);
Dpr_Message_LoadMsbtOperation_o* Dpr_Message_MessageDataModel__get_LoadMsbtOperation (Dpr_Message_MessageDataModel_o* __this, const MethodInfo* method);
bool Dpr_Message_MessageDataModel__get_IsAlreadySetLoadOpData (Dpr_Message_MessageDataModel_o* __this, const MethodInfo* method);
void Dpr_Message_MessageDataModel__Initialize (Dpr_Message_MessageDataModel_o* __this, int32_t languageId, const MethodInfo* method);
void Dpr_Message_MessageDataModel__InitializedManager (Dpr_Message_MessageDataModel_o* __this, const MethodInfo* method);
void Dpr_Message_MessageDataModel__Dispose (Dpr_Message_MessageDataModel_o* __this, const MethodInfo* method);
int32_t Dpr_Message_MessageDataModel__get_UserSelectLanguageID (Dpr_Message_MessageDataModel_o* __this, const MethodInfo* method);
void Dpr_Message_MessageDataModel__SetUserSelectLanguageID (Dpr_Message_MessageDataModel_o* __this, int32_t languageId, const MethodInfo* method);
bool Dpr_Message_MessageDataModel__get_IsKanji (Dpr_Message_MessageDataModel_o* __this, const MethodInfo* method);
void Dpr_Message_MessageDataModel__SetJPNKanjiFlag (Dpr_Message_MessageDataModel_o* __this, bool flag, const MethodInfo* method);
System_String_o* Dpr_Message_MessageDataModel__GetFileNameCapStr (Dpr_Message_MessageDataModel_o* __this, int32_t languageId, const MethodInfo* method);
System_String_o* Dpr_Message_MessageDataModel__GetJPNKanjiFileNameCapStr (Dpr_Message_MessageDataModel_o* __this, const MethodInfo* method);
System_String_o* Dpr_Message_MessageDataModel__ConvertMSBTFileKey (Dpr_Message_MessageDataModel_o* __this, System_String_o* fileName, int32_t languageId, const MethodInfo* method);
System_String_o* Dpr_Message_MessageDataModel__ConvertMSBTFileKey (Dpr_Message_MessageDataModel_o* __this, System_String_o* fileName, int32_t languageId, bool kanji, const MethodInfo* method);
System_String_o* Dpr_Message_MessageDataModel__GetAssetBundleName (Dpr_Message_MessageDataModel_o* __this, int32_t languageId, const MethodInfo* method);
System_String_o* Dpr_Message_MessageDataModel__GetJPNKanjiAssetBundleName (Dpr_Message_MessageDataModel_o* __this, const MethodInfo* method);
System_String_o* Dpr_Message_MessageDataModel__GetAssetFolderNameByLanguageId (Dpr_Message_MessageDataModel_o* __this, int32_t languageId, const MethodInfo* method);
System_String_array* Dpr_Message_MessageDataModel__get_Variants (Dpr_Message_MessageDataModel_o* __this, const MethodInfo* method);
bool Dpr_Message_MessageDataModel__IsAlreadyLoadFile (Dpr_Message_MessageDataModel_o* __this, System_String_o* fileKey, const MethodInfo* method);
Dpr_Message_MessageMsgFile_o* Dpr_Message_MessageDataModel__GetMsgFile (Dpr_Message_MessageDataModel_o* __this, System_String_o* fileName, int32_t languageId, const MethodInfo* method);
void Dpr_Message_MessageDataModel__AddMsgDataFile (Dpr_Message_MessageDataModel_o* __this, System_String_o* fileName, Dpr_Message_MsbtData_o* msbtData, const MethodInfo* method);
void Dpr_Message_MessageDataModel__CreateAllLabelTable (Dpr_Message_MessageDataModel_o* __this, const MethodInfo* method);
void Dpr_Message_MessageDataModel__SetLoadOperationData (Dpr_Message_MessageDataModel_o* __this, const MethodInfo* method);
void Dpr_Message_MessageDataModel__AddBinMsbtFileData (Dpr_Message_MessageDataModel_o* __this, Dpr_Message_LoadMsbtFileTask_o* loadTask, const MethodInfo* method);
void Dpr_Message_MessageDataModel__UnloadMSBTFileByLanguageId (Dpr_Message_MessageDataModel_o* __this, int32_t langId, const MethodInfo* method);
Dpr_Message_AttributeInfo_o* Dpr_Message_MessageDataModel__GetAttributeInfo (Dpr_Message_MessageDataModel_o* __this, System_String_o* fileName, System_String_o* label, int32_t languageId, const MethodInfo* method);
Dpr_Message_MessageGlossaryParseDataModel_o* Dpr_Message_MessageDataModel__GetGloosaryParseData (Dpr_Message_MessageDataModel_o* __this, System_String_o* fileName, System_String_o* label, int32_t languageId, const MethodInfo* method);
Dpr_Message_MessageGlossaryParseDataModel_o* Dpr_Message_MessageDataModel__GetGloosaryParseData (Dpr_Message_MessageDataModel_o* __this, System_String_o* fileName, int32_t labelIndex, int32_t languageId, const MethodInfo* method);
Dpr_Message_MessageTextParseDataModel_o* Dpr_Message_MessageDataModel__GetTextParseData (Dpr_Message_MessageDataModel_o* __this, System_String_o* fileName, System_String_o* label, int32_t languageId, const MethodInfo* method);
Dpr_Message_MessageTextParseDataModel_o* Dpr_Message_MessageDataModel__GetTextParseData (Dpr_Message_MessageDataModel_o* __this, System_String_o* fileName, int32_t labelIndex, int32_t languageId, const MethodInfo* method);
Dpr_Message_LabelData_o* Dpr_Message_MessageDataModel__GetLabelData (Dpr_Message_MessageDataModel_o* __this, System_String_o* fileName, System_String_o* labelName, int32_t languageId, const MethodInfo* method);
Dpr_Message_LabelData_o* Dpr_Message_MessageDataModel__GetLabelData (Dpr_Message_MessageDataModel_o* __this, System_String_o* fileName, int32_t labelIndex, int32_t languageId, const MethodInfo* method);
void Dpr_Message_MessageDataModel___ctor (Dpr_Message_MessageDataModel_o* __this, const MethodInfo* method);
