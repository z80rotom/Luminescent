#include "il2cpp.hpp"
#include "logger.hpp"

#include "stop_data_json.hpp"

void Dictionary_StopData_Add_Hook(void * dictionary, System::String * key, void * inStopData, MethodInfo * method)
{
    socket_log_fmt("Dictionary_StopData_Add_Hook\n");
    XLSXContent::StopData_o * stopData = load_stop_data_json("StopData_A07.json");
}