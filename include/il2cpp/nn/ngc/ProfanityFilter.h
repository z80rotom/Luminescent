#pragma once

#include "il2cpp.h"

void nn_ngc_ProfanityFilter___ctor (nn_ngc_ProfanityFilter_o* __this, const MethodInfo* method);
void nn_ngc_ProfanityFilter___ctor (nn_ngc_ProfanityFilter_o* __this, bool checkDesiredLanguage, const MethodInfo* method);
void nn_ngc_ProfanityFilter__Finalize (nn_ngc_ProfanityFilter_o* __this, const MethodInfo* method);
void nn_ngc_ProfanityFilter__Dispose (nn_ngc_ProfanityFilter_o* __this, const MethodInfo* method);
void nn_ngc_ProfanityFilter__Dispose (nn_ngc_ProfanityFilter_o* __this, bool disposing, const MethodInfo* method);
uint32_t nn_ngc_ProfanityFilter__GetContentVersion (nn_ngc_ProfanityFilter_o* __this, const MethodInfo* method);
nn_Result_o nn_ngc_ProfanityFilter__CheckProfanityWords (nn_ngc_ProfanityFilter_o* __this, nn_ngc_ProfanityFilter_PatternList_array* checkResults, int32_t patterns, System_String_array* words, const MethodInfo* method);
nn_Result_o nn_ngc_ProfanityFilter__MaskProfanityWordsInText (nn_ngc_ProfanityFilter_o* __this, int32_t* profanityWordCount, System_String_o* inText, System_String_o** outText, int32_t patterns, const MethodInfo* method);
void nn_ngc_ProfanityFilter__SetMaskMode (nn_ngc_ProfanityFilter_o* __this, int32_t mode, const MethodInfo* method);
void nn_ngc_ProfanityFilter__SkipAtSignCheck (nn_ngc_ProfanityFilter_o* __this, int32_t skipMode, const MethodInfo* method);
void nn_ngc_ProfanityFilter__Destroy (intptr_t profanityFilter, intptr_t ngcWorkBuffer, const MethodInfo* method);
nn_Result_o nn_ngc_ProfanityFilter__Initialize (intptr_t* profanityFilter, intptr_t* ngcWorkBuffer, bool checkDesiredLanguage, const MethodInfo* method);
uint32_t nn_ngc_ProfanityFilter__GetContentVersion (intptr_t profanityFilter, const MethodInfo* method);
nn_Result_o nn_ngc_ProfanityFilter__CheckProfanityWords (intptr_t profanityFilter, nn_ngc_ProfanityFilter_PatternList_array* checkResults, int32_t patterns, System_String_array* words, int64_t wordCount, const MethodInfo* method);
nn_Result_o nn_ngc_ProfanityFilter__MaskProfanityWordsInText (intptr_t profanityFilter, int32_t* profanityWordCount, System_String_o* text, int32_t patterns, const MethodInfo* method);
void nn_ngc_ProfanityFilter__SetMaskMode (intptr_t profanityFilter, int32_t mode, const MethodInfo* method);
void nn_ngc_ProfanityFilter__SkipAtSignCheck (intptr_t profanityFilter, int32_t skipMode, const MethodInfo* method);
