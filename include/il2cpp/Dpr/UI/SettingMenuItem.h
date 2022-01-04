#pragma once

#include "il2cpp.h"

int32_t Dpr_UI_SettingMenuItem__get_configId (Dpr_UI_SettingMenuItem_o* __this, const MethodInfo* method);
System_String_o* Dpr_UI_SettingMenuItem__get_descMessageLabel (Dpr_UI_SettingMenuItem_o* __this, const MethodInfo* method);
int32_t Dpr_UI_SettingMenuItem__get_selectIndex (Dpr_UI_SettingMenuItem_o* __this, const MethodInfo* method);
int32_t Dpr_UI_SettingMenuItem__get_valueCount (Dpr_UI_SettingMenuItem_o* __this, const MethodInfo* method);
bool Dpr_UI_SettingMenuItem__get_isSelect (Dpr_UI_SettingMenuItem_o* __this, const MethodInfo* method);
int32_t Dpr_UI_SettingMenuItem__get_itemType (Dpr_UI_SettingMenuItem_o* __this, const MethodInfo* method);
void Dpr_UI_SettingMenuItem__Setup (Dpr_UI_SettingMenuItem_o* __this, int32_t configId, int32_t selectIndex, System_String_o* descMessageLabel, UnityEngine_Events_UnityAction_SettingMenuItem__o* onValueChanged, const MethodInfo* method);
void Dpr_UI_SettingMenuItem__SetupContent (Dpr_UI_SettingMenuItem_o* __this, const MethodInfo* method);
bool Dpr_UI_SettingMenuItem__SetSelectIndex (Dpr_UI_SettingMenuItem_o* __this, int32_t selectIndex, bool isEqualChecked, bool isCallbacked, const MethodInfo* method);
void Dpr_UI_SettingMenuItem__Select (Dpr_UI_SettingMenuItem_o* __this, bool enabled, const MethodInfo* method);
void Dpr_UI_SettingMenuItem___ctor (Dpr_UI_SettingMenuItem_o* __this, const MethodInfo* method);
