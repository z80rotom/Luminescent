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

    for (il2cpp_array_size_t i = 0; i < result->Enemy->max_length; i++)
    {
        int32_t enemy = result->Enemy->m_Items[i];
        if (enemy == UNOWN_ID) {
            result->annoForm = spa->AnnoonTblType;
        } else {
            result->karanaForm = spa->FormProb->m_Items[i];
        }
    }
}

uint16_t GetFormNo(FieldManager_o *__this, int32_t mons, int32_t karana, int32_t anno, MethodInfo *method)
{
    // Should be enough to just round robin through this function to get the form number.
    int32_t UNOWN_ID = 0xC9;
    if (UNOWN_ID != mons)
    {
        return karana;
    }

    return __this->GetFormNo(mons, karana, anno, method);
}