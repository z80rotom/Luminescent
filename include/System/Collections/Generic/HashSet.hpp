#pragma once

#include "il2cpp.hpp"
#include "System/Array.hpp"

namespace System
{

    namespace Runtime
    {
        namespace Serialization
        {
            struct SerializationInfo_o;
        }
    }

    namespace Collections
    {
        namespace Generic
        {
            struct IEqualityComparer_T__o;
            struct HashSet_Slot_T__array; // Should be System::Array but doubt that would work for the template

            struct HashSet_WazaNo__Fields {
                System::Array<int32_t> * _buckets;
                HashSet_Slot_T__array* _slots;
                int32_t _count;
                int32_t _lastIndex;
                int32_t _freeList;
                IEqualityComparer_T__o* _comparer;
                int32_t _version;
                System::Runtime::Serialization::SerializationInfo_o* _siInfo;
            };

            struct HashSet_WazaNo__c;

            struct HashSet_WazaNo__o {
                // 0x02a2e2b0
                bool Contains(int32_t item, MethodInfo *method);
                // 0x02a2ed70
                void Add(int32_t item, MethodInfo *method);
                HashSet_WazaNo__c *klass;
                void *monitor;
                HashSet_WazaNo__Fields fields;
            };
        }
    }
}