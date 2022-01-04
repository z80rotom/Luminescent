#pragma once

#include "il2cpp.h"

void UnityEngine_TouchScreenKeyboard__Internal_Destroy (intptr_t ptr, const MethodInfo* method);
void UnityEngine_TouchScreenKeyboard__Destroy (UnityEngine_TouchScreenKeyboard_o* __this, const MethodInfo* method);
void UnityEngine_TouchScreenKeyboard__Finalize (UnityEngine_TouchScreenKeyboard_o* __this, const MethodInfo* method);
void UnityEngine_TouchScreenKeyboard___ctor (UnityEngine_TouchScreenKeyboard_o* __this, System_String_o* text, int32_t keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, System_String_o* textPlaceholder, int32_t characterLimit, const MethodInfo* method);
intptr_t UnityEngine_TouchScreenKeyboard__TouchScreenKeyboard_InternalConstructorHelper (UnityEngine_TouchScreenKeyboard_InternalConstructorHelperArguments_o* arguments, System_String_o* text, System_String_o* textPlaceholder, const MethodInfo* method);
bool UnityEngine_TouchScreenKeyboard__get_isSupported (const MethodInfo* method);
bool UnityEngine_TouchScreenKeyboard__get_isInPlaceEditingAllowed (const MethodInfo* method);
UnityEngine_TouchScreenKeyboard_o* UnityEngine_TouchScreenKeyboard__Open (System_String_o* text, int32_t keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, System_String_o* textPlaceholder, int32_t characterLimit, const MethodInfo* method);
System_String_o* UnityEngine_TouchScreenKeyboard__get_text (UnityEngine_TouchScreenKeyboard_o* __this, const MethodInfo* method);
void UnityEngine_TouchScreenKeyboard__set_text (UnityEngine_TouchScreenKeyboard_o* __this, System_String_o* value, const MethodInfo* method);
void UnityEngine_TouchScreenKeyboard__set_hideInput (bool value, const MethodInfo* method);
bool UnityEngine_TouchScreenKeyboard__get_active (UnityEngine_TouchScreenKeyboard_o* __this, const MethodInfo* method);
void UnityEngine_TouchScreenKeyboard__set_active (UnityEngine_TouchScreenKeyboard_o* __this, bool value, const MethodInfo* method);
int32_t UnityEngine_TouchScreenKeyboard__get_status (UnityEngine_TouchScreenKeyboard_o* __this, const MethodInfo* method);
void UnityEngine_TouchScreenKeyboard__set_characterLimit (UnityEngine_TouchScreenKeyboard_o* __this, int32_t value, const MethodInfo* method);
bool UnityEngine_TouchScreenKeyboard__get_canGetSelection (UnityEngine_TouchScreenKeyboard_o* __this, const MethodInfo* method);
bool UnityEngine_TouchScreenKeyboard__get_canSetSelection (UnityEngine_TouchScreenKeyboard_o* __this, const MethodInfo* method);
UnityEngine_RangeInt_o UnityEngine_TouchScreenKeyboard__get_selection (UnityEngine_TouchScreenKeyboard_o* __this, const MethodInfo* method);
void UnityEngine_TouchScreenKeyboard__set_selection (UnityEngine_TouchScreenKeyboard_o* __this, UnityEngine_RangeInt_o value, const MethodInfo* method);
void UnityEngine_TouchScreenKeyboard__GetSelection (int32_t* start, int32_t* length, const MethodInfo* method);
void UnityEngine_TouchScreenKeyboard__SetSelection (int32_t start, int32_t length, const MethodInfo* method);
