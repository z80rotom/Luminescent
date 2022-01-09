#pragma once

#include <string>
#include <cstring>
#include "types.h"
#include "nn.h"
#include "log.h"


#define STR(x) #x
#define QUOTE(x) STR(x)
#define MODULE_NAME_STR QUOTE(MODULE_NAME)

#define log(fmt, ...) LOG("[" MODULE_NAME_STR "] " fmt "\n", __VA_ARGS__)
#define log0(fmt) LOG("[" MODULE_NAME_STR "] " fmt "\n")

void socket_log(const char* str);

s32 socket_read_char(char *out);

void socket_log_initialize();

int tryInitSocket();
