#pragma once

#include <string>
#include "logger.hpp"

template<typename ... Args>
std::string string_format( const std::string& format, Args ... args )
{
    int size_s = std::snprintf( nullptr, 0, format.c_str(), args ... ) + 1; // Extra space for '\0'
    auto size = static_cast<size_t>( size_s );
    char * buf = (char *) malloc(size * sizeof(char));
    std::snprintf( buf, size, format.c_str(), args ... );
    std::string to_ret = std::string( buf, buf + size - 1 ); // We don't want the '\0' inside
    free(buf);
    return to_ret;
}

template<typename ... Args>
void socket_log_fmt(const std::string& format, Args ... args )
{
    std::string to_log = string_format(format, args ... );
    socket_log(to_log.c_str());
}

// FUN_0009acf0
void * _system_array_new(void * typeInfo, uint32_t len);
// thunk_FUN_0007d9c0
void _system_array_init(void * array);
// void FUN_000502c0(ulong param_1)
void _system_load_typeinfo(void * typeInfo);


// thunk_FUN_00048708?
// 00048708
void il2cpp_runtime_class_init(void *param_1);

void system_load_typeinfo(void * typeInfo);
void * system_array_new(void * typeInfo, uint32_t len);