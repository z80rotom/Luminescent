#pragma once

#include "il2cpp.h"

uint32_t TMPro_KerningPair__get_firstGlyph (TMPro_KerningPair_o* __this, const MethodInfo* method_info);
void TMPro_KerningPair__set_firstGlyph (TMPro_KerningPair_o* __this, uint32_t value, const MethodInfo* method_info);
TMPro_GlyphValueRecord_Legacy_o TMPro_KerningPair__get_firstGlyphAdjustments (TMPro_KerningPair_o* __this, const MethodInfo* method_info);
uint32_t TMPro_KerningPair__get_secondGlyph (TMPro_KerningPair_o* __this, const MethodInfo* method_info);
void TMPro_KerningPair__set_secondGlyph (TMPro_KerningPair_o* __this, uint32_t value, const MethodInfo* method_info);
TMPro_GlyphValueRecord_Legacy_o TMPro_KerningPair__get_secondGlyphAdjustments (TMPro_KerningPair_o* __this, const MethodInfo* method_info);
bool TMPro_KerningPair__get_ignoreSpacingAdjustments (TMPro_KerningPair_o* __this, const MethodInfo* method_info);
void TMPro_KerningPair___ctor (TMPro_KerningPair_o* __this, const MethodInfo* method_info);
void TMPro_KerningPair___ctor (TMPro_KerningPair_o* __this, uint32_t left, uint32_t right, float offset, const MethodInfo* method_info);
void TMPro_KerningPair___ctor (TMPro_KerningPair_o* __this, uint32_t firstGlyph, TMPro_GlyphValueRecord_Legacy_o firstGlyphAdjustments, uint32_t secondGlyph, TMPro_GlyphValueRecord_Legacy_o secondGlyphAdjustments, const MethodInfo* method_info);
void TMPro_KerningPair__ConvertLegacyKerningData (TMPro_KerningPair_o* __this, const MethodInfo* method_info);
void TMPro_KerningPair___cctor (const MethodInfo* method_info);
