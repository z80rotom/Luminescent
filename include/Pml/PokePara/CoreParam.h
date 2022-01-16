#pragma once

// #include "types.h"
// #include "Pml/MonsNo.h"
#include "Pml/PokePara/Accessor.h"

namespace Pml
{
    namespace PokePara
    {
        struct CoreParam_c;
        struct CoreParam_Fields {
            System_Byte_array* m_coreData;
            System_Byte_array* m_calcData;
            Accessor * m_accessor;
        };
        class CoreParam {
            public:
                // RVA: 0x23AC870 Offset: 0x23AC971 VA: 0x23AC870
	            // void Evolve(MonsNo nextMonsno, uint routeIndex);
                void AddExp(uint32_t value, MethodInfo *method);
                // 0248bc0
                void SetExp(uint32_t value, MethodInfo *method);


            private:
                CoreParam_c *klass;
                void *monitor;
                CoreParam_Fields fields;
        };
    } // namespace PokePara
    
} // namespace Pml
