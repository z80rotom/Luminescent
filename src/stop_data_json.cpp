#include "nn/fs.h"
#include "tiny-json.h"
#include <cstdlib>

#include "stop_data_json.hpp"
#include "logger.hpp"

XLSXContent::StopData_o * load_stop_data_json(const char* path)
{
    socket_log_fmt("load_stop_data_json\n");
    constexpr size_t MAX_FIELDS = 8;

    XLSXContent::StopData_o * stopData = nullptr;
    nn::fs::FileHandle handle;
    nn::Result rc;
    s64 size;
    char * buffer;
    json_t pool[MAX_FIELDS];
    
    socket_log_fmt("nn::fs::OpenFile: %08X\n", &nn::fs::OpenFile);
    rc = nn::fs::OpenFile(&handle, path, nn::fs::OpenMode_Read);
    if (rc.isFailure())
    {
        socket_log_fmt("Unable to open: %s\n", path);
        return stopData;
    }
    rc = nn::fs::GetFileSize(&size, handle);
    if (rc.isFailure())
    {
        socket_log_fmt("Unable to get file size of: %s\n", path);
        return stopData;
    }
    buffer = (char *) malloc(sizeof(char) * size);
    if (buffer == nullptr)
    {
        socket_log_fmt("Unable to alloc memory");
        return stopData;
    }
    rc = nn::fs::ReadFile(handle, 0, (void *) buffer, (u32) size);
    if (rc.isFailure())
    {
        socket_log_fmt("Unable to read file: %s\n", path);
        return stopData;
    }

    json_t const * doc_root = json_create(buffer, pool, MAX_FIELDS);
    
    // free(buffer);
    return stopData;
}