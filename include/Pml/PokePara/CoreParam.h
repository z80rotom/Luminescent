#pragma once

#include "il2cpp.hpp"
// #include "types.h"
// #include "Pml/MonsNo.h"
#include "Pml/PokePara/Accessor.h"
#include "Pml/PokePara/OwnerInfo.hpp"
#include "System/String.hpp"

namespace System
{
    namespace Collections
    {
        namespace Generic
        {
            struct HashSet_WazaNo__o;
        }
    }
}

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

        struct CoreParam_FormChangeResult_o;
        struct CoreParam {
            public:
                // RVA: 0x23AC870 Offset: 0x23AC971 VA: 0x23AC870
	            // void Evolve(MonsNo nextMonsno, uint routeIndex);
                void AddExp(uint32_t value, MethodInfo *method);
                // 0248bc0
                void SetExp(uint32_t value, MethodInfo *method);
                // 024901d0
                uint8_t GetSex(MethodInfo * method);
                // 0248f030
                int32_t AddWazaIfEmptyExist(int32_t wazano, MethodInfo *method);
                // 0248bf00
                int32_t GetMonsNo(MethodInfo * method);
                // 0248bf10
                uint16_t GetFormNo(MethodInfo * method);
                // 02490b10
                System::String * GetNickName(MethodInfo * method);
                // 02490b20
                void SetNickName(System::String * nickname, MethodInfo * method);

                uint8_t GetMezapaType(MethodInfo *method);

                // 0204ac00
                void SetParentName(System::String *name, MethodInfo *method);
                // 02049650
                void SetLangId(uint32_t langId, MethodInfo *method);
                // 0204b840
                void SetGetBall(uint32_t value, MethodInfo *method);
                // 0204b040
                void SetCondition(int32_t cond, uint8_t value, MethodInfo *method);
                // 020464e0
                void SetWaza(uint8_t wazaIndex, int32_t wazano, MethodInfo *method);
                // 02048c90
                bool UpdateOwnerInfo(Pml::PokePara::OwnerInfo_o *ownerInfo, MethodInfo *method);
                // 020446e0
                void ChangeTalentPower(int32_t powerId, uint32_t value, MethodInfo *method);

                // 0204c910
                bool StartFastMode(MethodInfo *method);
                // 0204c960
                bool EndFastMode(bool validFlag, MethodInfo *method);


                void ChangeFormNo(uint16_t nextFormno, CoreParam_FormChangeResult_o *pResult, MethodInfo *method);
                uint32_t GetPower(int32_t powerId, MethodInfo *method);
                // 2044680
                bool IsTrainingDone(int32_t powerId, MethodInfo *method);
                // 2044610
                uint32_t GetTalentPower(int32_t powerId, MethodInfo *method);
                // 204a5a0
                uint8_t GetRareType(MethodInfo * method);
                // 2048740
                int32_t GetSeikaku(MethodInfo *method);
                // 20488a0
                int32_t GetTokuseiNo(MethodInfo *method);
                // 2045ce0
                uint8_t GetTokuseiIndex(MethodInfo *method);
                // 2048ac0
                void SetTokuseiIndex(uint8_t tokuseiIndex, MethodInfo *method);

                bool IsNull(MethodInfo * method);
                bool IsEgg(int32_t type, MethodInfo * method);
                uint16_t GetItem(MethodInfo * method);
                void SetItem(uint16_t itemno, MethodInfo *method);

                // 2043bd0
                bool IsHpZero(MethodInfo *method);
                // 2043e30
                uint32_t GetLevel(MethodInfo *method);

                System::Collections::Generic::HashSet_WazaNo__o * CollectRemindableWaza( MethodInfo *method );


                CoreParam_c *klass;
                void *monitor;
                CoreParam_Fields fields;
            private:
                // 0248f760
                System::Collections::Generic::HashSet_WazaNo__o * _CollectRemindableWaza( MethodInfo *method );
        };
    } // namespace PokePara
    
} // namespace Pml
