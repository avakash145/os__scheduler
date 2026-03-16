CC=gcc
CFLAGS=-Iinclude

all:
	$(CC) $(CFLAGS) main.c kernel/scheduler/fcfs.c -o scheduler