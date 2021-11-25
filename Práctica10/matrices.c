#include "matrices.h"
#include <stdio.h>

int *mat_add(int *ptrA, int *ptrB, int n, int m){
    int i;
    int C[n][m];
    int *ptrC;
    *ptrC = *C;
    for (i = 0; i < n*m; i++)
    {
            *(ptrC) = *(ptrA)+*(ptrB);
    }
    return ptrC; 
}

int *mat_add2(int **matA, int **matB, int n, int m){
    int i, j;
    int C[n][m];
    int *ptrC = &C[0][0];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; i++)
        {
            C[i][j] = matA[i][j] + matB[i][j];
        }
    }
    return ptrC;
}

int *mat_mul(int **ptrA, int **ptrB, int n, int m, int m2){
    int i, j, k;
    int **c = (int **) malloc(n*m*sizeof(int)); // C[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m2; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < m; k++)
            {
                c[i][j] += ptrA[i][k]*ptrB[k][i];
            }
            
        }       
    }
    return &c[0][0];
}