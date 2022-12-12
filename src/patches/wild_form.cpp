#include "il2cpp.hpp"
#include "System/Array.hpp"
#include "logger.hpp"
#include "util.hpp"

namespace Dpr
{
    namespace Field
    {
        struct EncountResult_Fields {
            int32_t Type;
            System::Array<int32_t> * Enemy; // struct Pml_MonsNo_array* 
            System::Array<int32_t> * Level;
            System::Array<uint8_t> * FixSex; // struct Pml_Sex_array* 
            System::Array<int32_t> * FixSeikaku; // struct Pml_PokePara_Seikaku_array* 
            bool IsRare;
            int32_t Partner;
            int32_t HatudouTokusei;
            int32_t BattleBG;
            int32_t MP_SaveIndex;
            bool IsKakure;
            int32_t karanaForm;
            int32_t annoForm;
        };

        struct EncountResult_c;

        struct EncountResult_o {
            EncountResult_c *klass;
            void *monitor;
            EncountResult_Fields fields;
        };

        namespace FieldEncount
        {
            struct ENC_FLD_SPA_Fields {
                int32_t TrainerID;
                bool SprayCheck;
                bool EncCancelSpInvalid;
                int32_t SpMyLv;
                bool Egg;
                int32_t Spa;
                System::Array<int32_t> * FormProb;
                int32_t AnnoonTblType;
            };

            struct ENC_FLD_SPA_o {
                ENC_FLD_SPA_Fields fields;
            };
        }
    }
}

struct FieldManager_o
{
    uint16_t GetFormNo(int32_t mons, int32_t karana, int32_t anno, MethodInfo *method);
};

using namespace Dpr::Field;
using namespace Dpr::Field::FieldEncount;

void LastProc(EncountResult_o ** pResult, ENC_FLD_SPA_o * pSpa, MethodInfo *method)
{
    socket_log_fmt("LastProc\n");
    EncountResult_Fields * result = &((*pResult)->fields);
    ENC_FLD_SPA_Fields * spa = &pSpa->fields;

    if (result->HatudouTokusei == 0 && spa->Egg == false && 
        (spa->Spa == 0xE || spa->Spa == 0x69))
    {
        result->HatudouTokusei = spa->Spa;
    }

    if (result->Enemy->max_length < 1)
    {
        return;
    }

    int32_t UNOWN_ID = 0xC9;

    int32_t karanaForm = 0;
    for (il2cpp_array_size_t i = 0; i < result->Enemy->max_length; i++)
    {
        // socket_log_fmt("[LastProc] result->Enemy->m_Items[i]: %08X\n", result->Enemy->m_Items[i]);
        int32_t enemy = result->Enemy->m_Items[i] & 0x0000FFFF;
        int32_t formNo = (result->Enemy->m_Items[i] & 0xFFFF0000) >> 16;

        if (i == 0)
        {
            // socket_log_fmt("[LastProc] 0: %08X\n", formNo);
            karanaForm = formNo;
        } else if (i == 1)
        {
            // socket_log_fmt("[LastProc] 1: %08X\n", formNo);
            karanaForm |= formNo << 16;
        }

        // Game for some reason is okay with you not doing this for genderless pokemon. Beats the hell out of me why.
        result->Enemy->m_Items[i] = enemy;
        if (enemy == UNOWN_ID) {
            result->annoForm = spa->AnnoonTblType;
        }
    }

    socket_log_fmt("[LastProc] karanaForm: %08X\n", karanaForm);
    result->karanaForm = karanaForm;
}

uint16_t GetFormNo0(FieldManager_o *__this, int32_t mons, int32_t karana, int32_t anno, MethodInfo *method)
{
    int32_t formNo = (karana & 0x0000FFFF);
    int32_t UNOWN_ID = 0xC9;
    if (UNOWN_ID != mons)
    {
        return formNo;
    }

    return __this->GetFormNo(mons, karana, anno, method);
}


uint16_t GetFormNo1(FieldManager_o *__this, int32_t mons, int32_t karana, int32_t anno, MethodInfo *method)
{
    int32_t formNo = (karana & 0xFFFF0000) >> 16;
    int32_t UNOWN_ID = 0xC9;
    if (UNOWN_ID != mons)
    {
        return formNo;
    }

    return __this->GetFormNo(mons, karana, anno, method);
}