#pragma once

namespace Dpr
{

namespace Item
{
    struct SaveItem_Fields {
        int32_t Count;
        bool VanishNew;
        bool FavoriteFlag;
        bool ShowWazaNameFlag;
        uint8_t Dummy1;
        uint8_t Dummy2;
        uint16_t SortNumber;
    };

    struct SaveItem_o {
        SaveItem_Fields fields;
    };

    struct SaveUgItem_Fields {
        int32_t Count;
        bool VanishNew;
        bool FavoriteFlag;
    };

    struct SaveUgItem_o {
        SaveUgItem_Fields fields;
    };

    struct SaveItem_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        SaveItem_o m_Items[65535];
    };

    struct SaveUgItem_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        SaveUgItem_o m_Items[65535];
    };
}

}