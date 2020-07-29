#include "dialog.h"


void DlgShowMsg(int winPosX, int winPosY, char* title, char* msg)
{
    attron(A_BOLD);
	move(winPosX, winPosY);
	printw(title);
	attroff(A_BOLD);attron(A_BLINK);
	move(winPosX + 2, winPosY + 2);
	printw(msg);
	refresh();
}
