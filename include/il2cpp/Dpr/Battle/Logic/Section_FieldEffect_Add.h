#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_FieldEffect_Add___ctor (Dpr_Battle_Logic_Section_FieldEffect_Add_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method);
void Dpr_Battle_Logic_Section_FieldEffect_Add__Execute (Dpr_Battle_Logic_Section_FieldEffect_Add_o* __this, Dpr_Battle_Logic_Section_FieldEffect_Add_Result_o* result, Dpr_Battle_Logic_Section_FieldEffect_Add_Description_o** description, const MethodInfo* method);
bool Dpr_Battle_Logic_Section_FieldEffect_Add__changeGround (Dpr_Battle_Logic_Section_FieldEffect_Add_o* __this, uint8_t pokeID, uint8_t ground, Dpr_Battle_Logic_BTL_SICKCONT_o* contParam, uint8_t cause, const MethodInfo* method);
void Dpr_Battle_Logic_Section_FieldEffect_Add__getDefaultSuccessMessage_Ground (Dpr_Battle_Logic_Section_FieldEffect_Add_o* __this, Dpr_Battle_Logic_StrParam_o* pStrParam, uint8_t ground, uint8_t cause, const MethodInfo* method);
bool Dpr_Battle_Logic_Section_FieldEffect_Add__addFieldEffect (Dpr_Battle_Logic_Section_FieldEffect_Add_o* __this, int32_t effect, Dpr_Battle_Logic_BTL_SICKCONT_o* contParam, bool isAddDependTry, const MethodInfo* method);
void Dpr_Battle_Logic_Section_FieldEffect_Add__afterFieldEffectAdd (Dpr_Battle_Logic_Section_FieldEffect_Add_o* __this, uint8_t pokeID, int32_t effect, const MethodInfo* method);
void Dpr_Battle_Logic_Section_FieldEffect_Add__afterFieldEffectAdd_KagakuhenkaGas (Dpr_Battle_Logic_Section_FieldEffect_Add_o* __this, uint8_t pokeID, const MethodInfo* method);
bool Dpr_Battle_Logic_Section_FieldEffect_Add__getFrontPokes (Dpr_Battle_Logic_Section_FieldEffect_Add_o* __this, Dpr_Battle_Logic_PokeSet_o* targets, const MethodInfo* method);
void Dpr_Battle_Logic_Section_FieldEffect_Add__sortByAgility (Dpr_Battle_Logic_Section_FieldEffect_Add_o* __this, Dpr_Battle_Logic_PokeSet_o* targets, const MethodInfo* method);
void Dpr_Battle_Logic_Section_FieldEffect_Add__juryokuCheck (Dpr_Battle_Logic_Section_FieldEffect_Add_o* __this, uint8_t pokeID, const MethodInfo* method);
void Dpr_Battle_Logic_Section_FieldEffect_Add___cctor (const MethodInfo* method);
