#include "il2cpp.hpp"
#include "Pml/PokePara/InitialSpec.hpp"
#include "Dpr/EvScript/EvDataManager.hpp"
#include "PlayerWork.hpp"
#include "logger.hpp"
#include "util.hpp"

void FormAdd_InitialSpec_ctor(Pml::PokePara::InitialSpec_o * __this, System::Array<EvData::Aregment_o> * _evArg)
{
    socket_log_fmt("[FormAdd_InitialSpec_ctor] _evArg: %08X\n", _evArg);
    socket_log_fmt("[FormAdd_InitialSpec_ctor] _evArg->max_length: %08X\n", _evArg->max_length);
    __this->ctor(nullptr);

    if (6 < _evArg->max_length)
    {
        EvData::Aregment_o * evArg = &_evArg->m_Items[6];
        uint16_t formno = 0;
        
        socket_log_fmt("[FormAdd_InitialSpec_ctor] evArg->fields.data: %08X\n", evArg->fields.data);
        if (evArg->fields.argType == 2)
        {
            formno = PlayerWork::GetInt(evArg->fields.data, nullptr);
            socket_log_fmt("[FormAdd_InitialSpec_ctor] formNo: %08X\n", formno);
        } else if (evArg->fields.argType == 1)
        {
            // These are not real integers when you have argType == 1
            // Might need to make a helper function that gets the value based on argType
            float * data = (float *) &evArg->fields.data;
            formno = *data;
            socket_log_fmt("[FormAdd_InitialSpec_ctor] formNo: %08X\n", formno);
        } else {
            return;
        }

        __this->fields.formno = formno;

    }
}