#make
CC=gcc
FLAGS=-Wall

all: isort txtfind
#algo make
isort: main_algorithm.o algorithms.o algorithms.h
	$(CC) $(FLAGS) algorithms.o main_algorithm.o -o isort

main_algorithm.o: main_algorithm.c algorithms.h
	$(CC) -c main_algorithm.c

algorithms.o: algorithms.c algorithms.h
	$(CC) -c algorithms.c
#find make
txtfind: find_text.o main_find.o find_text.h
	$(CC) $(FLAGS) find_text.o main_find.o -o txtfind

main_find.o: main_find.c find_text.h
	$(CC) -c main_find.c

find_text.o: find_text.c find_text.h
	$(CC) -c find_text.c

.PHONY: clean all

clean:
	rm -f *.o isort txtfind
