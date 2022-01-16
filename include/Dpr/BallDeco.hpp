#pragma once 

namespace Dpr
{
    namespace BallDeco {
        struct SaveSealData_Fields {
            bool IsGet;
            int32_t Count;
            int32_t TotalCount;
        };

        struct SaveSealData_o {
            SaveSealData_Fields fields;
        };

        struct AffixSealData_Fields {
            uint16_t SealId;
            int16_t PositionX;
            int16_t PositionY;
            int16_t PositionZ;
        };

        struct AffixSealData_o {
            AffixSealData_Fields fields;
        };

        struct AffixSealData_array {
            Il2CppObject obj;
            Il2CppArrayBounds *bounds;
            il2cpp_array_size_t max_length;
            AffixSealData_o m_Items[65535];
        };

        struct CapsuleData_Fields {
            uint32_t AttachPokemonId;
            uint32_t AttachPersonalRnd;
            bool Is3DEditMode;
            bool IsAppliedTemplate;
            uint8_t AffixSealCount;
            struct AffixSealData_array* AffixSealDatas;
        };

        struct CapsuleData_o {
            CapsuleData_Fields fields;
        };

        struct CapsuleData_array {
            Il2CppObject obj;
            Il2CppArrayBounds *bounds;
            il2cpp_array_size_t max_length;
            CapsuleData_o m_Items[65535];
        };

        struct SaveSealData_array {
            Il2CppObject obj;
            Il2CppArrayBounds *bounds;
            il2cpp_array_size_t max_length;
            SaveSealData_o m_Items[65535];
        };

        struct SaveBallDecoData_Fields {
            uint8_t CapsuleCount;
            struct CapsuleData_array* CapsuleDatas;
        };

        struct SaveBallDecoData_o {
            SaveBallDecoData_Fields fields;
        };
    }
}