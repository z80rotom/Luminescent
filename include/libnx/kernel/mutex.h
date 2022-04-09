/**
 * @file mutex.h
 * @brief Mutex synchronization primitive.
 * @author plutoo
 * @copyright libnx Authors
 */
#pragma once
#include <sys/lock.h>
#include "libnx/types.h"

/// Mutex datatype, defined in newlib.
typedef _LOCK_T Mutex;
/// Recursive mutex datatype, defined in newlib.
typedef _LOCK_RECURSIVE_T RMutex;


/**
 * @brief Locks a mutex.
 * @param m Mutex object.
 */
void mutexLock(Mutex* m);


/**
 * @brief Unlocks a mutex.
 * @param m Mutex object.
 */
void mutexUnlock(Mutex* m);