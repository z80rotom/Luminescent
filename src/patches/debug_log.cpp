#include "il2cpp.hpp"
#include "logger.hpp"
#include "util.hpp"
#include "System/Array.hpp"
#include "Pml/PokeParty.hpp"
#include "Dpr/Battle/Logic/BATTLE_SETUP_PARAM.hpp"
#include "Dpr/Battle/Logic/Setup.hpp"


extern void * System_Byte_array_typeInfo;

namespace System
{
    struct Object
    {
        // 01982dd0
        static System::String * ToString(Il2CppObject * obj, MethodInfo *method);
    };
}

namespace System
{
    namespace Text
    {
        struct UTF8Encoding
        {
            // 018fd920
            int32_t GetBytes(System::String *s, int32_t charIndex, int32_t charCount,
                             System::Array<uint8_t> *bytes, int32_t byteIndex, MethodInfo *method);

            // 018fd760
            int32_t GetByteCount(System::String *chars, MethodInfo *method);
        };

        struct Encoding
        {
            // 01a0e5d0
            static UTF8Encoding * get_UTF8(MethodInfo *method);
        };
    }
}

struct System_Exception_o;

void DebugLog(Il2CppObject *message, MethodInfo *method)
{
    System::String * str = (System::String *) message; // System::Object::ToString(message, (MethodInfo *) nullptr);
    System::Text::UTF8Encoding * utf8_encoding = System::Text::Encoding::get_UTF8((MethodInfo *) nullptr);
    int32_t byte_count = utf8_encoding->GetByteCount(str, (MethodInfo *) nullptr);
    System::Array<uint8_t> * byteArray = (System::Array<uint8_t> *) system_array_new(System_Byte_array_typeInfo, byte_count);
    int32_t rc = utf8_encoding->GetBytes(str, 0, str->fields.m_stringLength, byteArray, 0, (MethodInfo *) nullptr);
    uint8_t * bytes = &byteArray->m_Items[0];
    char * szMessage = (char *) malloc(sizeof(char) * (byte_count + 1));
    strncpy(szMessage, (char *) bytes, byte_count);
    szMessage[byte_count] = '\0';
    socket_log_fmt("[Debug] %s\n", szMessage);
    free(szMessage);
}

void DebugLogWarning(Il2CppObject *message, MethodInfo *method)
{
    System::String * str = System::Object::ToString(message, (MethodInfo *) nullptr);
    System::Text::UTF8Encoding * utf8_encoding = System::Text::Encoding::get_UTF8((MethodInfo *) nullptr);
    int32_t byte_count = utf8_encoding->GetByteCount(str, (MethodInfo *) nullptr);
    System::Array<uint8_t> * byteArray = (System::Array<uint8_t> *) system_array_new(System_Byte_array_typeInfo, byte_count);
    int32_t rc = utf8_encoding->GetBytes(str, 0, str->fields.m_stringLength, byteArray, 0, (MethodInfo *) nullptr);
    uint8_t * bytes = &byteArray->m_Items[0];
    char * szMessage = (char *) malloc(sizeof(char) * (byte_count + 1));
    strncpy(szMessage, (char *) bytes, byte_count);
    szMessage[byte_count] = '\0';
    socket_log_fmt("[Warning] %s\n", szMessage);
    free(szMessage);
}

void DebugLogError(Il2CppObject *message, MethodInfo *method)
{
    System::String * str = System::Object::ToString(message, (MethodInfo *) nullptr);
    System::Text::UTF8Encoding * utf8_encoding = System::Text::Encoding::get_UTF8((MethodInfo *) nullptr);
    int32_t byte_count = utf8_encoding->GetByteCount(str, (MethodInfo *) nullptr);
    System::Array<uint8_t> * byteArray = (System::Array<uint8_t> *) system_array_new(System_Byte_array_typeInfo, byte_count);
    int32_t rc = utf8_encoding->GetBytes(str, 0, str->fields.m_stringLength, byteArray, 0, (MethodInfo *) nullptr);
    uint8_t * bytes = &byteArray->m_Items[0];
    char * szMessage = (char *) malloc(sizeof(char) * (byte_count + 1));
    strncpy(szMessage, (char *) bytes, byte_count);
    szMessage[byte_count] = '\0';
    socket_log_fmt("[Error] %s\n", szMessage);
    free(szMessage);
}


