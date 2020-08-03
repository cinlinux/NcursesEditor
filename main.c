#include <termios.h>
#include <sys/ioctl.h>
#include <signal.h>
#include <stdlib.h>
#include <curses.h>

#include "window.h"
#include "dialog.h"
#include "fileio.h"

/// - [ ] fileio.h / fileio.c
/// 
/// - [x] window.h
/// - [ ] page.h
/// - [ ] line.h

#define MAX_NAME_LEN 15

int main(int argc, char ** argv)
{
//   WINDOW * wnd;
//   char name[MAX_NAME_LEN + 1];

//   InitWindow();
//   
//   curs_set(TRUE);
//   start_color();
//   refresh();
//   init_pair(1, COLOR_YELLOW, COLOR_BLUE);
//   wnd = newwin(5, 23, 2, 2);
//   wbkgd(wnd, COLOR_PAIR(1));
//   wattron(wnd, A_BOLD);
//   wprintw(wnd, "Enter your name...\n");
//   //keypad(wnd, TRUE);
    
    FileIO fio;
    fio.path = "./test.txt";
    fio.buf = (char*) malloc( sizeof(char) * MAX_NAME_LEN +1 );
    fio.sizeOfBuf = sizeof(char) * MAX_NAME_LEN +1;
    sprintf( fio.buf, "dsffsfdfffdsfs");
    WriteFile(&fio);

//   wgetnstr(wnd, name, MAX_NAME_LEN);
//   name[MAX_NAME_LEN] = 0;
//   wprintw(wnd, "Hello, %s!", name);
//   wrefresh(wnd);
//   delwin(wnd);
//   curs_set(FALSE);
//   move(8, 4);
//   printw("Press any key to continue...");
//   refresh();

//    DlgShowMsg( 5, 15, title, msg);
//
//getch();
	endwin();
	exit(EXIT_SUCCESS);
}

