#ifndef __FUNCIONES_H__
#define __FUNCIONES_H__

#include <stdlib.h>
#include <stdio.h>

void mat_read_3(float mat[][3], int n);
void mat_read_4(float mat[][4], int n);
void mat_read(float **mat, int n, int m);
void **mat_create(int n, int m);
void mat_delete(float **mat, int n);

#endif //! __FUNCIONES_H__