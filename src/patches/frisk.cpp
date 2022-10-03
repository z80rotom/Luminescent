#include "il2cpp.hpp"

int32_t getRnd1(int32_t abilityNum)
{
    const int32_t BOOSTED_ODDS = 0x3C;
    const int32_t REGULAR_ODDS = 0x32;
    const int32_t SUPERLUCK = 0x69;
    const int32_t COMPOUND_EYES = 0xE;
    const int32_t FRISK = 0x77;
    // 0x69 = superluck
    // 0xe = compound eyes
    if (abilityNum == SUPERLUCK || abilityNum == COMPOUND_EYES || abilityNum == FRISK)
    {
        return BOOSTED_ODDS;
    } else {
        return REGULAR_ODDS;
    }
}