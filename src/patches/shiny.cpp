#include "types.h"

bool shinyPatch(uint32_t id, uint32_t rnd) {
    uint32_t v1 = (id & 0xfff0) ^ ((id >> 0x10) & 0xffff);
    uint32_t v2 = (rnd & 0xfff0) ^ ((rnd >> 0x10) & 0xffff);
    uint32_t n = (int) (0xffff * SHINY_CHANCE);

    return ((v1 ^ v2) & 0xffff) < n;
}

uint32_t shinyPatch2(uint32_t id, uint32_t rnd) {
    uint32_t v1 = (id & 0xffff) ^ ((id >> 0x10) & 0xffff);
    uint32_t v2 = (rnd & 0xffff) ^ ((rnd >> 0x10) & 0xffff);
    uint32_t n = (int) (0xffff * SHINY_CHANCE);
    uint32_t res = (v1 ^ v2) & 0xffff;

    return (res >= n) * res;
}

uint32_t shinyPatch3(uint32_t id, uint32_t rnd) {
    uint32_t v1 = (id & 0xfff0) ^ ((id >> 0x10) & 0xffff);
    uint32_t v2 = (rnd & 0xfff0) ^ ((rnd >> 0x10) & 0xffff);

    uint32_t s1 = (id & 0xffff) ^ ((id >> 0x10) & 0xffff);
    uint32_t s2 = (rnd & 0xffff) ^ ((rnd >> 0x10) & 0xffff);

    uint32_t n = (int) (0xffff * SHINY_CHANCE);

    return (((v1 ^ v2) & 0xffff) < n) + (((s1 ^ s2) & 0xffff) < n);
}
