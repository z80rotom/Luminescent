#pragma once

#include "il2cpp.h"

void TMPro_KerningTable___ctor (TMPro_KerningTable_o* __this, const MethodInfo* method);
void TMPro_KerningTable__AddKerningPair (TMPro_KerningTable_o* __this, const MethodInfo* method);
int32_t TMPro_KerningTable__AddKerningPair (TMPro_KerningTable_o* __this, uint32_t first, uint32_t second, float offset, const MethodInfo* method);
int32_t TMPro_KerningTable__AddGlyphPairAdjustmentRecord (TMPro_KerningTable_o* __this, uint32_t first, TMPro_GlyphValueRecord_Legacy_o firstAdjustments, uint32_t second, TMPro_GlyphValueRecord_Legacy_o secondAdjustments, const MethodInfo* method);
void TMPro_KerningTable__RemoveKerningPair (TMPro_KerningTable_o* __this, int32_t left, int32_t right, const MethodInfo* method);
void TMPro_KerningTable__RemoveKerningPair (TMPro_KerningTable_o* __this, int32_t index, const MethodInfo* method);
void TMPro_KerningTable__SortKerningPairs (TMPro_KerningTable_o* __this, const MethodInfo* method);
