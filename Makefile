CC = gcc
SRC = $(wildcare *.c)
OBJ = $(SRC : .c = .o)

all : Exe

1Story.o : 1Story.c 1Story.h 
	$(CC) -c $< -o $@

2Character.o : 2Character.c 2Character.h 
	$(CC) -c $< -o $@

3Backup.o : 3Backup.c 3Backup.h 
	$(CC) -c $< -o $@

Exe : 1Story.o 2Character.o 3Backup.o 0Main.o
	$(CC) $^ -o $@ 
