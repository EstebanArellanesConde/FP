CC = gcc
CCDEBUG= -g -Wall  #Wall habilita las advertencias
CCSTD= -std=c11  #define el estandar
CCFLAGS= -Wno-deprecated-register -O0 $(CCDEBUG) $(CCSTD) #Banderas de depuracion, se concatenan
EXE=PracticasLab.exe #Nombre del archivo ejecutable

COBJ = main funciones

FILES = $(addsuffix .c, $(COBJ)) #Va a compilar los archivos que tengan .c
OBJS = $(addsuffix .o, $(COBJ))
CLEANLIST = $(addsuffix .o, $(COBJ))
.PHONY: all
all: wc #Se especifica qué es all

wc:  $(FILES)
	$(CC) $(CCFLAGS) -o $(EXE) $(FILES) -lm

#Se necesitan archivos main.c y funciones.c para compilar algo pero pues no exiten en esta carpeta por ahora.