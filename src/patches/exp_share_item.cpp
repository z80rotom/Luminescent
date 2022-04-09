#include "il2cpp.hpp"
#include "Dpr/Battle/Logic/BTL_POKEPARAM.hpp"
#include "logger.hpp"
#include "util.hpp"

using namespace Dpr::Battle::Logic;

bool CONFRONT_REC_IsMatch(BTL_POKEPARAM_o * deadpoke, uint8_t pokeID, BTL_POKEPARAM_o * bpp)
{
    const uint16_t EXPSHARE = 216;
    socket_log_fmt("Patched CONFRONT_REC_IsMatch\n");
    socket_log_fmt("deadpoke: %08X\n", deadpoke);
    socket_log_fmt("pokeID: %02X\n", pokeID);
    socket_log_fmt("bpp: %08X\n", bpp);

    socket_log_fmt("BTL_POKEPARAM_o::CONFRONT_REC_IsMatch: %08X\n", &BTL_POKEPARAM_o::CONFRONT_REC_IsMatch);
    socket_log_fmt("BTL_POKEPARAM_o::GetItem: %08X\n", &BTL_POKEPARAM_o::GetItem);
    if (deadpoke->CONFRONT_REC_IsMatch(pokeID, (MethodInfo *) nullptr))
    {
        return true;
    }

    if (bpp == nullptr)
    {
        return false;
    }

    return bpp->GetItem((MethodInfo *) nullptr) == EXPSHARE;
}