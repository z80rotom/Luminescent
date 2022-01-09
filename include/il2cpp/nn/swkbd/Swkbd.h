#pragma once

#include "il2cpp.h"

nn_Result_o nn_swkbd_Swkbd__ShowKeyboard (System_Text_StringBuilder_o* pOutResultString, nn_swkbd_ShowKeyboardArg_o showKeyboardArg, bool suspendUnityThreads, const MethodInfo* method_info);
nn_Result_o nn_swkbd_Swkbd__ShowKeyboard (System_Byte_array* pOutResultString, nn_swkbd_ShowKeyboardArg_o showKeyboardArg, bool suspendUnityThreads, const MethodInfo* method_info);
nn_Result_o nn_swkbd_Swkbd__ShowKeyboard (System_Text_StringBuilder_o* pOutResultString, nn_swkbd_ShowKeyboardArg_o showKeyboardArg, const MethodInfo* method_info);
nn_Result_o nn_swkbd_Swkbd__ShowKeyboard (System_Byte_array* pOutResultString, nn_swkbd_ShowKeyboardArg_o showKeyboardArg, const MethodInfo* method_info);
nn_Result_o nn_swkbd_Swkbd__ShowKeyboard (System_Text_StringBuilder_o* pOutResultString, int64_t bufSize, nn_swkbd_ShowKeyboardArg_o showKeyboardArg, const MethodInfo* method_info);
nn_Result_o nn_swkbd_Swkbd__ShowKeyboard (System_Byte_array* pOutResultString, int64_t bufSize, nn_swkbd_ShowKeyboardArg_o showKeyboardArg, const MethodInfo* method_info);
void nn_swkbd_Swkbd__InitializeKeyboardConfig (nn_swkbd_KeyboardConfig_o* pOutKeyboardConfig, const MethodInfo* method_info);
void nn_swkbd_Swkbd__MakePreset (nn_swkbd_KeyboardConfig_o* pOutKeyboardConfig, int32_t preset, const MethodInfo* method_info);
int64_t nn_swkbd_Swkbd__GetRequiredStringBufferSize (const MethodInfo* method_info);
void nn_swkbd_Swkbd__SetLeftOptionalSymbolKey (nn_swkbd_KeyboardConfig_o* pOutKeyboardConfig, uint16_t code, const MethodInfo* method_info);
void nn_swkbd_Swkbd__SetLeftOptionalSymbolKeyUtf8 (nn_swkbd_KeyboardConfig_o* pOutKeyboardConfig, System_Byte_array* code, const MethodInfo* method_info);
void nn_swkbd_Swkbd__SetRightOptionalSymbolKey (nn_swkbd_KeyboardConfig_o* pOutKeyboardConfig, uint16_t code, const MethodInfo* method_info);
void nn_swkbd_Swkbd__SetRightOptionalSymbolKeyUtf8 (nn_swkbd_KeyboardConfig_o* pOutKeyboardConfig, System_Byte_array* code, const MethodInfo* method_info);
void nn_swkbd_Swkbd__SetOkText (nn_swkbd_KeyboardConfig_o* pOutKeyboardConfig, System_String_o* pStr, const MethodInfo* method_info);
void nn_swkbd_Swkbd__SetOkTextUtf8 (nn_swkbd_KeyboardConfig_o* pOutKeyboardConfig, System_Byte_array* pStr, const MethodInfo* method_info);
void nn_swkbd_Swkbd__SetHeaderText (nn_swkbd_KeyboardConfig_o* pOutKeyboardConfig, System_String_o* pStr, const MethodInfo* method_info);
void nn_swkbd_Swkbd__SetHeaderTextUtf8 (nn_swkbd_KeyboardConfig_o* pOutKeyboardConfig, System_Byte_array* pStr, const MethodInfo* method_info);
void nn_swkbd_Swkbd__SetSubText (nn_swkbd_KeyboardConfig_o* pOutKeyboardConfig, System_String_o* pStr, const MethodInfo* method_info);
void nn_swkbd_Swkbd__SetSubTextUtf8 (nn_swkbd_KeyboardConfig_o* pOutKeyboardConfig, System_Byte_array* pStr, const MethodInfo* method_info);
void nn_swkbd_Swkbd__SetGuideText (nn_swkbd_KeyboardConfig_o* pOutKeyboardConfig, System_String_o* pStr, const MethodInfo* method_info);
void nn_swkbd_Swkbd__SetGuideTextUtf8 (nn_swkbd_KeyboardConfig_o* pOutKeyboardConfig, System_Byte_array* pStr, const MethodInfo* method_info);
void nn_swkbd_Swkbd__SetInitialText (nn_swkbd_ShowKeyboardArg_o* pOutShowKeyboardArg, System_String_o* pStr, const MethodInfo* method_info);
void nn_swkbd_Swkbd__SetInitialTextUtf8 (nn_swkbd_ShowKeyboardArg_o* pOutShowKeyboardArg, System_Byte_array* pStr, const MethodInfo* method_info);
void nn_swkbd_Swkbd__SetUserWordList (nn_swkbd_ShowKeyboardArg_o* pOutShowKeyboardArg, nn_swkbd_UserWord_array* pUserWord, int32_t userWordNum, const MethodInfo* method_info);
void nn_swkbd_Swkbd__SetTextCheckCallback (nn_swkbd_ShowKeyboardArg_o* pOutShowKeyboardArg, nn_swkbd_TextCheckCallback_o* pCallback, const MethodInfo* method_info);
void nn_swkbd_Swkbd__SetCustomizedDictionaries (nn_swkbd_ShowKeyboardArg_o* pOutShowKeyboardArg, nn_swkbd_CustomizedDictionarySet_o dicSet, const MethodInfo* method_info);
void nn_swkbd_Swkbd__Initialize (nn_swkbd_ShowKeyboardArg_o* pOutShowKeyboardArg, bool useDirectory, bool useTextCheck, const MethodInfo* method_info);
void nn_swkbd_Swkbd__Initialize (nn_swkbd_ShowKeyboardArg_o* pOutShowKeyboardArg, bool useDirectory, const MethodInfo* method_info);
void nn_swkbd_Swkbd__Initialize (nn_swkbd_ShowKeyboardArg_o* pOutShowKeyboardArg, const MethodInfo* method_info);
void nn_swkbd_Swkbd__Initialize (nn_swkbd_ShowKeyboardArg_o* pOutShowKeyboardArg, int32_t userWordNum, bool useTextCheck, const MethodInfo* method_info);
void nn_swkbd_Swkbd__Initialize (nn_swkbd_ShowKeyboardArg_o* pOutShowKeyboardArg, int32_t userWordNum, const MethodInfo* method_info);
void nn_swkbd_Swkbd__Destroy (nn_swkbd_ShowKeyboardArg_o* pOutShowKeyboardArg, const MethodInfo* method_info);
int32_t nn_swkbd_Swkbd__GetByteSize (System_Text_StringBuilder_o* sb, const MethodInfo* method_info);
nn_ErrorRange_o nn_swkbd_Swkbd__get_ResultCanceled (const MethodInfo* method_info);
