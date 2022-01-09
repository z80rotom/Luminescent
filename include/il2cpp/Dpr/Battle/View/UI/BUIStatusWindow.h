#pragma once

#include "il2cpp.h"

bool Dpr_Battle_View_UI_BUIStatusWindow__get_DoDisplay (Dpr_Battle_View_UI_BUIStatusWindow_o* __this, const MethodInfo* method_info);
void Dpr_Battle_View_UI_BUIStatusWindow__set_DoDisplay (Dpr_Battle_View_UI_BUIStatusWindow_o* __this, bool value, const MethodInfo* method_info);
bool Dpr_Battle_View_UI_BUIStatusWindow__get_IsHpBarPlaying (Dpr_Battle_View_UI_BUIStatusWindow_o* __this, const MethodInfo* method_info);
UnityEngine_GameObject_o* Dpr_Battle_View_UI_BUIStatusWindow__get_BallBarObject (Dpr_Battle_View_UI_BUIStatusWindow_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_View_UI_BUIStatusWindow__get_isInitialized (Dpr_Battle_View_UI_BUIStatusWindow_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_View_UI_BUIStatusWindow__get_isReservationClose (Dpr_Battle_View_UI_BUIStatusWindow_o* __this, const MethodInfo* method_info);
void Dpr_Battle_View_UI_BUIStatusWindow__set_isReservationClose (Dpr_Battle_View_UI_BUIStatusWindow_o* __this, bool value, const MethodInfo* method_info);
bool Dpr_Battle_View_UI_BUIStatusWindow__get_isReservationOpen (Dpr_Battle_View_UI_BUIStatusWindow_o* __this, const MethodInfo* method_info);
void Dpr_Battle_View_UI_BUIStatusWindow__set_isReservationOpen (Dpr_Battle_View_UI_BUIStatusWindow_o* __this, bool value, const MethodInfo* method_info);
void Dpr_Battle_View_UI_BUIStatusWindow__OnUpdate (Dpr_Battle_View_UI_BUIStatusWindow_o* __this, float deltaTime, const MethodInfo* method_info);
void Dpr_Battle_View_UI_BUIStatusWindow__OnShow (Dpr_Battle_View_UI_BUIStatusWindow_o* __this, const MethodInfo* method_info);
int32_t Dpr_Battle_View_UI_BUIStatusWindow__CurrentHpStatus (Dpr_Battle_View_UI_BUIStatusWindow_o* __this, const MethodInfo* method_info);
void Dpr_Battle_View_UI_BUIStatusWindow__Startup (Dpr_Battle_View_UI_BUIStatusWindow_o* __this, const MethodInfo* method_info);
void Dpr_Battle_View_UI_BUIStatusWindow__Reset (Dpr_Battle_View_UI_BUIStatusWindow_o* __this, const MethodInfo* method_info);
void Dpr_Battle_View_UI_BUIStatusWindow__Initialize (Dpr_Battle_View_UI_BUIStatusWindow_o* __this, int32_t pos, Dpr_Battle_Logic_BTL_POKEPARAM_o* btlParam, uint8_t clientID, Dpr_Battle_Logic_BTL_PARTY_o* party, UnityEngine_Sprite_array* ballSprites, bool isTrainerBattle, const MethodInfo* method_info);
void Dpr_Battle_View_UI_BUIStatusWindow__UnInitialize (Dpr_Battle_View_UI_BUIStatusWindow_o* __this, const MethodInfo* method_info);
void Dpr_Battle_View_UI_BUIStatusWindow__InitBallBar (Dpr_Battle_View_UI_BUIStatusWindow_o* __this, bool isShowBallBar, const MethodInfo* method_info);
void Dpr_Battle_View_UI_BUIStatusWindow__ShowBallBar (Dpr_Battle_View_UI_BUIStatusWindow_o* __this, bool forceHide, const MethodInfo* method_info);
void Dpr_Battle_View_UI_BUIStatusWindow__SetBallBar (Dpr_Battle_View_UI_BUIStatusWindow_o* __this, Dpr_Battle_Logic_BTL_PARTY_o* party, const MethodInfo* method_info);
bool Dpr_Battle_View_UI_BUIStatusWindow__IsEnableBallBar (Dpr_Battle_View_UI_BUIStatusWindow_o* __this, int32_t pos, bool isTrainerBattle, const MethodInfo* method_info);
void Dpr_Battle_View_UI_BUIStatusWindow__Apply (Dpr_Battle_View_UI_BUIStatusWindow_o* __this, Dpr_Battle_Logic_BTL_PARTY_o* party, Dpr_Battle_Logic_BTL_POKEPARAM_o* param, bool isImmediate, bool isUpPosition, const MethodInfo* method_info);
void Dpr_Battle_View_UI_BUIStatusWindow__SetCurrentPokemonStatus (Dpr_Battle_View_UI_BUIStatusWindow_o* __this, bool isUpPosition, const MethodInfo* method_info);
void Dpr_Battle_View_UI_BUIStatusWindow__SetHPDuration (Dpr_Battle_View_UI_BUIStatusWindow_o* __this, float duration, const MethodInfo* method_info);
void Dpr_Battle_View_UI_BUIStatusWindow__UpdateHPText (Dpr_Battle_View_UI_BUIStatusWindow_o* __this, int32_t value, const MethodInfo* method_info);
void Dpr_Battle_View_UI_BUIStatusWindow__SetName (Dpr_Battle_View_UI_BUIStatusWindow_o* __this, uint32_t pokeID, const MethodInfo* method_info);
void Dpr_Battle_View_UI_BUIStatusWindow__SetSexIcon (Dpr_Battle_View_UI_BUIStatusWindow_o* __this, uint8_t sex, const MethodInfo* method_info);
void Dpr_Battle_View_UI_BUIStatusWindow__SetPrams (Dpr_Battle_View_UI_BUIStatusWindow_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* btlParam, bool isForced, const MethodInfo* method_info);
void Dpr_Battle_View_UI_BUIStatusWindow___ctor (Dpr_Battle_View_UI_BUIStatusWindow_o* __this, const MethodInfo* method_info);
void Dpr_Battle_View_UI_BUIStatusWindow___Apply_b__63_0 (Dpr_Battle_View_UI_BUIStatusWindow_o* __this, int32_t x, const MethodInfo* method_info);
