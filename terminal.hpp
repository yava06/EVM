#ifndef TERMINAL_HPP
#define TERMINAL_HPP

#include <iostream>
#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>

using namespace std;

enum colors {
	cl_black,
	cl_red,
	cl_green,
	cl_brown,
	cl_blue,
	cl_cyan,
	cl_light_blue,
	cl_default
};

int mt_clrscr(void);
int mt_getscreensize (int *rows, int *cols);
int mt_gotoXY (int x, int y);
int mt_setfgcolor(enum colors color);
int mt_setbgcolor(enum colors color);

#endif
