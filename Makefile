#!/bin/make

TARGET=NcursesEditor
CC=gcc
LN=ncurses
BIN=./bin
CFLAGS = -g -c -l 

HDR=\
	window.h\
	dialog.h\
    fileio.h

SRC=\
	main.c\
	window.c\
	dialog.c\
    fileio.c


all: $(BIN) $(TARGET).out

$(TARGET).out: fileio.o dialog.o window.o main.o
	$(CC) $(BIN)/*.o -o $@ -g -l $(LN)

main.o: main.c $(HDR)
	$(CC) $(CFLAGS) $(LN) $< -o $(BIN)/$@

fileio.o: fileio.c fileio.h
	$(CC) $(CFLAGS) $(LN) $< -o $(BIN)/$@

dialog.o: dialog.c dialog.h
	$(CC) $(CFLAGS) $(LN) $< -o $(BIN)/$@

window.o: window.c window.h
	$(CC) $(CFLAGS) $(LN) $< -o $(BIN)/$@


$(BIN):
	mkdir ./bin

clean: 
	rm -rf ./bin *.o *.out

#file.o: fileio.h fileio.c

#$(CC) -g 

