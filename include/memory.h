#ifndef MEMORY_H
#define MEMORY_H

#include <stdint.h>

typedef struct _memory_t
{
    uint8_t (*getByte)(uint32_t);
    void (*setByte)(uint32_t, uint8_t);
} memory_t;

#endif