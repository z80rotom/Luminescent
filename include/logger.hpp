#pragma once

#include <string>
#include <cstring>
#include "types.h"
// #include "nn.h"
// #include "log.h"


#define STR(x) #x
#define QUOTE(x) STR(x)
#define MODULE_NAME_STR QUOTE(MODULE_NAME)

// #define log(fmt, ...) LOG("[" MODULE_NAME_STR "] " fmt "\n", __VA_ARGS__)
// #define log0(fmt) LOG("[" MODULE_NAME_STR "] " fmt "\n")

void socket_log(const char *str);

s32 socket_read_char(char *out);

void socket_log_initialize();

int tryInitSocket();

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
