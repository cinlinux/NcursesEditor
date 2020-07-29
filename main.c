


#include <termios.h>
#include <sys/ioctl.h>
#include <signal.h>
#include <stdlib.h>
#include <curses.h>

#include "window.h"

/// - [ ] fileio.h / fileio.c
/// 
/// - [x] window.h
/// - [ ] page.h
/// - [ ] line.h

int main(int argc, char ** argv)
{
	InitWindow();
    attron(A_BOLD);
	move(5, 15);
	printw("Hello, brave new curses world!\n");
	attroff(A_BOLD);attron(A_BLINK);
	move(7, 16);
	printw("Press any key to continue...");
	refresh();
	getch();
	endwin();
	exit(EXIT_SUCCESS);
}

