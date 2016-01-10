CC = gcc
CFLAGS = -Wall
END = -lpthread -lm

TARGET1 = main

$(TARGET1): Node.c Node.h files.c files.h
	gcc  Node.c Node.h files.c files.h -o $(TARGET1) $(END)

.PHONY: clean

clean:
	rm -f *.o
