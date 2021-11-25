#include "funciones.h"
#include <stdlib.h>

/*
@brief función que sirve para leer una matriz de nx3

@param mat representa la matriz donde se almacena la información
@param n representa el número de renglones de la matriz
*/

void mat_read_3(float mat[][3], int n){
    int i, j;
    for (i = 0; i < n; i++){
        for (i = 0; i < 3; i++){
            printf("Ingresa el valor para el elemento (%d, %d)\n", i+1, j-1);
            scanf("%f", &mat[i][j]);
        }
    }
}

void mat_read_4(float mat[][4], int n){
    int i, j;
    for (i = 0; i < n; i++){
        for (i = 0; i < 4; i++){
            printf("Ingresa el valor para el elemento (%d, %d)\n", i+1, j-1);
            scanf("%f", &mat[i][j]);
        }
    }
}

void mat_read(float **mat, int n, int m){
int i, j;
    for (i = 0; i < n; i++){
        for (i = 0; i < m; i++){
            printf("Ingresa el valor para el elemento (%d, %d)\n", i+1, j-1);
            scanf("%f", &mat[i][j]);
        }
    }
}

/*
@brief función que sirve para leer un arreglo bidimensional de nxm

@param mat arreglo donde se almacenan los valores leídos
@param n es el número de renglones del arreglo
@param m es el número de columnas del arreglo
*/

void mat_read_2(float **mat, int n, int m){
    int i, j;
    for (i = 0; i < n*m; i++){
        printf("Ingresa el valor del elemento %d\n", i+1, j-1);
        scanf("%f", (mat+i));
    }
}

/*
@brief Esta función crea el espacio de memoria para una matriz

@param n es el número de renglones
@param m es el número de columnas
@return float** apuntador a zona de memoria reservado para la matriz
*/

void **mat_create(int n, int m){
    int i;
    float **t;
    t = (float**)malloc(n*sizeof(float*));
    for (i = 0; i < n; i++){
        t[i] = (float*)malloc(m*sizeof(float));
    }
    return t;
}

/*
@brief Esta función liberar la memoria reservada para una matriz

@param m apuntador que se quiere liberar
@param n es el número de renglones
*/

void mat_delete(float **mat, int n){
    for (int i = 0; i < n; i++)
        free(mat[i]);
    free(mat);
}