#!/bin/make

TARGET=NcursesEditor
CC=gcc
LN=ncurses

HDR=\
	window.h\
	dialog.h

SRC=\
	main.c\
	window.c\
	dialog.c


all:
	$(CC) -g $(HDR) $(SRC) -l $(LN) -o $(TARGET).out

