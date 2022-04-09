#include "il2cpp.hpp"
#include "PlayerWork.hpp"
#include "System/String.hpp"
#include "logger.hpp"
#include "util.hpp"


namespace System
{
    namespace Collections
    {
        namespace Generic
        {
            struct Queue_String_o
            {
                void Enqueue(System::String *item, MethodInfo *method);
            };
        }
    }

}

// Sadge
void AssetLogEnqueue(System::Collections::Generic::Queue_String_o *__this, System::String *item, MethodInfo *method)
{
    socket_log_fmt("AssetLogEnqueue");
    __this->Enqueue(item, method);
}