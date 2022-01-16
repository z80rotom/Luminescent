#include "System/String.hpp"
#include "il2cpp.hpp"

namespace System
{

String * String::CtorCharPtr(uint16_t *ptr)
{
    String * ret = nullptr;
    ret = ret->_CtorCharPtr(ptr, (MethodInfo *) nullptr);
    return ret;
}

}