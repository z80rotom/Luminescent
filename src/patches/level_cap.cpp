#include "il2cpp.hpp"
#include "Pml/PokePara/CoreParam.h"
#include "Pml/PokePara/Accessor.h"
#include "PlayerWork.hpp"
#include "logger.hpp"
#include "Dpr/Battle/Logic/Exp.h"
#include "util.hpp"

#include <math.h>

uint32_t getMaxLevel() {
    constexpr size_t NUM_FLAGS = 2;
    uint32_t maxLevel = 100;
    uint32_t numEvents = GetBadgeCount();

    uint32_t flags[NUM_FLAGS] = {
        2770, // Beating Cyrus at spear pillar
        2538, // Beating Stark Mountain
    };

    for (size_t i = 0; i < NUM_FLAGS; i++)
    {
        if (PlayerWork::GetBool(flags[i], nullptr))
        {
            numEvents += 1;
        }
    }


    switch (numEvents)
    {
        case 0: // Roark
            maxLevel = 16;
            break;
        case 1: // Gardenia
            maxLevel = 26;
            break;
        case 2: // Fantina
            maxLevel = 33;
            break;
        case 3: // Maylene
            maxLevel = 39;
            break;
        case 4: // Crasher Wake
            maxLevel = 44;
            break;
        case 5: // Byron
            maxLevel = 53;
            break;
        case 6: // Candice
            maxLevel = 56;
            break;
        case 7: // Spear Pillar
            maxLevel = 60;
        case 8: // Volkner
            maxLevel = 62;
            break;
        case 9: // Cynthia
            // Should add a check for if game beaten
            // to remove level 78 cap. For the moment, they can just disable
            // the cap if you want to overlevel in post game.
            maxLevel = 78;
        case 10:
            maxLevel = 85;
        default:
            break;
    }

    return maxLevel;
}

uint32_t Dpr::Battle::Logic::Exp::getexp_calc_adjust_level(uint32_t base_exp,uint16_t getpoke_lv,uint16_t deadpoke_lv,MethodInfo *method )
{
    float fVar4;
    float fVar5;
    fVar5 = (float)(uint64_t)deadpoke_lv;
    fVar4 = fVar5 + fVar5 + 10.0;
    fVar5 = (float)(uint64_t)getpoke_lv + fVar5 + 10.0;
    
    float exp = (((fVar4 * fVar4 * sqrt(fVar4)) / (fVar5 * fVar5 * sqrt(fVar5))) *
               (float)(uint64_t)base_exp + 1.0);

    // Game clear
    if (PlayerWork::GetSytemFlag(5, (MethodInfo *) nullptr))
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