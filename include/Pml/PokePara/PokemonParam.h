#pragma once

#include "Pml/PokePara/CoreParam.h"
#include "Pml/PokePara/InitialSpec.hpp"

namespace Pml
{
    namespace PokePara
    {
        struct PokemonParam_Fields {
            CoreParam_Fields super;
        };

        struct PokemonParam_c;
        struct PokemonParam_o {
            PokemonParam_c *klass;
            void *monitor;
            PokemonParam_Fields fields;

            // 02055140
            void ctor(Pml::PokePara::InitialSpec_o *spec, MethodInfo *method);
        };

        // 04c59c10
        extern void * PokemonParam_TypeInfo;
    }
}

