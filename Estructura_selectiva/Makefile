CC=gcc
CCDEBUG=-g -Wall
CCSTD=-std=c99
CCFLAGS= $(CSTD) $(CCDEBUG)
LIBS= -lm
FILES=ecuaciones main
CCFILES=$(addsuffix .c, $(FILES))
OBJS=$(addsuffix .o, $(FILES))
EXE=solucion

.PHONY: all
all: ecuaciones main wc

ecuaciones: ecuaciones.c
	$(CC) $(CCFLAGS) -c $< -o  ecuaciones.o $(LIBS)

main: main.c
	$(CC) $(CCFLAGS) -c $< -o  main.o	

wc: $(FILES)
	$(CC) $(CCFLAGS) -o $(EXE) $(OBJS)