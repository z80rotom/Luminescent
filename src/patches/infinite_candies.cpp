
#include "logger.hpp"
#include "ItemWork.hpp"

void infinite_candies(int itemId, int useCount) {
    if (itemId != 1825) {
        ItemWork__SubItem(itemId, useCount, nullptr);
    }
}

extern "C" void do_log(int a, int b) {
    socket_log_fmt("subsPatch(%d, %d)\n", a, b);
}

void subsPatch() {
    asm(R"(
subs w22,w25,w22
csel w22,w22,wzr,pl
ret
    )");
}
