CC = gcc
CFLAGS = -Wall


TARGET1 = main

$(TARGET1): main.c main.h
	gcc  main.c main.h -o $(TARGET1)

.PHONY: clean

clean:
	rm -f *.o
