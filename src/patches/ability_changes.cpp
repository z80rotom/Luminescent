#include "il2cpp.hpp"
#include "Dpr/Battle/Logic/BTL_CLIENT.hpp"

using namespace Dpr::Battle::Logic;

int32_t checkForbidChangeEscapeCommon(BTL_CLIENT_o *__this, BTL_POKEPARAM_o *procPoke, uint8_t *pokeID, uint16_t *tokuseiID, MethodInfo *method)
{
    const int16_t RUN_AWAY_ID = 50;
    const int32_t CAN_ESCAPE = 5;
    if (procPoke->fields.m_tokusei == RUN_AWAY_ID)
    {
        return CAN_ESCAPE; 
    } else {
        return __this->checkForbidChangeEscapeCommon(procPoke, pokeID, tokuseiID, method);
    }
}