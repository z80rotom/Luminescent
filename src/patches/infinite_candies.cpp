
#include "logger.hpp"
#include "ItemWork.hpp"

void infinite_candies(int32_t itemId, int32_t useCount, MethodInfo * method) {
    const int32_t everlastingCandyID = 1825;
    // Rare candies should never be subtracted from the player inventory
    if (itemId != everlastingCandyID) {
        ItemWork::SubItem(itemId, useCount, method);
    }
}

void subsPatch() {
    asm(R"(
        subs w22,w25,w22
        csel w22,w22,wzr,pl
        ret
    )");
}
