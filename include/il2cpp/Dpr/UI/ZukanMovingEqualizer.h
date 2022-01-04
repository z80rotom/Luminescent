#pragma once

#include "il2cpp.h"

void Dpr_UI_ZukanMovingEqualizer__Awake (Dpr_UI_ZukanMovingEqualizer_o* __this, const MethodInfo* method);
void Dpr_UI_ZukanMovingEqualizer__Setup (Dpr_UI_ZukanMovingEqualizer_o* __this, VoiceRTPC_VoiceRTPCDataList_o* voiceRtpcData, const MethodInfo* method);
void Dpr_UI_ZukanMovingEqualizer__OnUpdate (Dpr_UI_ZukanMovingEqualizer_o* __this, float deltaTime, Audio_AudioInstance_o* audioInstance, const MethodInfo* method);
void Dpr_UI_ZukanMovingEqualizer__UpdateLevels (Dpr_UI_ZukanMovingEqualizer_o* __this, Audio_AudioInstance_o* audioInstance, const MethodInfo* method);
float Dpr_UI_ZukanMovingEqualizer__GetRTPCValue (Dpr_UI_ZukanMovingEqualizer_o* __this, Audio_AudioInstance_o* audioInstance, uint32_t paramId, int32_t gaugeIndex, const MethodInfo* method);
float Dpr_UI_ZukanMovingEqualizer__ToLevelValue (Dpr_UI_ZukanMovingEqualizer_o* __this, float value, float min, float max, const MethodInfo* method);
void Dpr_UI_ZukanMovingEqualizer__SetLevelValue (Dpr_UI_ZukanMovingEqualizer_o* __this, int32_t level, float value, const MethodInfo* method);
void Dpr_UI_ZukanMovingEqualizer__UpdateHeads (Dpr_UI_ZukanMovingEqualizer_o* __this, float deltaTime, const MethodInfo* method);
void Dpr_UI_ZukanMovingEqualizer___ctor (Dpr_UI_ZukanMovingEqualizer_o* __this, const MethodInfo* method);
