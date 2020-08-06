#!/bin/make

TARGET=catLike
CC=gcc
CFLAGS = -g 

all: main.c
	$(CC) $(CFLAGS) $< -o $(TARGET)
	
clean: 
	rm $(TARGET) 


