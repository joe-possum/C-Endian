ARCH := ${call arch}

CC = gcc
CFLAGS += -Wall

default : main.c
	gcc ${CFLAGS} -o $@ $^

clean :
	-rm *.o *~

.PHONY : clean
