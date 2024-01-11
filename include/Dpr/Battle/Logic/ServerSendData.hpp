#pragma once

#include "il2cpp.hpp"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            struct ServerSendData_CLIENT_LIMIT_TIME__limitTime_e__FixedBuffer_Fields {
                uint16_t FixedElementField;
            };

            struct ServerSendData_CLIENT_LIMIT_TIME__limitTime_e__FixedBuffer_o {
                ServerSendData_CLIENT_LIMIT_TIME__limitTime_e__FixedBuffer_Fields fields;
            };

            struct ServerSendData_CLIENT_LIMIT_TIME_Fields {
                struct ServerSendData_CLIENT_LIMIT_TIME__limitTime_e__FixedBuffer_o limitTime;
            };

            struct ServerSendData_CLIENT_LIMIT_TIME_o {
                ServerSendData_CLIENT_LIMIT_TIME_Fields fields;
            };

            struct ServerSendData_RAIDBOSS_CAPTURE_RESULT__isThrow_e__FixedBuffer_Fields {
                bool FixedElementField;
            };

            struct ServerSendData_RAIDBOSS_CAPTURE_RESULT__isThrow_e__FixedBuffer_o {
                ServerSendData_RAIDBOSS_CAPTURE_RESULT__isThrow_e__FixedBuffer_Fields fields;
            };

            struct ServerSendData_RAIDBOSS_CAPTURE_RESULT__itemno_e__FixedBuffer_Fields {
                uint16_t FixedElementField;
            };

            struct ServerSendData_RAIDBOSS_CAPTURE_RESULT__itemno_e__FixedBuffer_o {
                ServerSendData_RAIDBOSS_CAPTURE_RESULT__itemno_e__FixedBuffer_Fields fields;
            };

            struct ServerSendData_RAIDBOSS_CAPTURE_RESULT__isCaptured_e__FixedBuffer_Fields {
                bool FixedElementField;
            };

            struct ServerSendData_RAIDBOSS_CAPTURE_RESULT__isCaptured_e__FixedBuffer_o {
                ServerSendData_RAIDBOSS_CAPTURE_RESULT__isCaptured_e__FixedBuffer_Fields fields;
            };

            struct ServerSendData_RAIDBOSS_CAPTURE_RESULT__yureCount_e__FixedBuffer_Fields {
                uint16_t FixedElementField;
            };

            struct ServerSendData_RAIDBOSS_CAPTURE_RESULT__yureCount_e__FixedBuffer_o {
                ServerSendData_RAIDBOSS_CAPTURE_RESULT__yureCount_e__FixedBuffer_Fields fields;
            };

            struct ServerSendData_RAIDBOSS_CAPTURE_RESULT_Fields {
                struct ServerSendData_RAIDBOSS_CAPTURE_RESULT__isThrow_e__FixedBuffer_o isThrow;
                struct ServerSendData_RAIDBOSS_CAPTURE_RESULT__itemno_e__FixedBuffer_o itemno;
                struct ServerSendData_RAIDBOSS_CAPTURE_RESULT__isCaptured_e__FixedBuffer_o isCaptured;
                struct ServerSendData_RAIDBOSS_CAPTURE_RESULT__yureCount_e__FixedBuffer_o yureCount;
            };

            struct ServerSendData_RAIDBOSS_CAPTURE_RESULT_o {
                ServerSendData_RAIDBOSS_CAPTURE_RESULT_Fields fields;
            };
        }
    }
}