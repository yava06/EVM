#ifndef REGIST_HPP
#define REGIST_HPP

static uint8_t reg;
static const int REG_SIZE = sizeof(reg) * 5;

int sc_regInit();
int sc_regSet(int pos, int value);
int sc_regGet(int pos, int *value);

#endif
