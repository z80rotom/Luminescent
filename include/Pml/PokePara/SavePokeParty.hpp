#ifndef _GUARD_SavePokeParty_HPP_
#define _GUARD_SavePokeParty_HPP_

namespace Pml
{
    namespace PokePara {
        struct SerializedPokemonFull_Fields {
            struct System_Byte_array* buffer;
        };

        struct SerializedPokemonFull_o {
            SerializedPokemonFull_Fields fields;
        };

        struct SerializedPokemonFull_array {
            Il2CppObject obj;
            Il2CppArrayBounds *bounds;
            il2cpp_array_size_t max_length;
            SerializedPokemonFull_o m_Items[65535];
        };

        struct SavePokeParty_Fields {
            struct SerializedPokemonFull_array* members;
            uint8_t memberCount;
            uint8_t markingIndex;
        };

        struct SavePokeParty_o {
            SavePokeParty_Fields fields;
        };

        // 04e4ed08
        extern void * SerializedPokemonFull_array_TypeInfo;
    }
}

#endif