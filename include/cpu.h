#ifndef CPU_H
#define CPU_H

#include <stdint.h>
#include <stdbool.h>

#include "memory.h"

typedef struct _cpu_t
{
    // Main registers
    uint8_t AH, AL;
    uint8_t BH, BL;
    uint8_t CH, CL;
    uint8_t DH, DL;
    // Index registers
    uint16_t SI, DI, BP, SP;
    // Program counter
    uint16_t IP;
    // Segment registers
    uint16_t CS, DS, ES, SS;
    // Status register
    bool Cflag;
    bool Pflag;
    bool Aflag;
    bool Zflag;
    bool Sflag;
    bool Tflag;
    bool Iflag;
    bool Dflag;
    bool Oflag;
} cpu_t;

cpu_t cpuNew();
void cpuTick(cpu_t *cpu, memory_t memory);

#endif