void DebugLogCtx(Il2CppObject *message, void * ctx, MethodInfo *method)
{
    System::String * str = (System::String *) message; // System::Object::ToString(message, (MethodInfo *) nullptr);
    System::Text::UTF8Encoding * utf8_encoding = System::Text::Encoding::get_UTF8((MethodInfo *) nullptr);
    int32_t byte_count = utf8_encoding->GetByteCount(str, (MethodInfo *) nullptr);
    System::Array<uint8_t> * byteArray = (System::Array<uint8_t> *) system_array_new(System_Byte_array_typeInfo, byte_count);
    int32_t rc = utf8_encoding->GetBytes(str, 0, str->fields.m_stringLength, byteArray, 0, (MethodInfo *) nullptr);
    uint8_t * bytes = &byteArray->m_Items[0];
    char * szMessage = (char *) malloc(sizeof(char) * (byte_count + 1));
    strncpy(szMessage, (char *) bytes, byte_count);
    szMessage[byte_count] = '\0';
    socket_log_fmt("[Debug] %s\n", szMessage);
    free(szMessage);
}


void DebugLogWarningCtx(Il2CppObject *message, void * ctx, MethodInfo *method)
{
    System::String * str = System::Object::ToString(message, (MethodInfo *) nullptr);
    System::Text::UTF8Encoding * utf8_encoding = System::Text::Encoding::get_UTF8((MethodInfo *) nullptr);
    int32_t byte_count = utf8_encoding->GetByteCount(str, (MethodInfo *) nullptr);
    System::Array<uint8_t> * byteArray = (System::Array<uint8_t> *) system_array_new(System_Byte_array_typeInfo, byte_count);
    int32_t rc = utf8_encoding->GetBytes(str, 0, str->fields.m_stringLength, byteArray, 0, (MethodInfo *) nullptr);
    uint8_t * bytes = &byteArray->m_Items[0];
    char * szMessage = (char *) malloc(sizeof(char) * (byte_count + 1));
    strncpy(szMessage, (char *) bytes, byte_count);
    szMessage[byte_count] = '\0';
    socket_log_fmt("[Warning] %s\n", szMessage);
    free(szMessage);
}

void DebugLogErrorCtx(Il2CppObject *message, void * ctx, MethodInfo *method)
{
    System::String * str = System::Object::ToString(message, (MethodInfo *) nullptr);
    System::Text::UTF8Encoding * utf8_encoding = System::Text::Encoding::get_UTF8((MethodInfo *) nullptr);
    int32_t byte_count = utf8_encoding->GetByteCount(str, (MethodInfo *) nullptr);
    System::Array<uint8_t> * byteArray = (System::Array<uint8_t> *) system_array_new(System_Byte_array_typeInfo, byte_count);
    int32_t rc = utf8_encoding->GetBytes(str, 0, str->fields.m_stringLength, byteArray, 0, (MethodInfo *) nullptr);
    uint8_t * bytes = &byteArray->m_Items[0];
    char * szMessage = (char *) malloc(sizeof(char) * (byte_count + 1));
    strncpy(szMessage, (char *) bytes, byte_count);
    szMessage[byte_count] = '\0';
    socket_log_fmt("[Error] %s\n", szMessage);
    free(szMessage);
}

void DebugLogException(System_Exception_o *exception, MethodInfo *method)
{
    socket_log_fmt("[Exception]\n");   
}
void DebugLogExceptionCtx(System_Exception_o *exception, void * ctx, MethodInfo *method)
{
    socket_log_fmt("[Exception]\n");   
}