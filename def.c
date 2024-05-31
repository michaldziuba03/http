#pragma once

#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>

// stolen from linux kernel source code
#define container_of(ptr, type, member) ({ \
    const __typeof__(((type *)0)->member) *__mptr = (ptr); \
    (type *)((char *)__mptr - offsetof(type, member)); })

#define cast_int(ptr) *(int*)(ptr)
