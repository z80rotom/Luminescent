#pragma once
#include "il2cpp.hpp"


namespace System
{
    struct System_String_Fields {
        int32_t m_stringLength;
        uint16_t m_firstChar;
    };

    struct System_String_RGCTXs {
    };

    struct System_String_VTable {
        VirtualInvokeData _0_Equals;
        VirtualInvokeData _1_Finalize;
        VirtualInvokeData _2_GetHashCode;
        VirtualInvokeData _3_ToString;
        VirtualInvokeData _4_CompareTo;
        VirtualInvokeData _5_Clone;
        VirtualInvokeData _6_GetTypeCode;
        VirtualInvokeData _7_System_IConvertible_ToBoolean;
        VirtualInvokeData _8_System_IConvertible_ToChar;
        VirtualInvokeData _9_System_IConvertible_ToSByte;
        VirtualInvokeData _10_System_IConvertible_ToByte;
        VirtualInvokeData _11_System_IConvertible_ToInt16;
        VirtualInvokeData _12_System_IConvertible_ToUInt16;
        VirtualInvokeData _13_System_IConvertible_ToInt32;
        VirtualInvokeData _14_System_IConvertible_ToUInt32;
        VirtualInvokeData _15_System_IConvertible_ToInt64;
        VirtualInvokeData _16_System_IConvertible_ToUInt64;
        VirtualInvokeData _17_System_IConvertible_ToSingle;
        VirtualInvokeData _18_System_IConvertible_ToDouble;
        VirtualInvokeData _19_System_IConvertible_ToDecimal;
        VirtualInvokeData _20_System_IConvertible_ToDateTime;
        VirtualInvokeData _21_ToString;
        VirtualInvokeData _22_System_IConvertible_ToType;
        VirtualInvokeData _23_System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData _24_CompareTo;
        VirtualInvokeData _25_System_Collections_Generic_IEnumerable_System_Char__GetEnumerator;
        VirtualInvokeData _26_Equals;
    };

    struct System_String_c {
        Il2CppClass_1 _1;
        struct System_String_StaticFields* static_fields;
        System_String_RGCTXs* rgctx_data;
        Il2CppClass_2 _2;
        System_String_VTable vtable;
    };

    class String
    {
    public:
        static String * CtorCharPtr(uint16_t *ptr);
        static String * CreateString(const char *value);
        // 02942cb0
        // int32_t Compare(String *strB, int32_t comparisonType, MethodInfo *method);
        // 0293ed20
        bool Equals(String *value,MethodInfo *method);
        // 02940db0
        static bool IsNullOrEmpty(MethodInfo *method);

        String * _CtorCharPtr(uint16_t *ptr,MethodInfo *method);
        // 02948980
        String * _CreateString(int8_t *value,MethodInfo *method);
        // 26f8fc0
        static String * Concat(Il2CppObject * arg0, Il2CppObject * arg1, MethodInfo * method);
        // 26ee6a0
        static String * Concat(Il2CppObject * arg0, Il2CppObject * arg1, Il2CppObject * arg2, MethodInfo * method);
        System_String_c *klass;
        void *monitor;
        System_String_Fields fields;
    };

    struct System_String_StaticFields {
        String * Empty;
    };

}