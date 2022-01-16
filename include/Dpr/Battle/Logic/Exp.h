#pragma once

typedef unsigned int uint;

typedef unsigned char byte;

enum BtlCompetitor {
    BTL_COMPETITOR_WILD,
    BTL_COMPETITOR_TRAINER,
    BTL_COMPETITOR_INST,
	BTL_COMPETITOR_COMM,
	BTL_COMPETITOR_DEMO_CAPTURE,
	BTL_COMPETITOR_MAX
};

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            namespace Exp {

                struct CalcParam // TypeDefIndex: 10287
                {
                    byte alignment[0x10];
                    BtlCompetitor competitor; // 0x10
                    uint playerLanguageId; // 0x14
                    uint levelCap; // 0x18
                    uint deadPokeExp; // 0x1C
                    uint deadPokeLevel; // 0x20
                    uint getPokeLevel; // 0x24
                    uint getPokeFriendship; // 0x28
                    uint getPokeLanguageId; // 0x2C
                    bool isMatch; // 0x30
                    bool isGakusyusoutiOn; // 0x31
                    bool haveSiawasetamago; // 0x32
                    bool isEvoCanceledPoke; // 0x33
                    bool isMyPoke; // 0x34
                };

                struct CalcResult
                {
                    byte alignment[0x10];
                    uint exp; // 0x10
                    bool byGakusyusouti; // 0x14
                    bool isContainBonus; // 0x15
                };

                static void CalcExp(const CalcParam *calcParam, CalcResult *pResult);
                static uint32_t getexp_calc_adjust_level(uint32_t base_exp,uint16_t getpoke_lv,uint16_t deadpoke_lv,MethodInfo *method );
            }
        }
    }
}

