#include <termios.h>
#include <sys/ioctl.h>
#include <signal.h>
#include <stdlib.h>
#include <curses.h>

#ifndef NCRS_WINDOW_H
#define NCRS_WINDOW_H

//#define MAX_NAME_LEN 15

void SigWinCH(int signo);
void InitWindow();

#endif

