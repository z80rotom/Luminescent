#pragma once

#include "il2cpp.hpp"
#include "System/Array.hpp"
#include "System/String.hpp"

namespace Dpr
{
    namespace UI
    {
        struct IndexSelector_Fields {
            bool IsStopInEnd;
            bool IsStopRepeatMovingWhenOutOfRanges;
            bool IsLoop;
            int32_t moveState;
            int32_t currentIndex;
            int32_t minCount;
            int32_t maxCount;
            bool isLooping;
        };

        struct IndexSelector_c;

        struct IndexSelector_o {
            IndexSelector_c *klass;
            void *monitor;
            IndexSelector_Fields fields;
        };

        struct ZukanInfo_ModelParam_Fields {
            int32_t UniqueID;
            int32_t SexType;
            int32_t FormNo;
            bool IsRare;
        };

        struct ZukanInfo_ModelParam_c;

        struct ZukanInfo_ModelParam_o {
            ZukanInfo_ModelParam_c *klass;
            void *monitor;
            ZukanInfo_ModelParam_Fields fields;
        };

        struct ZukanInfo_Fields {
            int32_t monsNo;
            int32_t zukanNo;
            System::String* name;
            uint16_t height;
            uint16_t weight;
            System::String* heightText;
            System::String* weightText;
            uint8_t type1;
            uint8_t type2;
            int32_t getStatus;
            System::Array<ZukanInfo_ModelParam_o *> * modelParams;
            int32_t formIndex;
            struct IndexSelector_o* modelIndexSelector;
        };

        struct ZukanInfo_c;

        struct ZukanInfo_o {
            ZukanInfo_c *klass;
            void *monitor;
            ZukanInfo_Fields fields;
        };
    }
}