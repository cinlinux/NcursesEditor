#!/bin/make

TARGET=NcursesEditor
CC=gcc
LN=ncurses

HDR=\
	window.h\
	*.h

SRC=\
	main.c\
	window.c


all:
	$(CC) -g $(HDR) $(SRC) -l $(LN) -o $(TARGET).out

