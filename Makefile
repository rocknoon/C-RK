CC = gcc
CFLAGS = -Wall -std=c99

librk.so : ./src/file.c
	$(CC) $(CFLAGS) -fPIC -shared -o $@ $^
