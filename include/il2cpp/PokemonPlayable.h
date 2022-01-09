#pragma once

#include "il2cpp.h"

int32_t PokemonPlayable__get_animationIndex (PokemonPlayable_o* __this, const MethodInfo* method_info);
void PokemonPlayable__set_animationIndex (PokemonPlayable_o* __this, int32_t value, const MethodInfo* method_info);
System_Collections_Generic_List_AnimationClip__o* PokemonPlayable__get_clips (PokemonPlayable_o* __this, const MethodInfo* method_info);
bool PokemonPlayable__get_isValid (PokemonPlayable_o* __this, const MethodInfo* method_info);
bool PokemonPlayable__get_forceLoop (PokemonPlayable_o* __this, const MethodInfo* method_info);
void PokemonPlayable__set_forceLoop (PokemonPlayable_o* __this, bool value, const MethodInfo* method_info);
UnityEngine_Animations_AnimationClipPlayable_o PokemonPlayable__GetPlayable (PokemonPlayable_o* __this, const MethodInfo* method_info);
void PokemonPlayable__SetAnimationSpeed (PokemonPlayable_o* __this, int32_t index, double speed, const MethodInfo* method_info);
void PokemonPlayable__Awake (PokemonPlayable_o* __this, const MethodInfo* method_info);
void PokemonPlayable__OnEnable (PokemonPlayable_o* __this, const MethodInfo* method_info);
void PokemonPlayable__OnDisable (PokemonPlayable_o* __this, const MethodInfo* method_info);
void PokemonPlayable__PlayAnimation (PokemonPlayable_o* __this, int32_t index, float startTime, const MethodInfo* method_info);
void PokemonPlayable__ChangeAnimation (PokemonPlayable_o* __this, int32_t index, float duration, float startTime, const MethodInfo* method_info);
void PokemonPlayable__OnUpdate (PokemonPlayable_o* __this, float deltaTime, const MethodInfo* method_info);
void PokemonPlayable__CreatePlayables (PokemonPlayable_o* __this, const MethodInfo* method_info);
void PokemonPlayable___ctor (PokemonPlayable_o* __this, const MethodInfo* method_info);
