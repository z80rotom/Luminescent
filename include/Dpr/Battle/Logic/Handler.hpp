#pragma once

#include "il2cpp.hpp"
#include "System/Array.hpp"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            namespace Handler
            {
                struct Waza_HandlerGetFunc_Fields {
                    System_MulticastDelegate_Fields super;
                };

                struct Waza_HandlerGetFunc_c;

                struct Waza_HandlerGetFunc_o {
                    void ctor(intptr_t m_target, MethodInfo * method);
                    Waza_HandlerGetFunc_c *klass;
                    void *monitor;
                    Waza_HandlerGetFunc_Fields fields;
                };

                struct Waza_GET_FUNC_TABLE_ELEM_Fields {
                    int32_t waza;
                    struct Waza_HandlerGetFunc_o* func;
                };
            
                struct Waza_GET_FUNC_TABLE_ELEM_o {
                    static void ctor(Waza_GET_FUNC_TABLE_ELEM_o __this, int32_t waza,
                                     Waza_HandlerGetFunc_o *func, MethodInfo *method);
                    
                    Waza_GET_FUNC_TABLE_ELEM_Fields fields;
                };

                struct Waza_StaticFields {
                    System::Array<Waza_GET_FUNC_TABLE_ELEM_o> * GET_FUNC_TABLE;
                };

                extern void * Waza_HandlerGetFunc_TypeInfo;

                extern MethodInfo * Method_ADD_Karagenki;
            }
        }
    }
}