#pragma once

#include "il2cpp.hpp"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            struct BTLV_STRPARAM_Fields {
                uint16_t strID;
                uint8_t wait;
                uint8_t strType;
                uint8_t argCnt;
                struct System_Int32_array* args;
            };

            struct BTLV_STRPARAM_c;

            struct BTLV_STRPARAM_o {
                BTLV_STRPARAM_c *klass;
                void *monitor;
                BTLV_STRPARAM_Fields fields;
            };
        }
    }
}