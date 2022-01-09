#pragma once

#include "il2cpp.h"

int32_t FieldShip__get_Phase (FieldShip_o* __this, const MethodInfo* method_info);
void FieldShip__set_Phase (FieldShip_o* __this, int32_t value, const MethodInfo* method_info);
int32_t FieldShip__get_SeaPhase (FieldShip_o* __this, const MethodInfo* method_info);
void FieldShip__set_SeaPhase (FieldShip_o* __this, int32_t value, const MethodInfo* method_info);
void FieldShip__Terminate (FieldShip_o* __this, const MethodInfo* method_info);
bool FieldShip__FindAndSetShip (FieldShip_o* __this, System_String_o* name, const MethodInfo* method_info);
void FieldShip__PlayIdle (FieldShip_o* __this, const MethodInfo* method_info);
void FieldShip__PlayShipEffect (FieldShip_o* __this, int32_t id, const MethodInfo* method_info);
void FieldShip__Update (FieldShip_o* __this, float deltaTime, const MethodInfo* method_info);
void FieldShip__StartShip (FieldShip_o* __this, int32_t dir, const MethodInfo* method_info);
void FieldShip__NormalUpdate (FieldShip_o* __this, float deltaTime, const MethodInfo* method_info);
void FieldShip__StartShipSeaMap (FieldShip_o* __this, int32_t dir, const MethodInfo* method_info);
void FieldShip__SeaUpdate (FieldShip_o* __this, float deltaTime, const MethodInfo* method_info);
void FieldShip___ctor (FieldShip_o* __this, const MethodInfo* method_info);
void FieldShip___PlayShipEffect_b__28_0 (FieldShip_o* __this, Effect_EffectInstance_o* ins, const MethodInfo* method_info);
void FieldShip___SeaUpdate_b__33_0 (FieldShip_o* __this, Effect_EffectInstance_o* ins, const MethodInfo* method_info);
