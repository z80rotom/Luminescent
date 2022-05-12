#include "Dpr/Battle/Logic/BattleCounter.hpp"
#include "Dpr/Battle/Logic/ServerCommandPutter.hpp"
#include "logger.hpp"
#include "PlayerWork.hpp"

static int32_t gTurnCounter = 0;
const int32_t TURN_COUNTER_WORK = 449;

void bc_init(Dpr::Battle::Logic::BattleCounter_o *__this, Dpr::Battle::Logic::MainModule *mainModule, MethodInfo *method)
{
    __this->Initialize(mainModule, method);
    gTurnCounter = 0;
    PlayerWork::SetInt(TURN_COUNTER_WORK, gTurnCounter, (MethodInfo *) nullptr);
    
}

void IncBattleCount(Dpr::Battle::Logic::ServerCommandPutter_o *__this, uint8_t counterID, MethodInfo *method)
{
    __this->IncBattleCount(counterID, method);

    if (counterID == 0)
    {
        gTurnCounter++;
        PlayerWork::SetInt(TURN_COUNTER_WORK, gTurnCounter, (MethodInfo *) nullptr);
    }
}
