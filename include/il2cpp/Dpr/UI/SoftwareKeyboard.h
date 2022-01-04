#pragma once

#include "il2cpp.h"

bool Dpr_UI_SoftwareKeyboard__get_isInitialized (const MethodInfo* method);
System_Func_string__SoftwareKeyboard_ErrorState__ValueTuple_bool__string___o* Dpr_UI_SoftwareKeyboard__get_onInputCheck (const MethodInfo* method);
UnityEngine_Events_UnityAction_bool__string__o* Dpr_UI_SoftwareKeyboard__get_onComplete (const MethodInfo* method);
System_String_o* Dpr_UI_SoftwareKeyboard__get_resultText (const MethodInfo* method);
int32_t Dpr_UI_SoftwareKeyboard__get_errorState (const MethodInfo* method);
bool Dpr_UI_SoftwareKeyboard__get_isCheckResult (const MethodInfo* method);
void Dpr_UI_SoftwareKeyboard__Initialize (const MethodInfo* method);
System_String_o* Dpr_UI_SoftwareKeyboard__GetMessageText (System_String_o* messageLabel, const MethodInfo* method);
bool Dpr_UI_SoftwareKeyboard__IsDisableCheck (int32_t checkBit, const MethodInfo* method);
bool Dpr_UI_SoftwareKeyboard__CheckWhiteSpace (System_String_o* text, const MethodInfo* method);
bool Dpr_UI_SoftwareKeyboard__CheckNumbers (System_String_o* text, const MethodInfo* method);
bool Dpr_UI_SoftwareKeyboard__CheckWhiteUnicodes (System_String_o* text, const MethodInfo* method);
bool Dpr_UI_SoftwareKeyboard__CheckWhiteWords (System_String_o* text, const MethodInfo* method);
void Dpr_UI_SoftwareKeyboard__Terminate (const MethodInfo* method);
bool Dpr_UI_SoftwareKeyboard__Open (Dpr_UI_SoftwareKeyboard_Param_o* param, System_Func_string__SoftwareKeyboard_ErrorState__ValueTuple_bool__string___o* onInputCheck, UnityEngine_Events_UnityAction_bool__string__o* onComplete, const MethodInfo* method);
void Dpr_UI_SoftwareKeyboard__WakerOpen (Il2CppObject* obj, const MethodInfo* method);
void Dpr_UI_SoftwareKeyboard__MainThreadPost (UnityEngine_Events_UnityAction_o* onCallback, bool isSleep, const MethodInfo* method);
void Dpr_UI_SoftwareKeyboard__OpenInternal (const MethodInfo* method);
int32_t Dpr_UI_SoftwareKeyboard__GetKeyboardMode (const MethodInfo* method);
int32_t Dpr_UI_SoftwareKeyboard__GetLanguageKeyboardMode (const MethodInfo* method);
void Dpr_UI_SoftwareKeyboard___SetCheckResult (bool isCheckResult, const MethodInfo* method);
void Dpr_UI_SoftwareKeyboard___SetResult (bool isSuccess, System_String_o* resultText, const MethodInfo* method);
int32_t Dpr_UI_SoftwareKeyboard__GetLanguagePatternAll (const MethodInfo* method);
int32_t Dpr_UI_SoftwareKeyboard__TextCheckCallback (intptr_t textBuf, int64_t* length, nn_swkbd_String_o* str, const MethodInfo* method);
int32_t Dpr_UI_SoftwareKeyboard___GetDisableErrorChecks (const MethodInfo* method);
int32_t Dpr_UI_SoftwareKeyboard___TextCheckCallbackImpl (intptr_t textBuf, int64_t* length, System_String_o* input, System_Text_Encoding_o* encoding, const MethodInfo* method);
int32_t Dpr_UI_SoftwareKeyboard__CheckNgWords (System_String_o** resultText, int32_t disableErrorChecks, int32_t langId, const MethodInfo* method);
int32_t Dpr_UI_SoftwareKeyboard___CheckNgWords (System_String_o** resultText, int32_t disableErrorChecks, int32_t langId, const MethodInfo* method);
bool Dpr_UI_SoftwareKeyboard__CheckNgc (System_String_o** resultText, bool isMaskResult, const MethodInfo* method);
int32_t Dpr_UI_SoftwareKeyboard__LanguageMaxLength (int32_t maxLength, int32_t langId, const MethodInfo* method);
System_ValueTuple_bool__string__o Dpr_UI_SoftwareKeyboard__InputCheck (System_String_o* resultText, int32_t errorState, const MethodInfo* method);
void Dpr_UI_SoftwareKeyboard___cctor (const MethodInfo* method);
