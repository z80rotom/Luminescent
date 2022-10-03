#include "il2cpp.hpp"
#include "Pml/PokePara/InitialSpec.hpp"
#include "Dpr/EvScript/EvDataManager.hpp"
#include "PlayerWork.hpp"

void FormAdd_InitialSpec_ctor(Pml::PokePara::InitialSpec_o * __this, Dpr::EvScript::EvDataManager_o * manager)
{
    __this->ctor(nullptr);
    if (6 < manager->fields._evArg->max_length)
    {
        EvData::Aregment_o * evArg = &manager->fields._evArg->m_Items[6];
        uint16_t formno = 0;
        
        if (evArg->fields.argType == 2)
        {
            formno = PlayerWork::GetInt(evArg->fields.data, nullptr);
        } else if (evArg->fields.argType == 1)
        {
            formno = evArg->fields.data;
        } else {
            return;
        }

        __this->fields.formno = formno;

    }
}