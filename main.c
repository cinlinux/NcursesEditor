


#include <termios.h>
#include <sys/ioctl.h>
#include <signal.h>
#include <stdlib.h>
#include <curses.h>

#include "window.h"
#include "dialog.h"

/// - [ ] fileio.h / fileio.c
/// 
/// - [x] window.h
/// - [ ] page.h
/// - [ ] line.h

int main(int argc, char ** argv)
{
	InitWindow();

    
    char title[] = "Hello, brave new curses world!\n",
         msg[]   = "Press any key to continue..."    ;
    
    DlgShowMsg( 5, 15, title, msg);

	getch();
	endwin();
	exit(EXIT_SUCCESS);
}

