ARCH := ${shell arch}

CC = gcc
override CFLAGS += -Wall -std=c99 -DARCH_${ARCH}
#LDFLAGS += ""

default : default.o

% : %.o
	gcc ${LDFLAGS} -o $@ $<

default.o : main.c
	gcc ${CFLAGS} -c -o $@ $<

big.o : main.c
	gcc ${CFLAGS} -mbig-endian -c -o $@ $<

little.o : main.c
	gcc ${CFLAGS} -mlittle-endian -c -o $@ $<

clean :
	-rm *.o *~

.PHONY : clean
