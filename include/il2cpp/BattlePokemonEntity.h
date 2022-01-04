#pragma once

#include "il2cpp.h"

XLSXContent_BattleDataTable_SheetPokemonMotionBlendTime_o* BattlePokemonEntity__get_PokemonMotionBlendTimeData (BattlePokemonEntity_o* __this, const MethodInfo* method);
void BattlePokemonEntity__set_PokemonMotionBlendTimeData (BattlePokemonEntity_o* __this, XLSXContent_BattleDataTable_SheetPokemonMotionBlendTime_o* value, const MethodInfo* method);
System_String_o* BattlePokemonEntity__get_entityType (BattlePokemonEntity_o* __this, const MethodInfo* method);
int32_t BattlePokemonEntity__get_Size (BattlePokemonEntity_o* __this, const MethodInfo* method);
int32_t BattlePokemonEntity__get_LandingType (BattlePokemonEntity_o* __this, const MethodInfo* method);
int32_t BattlePokemonEntity__get_CurrentAnimationState (BattlePokemonEntity_o* __this, const MethodInfo* method);
void BattlePokemonEntity__set_CurrentAnimationState (BattlePokemonEntity_o* __this, int32_t value, const MethodInfo* method);
bool BattlePokemonEntity__get_PokeAnimSoundEnable (BattlePokemonEntity_o* __this, const MethodInfo* method);
void BattlePokemonEntity__set_PokeAnimSoundEnable (BattlePokemonEntity_o* __this, bool value, const MethodInfo* method);
UnityEngine_Color_o BattlePokemonEntity__get_FixMultiplierColor (BattlePokemonEntity_o* __this, const MethodInfo* method);
void BattlePokemonEntity__set_FixMultiplierColor (BattlePokemonEntity_o* __this, UnityEngine_Color_o value, const MethodInfo* method);
PokemonVariation_o* BattlePokemonEntity__get_PokemonVariation (BattlePokemonEntity_o* __this, const MethodInfo* method);
void BattlePokemonEntity__set_PokemonVariation (BattlePokemonEntity_o* __this, PokemonVariation_o* value, const MethodInfo* method);
PokemonCustomNodeAnim_o* BattlePokemonEntity__get_PokemonCustomNodeAnim (BattlePokemonEntity_o* __this, const MethodInfo* method);
void BattlePokemonEntity__set_PokemonCustomNodeAnim (BattlePokemonEntity_o* __this, PokemonCustomNodeAnim_o* value, const MethodInfo* method);
PokemonAnime_o* BattlePokemonEntity__get_PokemonAnime (BattlePokemonEntity_o* __this, const MethodInfo* method);
void BattlePokemonEntity__set_PokemonAnime (BattlePokemonEntity_o* __this, PokemonAnime_o* value, const MethodInfo* method);
PokemonPrefabInfo_o* BattlePokemonEntity__get_PokemonPrefabInfo (BattlePokemonEntity_o* __this, const MethodInfo* method);
void BattlePokemonEntity__set_PokemonPrefabInfo (BattlePokemonEntity_o* __this, PokemonPrefabInfo_o* value, const MethodInfo* method);
Dpr_PatcheelPattern_o* BattlePokemonEntity__get_patcheelPattern (BattlePokemonEntity_o* __this, const MethodInfo* method);
void BattlePokemonEntity__set_patcheelPattern (BattlePokemonEntity_o* __this, Dpr_PatcheelPattern_o* value, const MethodInfo* method);
void BattlePokemonEntity__Awake (BattlePokemonEntity_o* __this, const MethodInfo* method);
void BattlePokemonEntity__OnDestroy (BattlePokemonEntity_o* __this, const MethodInfo* method);
void BattlePokemonEntity__OnEnable (BattlePokemonEntity_o* __this, const MethodInfo* method);
void BattlePokemonEntity__OnDisable (BattlePokemonEntity_o* __this, const MethodInfo* method);
void BattlePokemonEntity__OnUpdate (BattlePokemonEntity_o* __this, float deltaTime, const MethodInfo* method);
void BattlePokemonEntity__OnEarlyLateUpdate (BattlePokemonEntity_o* __this, float deltatime, const MethodInfo* method);
void BattlePokemonEntity__LateUpdate (BattlePokemonEntity_o* __this, const MethodInfo* method);
void BattlePokemonEntity__OnLateUpdate (BattlePokemonEntity_o* __this, float deltaTime, const MethodInfo* method);
void BattlePokemonEntity__ProcessSequence (BattlePokemonEntity_o* __this, float deltaTime, const MethodInfo* method);
void BattlePokemonEntity__Initialize (BattlePokemonEntity_o* __this, XLSXContent_PokemonInfo_SheetCatalog_o* catalog, bool isContest, const MethodInfo* method);
void BattlePokemonEntity__CreateShadowCastSystem (BattlePokemonEntity_o* __this, const MethodInfo* method);
Dpr_Battle_View_SimpleParam_o BattlePokemonEntity__GetSimpleParam (BattlePokemonEntity_o* __this, const MethodInfo* method);
void BattlePokemonEntity__ResetAnimation (BattlePokemonEntity_o* __this, const MethodInfo* method);
AnimationPlayer_o* BattlePokemonEntity__GetAnimationPlayer (BattlePokemonEntity_o* __this, const MethodInfo* method);
void BattlePokemonEntity__RequestAnimationState (BattlePokemonEntity_o* __this, int32_t state, float duration, float startTime, const MethodInfo* method);
void BattlePokemonEntity__SetAnimationSpeed (BattlePokemonEntity_o* __this, float animationSpeed, const MethodInfo* method);
float BattlePokemonEntity__GetAnimationSpeed (BattlePokemonEntity_o* __this, const MethodInfo* method);
void BattlePokemonEntity__SetBlinkEnabled (BattlePokemonEntity_o* __this, bool value, const MethodInfo* method);
void BattlePokemonEntity__SetBlinkIntParameter (BattlePokemonEntity_o* __this, int32_t param, const MethodInfo* method);
Dpr_PokeAnimSound_o* BattlePokemonEntity__GetPokeAnimSound (BattlePokemonEntity_o* __this, const MethodInfo* method);
void BattlePokemonEntity__AK_EffectStart00 (BattlePokemonEntity_o* __this, int32_t value, const MethodInfo* method);
void BattlePokemonEntity__AK_EffectStart01 (BattlePokemonEntity_o* __this, int32_t value, const MethodInfo* method);
void BattlePokemonEntity__AK_ButuriStart01 (BattlePokemonEntity_o* __this, int32_t value, const MethodInfo* method);
void BattlePokemonEntity__AK_SEStart01 (BattlePokemonEntity_o* __this, int32_t value, const MethodInfo* method);
void BattlePokemonEntity__AK_SEStart02 (BattlePokemonEntity_o* __this, int32_t value, const MethodInfo* method);
void BattlePokemonEntity__AK_SEStart03 (BattlePokemonEntity_o* __this, int32_t value, const MethodInfo* method);
void BattlePokemonEntity__AK_SEStart04 (BattlePokemonEntity_o* __this, int32_t value, const MethodInfo* method);
void BattlePokemonEntity__AK_PartsMaterial01 (BattlePokemonEntity_o* __this, int32_t value, const MethodInfo* method);
void BattlePokemonEntity__AK_PartsSkel01 (BattlePokemonEntity_o* __this, int32_t value, const MethodInfo* method);
void BattlePokemonEntity__SetRenderActive (BattlePokemonEntity_o* __this, bool isActive, const MethodInfo* method);
void BattlePokemonEntity__UpdateFixMultiplyColor (BattlePokemonEntity_o* __this, const MethodInfo* method);
BattlePokemonEntity_RenderingParam_o BattlePokemonEntity__GetRenderingParam (BattlePokemonEntity_o* __this, const MethodInfo* method);
void BattlePokemonEntity__SetStencilWriteValue (BattlePokemonEntity_o* __this, bool f, int32_t value, const MethodInfo* method);
void BattlePokemonEntity__AdjustModel (BattlePokemonEntity_o* __this, const MethodInfo* method);
int32_t BattlePokemonEntity__GetModelEntityType (BattlePokemonEntity_o* __this, const MethodInfo* method);
void BattlePokemonEntity__SetPatcheelPattern (BattlePokemonEntity_o* __this, uint32_t rand, const MethodInfo* method);
void BattlePokemonEntity___ctor (BattlePokemonEntity_o* __this, const MethodInfo* method);
