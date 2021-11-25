CC=gcc
CCDEBUG= -g -Wall
#Estándar cc 
CCSTD= -std=c11
#Banderas de compilación
CCFLAGS = -Wno-deprecated-register -O0 $(CCDEBUG) $(CCSTD)
#Nombre del archivo ejecutable
EXE=proyecto1.out

COBJ = main funciones 
FILES = $(addsuffix .c, $(COBJ))
OBJS = $(addsuffix .o, $(COBJ))
CLEANLIST = $(addsuffix .o, $(COBJ))

.PHONY: all
all: wc

wc: $(CC) $(CCFLAGS) -o $(EXE) $(FILES) -lm
	$(MAKE) $(OBJS)