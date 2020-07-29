#include <termios.h>
#include <sys/ioctl.h>
#include <signal.h>
#include <stdlib.h>
#include <curses.h>

#ifndef NCR_WINDOW_H
#define NCR_WINDOW_H

void SigWinCH(int signo);
void InitWindow();

#endif

