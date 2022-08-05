#include "il2cpp.hpp"
#include "Pml/PokePara/CoreParam.h"
#include "Pml/PokePara/Accessor.h"
#include "PlayerWork.hpp"
#include "logger.hpp"
#include "Dpr/Battle/Logic/Exp.h"

#include <math.h>

uint32_t GetBadgeCount()
{
  bool bVar1 = PlayerWork::GetSytemFlag(0x81, (MethodInfo *)nullptr);
  bool bVar2 = PlayerWork::GetSytemFlag(0x7c, (MethodInfo *)nullptr);
  bool bVar3 = PlayerWork::GetSytemFlag(0x7d, (MethodInfo *)nullptr);
  bool bVar4 = PlayerWork::GetSytemFlag(0x80, (MethodInfo *)nullptr);
  bool bVar5 = PlayerWork::GetSytemFlag(0x7f, (MethodInfo *)nullptr);
  bool bVar6 = PlayerWork::GetSytemFlag(0x7e, (MethodInfo *)nullptr);
  bool bVar7 = PlayerWork::GetSytemFlag(0x83, (MethodInfo *)nullptr);
  bool bVar8 = PlayerWork::GetSytemFlag(0x82, (MethodInfo *)nullptr);
  return (bVar2 & 1) + (bVar1 & 1) + (bVar3 & 1) + (bVar4 & 1) + (bVar5 & 1) + (bVar6 & 1) +
         (bVar7 & 1) + (bVar8 & 1);
}

uint32_t getMaxLevel() {
    uint32_t maxLevel = 100;
    uint32_t numBadges = GetBadgeCount();
    switch (numBadges)
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
        case 7: // Volkner
            maxLevel = 62;
            break;
        case 8: // Cynthia
            // Should add a check for if game beaten
            // to remove level 78 cap. For the moment, they can just disable
            // the cap if you want to overlevel in post game.
            maxLevel = 78;
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

    // 
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

void getMaxLevelPatch() {
    uint32_t x = getMaxLevel();
    asm("mov w25,%w0;" : : "r"(x));
}
