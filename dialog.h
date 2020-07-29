
#include <termios.h>
#include <sys/ioctl.h>
#include <signal.h>
#include <stdlib.h>
#include <curses.h>

#ifndef NCR_DIALOG_H
#define NCR_DIALOG_H

//void SigWinCH(int signo);
void DlgShowMsg(int winPosX, int winPosY, char* title, char* msg);
#endif
