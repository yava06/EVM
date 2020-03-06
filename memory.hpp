#ifndef MEMORY_HPP
#define MEMORY_HPP

#include "regist.hpp"

#define Memory_overflow 1
#define Division_error_by_0 2
#define Going_abroad 3
#define Igniring_tact_pulses 4
#define Invalid 5

static int memory[100];

int sc_memoryInit();
int sc_memorySet (int address, int value);
int sc_memoryGet (int address, int * value);
int sc_memorySave (char * filename);
int sc_memoryLoad (char * filename);

#endif
