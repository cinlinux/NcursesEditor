#include "window.h"

void SigWinCH(int signo)
{
    struct winsize size;
    ioctl(fileno(stdout), TIOCGWINSZ, (char *) &size);
    resizeterm(size.ws_row, size.ws_col);
}


void InitWindow()
{
    initscr();
	signal(SIGWINCH, SigWinCH);
//	cbreak();
//	noecho();
//	curs_set(0);
}









