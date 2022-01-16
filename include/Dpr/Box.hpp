#pragma once

#include "System/String.hpp"
#include "il2cpp.hpp"

namespace Dpr
{
    namespace Box
    {
        struct SaveBoxTrayData_Fields {
            struct Pml::PokePara::SerializedPokemonFull_array* pokemonParam;
        };

        struct SaveBoxTrayData_o {
            SaveBoxTrayData_Fields fields;
        };

        struct SaveBoxTrayData_array {
            Il2CppObject obj;
            Il2CppArrayBounds *bounds;
            il2cpp_array_size_t max_length;
            SaveBoxTrayData_o m_Items[65535];
        };

        struct SaveBoxData__STR11_Fields {
            System::String * str;
        };

        struct SaveBoxData__STR11_o {
            SaveBoxData__STR11_Fields fields;
        };

        struct SaveBoxData__STR11_array {
            Il2CppObject obj;
            Il2CppArrayBounds *bounds;
            il2cpp_array_size_t max_length;
            SaveBoxData__STR11_o m_Items[65535];
        };

        struct SaveBoxData__STR17_Fields {
            System::String * str;
        };

        struct SaveBoxData__STR17_o {
            SaveBoxData__STR17_Fields fields;
        };

        struct SaveBoxData__STR17_array {
            Il2CppObject obj;
            Il2CppArrayBounds *bounds;
            il2cpp_array_size_t max_length;
            SaveBoxData__STR17_o m_Items[65535];
        };

        struct SaveBoxData_Fields {
            struct SaveBoxData__STR17_array* trayName;
            struct SaveBoxData__STR11_array* teamName;
            struct System_UInt16_array* teamPos;
            uint8_t teamLock;
            uint8_t trayMax;
            uint8_t currentTray;
            bool isOpened;
            struct System_Byte_array* wallPaper;
            uint16_t statusPut;
        };

        struct SaveBoxData_o {
            SaveBoxData_Fields fields;
        };
    }
}