#pragma once

#include "il2cpp.h"

void Dpr_Message_TagWordBuffer__Initialize (Dpr_Message_TagWordBuffer_o* __this, Dpr_Message_MessageManager_o* msgManager, int32_t languageId, const MethodInfo* method_info);
Dpr_Message_AWordParamBase_array* Dpr_Message_TagWordBuffer__get_WordParamArray (Dpr_Message_TagWordBuffer_o* __this, const MethodInfo* method_info);
void Dpr_Message_TagWordBuffer__SetLanguageId (Dpr_Message_TagWordBuffer_o* __this, int32_t languageId, const MethodInfo* method_info);
void Dpr_Message_TagWordBuffer__ClearWordParam (Dpr_Message_TagWordBuffer_o* __this, const MethodInfo* method_info);
void Dpr_Message_TagWordBuffer__SetWordParams (Dpr_Message_TagWordBuffer_o* __this, Dpr_Message_AWordParamBase_array* wordParams, const MethodInfo* method_info);
void Dpr_Message_TagWordBuffer__SetWordParam (Dpr_Message_TagWordBuffer_o* __this, int32_t index, Dpr_Message_AWordParamBase_o* wordParam, const MethodInfo* method_info);
bool Dpr_Message_TagWordBuffer__IsSetTagWordParam (Dpr_Message_TagWordBuffer_o* __this, int32_t index, const MethodInfo* method_info);
void Dpr_Message_TagWordBuffer__SetGlossaryWordParam (Dpr_Message_TagWordBuffer_o* __this, int32_t index, Dpr_Message_MessageGlossaryParseDataModel_o* dataModel, const MethodInfo* method_info);
void Dpr_Message_TagWordBuffer__SetGlossaryWordParam (Dpr_Message_TagWordBuffer_o* __this, int32_t index, Dpr_Message_MessageGlossaryParseDataModel_o* dataModel, int32_t count, const MethodInfo* method_info);
void Dpr_Message_TagWordBuffer__SetItemWordParam (Dpr_Message_TagWordBuffer_o* __this, int32_t index, int32_t itemNumber, int32_t count, const MethodInfo* method_info);
void Dpr_Message_TagWordBuffer__SetUserPokemonWordParam (Dpr_Message_TagWordBuffer_o* __this, int32_t index, System_String_o* nickName, int32_t genderId, bool isEgg, int32_t languageid, int32_t initialSound, const MethodInfo* method_info);
void Dpr_Message_TagWordBuffer__SetUserNickNameWordParam (Dpr_Message_TagWordBuffer_o* __this, int32_t index, System_String_o* nickName, int32_t genderId, int32_t languageid, const MethodInfo* method_info);
void Dpr_Message_TagWordBuffer__SetRivalNameWordParam (Dpr_Message_TagWordBuffer_o* __this, int32_t index, System_String_o* nickName, int32_t genderId, const MethodInfo* method_info);
void Dpr_Message_TagWordBuffer__SetSupporterName (Dpr_Message_TagWordBuffer_o* __this, int32_t index, System_String_o* nickName, int32_t genderId, const MethodInfo* method_info);
void Dpr_Message_TagWordBuffer__SetPlaceWordParam (Dpr_Message_TagWordBuffer_o* __this, int32_t index, System_String_o* labelName, const MethodInfo* method_info);
void Dpr_Message_TagWordBuffer__SetStrWordParam (Dpr_Message_TagWordBuffer_o* __this, int32_t index, System_String_o* str, float strWidth, const MethodInfo* method_info);
void Dpr_Message_TagWordBuffer__SetStrWordParam (Dpr_Message_TagWordBuffer_o* __this, int32_t index, System_String_o* str, int32_t langId, float strWidth, const MethodInfo* method_info);
void Dpr_Message_TagWordBuffer__SetDigitWordParam (Dpr_Message_TagWordBuffer_o* __this, int32_t index, int32_t count, const MethodInfo* method_info);
void Dpr_Message_TagWordBuffer__SetDigitWordParam (Dpr_Message_TagWordBuffer_o* __this, int32_t index, int32_t count, int32_t forceGrmID, const MethodInfo* method_info);
void Dpr_Message_TagWordBuffer__SetDigitStrWordParam (Dpr_Message_TagWordBuffer_o* __this, int32_t index, System_String_o* countStr, const MethodInfo* method_info);
void Dpr_Message_TagWordBuffer__SetSingleTrTypeAndNameWordParam (Dpr_Message_TagWordBuffer_o* __this, int32_t index, Dpr_Message_TrTypeAndNameData_o* typeAndNameData, const MethodInfo* method_info);
void Dpr_Message_TagWordBuffer__SetSameTypePairTrTypeAndNameWordParam (Dpr_Message_TagWordBuffer_o* __this, int32_t index1, Dpr_Message_TrTypeAndNameData_o* typeAndNameData1, int32_t index2, Dpr_Message_TrTypeAndNameData_o* typeAndNameData2, const MethodInfo* method_info);
void Dpr_Message_TagWordBuffer__SetDiffTypePairTrTypeAndNameWordParam (Dpr_Message_TagWordBuffer_o* __this, int32_t index1, Dpr_Message_TrTypeAndNameData_o* typeAndNameData1, int32_t index2, Dpr_Message_TrTypeAndNameData_o* typeAndNameData2, const MethodInfo* method_info);
void Dpr_Message_TagWordBuffer___ctor (Dpr_Message_TagWordBuffer_o* __this, const MethodInfo* method_info);
