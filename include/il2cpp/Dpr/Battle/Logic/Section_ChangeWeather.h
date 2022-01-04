#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_ChangeWeather___ctor (Dpr_Battle_Logic_Section_ChangeWeather_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method);
void Dpr_Battle_Logic_Section_ChangeWeather__Execute (Dpr_Battle_Logic_Section_ChangeWeather_o* __this, Dpr_Battle_Logic_Section_ChangeWeather_Result_o* pResult, Dpr_Battle_Logic_Section_ChangeWeather_Description_o** description, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_Section_ChangeWeather__checkWeatherChangeEnable (Dpr_Battle_Logic_Section_ChangeWeather_o* __this, uint8_t weather, uint8_t turn, const MethodInfo* method);
void Dpr_Battle_Logic_Section_ChangeWeather__changeWeather (Dpr_Battle_Logic_Section_ChangeWeather_o* __this, uint8_t weather, uint8_t turn, uint8_t turnUpCount, uint8_t causePokeID, uint8_t cause, const MethodInfo* method);
