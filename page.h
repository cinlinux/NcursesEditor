

#include <curses.h>

#include "line.h"

#ifndef NCRS_PAGE_H
#define NCRS_PAGE_H

struct Page
{
    struct Line* lines;
    char* name;
    int num;
    struct Page* next;
    struct Page* prev;
    struct Page* first;
    struct Page* last;
    WINDOW* parentWindow;    
}

struct Page InitPage(struct Page* ptr, WINDOW* parentWnd, char* name);

#endif 
