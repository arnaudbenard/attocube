.PHONY: all clean
CC=gcc

attocube: attocube.o
	${CC} attocube.o -o attocube


attocube.o: attocube.c
	${CC} -c attocube.c -o attocube.o

clean:
	rm -f *.o attocube