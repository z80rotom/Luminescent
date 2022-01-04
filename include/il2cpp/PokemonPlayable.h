#pragma once

#include "il2cpp.h"

int32_t PokemonPlayable__get_animationIndex (PokemonPlayable_o* __this, const MethodInfo* method);
void PokemonPlayable__set_animationIndex (PokemonPlayable_o* __this, int32_t value, const MethodInfo* method);
System_Collections_Generic_List_AnimationClip__o* PokemonPlayable__get_clips (PokemonPlayable_o* __this, const MethodInfo* method);
bool PokemonPlayable__get_isValid (PokemonPlayable_o* __this, const MethodInfo* method);
bool PokemonPlayable__get_forceLoop (PokemonPlayable_o* __this, const MethodInfo* method);
void PokemonPlayable__set_forceLoop (PokemonPlayable_o* __this, bool value, const MethodInfo* method);
UnityEngine_Animations_AnimationClipPlayable_o PokemonPlayable__GetPlayable (PokemonPlayable_o* __this, const MethodInfo* method);
void PokemonPlayable__SetAnimationSpeed (PokemonPlayable_o* __this, int32_t index, double speed, const MethodInfo* method);
void PokemonPlayable__Awake (PokemonPlayable_o* __this, const MethodInfo* method);
void PokemonPlayable__OnEnable (PokemonPlayable_o* __this, const MethodInfo* method);
void PokemonPlayable__OnDisable (PokemonPlayable_o* __this, const MethodInfo* method);
void PokemonPlayable__PlayAnimation (PokemonPlayable_o* __this, int32_t index, float startTime, const MethodInfo* method);
void PokemonPlayable__ChangeAnimation (PokemonPlayable_o* __this, int32_t index, float duration, float startTime, const MethodInfo* method);
void PokemonPlayable__OnUpdate (PokemonPlayable_o* __this, float deltaTime, const MethodInfo* method);
void PokemonPlayable__CreatePlayables (PokemonPlayable_o* __this, const MethodInfo* method);
void PokemonPlayable___ctor (PokemonPlayable_o* __this, const MethodInfo* method);
