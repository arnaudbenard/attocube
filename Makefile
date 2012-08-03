.PHONY: all clean
CC=clang++

attocube: attocube.o
	${CC} attocube.o -o attocube


attocube.o: attocube.cpp daisybase.h metadata.h
	${CC} -c attocube.cpp -o attocube.o

clean:
	rm -f *.o attocube *.exe