#pragma once

#include "il2cpp.h"

bool Dpr_UI_HpBar__get_IsAnimation (Dpr_UI_HpBar_o* __this, const MethodInfo* method);
void Dpr_UI_HpBar__set_IsAnimation (Dpr_UI_HpBar_o* __this, bool value, const MethodInfo* method);
void Dpr_UI_HpBar__SetHpText (Dpr_UI_HpBar_o* __this, TMPro_TextMeshProUGUI_o* text, const MethodInfo* method);
void Dpr_UI_HpBar__Setup (Dpr_UI_HpBar_o* __this, int32_t min, int32_t max, int32_t value, float duration, float afterDuration, const MethodInfo* method);
void Dpr_UI_HpBar__SetHpImmidiate (Dpr_UI_HpBar_o* __this, int32_t value, const MethodInfo* method);
void Dpr_UI_HpBar__UpdateMaxHP (Dpr_UI_HpBar_o* __this, uint32_t maxHp, const MethodInfo* method);
void Dpr_UI_HpBar__SetDuration (Dpr_UI_HpBar_o* __this, float duration, const MethodInfo* method);
void Dpr_UI_HpBar__SetHp (Dpr_UI_HpBar_o* __this, int32_t hp, System_Action_o* onComplete, System_Action_int__o* onUpdate, const MethodInfo* method);
void Dpr_UI_HpBar__UpdateHp (Dpr_UI_HpBar_o* __this, System_Action_int__o* onUpdate, const MethodInfo* method);
int32_t Dpr_UI_HpBar__GetHpStatus (Dpr_UI_HpBar_o* __this, uint32_t currentHP, uint32_t maxHP, const MethodInfo* method);
void Dpr_UI_HpBar___ctor (Dpr_UI_HpBar_o* __this, const MethodInfo* method);
