#include "il2cpp.hpp"
#include "Pml/PokePara/CoreParam.h"
#include "Pml/PokePara/Accessor.h"
#include "PlayerWork.hpp"
#include "logger.hpp"
#include "Dpr/Battle/Logic/Exp.h"
#include "util.hpp"

#include <math.h>

uint32_t Dpr::Battle::Logic::Exp::getexp_calc_adjust_level(uint32_t base_exp,uint16_t getpoke_lv,uint16_t deadpoke_lv,MethodInfo *method )
{
    float fVar4;
    float fVar5;
    fVar5 = (float)(uint64_t)deadpoke_lv;
    fVar4 = fVar5 + fVar5 + 10.0;
    fVar5 = (float)(uint64_t)getpoke_lv + fVar5 + 10.0;
    
    float exp = (((fVar4 * fVar4 * sqrt(fVar4)) / (fVar5 * fVar5 * sqrt(fVar5))) *
               (float)(uint64_t)base_exp + 1.0);

    // Beaten Stark Mountain
    if (PlayerWork::GetBool(2538, (MethodInfo *) nullptr))
    {
        return (uint32_t) exp;
    }

    // Is Level Cap enabled
    if (!PlayerWork::GetBool(2197, (MethodInfo *) nullptr))
    {
        return (uint32_t) exp;
    }

    uint32_t maxLevel = getMaxLevel();

    if (getpoke_lv >= maxLevel)
    {
        exp *= 0.0;
        exp += 1.0;
    }
    return (uint32_t) exp;
}

uint32_t Dpr_Battle_Logic_Exp_getexp_calc_adjust_level(uint32_t base_exp,uint16_t getpoke_lv,uint16_t deadpoke_lv,MethodInfo *method )
{
    return Dpr::Battle::Logic::Exp::getexp_calc_adjust_level(base_exp, getpoke_lv, deadpoke_lv, method );
}
