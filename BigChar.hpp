#ifndef BIGCHAR_HPP
#define BIGCHAR_HPP

#include <iostream>
#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "terminal.hpp"

using namespace std;

#define BIGCHAR_REC "a"
#define BIGCHAR_DR "j"
#define BIGCHAR_DL "m"
#define BIGCHAR_UR "k"
#define BIGCHAR_UL "l"
#define BIGCHAR_HOR "q"
#define BIGCHAR_VERT "x"


int bc_printA(char * str);
int bc_box(int x1, int y1, int x2, int y2);
int bc_printbigchar(unsigned int bigchars[2], int x, int y, enum colors clr1, enum colors clr2);
int bc_setbigcharpos(unsigned int *big, int x, int y, int value);
int bc_getbigcharpos(unsigned int * big, int x, int y, int * value);
int bc_bigcharwrite(int fd, unsigned int *big, int count);
int bc_bigcharread(int fd, unsigned int *big, int need_count, int *count);

#endif
