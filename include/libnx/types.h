/**
 * @file Based on switch/types.h
 * @brief Various system types.
 * @copyright libnx Authors
 */
#pragma once

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

typedef uint32_t Handle;
typedef uint32_t Result; 

/// Creates a bitmask from a bit number.
#ifndef BIT
#define BIT(n) (1U<<(n))
#endif

#ifndef BITL
#define BITL(n) (1UL<<(n))
#endif

/// Invalid handle.
#define INVALID_HANDLE ((Handle) 0)


/// Packs a struct so that it won't include padding bytes.
#ifndef PACKED
#define PACKED     __attribute__((packed))
#endif

/// Marks a function as not returning, for the purposes of compiler optimization.
#ifndef NORETURN
#define NORETURN   __attribute__((noreturn))
#endif

/// Performs a dummy operation on the specified argument in order to silence compiler warnings about unused arguments.
#ifndef IGNORE_ARG
#define IGNORE_ARG(x) (void)(x)
#endif

/// Flags a function as (always) inline.
#define NX_INLINE __attribute__((always_inline)) static inline

/// Flags a function as constexpr in C++14 and above; or as (always) inline otherwise.
#if __cplusplus >= 201402L
#define NX_CONSTEXPR NX_INLINE constexpr
#else
#define NX_CONSTEXPR NX_INLINE
#endif